%==============================================================================
% Copyright (c) 2016-2017 Universite de Lorraine & Lulea tekniska universitet
%                        <luca.distasio@ingpec.eu>
%
% Redistribution and use in source and binary forms, with or without
% modification, are permitted provided that the following conditions are met:
% 
% Redistributions of source code must retain the above copyright
% notice, this list of conditions and the following disclaimer.
% Redistributions in binary form must reproduce the above copyright
% notice, this list of conditions and the following disclaimer in
% the documentation and/or other materials provided with the distribution
% Neither the name of the Universite de Lorraine or Lulea tekniska universitet
% nor the names of its contributors may be used to endorse or promote products
% derived from this software without specific prior written permission.
% 
% THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
% AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
% IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
% ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
% LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
% CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
% SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
% INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
% CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
% ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
% POSSIBILITY OF SUCH DAMAGE.
%==============================================================================
%
%  DESCRIPTION
%  
%  A function to write  to Abaqus .inp file format.
%
%%

fileId = fopen(filepath, 'a');

fprintf(fileId,'**\n');

line = '*RADIATION VIEWFACTOR';

if ~strcmp(blocking,'none') && ~strcmp(blocking,'NONE') && ~strcmp(blocking,'None')
    line = strcat(line,', BLOCKING=',blocking);
end

if ~strcmp(cavity,'none') && ~strcmp(cavity,'NONE') && ~strcmp(cavity,'None')
    line = strcat(line,', CAVITY=',cavity);
end

if ~strcmp(infinitesimal,'none') && ~strcmp(infinitesimal,'NONE') && ~strcmp(infinitesimal,'None')
    line = strcat(line,', INFINITESIMAL=',infinitesimal);
end

if ~strcmp(integration,'none') && ~strcmp(integration,'NONE') && ~strcmp(integration,'None')
    line = strcat(line,', INTEGRATION=',integration);
end

if ~strcmp(lumpedarea,'none') && ~strcmp(lumpedarea,'NONE') && ~strcmp(lumpedarea,'None')
    line = strcat(line,', LUMPED AREA=',lumpedarea);
end

if ~strcmp(off,'none') && ~strcmp(off,'NONE') && ~strcmp(off,'None')
    line = strcat(line,', OFF=',off);
end

if ~strcmp(range,'none') && ~strcmp(range,'NONE') && ~strcmp(range,'None')
    line = strcat(line,', RANGE=',range);
end

if ~strcmp(reflection,'none') && ~strcmp(reflection,'NONE') && ~strcmp(reflection,'None')
    line = strcat(line,', REFLECTION=',reflection);
end

if ~strcmp(symmetry,'none') && ~strcmp(symmetry,'NONE') && ~strcmp(symmetry,'None')
    line = strcat(line,', SYMMETRY=',symmetry);
end

if ~strcmp(vtol,'none') && ~strcmp(vtol,'NONE') && ~strcmp(vtol,'None')
    line = strcat(line,', VTOL=',vtol);
end

if ~strcmp(mdisp,'none') && ~strcmp(mdisp,'NONE') && ~strcmp(mdisp,'None')
    line = strcat(line,', MDISP=',mdisp);
end

if ~strcmp(nset,'none') && ~strcmp(nset,'NONE') && ~strcmp(nset,'None')
    line = strcat(line,', NSET=',nset);
end

fprintf(fileId,strcat(line,'\n'));

if ~strcmp(comment,'none') && ~strcmp(comment,'NONE') && ~strcmp(comment,'None')
    fprintf(fileId,strcat('**',comment,'\n'));
end

for i=1:length(data)
    fprintf(fileId,'%s',strcat(' ',data{i}{1},'\n'));
end

fprintf(fileId,'**\n');

fclose(fileId);

return
