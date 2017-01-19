function[]=writeABQtie(filepath,name,positiontolerance,tiednset,adjust,constraintratio,cyclicsymmetry,norotation,nothickness,type,data,comment)
function[]=writeABQtie(filepath,name,positiontolerance,tiednset,adjust,constraintratio,cyclicsymmetry,norotation,nothickness,type,data,comment)
%%
%%
%==============================================================================
%==============================================================================
% Copyright (c) 2017 Universite de Lorraine & Lulea tekniska universitet
% Copyright (c) 2016-2017 Universite de Lorraine & Lulea tekniska universitet% Author: Luca Di Stasio <luca.distasio@gmail.com>
% Author: Luca Di Stasio <luca.distasio@gmail.com>
%                        <luca.distasio@ingpec.eu>
%                        <luca.distasio@ingpec.eu>
%
%
% Redistribution and use in source and binary forms, with or without
% Redistribution and use in source and binary forms, with or without
% modification, are permitted provided that the following conditions are met:
% modification, are permitted provided that the following conditions are met:
% 
% 
% 
% 
% Redistributions of source code must retain the above copyright
% Redistributions of source code must retain the above copyright
% notice, this list of conditions and the following disclaimer.
% notice, this list of conditions and the following disclaimer.
% Redistributions in binary form must reproduce the above copyright
% Redistributions in binary form must reproduce the above copyright
% notice, this list of conditions and the following disclaimer in
% notice, this list of conditions and the following disclaimer in
% the documentation and/or other materials provided with the distribution
% the documentation and/or other materials provided with the distribution
% Neither the name of the Universite de Lorraine or Lulea tekniska universitet
% Neither the name of the Universite de Lorraine or Lulea tekniska universitet
% nor the names of its contributors may be used to endorse or promote products
% nor the names of its contributors may be used to endorse or promote products
% derived from this software without specific prior written permission.
% derived from this software without specific prior written permission.
% 
% 
% THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
% THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
% AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
% AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
% IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
% IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
% ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
% ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
% LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
% LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
% CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
% CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
% SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
% SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
% INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
% INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
% CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
% CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
% ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
% ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
% POSSIBILITY OF SUCH DAMAGE.
% POSSIBILITY OF SUCH DAMAGE.
%==============================================================================
%==============================================================================
%
%
%  DESCRIPTION
%  DESCRIPTION
%  
%  
%  A function to write  to Abaqus .inp file format.
%  A function to write  to Abaqus .inp file format.
%
%
%%
%%


fileId = fopen(filepath, 'a');
fileId = fopen(filepath, 'a');


fprintf(fileId,'**\n');
fprintf(fileId,'**\n');


line = '*TIE';
line = '*TIE';


if ~strcmp(name,'none') && ~strcmp(name,'NONE') && ~strcmp(name,'None')
if ~strcmp(name,'none') && ~strcmp(name,'NONE') && ~strcmp(name,'None')
    line = strcat(line,', NAME=',name);
    line = strcat(line,', NAME=',name);
end
end


if ~strcmp(positiontolerance,'none') && ~strcmp(positiontolerance,'NONE') && ~strcmp(positiontolerance,'None')
if ~strcmp(positiontolerance,'none') && ~strcmp(positiontolerance,'NONE') && ~strcmp(positiontolerance,'None')
    line = strcat(line,', POSITION TOLERANCE=',positiontolerance);
    line = strcat(line,', POSITION TOLERANCE=',positiontolerance);
end
end


if ~strcmp(tiednset,'none') && ~strcmp(tiednset,'NONE') && ~strcmp(tiednset,'None')
if ~strcmp(tiednset,'none') && ~strcmp(tiednset,'NONE') && ~strcmp(tiednset,'None')
    line = strcat(line,', TIED NSET=',tiednset);
    line = strcat(line,', TIED NSET=',tiednset);
end
end


if ~strcmp(adjust,'none') && ~strcmp(adjust,'NONE') && ~strcmp(adjust,'None')
if ~strcmp(adjust,'none') && ~strcmp(adjust,'NONE') && ~strcmp(adjust,'None')
    line = strcat(line,', ADJUST=',adjust);
    line = strcat(line,', ADJUST=',adjust);
end
end


if ~strcmp(constraintratio,'none') && ~strcmp(constraintratio,'NONE') && ~strcmp(constraintratio,'None')
if ~strcmp(constraintratio,'none') && ~strcmp(constraintratio,'NONE') && ~strcmp(constraintratio,'None')
    line = strcat(line,', CONSTRAINT RATIO=',constraintratio);
    line = strcat(line,', CONSTRAINT RATIO=',constraintratio);
end
end


if ~strcmp(cyclicsymmetry,'none') && ~strcmp(cyclicsymmetry,'NONE') && ~strcmp(cyclicsymmetry,'None')
if ~strcmp(cyclicsymmetry,'none') && ~strcmp(cyclicsymmetry,'NONE') && ~strcmp(cyclicsymmetry,'None')
    line = strcat(line,', CYCLIC SYMMETRY=',cyclicsymmetry);
    line = strcat(line,', CYCLIC SYMMETRY=',cyclicsymmetry);
end
end


if ~strcmp(norotation,'none') && ~strcmp(norotation,'NONE') && ~strcmp(norotation,'None')
if ~strcmp(norotation,'none') && ~strcmp(norotation,'NONE') && ~strcmp(norotation,'None')
    line = strcat(line,', NO ROTATION=',norotation);
    line = strcat(line,', NO ROTATION=',norotation);
end
end


if ~strcmp(nothickness,'none') && ~strcmp(nothickness,'NONE') && ~strcmp(nothickness,'None')
if ~strcmp(nothickness,'none') && ~strcmp(nothickness,'NONE') && ~strcmp(nothickness,'None')
    line = strcat(line,', NO THICKNESS=',nothickness);
    line = strcat(line,', NO THICKNESS=',nothickness);
end
end


if ~strcmp(type,'none') && ~strcmp(type,'NONE') && ~strcmp(type,'None')
if ~strcmp(type,'none') && ~strcmp(type,'NONE') && ~strcmp(type,'None')
    line = strcat(line,', TYPE=',type);
    line = strcat(line,', TYPE=',type);
end
end


fprintf(fileId,strcat(line,'\n'));
fprintf(fileId,strcat(line,'\n'));


if ~strcmp(comment,'none') && ~strcmp(comment,'NONE') && ~strcmp(comment,'None')
if ~strcmp(comment,'none') && ~strcmp(comment,'NONE') && ~strcmp(comment,'None')
    fprintf(fileId,strcat('**',comment,'\n'));
    fprintf(fileId,strcat('**',comment,'\n'));
end
end


for i=1:length(data)
for i=1:length(data)
    fprintf(fileId,'%s',strcat(' ',data{i}{1},'\n'));
    fprintf(fileId,'%s',strcat(' ',data{i},'\n'));
end
end


fprintf(fileId,'**\n');
fprintf(fileId,'**\n');


fclose(fileId);
fclose(fileId);


return
return
