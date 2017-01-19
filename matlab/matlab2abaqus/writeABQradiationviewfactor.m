function[]=writeABQradiationviewfactor(filepath,blocking,cavity,infinitesimal,integration,lumpedarea,off,range,reflection,symmetry,vtol,mdisp,nset,data,comment)
function[]=writeABQradiationviewfactor(filepath,blocking,cavity,infinitesimal,integration,lumpedarea,off,range,reflection,symmetry,vtol,mdisp,nset,data,comment)
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


line = '*RADIATION VIEWFACTOR';
line = '*RADIATION VIEWFACTOR';


if ~strcmp(blocking,'none') && ~strcmp(blocking,'NONE') && ~strcmp(blocking,'None')
if ~strcmp(blocking,'none') && ~strcmp(blocking,'NONE') && ~strcmp(blocking,'None')
    line = strcat(line,', BLOCKING=',blocking);
    line = strcat(line,', BLOCKING=',blocking);
end
end


if ~strcmp(cavity,'none') && ~strcmp(cavity,'NONE') && ~strcmp(cavity,'None')
if ~strcmp(cavity,'none') && ~strcmp(cavity,'NONE') && ~strcmp(cavity,'None')
    line = strcat(line,', CAVITY=',cavity);
    line = strcat(line,', CAVITY=',cavity);
end
end


if ~strcmp(infinitesimal,'none') && ~strcmp(infinitesimal,'NONE') && ~strcmp(infinitesimal,'None')
if ~strcmp(infinitesimal,'none') && ~strcmp(infinitesimal,'NONE') && ~strcmp(infinitesimal,'None')
    line = strcat(line,', INFINITESIMAL=',infinitesimal);
    line = strcat(line,', INFINITESIMAL=',infinitesimal);
end
end


if ~strcmp(integration,'none') && ~strcmp(integration,'NONE') && ~strcmp(integration,'None')
if ~strcmp(integration,'none') && ~strcmp(integration,'NONE') && ~strcmp(integration,'None')
    line = strcat(line,', INTEGRATION=',integration);
    line = strcat(line,', INTEGRATION=',integration);
end
end


if ~strcmp(lumpedarea,'none') && ~strcmp(lumpedarea,'NONE') && ~strcmp(lumpedarea,'None')
if ~strcmp(lumpedarea,'none') && ~strcmp(lumpedarea,'NONE') && ~strcmp(lumpedarea,'None')
    line = strcat(line,', LUMPED AREA=',lumpedarea);
    line = strcat(line,', LUMPED AREA=',lumpedarea);
end
end


if ~strcmp(off,'none') && ~strcmp(off,'NONE') && ~strcmp(off,'None')
if ~strcmp(off,'none') && ~strcmp(off,'NONE') && ~strcmp(off,'None')
    line = strcat(line,', OFF=',off);
    line = strcat(line,', OFF=',off);
end
end


if ~strcmp(range,'none') && ~strcmp(range,'NONE') && ~strcmp(range,'None')
if ~strcmp(range,'none') && ~strcmp(range,'NONE') && ~strcmp(range,'None')
    line = strcat(line,', RANGE=',range);
    line = strcat(line,', RANGE=',range);
end
end


if ~strcmp(reflection,'none') && ~strcmp(reflection,'NONE') && ~strcmp(reflection,'None')
if ~strcmp(reflection,'none') && ~strcmp(reflection,'NONE') && ~strcmp(reflection,'None')
    line = strcat(line,', REFLECTION=',reflection);
    line = strcat(line,', REFLECTION=',reflection);
end
end


if ~strcmp(symmetry,'none') && ~strcmp(symmetry,'NONE') && ~strcmp(symmetry,'None')
if ~strcmp(symmetry,'none') && ~strcmp(symmetry,'NONE') && ~strcmp(symmetry,'None')
    line = strcat(line,', SYMMETRY=',symmetry);
    line = strcat(line,', SYMMETRY=',symmetry);
end
end


if ~strcmp(vtol,'none') && ~strcmp(vtol,'NONE') && ~strcmp(vtol,'None')
if ~strcmp(vtol,'none') && ~strcmp(vtol,'NONE') && ~strcmp(vtol,'None')
    line = strcat(line,', VTOL=',vtol);
    line = strcat(line,', VTOL=',vtol);
end
end


if ~strcmp(mdisp,'none') && ~strcmp(mdisp,'NONE') && ~strcmp(mdisp,'None')
if ~strcmp(mdisp,'none') && ~strcmp(mdisp,'NONE') && ~strcmp(mdisp,'None')
    line = strcat(line,', MDISP=',mdisp);
    line = strcat(line,', MDISP=',mdisp);
end
end


if ~strcmp(nset,'none') && ~strcmp(nset,'NONE') && ~strcmp(nset,'None')
if ~strcmp(nset,'none') && ~strcmp(nset,'NONE') && ~strcmp(nset,'None')
    line = strcat(line,', NSET=',nset);
    line = strcat(line,', NSET=',nset);
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
