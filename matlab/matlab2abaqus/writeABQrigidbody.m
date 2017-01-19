function[]=writeABQrigidbody(filepath,refnode,analyticalsurface,elset,pinnset,tienset,isothermal,position,density,nodalthickness,offset,data,comment)
function[]=writeABQrigidbody(filepath,refnode,analyticalsurface,elset,pinnset,tienset,isothermal,position,density,nodalthickness,offset,data,comment)
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


line = '*RIGID BODY';
line = '*RIGID BODY';


if ~strcmp(refnode,'none') && ~strcmp(refnode,'NONE') && ~strcmp(refnode,'None')
if ~strcmp(refnode,'none') && ~strcmp(refnode,'NONE') && ~strcmp(refnode,'None')
    line = strcat(line,', REF NODE=',refnode);
    line = strcat(line,', REF NODE=',refnode);
end
end


if ~strcmp(analyticalsurface,'none') && ~strcmp(analyticalsurface,'NONE') && ~strcmp(analyticalsurface,'None')
if ~strcmp(analyticalsurface,'none') && ~strcmp(analyticalsurface,'NONE') && ~strcmp(analyticalsurface,'None')
    line = strcat(line,', ANALYTICAL SURFACE=',analyticalsurface);
    line = strcat(line,', ANALYTICAL SURFACE=',analyticalsurface);
end
end


if ~strcmp(elset,'none') && ~strcmp(elset,'NONE') && ~strcmp(elset,'None')
if ~strcmp(elset,'none') && ~strcmp(elset,'NONE') && ~strcmp(elset,'None')
    line = strcat(line,', ELSET=',elset);
    line = strcat(line,', ELSET=',elset);
end
end


if ~strcmp(pinnset,'none') && ~strcmp(pinnset,'NONE') && ~strcmp(pinnset,'None')
if ~strcmp(pinnset,'none') && ~strcmp(pinnset,'NONE') && ~strcmp(pinnset,'None')
    line = strcat(line,', PIN NSET=',pinnset);
    line = strcat(line,', PIN NSET=',pinnset);
end
end


if ~strcmp(tienset,'none') && ~strcmp(tienset,'NONE') && ~strcmp(tienset,'None')
if ~strcmp(tienset,'none') && ~strcmp(tienset,'NONE') && ~strcmp(tienset,'None')
    line = strcat(line,', TIE NSET=',tienset);
    line = strcat(line,', TIE NSET=',tienset);
end
end


if ~strcmp(isothermal,'none') && ~strcmp(isothermal,'NONE') && ~strcmp(isothermal,'None')
if ~strcmp(isothermal,'none') && ~strcmp(isothermal,'NONE') && ~strcmp(isothermal,'None')
    line = strcat(line,', ISOTHERMAL=',isothermal);
    line = strcat(line,', ISOTHERMAL=',isothermal);
end
end


if ~strcmp(position,'none') && ~strcmp(position,'NONE') && ~strcmp(position,'None')
if ~strcmp(position,'none') && ~strcmp(position,'NONE') && ~strcmp(position,'None')
    line = strcat(line,', POSITION=',position);
    line = strcat(line,', POSITION=',position);
end
end


if ~strcmp(density,'none') && ~strcmp(density,'NONE') && ~strcmp(density,'None')
if ~strcmp(density,'none') && ~strcmp(density,'NONE') && ~strcmp(density,'None')
    line = strcat(line,', DENSITY=',density);
    line = strcat(line,', DENSITY=',density);
end
end


if ~strcmp(nodalthickness,'none') && ~strcmp(nodalthickness,'NONE') && ~strcmp(nodalthickness,'None')
if ~strcmp(nodalthickness,'none') && ~strcmp(nodalthickness,'NONE') && ~strcmp(nodalthickness,'None')
    line = strcat(line,', NODAL THICKNESS=',nodalthickness);
    line = strcat(line,', NODAL THICKNESS=',nodalthickness);
end
end


if ~strcmp(offset,'none') && ~strcmp(offset,'NONE') && ~strcmp(offset,'None')
if ~strcmp(offset,'none') && ~strcmp(offset,'NONE') && ~strcmp(offset,'None')
    line = strcat(line,', OFFSET=',offset);
    line = strcat(line,', OFFSET=',offset);
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
