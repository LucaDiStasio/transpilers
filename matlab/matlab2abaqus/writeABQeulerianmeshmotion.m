function[]=writeABQeulerianmeshmotion(filepath,elset,surface,aspectratiomax,buffer,center,contract,op,orientation,vmaxfactor,volfracmin,data,comment)
function[]=writeABQeulerianmeshmotion(filepath,elset,surface,aspectratiomax,buffer,center,contract,op,orientation,vmaxfactor,volfracmin,data,comment)
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


line = '*EULERIAN MESH MOTION';
line = '*EULERIAN MESH MOTION';


if ~strcmp(elset,'none') && ~strcmp(elset,'NONE') && ~strcmp(elset,'None')
if ~strcmp(elset,'none') && ~strcmp(elset,'NONE') && ~strcmp(elset,'None')
    line = strcat(line,', ELSET=',elset);
    line = strcat(line,', ELSET=',elset);
end
end


if ~strcmp(surface,'none') && ~strcmp(surface,'NONE') && ~strcmp(surface,'None')
if ~strcmp(surface,'none') && ~strcmp(surface,'NONE') && ~strcmp(surface,'None')
    line = strcat(line,', SURFACE=',surface);
    line = strcat(line,', SURFACE=',surface);
end
end


if ~strcmp(aspectratiomax,'none') && ~strcmp(aspectratiomax,'NONE') && ~strcmp(aspectratiomax,'None')
if ~strcmp(aspectratiomax,'none') && ~strcmp(aspectratiomax,'NONE') && ~strcmp(aspectratiomax,'None')
    line = strcat(line,', ASPECT RATIO MAX=',aspectratiomax);
    line = strcat(line,', ASPECT RATIO MAX=',aspectratiomax);
end
end


if ~strcmp(buffer,'none') && ~strcmp(buffer,'NONE') && ~strcmp(buffer,'None')
if ~strcmp(buffer,'none') && ~strcmp(buffer,'NONE') && ~strcmp(buffer,'None')
    line = strcat(line,', BUFFER=',buffer);
    line = strcat(line,', BUFFER=',buffer);
end
end


if ~strcmp(center,'none') && ~strcmp(center,'NONE') && ~strcmp(center,'None')
if ~strcmp(center,'none') && ~strcmp(center,'NONE') && ~strcmp(center,'None')
    line = strcat(line,', CENTER=',center);
    line = strcat(line,', CENTER=',center);
end
end


if ~strcmp(contract,'none') && ~strcmp(contract,'NONE') && ~strcmp(contract,'None')
if ~strcmp(contract,'none') && ~strcmp(contract,'NONE') && ~strcmp(contract,'None')
    line = strcat(line,', CONTRACT=',contract);
    line = strcat(line,', CONTRACT=',contract);
end
end


if ~strcmp(op,'none') && ~strcmp(op,'NONE') && ~strcmp(op,'None')
if ~strcmp(op,'none') && ~strcmp(op,'NONE') && ~strcmp(op,'None')
    line = strcat(line,', OP=',op);
    line = strcat(line,', OP=',op);
end
end


if ~strcmp(orientation,'none') && ~strcmp(orientation,'NONE') && ~strcmp(orientation,'None')
if ~strcmp(orientation,'none') && ~strcmp(orientation,'NONE') && ~strcmp(orientation,'None')
    line = strcat(line,', ORIENTATION=',orientation);
    line = strcat(line,', ORIENTATION=',orientation);
end
end


if ~strcmp(vmaxfactor,'none') && ~strcmp(vmaxfactor,'NONE') && ~strcmp(vmaxfactor,'None')
if ~strcmp(vmaxfactor,'none') && ~strcmp(vmaxfactor,'NONE') && ~strcmp(vmaxfactor,'None')
    line = strcat(line,', VMAX FACTOR=',vmaxfactor);
    line = strcat(line,', VMAX FACTOR=',vmaxfactor);
end
end


if ~strcmp(volfracmin,'none') && ~strcmp(volfracmin,'NONE') && ~strcmp(volfracmin,'None')
if ~strcmp(volfracmin,'none') && ~strcmp(volfracmin,'NONE') && ~strcmp(volfracmin,'None')
    line = strcat(line,', VOLFRAC MIN=',volfracmin);
    line = strcat(line,', VOLFRAC MIN=',volfracmin);
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
