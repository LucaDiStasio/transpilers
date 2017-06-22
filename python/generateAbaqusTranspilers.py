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

Parse Abaqus documentation and generate transpilers for different languages.

Tested with Python 2.7 Anaconda 2.4.1 (64-bit) distribution
       in Windows 7.

'''

from os import listdir
from os.path import isfile, join
from BeautifulSoup import BeautifulSoup

targetLang = 'cpp'

#sourceFolder = 'C:/Simulia/Documentation/docs/v6.12/books/key'
sourceFolder = 'C:/Simulia/Documentation/docs/v2016/books/key'
'''
matlabFolder = 'D:/OneDrive/01_Luca/07_DocMASE/06_WD/io_manager/matlab/matlab2abaqus'
cppFolder = 'D:/OneDrive/01_Luca/07_DocMASE/06_WD/io_manager/cpp/cpp2abaqus'
jsFolder = 'D:/OneDrive/01_Luca/07_DocMASE/06_WD/io_manager/js/js2abaqus'
pythonFolder = 'D:/OneDrive/01_Luca/07_DocMASE/06_WD/io_manager/python/python2abaqus'
'''
matlabFolder = 'C:/01_Backup-folder/OneDrive/01_Luca/07_DocMASE/06_WD/transpilers/matlab/matlab2abaqus'
cppFolder = 'C:/01_Backup-folder/OneDrive/01_Luca/07_DocMASE/06_WD/transpilers/cpp/cpp2abaqus'
jsFolder = 'C:/01_Backup-folder/OneDrive/01_Luca/07_DocMASE/06_WD/transpilers/js/js2abaqus'
pythonFolder = 'C:/01_Backup-folder/OneDrive/01_Luca/07_DocMASE/06_WD/transpilers/python/py2abaqus'

sourcefiles = [f for f in listdir(sourceFolder) if isfile(join(sourceFolder, f)) and 'abk' in f and '.html' in f]

keywords = []
parametersDict = {}

for file in sourcefiles:
    soup = BeautifulSoup(open(join(sourceFolder,file)))
    keyword = soup.body.find("div","abqkeysection").find("div","titlepage").find("h3","title").text[1:]
    keywords.append(keyword)
    parameters = []
    for entry in soup.body.find("div","abqkeysection").findAll("div","paramlistentry"):
        parameters.append(entry.find("span","abqparameter").text)
    parametersDict[keyword] = parameters

# generate matlab files    
if targetLang == 'matlab':
    targetFolder = matlabFolder
    #targetFiles = [f for f in listdir(targetFolder) if isfile(join(sourceFolder, f)) and '.m' in f]
    for keyword in keywords:
        fileName = 'writeABQ' + keyword.lower().replace(' ','') + '.m'
        with open(join(targetFolder,fileName),'w') as file:
            line = ''
            line = 'function[]=writeABQ' + keyword.lower().replace(' ','') + '(filepath'
            for parameter in parametersDict[keyword]:
                line += ',' + parameter.lower().replace(' ','')
            line += ',data,comment)\n'
            
            file.write(line)
            file.write('%%\n')
            file.write('%==============================================================================\n')
            file.write('% Copyright (c) 2017 Universite de Lorraine & Lulea tekniska universitet\n')
            file.write('% Author: Luca Di Stasio <luca.distasio@gmail.com>\n')
            file.write('%                        <luca.distasio@ingpec.eu>\n')
            file.write('%\n')
            file.write('% Redistribution and use in source and binary forms, with or without\n')
            file.write('% modification, are permitted provided that the following conditions are met:\n')
            file.write('% \n')
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
            file.write('%  A function to write  to Abaqus .inp file format.\n')
            file.write('%\n')
            file.write('%%\n')
            file.write('\n')
            file.write('fileId = fopen(filepath, \'a\');\n')
            file.write('\n')
            file.write('fprintf(fileId,\'**\\n\');\n')
            file.write('\n')
            
            line = ''
            line = 'line = \'*' + keyword + '\';\n'
            file.write(line)
            
            for parameter in parametersDict[keyword]:
                file.write('\n')
                line = ''
                line = 'if ~strcmp(' + parameter.lower().replace(' ','') +  ',\'none\') && ~strcmp(' + parameter.lower().replace(' ','') +  ',\'NONE\') && ~strcmp(' + parameter.lower().replace(' ','') +  ',\'None\')\n'
                file.write(line)
                line = ''
                line = '    line = strcat(line,\', ' + parameter + '=\',' + parameter.lower().replace(' ','') + ');\n'
                file.write(line)
                line = ''
                file.write('end\n')
    
            file.write('\n')
            file.write('fprintf(fileId,strcat(line,\'\\n\'));\n')
            file.write('\n')
            line = ''
            file.write('if ~strcmp(comment,\'none\') && ~strcmp(comment,\'NONE\') && ~strcmp(comment,\'None\')\n')
            file.write('    fprintf(fileId,strcat(\'**\',comment,\'\\n\'));\n')
            file.write('end\n')
            file.write('\n')
            file.write('for i=1:length(data)\n')
            file.write('    fprintf(fileId,strcat(\' \',data{i},\'\\n\'));\n')
            file.write('end\n')
            file.write('\n')
            file.write('fprintf(fileId,\'**\\n\');\n')
            file.write('\n')
            file.write('fclose(fileId);\n')
            file.write('\n')
            file.write('return\n')
        print ''
        print '========= Keyword ========='
        print '*' + keyword
        line = ''
        for parameter in parametersDict[keyword]:
            if line != '':
                line += ', ' + parameter
            else:
                line += parameter
        print line
        print 'Matlab function created:'
        print ' ' + join(targetFolder,fileName)
# generate cpp files
elif targetLang=='cpp':
    targetFolder = cppFolder
    headerFileName = 'writeABQinputFile' + '.h'
    bodyFileName = 'writeABQinputFile' + '.cpp'
    with open(join(targetFolder,headerFileName),'w') as file:
        file.write('/*\n')
        file.write('* =====================================================================================\n')
        file.write('* \n')
        file.write('* Copyright (c) 2016 Université de Lorraine & Luleå tekniska universitet\n')
        file.write('* Author: Luca Di Stasio <luca.distasio@gmail.com>\n')
        file.write('*                        <luca.distasio@ingpec.eu>\n')
        file.write('*\n')
        file.write('* This program is free software: you can redistribute it and/or modify\n')
        file.write('* it under the terms of the GNU General Public License as published by\n')
        file.write('* the Free Software Foundation, either version 3 of the License, or\n')
        file.write('* (at your option) any later version.\n')
        file.write('*\n')
        file.write('* This program is distributed in the hope that it will be useful,\n')
        file.write('* but WITHOUT ANY WARRANTY; without even the implied warranty of\n')
        file.write('* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n')
        file.write('* GNU General Public License for more details.\n')
        file.write('*\n')
        file.write('* You should have received a copy of the GNU General Public License\n')
        file.write('* along with this program.  If not, see <http://www.gnu.org/licenses/>.\n')
        file.write('*\n')
        file.write('* =====================================================================================\n')
        file.write('*/\n')
        file.write('\n')
        file.write('#ifndef INTERP_H\n')
        file.write('#define INTERP_H\n')
        file.write('\n')
        file.write('#include <cmath>\n')
        file.write('#include <complex>\n')
        file.write('#include <fstream>\n')
        file.write('#include <iomanip>\n')
        file.write('#include <iostream>\n')
        file.write('#include <omp.h>\n')
        file.write('#include <random>\n')
        file.write('#include <sstream>\n')
        file.write('#include <stdio.h>\n')
        file.write('#include <stdlib.h>\n')
        file.write('#include <string>\n')
        file.write('#include <time.h>\n')
        file.write('#include <typeinfo>\n')
        file.write('#include <type_traits> // C++0x\n')
        file.write('//#include <tr1/type_traits> // C++03, use std::tr1\n')
        file.write('#include <vector>\n')
        file.write('\n')
        file.write('using namespace std;\n')
        file.write('\n')
        file.write('//============================================================================//\n')
        file.write('//============================================================================//\n')
        file.write('/*\n')
        file.write('    A class providing tools for the construction of ABAQUS input files\n')
        file.write('*/\n')
        file.write('//============================================================================//\n')
        file.write('//============================================================================//\n')
        file.write('\n')
        file.write('\n')
        file.write('//===================================================\n')
        file.write('//==================  HEADER  =======================\n')
        file.write('//===================================================\n')
        file.write('class writeABQinputFile {\n')
        file.write('//===================================================\n')  
        file.write('//                  Variables\n')
        file.write('//===================================================\n')
        file.write('private:\n')
        file.write('    string filepath;                            // Absolute path of ABAQUS input file\n')
        file.write('//===================================================\n')  
        file.write('//                      Methods\n')
        file.write('//===================================================\n')  
        file.write('public:\n')
        file.write('\n')  
        file.write('  // Constructor (default)\n')
        file.write('  writeABQinputFile();\n')
        file.write('\n')  
        file.write('  //Destructor\n')
        file.write('  ~writeABQinputFile();\n')
        file.write('\n')  
        file.write('  // Constructor (init input file path)\n')
        file.write('  writeABQinputFile(string);\n')
    with open(join(targetFolder,bodyFileName),'w') as file:
        file.write('#include "writeABQinputFile.h"\n')
        file.write('\n')
        file.write('//=====================  BODY  ==========================\n')
        file.write('\n')
        file.write('writeABQinputFile::writeABQinputFile(){}\n')
        file.write('\n')
        file.write('writeABQinputFile::writeABQinputFile(string abqInputFile){\n')
        file.write('    filepath = abqInputFile;\n')
        file.write('    ofstream abq;\n')
        file.write('    abq.open(filepath, ios::out);\n')
        file.write('    abq.close();\n')
        file.write('}\n')
        file.write('\n')
        file.write('writeABQinputFile::~writeABQinputFile(){}\n')
    for keyword in keywords:
        with open(join(targetFolder,headerFileName),'a') as file:
            file.write('\n')
            line = ''
            line = '  void writeABQ' + keyword.lower().replace(' ','') + '('
            for p,parameter in enumerate(parametersDict[keyword]):
                if p>0:
                    line += ','
                line += 'string'
            line += ',vector<string>,string);\n'
            file.write(line)
        with open(join(targetFolder,bodyFileName),'a') as file:
            file.write('\n')
            line = ''
            line = 'void writeABQinputFile::writeABQ' + keyword.lower().replace(' ','') + '('
            for p,parameter in enumerate(parametersDict[keyword]):
                if p>0:
                    line += ','
                line += 'string ' + parameter.lower().replace(' ','')
            line += ',vector<string> data,string comment){\n'
            file.write(line)
            file.write('    ofstream abq;' + '\n')
            file.write('    abq.open(filepath, ios::out, ios::app);' + '\n')
            file.write('    abq << "**\\n"' + ';\n')
            line = ''
            line = '    string line = "*' + keyword + '";\n'
            file.write(line)
            for parameter in parametersDict[keyword]:
                line = ''
                line = '    if("none"!=' + parameter.lower().replace(' ','') +  ' && "NONE"!=' + parameter.lower().replace(' ','') +  ' && "None"!=' + parameter.lower().replace(' ','') +  '){\n'
                file.write(line)
                line = ''
                line = '        line += ", ' + parameter + '=" + ' + parameter.lower().replace(' ','') + ';\n'
                file.write(line)
                file.write('    }\n')
                line = ''
            file.write('    abq << line + "\\n"' + ';\n')
            file.write('    abq << "** " + comment + "\\n"' + ';\n')
            file.write('    for(int i=0;i<data.size;i++){\n')
            file.write('        abq << data[i] + "\\n"' + ';\n')
            file.write('    }\n')
            file.write('    abq.close();\n')
            file.write('}\n')
            file.write('\n')
    with open(join(targetFolder,headerFileName),'a') as file:
        file.write('}\n')
        file.write('\n')
# generate python files
elif targetLang=='python':
    targetFolder = pythonFolder
    fileName = 'writeABQinputFile' + '.py'
    with open(join(targetFolder,fileName),'w') as file:
        file.write('# -*- coding: utf-8 -*-\n')
        file.write('\n')
        file.write('\'\'\'\n')
        file.write('=====================================================================================\n')
        file.write('\n')
        file.write('Copyright (c) 2017 Université de Lorraine & Luleå tekniska universitet\n')
        file.write('Author: Luca Di Stasio <luca.distasio@gmail.com>\n')
        file.write('                       <luca.distasio@ingpec.eu>\n')
        file.write('\n')
        file.write('This program is free software: you can redistribute it and/or modify\n')
        file.write('it under the terms of the GNU General Public License as published by\n')
        file.write('the Free Software Foundation, either version 3 of the License, or\n')
        file.write('(at your option) any later version.\n')
        file.write('\n')
        file.write('This program is distributed in the hope that it will be useful,\n')
        file.write('but WITHOUT ANY WARRANTY; without even the implied warranty of\n')
        file.write('MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n')
        file.write('GNU General Public License for more details.\n')
        file.write('\n')
        file.write('You should have received a copy of the GNU General Public License\n')
        file.write('along with this program.  If not, see <http://www.gnu.org/licenses/>.\n')
        file.write('\n')
        file.write('=====================================================================================\n')
        file.write('\n')
        file.write('DESCRIPTION\n')
        file.write('\n')
        file.write('Write ABAQUS input files.\n')
        file.write('\n')
        file.write('Tested with Python 2.7 Anaconda 2.4.1 (64-bit) distribution\n')
        file.write('       in Windows 7.\n')
        file.write('\n')
        file.write('\'\'\'\n')
        file.write('\n')
        file.write('from os.path import join\n')
        file.write('\n')
    for keyword in keywords:
        with open(join(targetFolder,fileName),'a') as file:
            file.write('\n')
            line = ''
            line = 'def writeABQ' + keyword.lower().replace(' ','') + '(filepath'
            for parameter in parametersDict[keyword]:
                line += ',' + parameter.lower().replace(' ','')
            line += ',data,comment):\n'
            file.write(line)
            file.write('    with open(filepath,\'a\') as abq:' + '\n')
            file.write('        abq.write(\'**\' + \'\\n\')' + '\n')
            line = ''
            line = '        line = \'*' + keyword + '\'\n'
            file.write(line)
            for parameter in parametersDict[keyword]:
                line = ''
                line = '        if \'none\'!=' + parameter.lower().replace(' ','') +  ' and \'NONE\'!=' + parameter.lower().replace(' ','') +  ' and \'None\'!=' + parameter.lower().replace(' ','') +  ':\n'
                file.write(line)
                line = ''
                line = '            line += \', ' + parameter + '=\' + ' + parameter.lower().replace(' ','') + '\n'
                file.write(line)
                line = ''
            file.write('        abq.write(line + \'\\n\')' + '\n')
            file.write('        abq.write(\'** \' + str(comment) + \'\\n\')' + '\n')
            file.write('        for item in data:\n')
            file.write('            abq.write(str(item) + \'\\n\')' + '\n')
            file.write('\n')
    with open(join(targetFolder,fileName),'a') as file:
        file.write('def main():' + '\n')
        file.write('\n')
        file.write('\n')
        file.write('if __name__ == \'__main__\':' + '\n')
        file.write('    main()' + '\n')
        
# generate javascript files
elif targetLang=='javascript':
    targetFolder = jsFolder
    fileName = 'writeABQinputFile' + '.js'
    with open(join(targetFolder,fileName),'w') as file:
        file.write('/*\n')
        file.write('* =====================================================================================\n')
        file.write('* \n')
        file.write('* Copyright (c) 2016 Université de Lorraine & Luleå tekniska universitet\n')
        file.write('* Author: Luca Di Stasio <luca.distasio@gmail.com>\n')
        file.write('*                        <luca.distasio@ingpec.eu>\n')
        file.write('*\n')
        file.write('* This program is free software: you can redistribute it and/or modify\n')
        file.write('* it under the terms of the GNU General Public License as published by\n')
        file.write('* the Free Software Foundation, either version 3 of the License, or\n')
        file.write('* (at your option) any later version.\n')
        file.write('*\n')
        file.write('* This program is distributed in the hope that it will be useful,\n')
        file.write('* but WITHOUT ANY WARRANTY; without even the implied warranty of\n')
        file.write('* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n')
        file.write('* GNU General Public License for more details.\n')
        file.write('*\n')
        file.write('* You should have received a copy of the GNU General Public License\n')
        file.write('* along with this program.  If not, see <http://www.gnu.org/licenses/>.\n')
        file.write('*\n')
        file.write('* =====================================================================================\n')
        file.write('*/\n')
        file.write('\n')
    for keyword in keywords:
        with open(join(targetFolder,fileName),'a') as file:
            file.write('\n')
            line = ''
            line = 'function writeABQ' + keyword.lower().replace(' ','') + '(filepath'
            for parameter in parametersDict[keyword]:
                line += ',' + parameter.lower().replace(' ','')
            line += ',data,comment){\n'
            file.write(line)
            
            file.write('}' + '\n')
