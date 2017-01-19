function[]=writeABQsurfaceinteraction(filepath,name,depvar,padthickness,properties,trackingthickness,unsymm,user,data,comment)
function[]=writeABQsurfaceinteraction(filepath,name,depvar,padthickness,properties,trackingthickness,unsymm,user,data,comment)
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


line = '*SURFACE INTERACTION';
line = '*SURFACE INTERACTION';


if ~strcmp(name,'none') && ~strcmp(name,'NONE') && ~strcmp(name,'None')
if ~strcmp(name,'none') && ~strcmp(name,'NONE') && ~strcmp(name,'None')
    line = strcat(line,', NAME=',name);
    line = strcat(line,', NAME=',name);
end
end


if ~strcmp(depvar,'none') && ~strcmp(depvar,'NONE') && ~strcmp(depvar,'None')
if ~strcmp(depvar,'none') && ~strcmp(depvar,'NONE') && ~strcmp(depvar,'None')
    line = strcat(line,', DEPVAR=',depvar);
    line = strcat(line,', DEPVAR=',depvar);
end
end


if ~strcmp(padthickness,'none') && ~strcmp(padthickness,'NONE') && ~strcmp(padthickness,'None')
if ~strcmp(padthickness,'none') && ~strcmp(padthickness,'NONE') && ~strcmp(padthickness,'None')
    line = strcat(line,', PAD THICKNESS=',padthickness);
    line = strcat(line,', PAD THICKNESS=',padthickness);
end
end


if ~strcmp(properties,'none') && ~strcmp(properties,'NONE') && ~strcmp(properties,'None')
if ~strcmp(properties,'none') && ~strcmp(properties,'NONE') && ~strcmp(properties,'None')
    line = strcat(line,', PROPERTIES=',properties);
    line = strcat(line,', PROPERTIES=',properties);
end
end


if ~strcmp(trackingthickness,'none') && ~strcmp(trackingthickness,'NONE') && ~strcmp(trackingthickness,'None')
if ~strcmp(trackingthickness,'none') && ~strcmp(trackingthickness,'NONE') && ~strcmp(trackingthickness,'None')
    line = strcat(line,', TRACKING THICKNESS=',trackingthickness);
    line = strcat(line,', TRACKING THICKNESS=',trackingthickness);
end
end


if ~strcmp(unsymm,'none') && ~strcmp(unsymm,'NONE') && ~strcmp(unsymm,'None')
if ~strcmp(unsymm,'none') && ~strcmp(unsymm,'NONE') && ~strcmp(unsymm,'None')
    line = strcat(line,', UNSYMM=',unsymm);
    line = strcat(line,', UNSYMM=',unsymm);
end
end


if ~strcmp(user,'none') && ~strcmp(user,'NONE') && ~strcmp(user,'None')
if ~strcmp(user,'none') && ~strcmp(user,'NONE') && ~strcmp(user,'None')
    line = strcat(line,', USER=',user);
    line = strcat(line,', USER=',user);
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
