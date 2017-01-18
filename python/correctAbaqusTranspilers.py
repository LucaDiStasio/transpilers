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
        if "fprintf(fileId,strcat(\' \',data{i},\'\\n\'));" in line:
            newLines.append("    fprintf(fileId,\'%s\',strcat(\' \',data{i},\'\\n\'));\n")
        else:
            newLines.append(line)
    with open(join(targetFolder, file),'w') as f:
        for line in newLines:
            f.write(line)
            print line
