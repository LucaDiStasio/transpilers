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
from BeautifulSoup import BeautifulSoup
import mechanize, cookielib

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

sourceLink = 'http://web.mit.edu/calculix_v2.7/CalculiX/ccx_2.7/doc/ccx/node160.html'

matlabABQfolder = 'C:/01_Backup-folder/OneDrive/01_Luca/07_DocMASE/06_WD/transpilers/matlab/matlab2abaqus'
cppABQfolder = 'C:/01_Backup-folder/OneDrive/01_Luca/07_DocMASE/06_WD/transpilers/cpp/cpp2abaqus'
jsABQfolder = 'C:/01_Backup-folder/OneDrive/01_Luca/07_DocMASE/06_WD/transpilers/js/js2abaqus'
pythonABQfolder = 'C:/01_Backup-folder/OneDrive/01_Luca/07_DocMASE/06_WD/transpilers/python/py2abaqus'

matlabCCXfolder = 'C:/01_Backup-folder/OneDrive/01_Luca/07_DocMASE/06_WD/transpilers/matlab/matlab2calculix'
cppCCXfolder = 'C:/01_Backup-folder/OneDrive/01_Luca/07_DocMASE/06_WD/transpilers/cpp/cpp2calculix'
jsCCXfolder = 'C:/01_Backup-folder/OneDrive/01_Luca/07_DocMASE/06_WD/transpilers/js/js2calculix'
pythonCCXfolder = 'C:/01_Backup-folder/OneDrive/01_Luca/07_DocMASE/06_WD/transpilers/python/py2calculix'

refFuncs = []

for file in listdir(matlabABQfolder):
    if file[-2:]=='.m':
        refFuncs.append(file)

keywords = []
parametersDict = {}

mech = init_browser('chrome')
#mech = init_browser('firefox')
   
main = mech.open(sourceLink)
html = main.read()
soup = BeautifulSoup(html)

tot = 0.0
found = 0.0

for item in soup.body.ul.findAll('li'):
    if item.a.text.isupper():
        keyword = item.a.text.replace('*','').replace('\n','').replace(' ','').lower()
        matlabTarget = 'writeABQ' + keyword + '.m'
        print('')
        print('Searching for ABAQUS transpiler:')
        print(matlabTarget)
        print('')
        tot += 1.0
        if matlabTarget in refFuncs:
            print('Found')
            found += 1.0
        else:
            print('NOT found')
        print('')
        print('CALCULIX transpiler:')
        print('writeCCX' + keyword)

print('')        
print('Found ' + str(found) + ' corresponding functions over a total of ' + str(tot) + ', or ' + str(100.0*found/tot) + '%')