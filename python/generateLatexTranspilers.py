#!/usr/bin/python
# -*- coding: utf-8 -*-

'''
=====================================================================================

Copyright (c) 2016 Université de Lorraine & Luleå tekniska universitet
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



Tested with Python 2.7 Anaconda 2.4.1 (64-bit) distribution in Windows 7.

'''

import sys, getopt, re, mechanize, urllib, urllib2, cookielib, os, time, csv, codecs
from os.path import isfile, join
from BeautifulSoup import BeautifulSoup

def write2matlab(folder,string,descr):
    if '[' in string and ']' in string:
        string = re.sub('\[[^]]*\]','',string)
    args = string[1:].count('{')
    argsList = []
    if args>0:
        for arg in range(0,args):
            if arg==0:
                command = string[1:string.find('{')]
            argsList.append(string[string.find('{')+1:string.find('}')])
            string = string[string.find('}')+1:]
    else:
        command =  string[1:]
    line = 'function[]=writeLTX' + command  + '(filepath'
    for i,arg in enumerate(argsList):
        line += ',' + arg
    line += ',args,options)\n'
    filename = 'writeLTX' + command + '.m'
    with codecs.open(join(folder,filename),'w','utf-8') as file:
        print('')
        print('<=========================================================================================================>')
        print('<=========================================================================================================>')
        print('')
        print('                 CREATING FILE ' + filename + ' IN FOLDER ' + targetFolder)
        print('')
        print('<=========================================================================================================>')
        print(line)
        file.write(line)
        print('%%')
        print('%==============================================================================')
        print('% Copyright (c) 2016-2017 Universite de Lorraine & Lulea tekniska universitet')
        print('% Author: Luca Di Stasio <luca.distasio@gmail.com>')
        print('%                        <luca.distasio@ingpec.eu>')
        print('%')
        print('% Redistribution and use in source and binary forms, with or without')
        print('% modification, are permitted provided that the following conditions are met:')
        print('% ')
        print('% Redistributions of source code must retain the above copyright')
        print('% notice, this list of conditions and the following disclaimer.')
        print('% Redistributions in binary form must reproduce the above copyright')
        print('% notice, this list of conditions and the following disclaimer in')
        print('% the documentation and/or other materials provided with the distribution')
        print('% Neither the name of the Universite de Lorraine or Lulea tekniska universitet')
        print('% nor the names of its contributors may be used to endorse or promote products')
        print('% derived from this software without specific prior written permission.')
        print('% ')
        print('% THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"')
        print('% AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE')
        print('% IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE')
        print('% ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE')
        print('% LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR')
        print('% CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF')
        print('% SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS')
        print('% INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN')
        print('% CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)')
        print('% ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE')
        print('% POSSIBILITY OF SUCH DAMAGE.')
        print('%==============================================================================')
        print('%')
        print('%  DESCRIPTION')
        print('%  ')
        print('%  A function to create a Latex file.')
        file.write('%%\n')
        file.write('%==============================================================================\n')
        file.write('% Copyright (c) 2016-2017 Universite de Lorraine & Lulea tekniska universitet\n')
        file.write('% Author: Luca Di Stasio <luca.distasio@gmail.com>\n')
        file.write('%                        <luca.distasio@ingpec.eu>\n')
        file.write('%\n')
        file.write('% Redistribution and use in source and binary forms, with or without\n')
        file.write('% modification, are permitted provided that the following conditions are met:\n')
        file.write('% \n')
        file.write('% Redistributions of source code must retain the above copyright\n')
        file.write('% notice, this list of conditions and the following disclaimer.\n')
        file.write('% Redistributions in binary form must reproduce the above copyright\n')
        file.write('% notice, this list of conditions and the following disclaimer in\n')
        file.write('% the documentation and/or other materials provided with the distribution\n')
        file.write('% Neither the name of the Universite de Lorraine or Lulea tekniska universitet\n')
        file.write('% nor the names of its contributors may be used to endorse or promote products\n')
        file.write('% derived from this software without specific prior written permission.\n')
        file.write('% \n')
        file.write('% THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"\n')
        file.write('% AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE\n')
        file.write('% IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE\n')
        file.write('% ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE\n')
        file.write('% LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR\n')
        file.write('% CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF\n')
        file.write('% SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS\n')
        file.write('% INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN\n')
        file.write('% CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)\n')
        file.write('% ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE\n')
        file.write('% POSSIBILITY OF SUCH DAMAGE.\n')
        file.write('%==============================================================================\n')
        file.write('%\n')
        file.write('%  DESCRIPTION\n')
        file.write('%  \n')
        file.write('%  A function to create a Latex file.\n')
        if descr is not None:
            print('% ' + descr)
            file.write('% ' + descr)
        print('%')
        print('%%')
        print('')
        print('fileId = fopen(filepath, \'a\');')
        print('')
        print('fprintf(fileId,\'\\n\');')
        print('line = \'\\' + command + '\';')
        print('')
        print('if ~strcmp(options,\'none\') && ~strcmp(options,\'NONE\') && ~strcmp(options,\'None\')')
        print('    line = strcat(line,\'[\',options,\']\');')
        print('end')
        print('')
        file.write('%\n')
        file.write('%%\n')
        file.write('\n')
        file.write('fileId = fopen(filepath, \'a\');\n')
        file.write('\n')
        file.write('fprintf(fileId,\'\\n\');\n')
        file.write('line = \'\\' + command + '\';\n')
        file.write('\n')
        file.write('if ~strcmp(options,\'none\') && ~strcmp(options,\'NONE\') && ~strcmp(options,\'None\')\n')
        file.write('    line = strcat(line,\'[\',options,\']\');\n')
        file.write('end\n')
        file.write('\n')
        for i,arg in enumerate(argsList):
            print('if ~strcmp(' + arg + ',\'none\') && ~strcmp(' + arg + ',\'NONE\') && ~strcmp(' + arg + ',\'None\')')
            print('    line = strcat(line,\'{\',' + arg + ',\'}\');')
            print('end')
            file.write('if ~strcmp(' + arg + ',\'none\') && ~strcmp(' + arg + ',\'NONE\') && ~strcmp(' + arg + ',\'None\')\n')
            file.write('    line = strcat(line,\'{\',' + arg + ',\'}\');\n')
            file.write('end\n')
        print('if ~isempty(args)')
        print('    line = strcat(line,\'{\');')
        print('    for i=1:length(args)')
        print('        dims = size(args);')
        print('        if dims(1)==1 && dims(2)==1')
        print('            line = strcat(line,args{i});')
        print('        elseif dims(1)>1 && dims(2)==1')
        print('            try')
        print('                line = strcat(line,args{i}{1});')
        print('            catch exception')
        print('                line = strcat(line,args{i});')
        print('            end')
        print('        elseif dims(1)==1 && dims(2)>1')
        print('            try')
        print('                line = strcat(line,args{1}{i});')
        print('            catch exception')
        print('                line = strcat(line,args{i});')
        print('            end')
        print('        else')
        print('            line = strcat(line,args{i});')
        print('        end')
        print('    end')
        print('    line = strcat(line,\'}\');')
        print('end')
        print('fprintf(fileId,strcat(line,\'\\n\'));')
        print('')
        print('fclose(fileId);')
        print('')
        print('return')
        file.write('if ~isempty(args)\n')
        file.write('    line = strcat(line,\'{\');\n')
        file.write('    for i=1:length(args)\n')
        file.write('        dims = size(args);\n')
        file.write('        if dims(1)==1 && dims(2)==1\n')
        file.write('            line = strcat(line,args{i});\n')
        file.write('        elseif dims(1)>1 && dims(2)==1\n')
        file.write('            try\n')
        file.write('                line = strcat(line,args{i}{1});\n')
        file.write('            catch exception\n')
        file.write('                line = strcat(line,args{i});\n')
        file.write('            end\n')
        file.write('        elseif dims(1)==1 && dims(2)>1\n')
        file.write('            try\n')
        file.write('                line = strcat(line,args{1}{i});\n')
        file.write('            catch exception\n')
        file.write('                line = strcat(line,args{i});\n')
        file.write('            end\n')
        file.write('        else\n')
        file.write('            line = strcat(line,args{i});\n')
        file.write('        end\n')
        file.write('    end\n')
        file.write('    line = strcat(line,\'}\');\n')
        file.write('end\n')
        file.write('fprintf(fileId,strcat(line,\'\\n\'));\n')
        file.write('\n')
        file.write('fclose(fileId);\n')
        file.write('\n')
        file.write('return\n')
        print('')
        print('                          ==============>   DONE   <==============')
        print('')
        print('<=========================================================================================================>')
        print('<=========================================================================================================>')

url = 'https://en.wikibooks.org/wiki/LaTeX/Command_Glossary#D'

matlabFolder = 'D:\\OneDrive\\01_Luca\\07_DocMASE\\06_WD\\transpilers\\matlab\\matlab2latex'

targetFolder = matlabFolder

mech = mechanize.Browser()

page = mech.open(url)
html = page.read()
soup = BeautifulSoup(html)

for element in soup.body.findAll("dt"):
    str = element.text
    str = str.replace('_','')
    str = str.replace('-','')
    str = str.replace('{}','')
    str = str.replace('&#160;','')
    str = str.replace(' ','')
    str = str.replace('(LaTeX2e)','')
    if not any(char in str for char in ['/','@','*',',',';',':','!','-','=','>','<','+','\'','`','|','(',')','\[','\]']):
        if '\\' not in str[1:]:
            if element.findNext('dd') is not None:
                descr = element.findNext('dd').text
            else:
                descr = None 
            write2matlab(targetFolder,str,descr)
        else:
            funcs = str[1:].split('\\')
            for func in funcs:
                write2matlab(targetFolder,func,None)
                
        