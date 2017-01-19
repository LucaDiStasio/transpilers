function[]=writeABQsurface(filepath,name,property,combine,crop,definition,filletradius,internal,regiontype,trim,type,maxratio,nooffset,nothick,scalethick,data,comment)
function[]=writeABQsurface(filepath,name,property,combine,crop,definition,filletradius,internal,regiontype,trim,type,maxratio,nooffset,nothick,scalethick,data,comment)
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


line = '*SURFACE';
line = '*SURFACE';


if ~strcmp(name,'none') && ~strcmp(name,'NONE') && ~strcmp(name,'None')
if ~strcmp(name,'none') && ~strcmp(name,'NONE') && ~strcmp(name,'None')
    line = strcat(line,', NAME=',name);
    line = strcat(line,', NAME=',name);
end
end


if ~strcmp(property,'none') && ~strcmp(property,'NONE') && ~strcmp(property,'None')
if ~strcmp(property,'none') && ~strcmp(property,'NONE') && ~strcmp(property,'None')
    line = strcat(line,', PROPERTY=',property);
    line = strcat(line,', PROPERTY=',property);
end
end


if ~strcmp(combine,'none') && ~strcmp(combine,'NONE') && ~strcmp(combine,'None')
if ~strcmp(combine,'none') && ~strcmp(combine,'NONE') && ~strcmp(combine,'None')
    line = strcat(line,', COMBINE=',combine);
    line = strcat(line,', COMBINE=',combine);
end
end


if ~strcmp(crop,'none') && ~strcmp(crop,'NONE') && ~strcmp(crop,'None')
if ~strcmp(crop,'none') && ~strcmp(crop,'NONE') && ~strcmp(crop,'None')
    line = strcat(line,', CROP=',crop);
    line = strcat(line,', CROP=',crop);
end
end


if ~strcmp(definition,'none') && ~strcmp(definition,'NONE') && ~strcmp(definition,'None')
if ~strcmp(definition,'none') && ~strcmp(definition,'NONE') && ~strcmp(definition,'None')
    line = strcat(line,', DEFINITION=',definition);
    line = strcat(line,', DEFINITION=',definition);
end
end


if ~strcmp(filletradius,'none') && ~strcmp(filletradius,'NONE') && ~strcmp(filletradius,'None')
if ~strcmp(filletradius,'none') && ~strcmp(filletradius,'NONE') && ~strcmp(filletradius,'None')
    line = strcat(line,', FILLET RADIUS=',filletradius);
    line = strcat(line,', FILLET RADIUS=',filletradius);
end
end


if ~strcmp(internal,'none') && ~strcmp(internal,'NONE') && ~strcmp(internal,'None')
if ~strcmp(internal,'none') && ~strcmp(internal,'NONE') && ~strcmp(internal,'None')
    line = strcat(line,', INTERNAL=',internal);
    line = strcat(line,', INTERNAL=',internal);
end
end


if ~strcmp(regiontype,'none') && ~strcmp(regiontype,'NONE') && ~strcmp(regiontype,'None')
if ~strcmp(regiontype,'none') && ~strcmp(regiontype,'NONE') && ~strcmp(regiontype,'None')
    line = strcat(line,', REGION TYPE=',regiontype);
    line = strcat(line,', REGION TYPE=',regiontype);
end
end


if ~strcmp(trim,'none') && ~strcmp(trim,'NONE') && ~strcmp(trim,'None')
if ~strcmp(trim,'none') && ~strcmp(trim,'NONE') && ~strcmp(trim,'None')
    line = strcat(line,', TRIM=',trim);
    line = strcat(line,', TRIM=',trim);
end
end


if ~strcmp(type,'none') && ~strcmp(type,'NONE') && ~strcmp(type,'None')
if ~strcmp(type,'none') && ~strcmp(type,'NONE') && ~strcmp(type,'None')
    line = strcat(line,', TYPE=',type);
    line = strcat(line,', TYPE=',type);
end
end


if ~strcmp(maxratio,'none') && ~strcmp(maxratio,'NONE') && ~strcmp(maxratio,'None')
if ~strcmp(maxratio,'none') && ~strcmp(maxratio,'NONE') && ~strcmp(maxratio,'None')
    line = strcat(line,', MAX RATIO=',maxratio);
    line = strcat(line,', MAX RATIO=',maxratio);
end
end


if ~strcmp(nooffset,'none') && ~strcmp(nooffset,'NONE') && ~strcmp(nooffset,'None')
if ~strcmp(nooffset,'none') && ~strcmp(nooffset,'NONE') && ~strcmp(nooffset,'None')
    line = strcat(line,', NO OFFSET=',nooffset);
    line = strcat(line,', NO OFFSET=',nooffset);
end
end


if ~strcmp(nothick,'none') && ~strcmp(nothick,'NONE') && ~strcmp(nothick,'None')
if ~strcmp(nothick,'none') && ~strcmp(nothick,'NONE') && ~strcmp(nothick,'None')
    line = strcat(line,', NO THICK=',nothick);
    line = strcat(line,', NO THICK=',nothick);
end
end


if ~strcmp(scalethick,'none') && ~strcmp(scalethick,'NONE') && ~strcmp(scalethick,'None')
if ~strcmp(scalethick,'none') && ~strcmp(scalethick,'NONE') && ~strcmp(scalethick,'None')
    line = strcat(line,', SCALE THICK=',scalethick);
    line = strcat(line,', SCALE THICK=',scalethick);
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
