function[]=writeABQsubmodel(filepath,acoustictostructure,shelltosolid,shellthickness,absoluteexteriortolerance,exteriortolerance,globalelset,intersectiononly,type,data,comment)
function[]=writeABQsubmodel(filepath,acoustictostructure,shelltosolid,shellthickness,absoluteexteriortolerance,exteriortolerance,globalelset,intersectiononly,type,data,comment)
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


line = '*SUBMODEL';
line = '*SUBMODEL';


if ~strcmp(acoustictostructure,'none') && ~strcmp(acoustictostructure,'NONE') && ~strcmp(acoustictostructure,'None')
if ~strcmp(acoustictostructure,'none') && ~strcmp(acoustictostructure,'NONE') && ~strcmp(acoustictostructure,'None')
    line = strcat(line,', ACOUSTIC TO STRUCTURE=',acoustictostructure);
    line = strcat(line,', ACOUSTIC TO STRUCTURE=',acoustictostructure);
end
end


if ~strcmp(shelltosolid,'none') && ~strcmp(shelltosolid,'NONE') && ~strcmp(shelltosolid,'None')
if ~strcmp(shelltosolid,'none') && ~strcmp(shelltosolid,'NONE') && ~strcmp(shelltosolid,'None')
    line = strcat(line,', SHELL TO SOLID=',shelltosolid);
    line = strcat(line,', SHELL TO SOLID=',shelltosolid);
end
end


if ~strcmp(shellthickness,'none') && ~strcmp(shellthickness,'NONE') && ~strcmp(shellthickness,'None')
if ~strcmp(shellthickness,'none') && ~strcmp(shellthickness,'NONE') && ~strcmp(shellthickness,'None')
    line = strcat(line,', SHELL THICKNESS=',shellthickness);
    line = strcat(line,', SHELL THICKNESS=',shellthickness);
end
end


if ~strcmp(absoluteexteriortolerance,'none') && ~strcmp(absoluteexteriortolerance,'NONE') && ~strcmp(absoluteexteriortolerance,'None')
if ~strcmp(absoluteexteriortolerance,'none') && ~strcmp(absoluteexteriortolerance,'NONE') && ~strcmp(absoluteexteriortolerance,'None')
    line = strcat(line,', ABSOLUTE EXTERIOR TOLERANCE=',absoluteexteriortolerance);
    line = strcat(line,', ABSOLUTE EXTERIOR TOLERANCE=',absoluteexteriortolerance);
end
end


if ~strcmp(exteriortolerance,'none') && ~strcmp(exteriortolerance,'NONE') && ~strcmp(exteriortolerance,'None')
if ~strcmp(exteriortolerance,'none') && ~strcmp(exteriortolerance,'NONE') && ~strcmp(exteriortolerance,'None')
    line = strcat(line,', EXTERIOR TOLERANCE=',exteriortolerance);
    line = strcat(line,', EXTERIOR TOLERANCE=',exteriortolerance);
end
end


if ~strcmp(globalelset,'none') && ~strcmp(globalelset,'NONE') && ~strcmp(globalelset,'None')
if ~strcmp(globalelset,'none') && ~strcmp(globalelset,'NONE') && ~strcmp(globalelset,'None')
    line = strcat(line,', GLOBAL ELSET=',globalelset);
    line = strcat(line,', GLOBAL ELSET=',globalelset);
end
end


if ~strcmp(intersectiononly,'none') && ~strcmp(intersectiononly,'NONE') && ~strcmp(intersectiononly,'None')
if ~strcmp(intersectiononly,'none') && ~strcmp(intersectiononly,'NONE') && ~strcmp(intersectiononly,'None')
    line = strcat(line,', INTERSECTION ONLY=',intersectiononly);
    line = strcat(line,', INTERSECTION ONLY=',intersectiononly);
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
