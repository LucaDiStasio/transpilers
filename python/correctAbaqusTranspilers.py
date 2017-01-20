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

Correction to transpilers for different languages.

Tested with Python 2.7 Anaconda 2.4.1 (64-bit) distribution
       in Windows 7.

'''

from os import listdir
from os.path import isfile, join
from BeautifulSoup import BeautifulSoup

matlabFolder = 'D:/OneDrive/01_Luca/07_DocMASE/06_WD/transpilers/matlab/matlab2abaqus'

targetFolder = matlabFolder

targetFiles = [f for f in listdir(targetFolder)]


for file in targetFiles:
    print ""
    print "==============================================================================================="
    print ""
    print "FILE: " + file
    print ""
    oldLines = []
    newLines = []
    with open(join(targetFolder, file),'r') as f:
        oldLines = f.readlines()
    for line in oldLines:
<<<<<<< HEAD
        '''
        if "fprintf(fileId,\'%s\',strcat(\' \',data{i}{1},\'\\n\'));" in line:
            newLines.append("    dims = size(data);\n")
            newLines.append("    if dims(1)==1 && dims(2)==1\n")
            newLines.append("       fprintf(fileId,\'%s\',strcat(\' \',data{i},\'\\n\'));\n")
            newLines.append("    elseif dims(1)>1 && dims(2)==1\n")
            newLines.append("       fprintf(fileId,\'%s\',strcat(\' \',data{i}{1},\'\\n\'));\n")
            newLines.append("    elseif dims(1)==1 && dims(2)>1\n")
            newLines.append("       fprintf(fileId,\'%s\',strcat(\' \',data{1}{i},\'\\n\'));\n")
            newLines.append("    else\n")
            newLines.append("       fprintf(fileId,\'%s\',strcat(\' \',data{i},\'\\n\'));\n")
            newLines.append("    end\n")
        '''
        if "fprintf(fileId,\'%s\',strcat(\' \',data{i}{1},\'\\n\'));" in line:
            #newLines.append("       try\n")
            newLines.append("           fprintf(fileId,\'%s\',strcat(\' \',data{i}{1}));\n")
            newLines.append("           fprintf(fileId,\'\\n\');\n")
            #newLines.append("       catch exception\n")
            #newLines.append("           fprintf(fileId,\'%s\',strcat(\' \',data{i},\'\\n\'));\n")
            #newLines.append("       end\n")
        elif "fprintf(fileId,\'%s\',strcat(\' \',data{1}{i},\'\\n\'));" in line:
            #newLines.append("       try\n")
            newLines.append("           fprintf(fileId,\'%s\',strcat(\' \',data{1}{i}));\n")
            newLines.append("           fprintf(fileId,\'\\n\');\n")
            #newLines.append("       catch exception\n")
            #newLines.append("           fprintf(fileId,\'%s\',strcat(\' \',data{i},\'\\n\'));\n")
            #newLines.append("       end\n")
        elif "fprintf(fileId,\'%s\',strcat(\' \',data{i},\'\\n\'));" in line:
            newLines.append("           fprintf(fileId,\'%s\',strcat(\' \',data{i}));\n")
            newLines.append("           fprintf(fileId,\'\\n\');\n")
        #elif "Copyright (c) 2017" in line:
            #newLines.append("% Copyright (c) 2016-2017 Universite de Lorraine & Lulea tekniska universitet\n")
        #elif "Copyright (c) 2016" in line:
            #newLines.append("% Copyright (c) 2016-2017 Universite de Lorraine & Lulea tekniska universitet\n")
        #elif "Copyright (c) 2016-2017" in line and "Author:" in line:
            #newLines.append("% Copyright (c) 2016-2017 Universite de Lorraine & Lulea tekniska universitet\n")
            #newLines.append("% Author: Luca Di Stasio <luca.distasio@gmail.com>\n")
=======
        if "fprintf(fileId,\'%s\',strcat(\' \',data{i},\'\\n\'));" in line:
            newLines.append("    fprintf(fileId,\'%s\',strcat(\' \',data{i}{1},\'\\n\'));\n")
        elif "Copyright (c) 2017" in line:
            newLines.append("% Copyright (c) 2016-2017 Universite de Lorraine & Lulea tekniska universitet\n")
        elif "Copyright (c) 2016" in line:
            newLines.append("% Copyright (c) 2016-2017 Universite de Lorraine & Lulea tekniska universitet\n")
        elif "Copyright (c) 2016-2017" and "Author:" in line:
            newLines.append("% Copyright (c) 2016-2017 Universite de Lorraine & Lulea tekniska universitet\n")
            newLines.append("% Author: Luca Di Stasio <luca.distasio@gmail.com>\n")
>>>>>>> 5394d0b8eb6e1a7162a4995caa15432f52dad2b6
        else:
            newLines.append(line)
    with open(join(targetFolder, file),'w') as f:
        for i,line in enumerate(newLines):
<<<<<<< HEAD
            f.write(line)
            print line    
=======
            if i>0 and line!=newLines[i-1]:
                f.write(line)
                print line
>>>>>>> 5394d0b8eb6e1a7162a4995caa15432f52dad2b6
