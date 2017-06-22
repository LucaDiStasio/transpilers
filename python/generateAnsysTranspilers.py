# -*- coding: utf-8 -*-

'''
=====================================================================================

Copyright (c) 2017 Université de Lorraine & Luleå tekniska universitet
Author: Luca Di Stasio <luca.distasio@gmail.com>
                       <luca.distasio@ingpec.eu>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

=====================================================================================

DESCRIPTION

Parse Calculix documentation and generate transpilers for different languages.

Tested with Python 2.7 Anaconda 2.4.1 (64-bit) distribution
       in Windows 7.

'''

from os import listdir
from os.path import isfile, join
from pdfminer.pdfparser import PDFParser
from pdfminer.pdfdocument import PDFDocument
import mechanize
from BeautifulSoup import BeautifulSoup
import cookielib

'''
sourceFolder = 'C:/01_Backup-folder/OneDrive/01_Luca/07_DocMASE/06_WD/transpilers/python'
sourceFile = 'ANSYSMechanicalAPDLCommandReference'

# Open a PDF document.
fp = open(join(sourceFolder,sourceFile + '.pdf'), 'rb')
parser = PDFParser(fp)
document = PDFDocument(parser)

# Get the outlines of the document.
outlines = document.get_outlines()
for (level,title,dest,a,se) in outlines:
    print (level, title)
'''

def init_browser(browser):
   # Browser
   mech = mechanize.Browser()
   
   # Enable cookie support for urllib2 
   cookiejar = cookielib.LWPCookieJar() 
   mech.set_cookiejar( cookiejar )
   
   # Broser options 
   mech.set_handle_equiv( True ) 
   mech.set_handle_gzip( True ) 
   mech.set_handle_redirect( True ) 
   mech.set_handle_referer( True ) 
   mech.set_handle_robots( False ) 
   mech.set_handle_refresh(mechanize._http.HTTPRefreshProcessor(), max_time=1)
   
   if browser=='Chrome' or browser=='chrome' or browser=='google chrome' or browser=='Google Chrome':
      mech.addheaders = [('User-Agent', 'Mozilla/5.0 (Windows NT 6.1; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/47.0.2526.111 Safari/537.36'),
                              ('Accept', 'text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8'),
                              ('Accept-Language', 'en-gb,en;q=0.5'),
                              ('Accept-Charset', 'ISO-8859-1,utf-8;q=0.7,*;q=0.7'),
                              ('Proxy-Connection', 'keep-alive')]
   elif browser=='Firefox' or browser=='firefox' or browser=='mozilla firefox' or browser=='Mozilla Firefox':
      mech.addheaders = [('User-Agent', 'Mozilla/5.0 (Windows NT 6.1; WOW64; rv:43.0) Gecko/20100101 Firefox/43.0'),
                              ('Accept', 'text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8'),
                              ('Accept-Language', 'en-gb,en;q=0.5'),
                              ('Accept-Charset', 'ISO-8859-1,utf-8;q=0.7,*;q=0.7'),
                              ('Proxy-Connection', 'keep-alive')]
   #Configuring Proxies
   #br.set_proxies({'http':'127.0.0.1:8120'})
   return mech
   
targetLang = 'matlab'

baseLink = 'http://www.ansys.stuba.sk/html/'
sourceLink = 'http://www.ansys.stuba.sk/html/c-index.htm'

matlabFolder = 'C:/01_Backup-folder/OneDrive/01_Luca/07_DocMASE/06_WD/transpilers/matlab/matlab2ansys'
cppFolder = 'C:/01_Backup-folder/OneDrive/01_Luca/07_DocMASE/06_WD/transpilers/cpp/cpp2ansys'
jsFolder = 'C:/01_Backup-folder/OneDrive/01_Luca/07_DocMASE/06_WD/transpilers/js/js2ansys'
pythonFolder = 'C:/01_Backup-folder/OneDrive/01_Luca/07_DocMASE/06_WD/transpilers/python/py2ansys'

keywords = []
parametersDict = {}

mech = init_browser('chrome')
#mech = init_browser('firefox')
   
main = mech.open(sourceLink)
html = main.read()
soup = BeautifulSoup(html)

for item in soup.body.findAll("dl"):
   try:
      link = item.find("dt").find("a")['href']
      fullLink = baseLink + link
      commandName = str(link.replace('\n','').split('#')[-1])
      print('Command ' + commandName)
      print(fullLink)
      page = mech.open(fullLink)
      descr = page.read()
      commandSoup = BeautifulSoup(descr)
      print(commandSoup)
   except Exception,error:
      print(error)