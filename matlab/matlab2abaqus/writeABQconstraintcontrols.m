function[]=writeABQconstraintcontrols(filepath,deleteslave,nochanges,nochecks,print,checkfrequency,terminateanalysis,data,comment)
%%
%==============================================================================
% Copyright (c) 2017 Universite de Lorraine & Lulea tekniska universitet
% Author: Luca Di Stasio <luca.distasio@gmail.com>
%                        <luca.distasio@ingpec.eu>
%
% Redistribution and use in source and binary forms, with or without
% modification, are permitted provided that the following conditions are met:
% 
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

line = '*CONSTRAINT CONTROLS';

if ~strcmp(deleteslave,'none') && ~strcmp(deleteslave,'NONE') && ~strcmp(deleteslave,'None')
    line = strcat(line,', DELETE SLAVE=',deleteslave);
end

if ~strcmp(nochanges,'none') && ~strcmp(nochanges,'NONE') && ~strcmp(nochanges,'None')
    line = strcat(line,', NO CHANGES=',nochanges);
end

if ~strcmp(nochecks,'none') && ~strcmp(nochecks,'NONE') && ~strcmp(nochecks,'None')
    line = strcat(line,', NO CHECKS=',nochecks);
end

if ~strcmp(print,'none') && ~strcmp(print,'NONE') && ~strcmp(print,'None')
    line = strcat(line,', PRINT=',print);
end

if ~strcmp(checkfrequency,'none') && ~strcmp(checkfrequency,'NONE') && ~strcmp(checkfrequency,'None')
    line = strcat(line,', CHECK FREQUENCY=',checkfrequency);
end

if ~strcmp(terminateanalysis,'none') && ~strcmp(terminateanalysis,'NONE') && ~strcmp(terminateanalysis,'None')
    line = strcat(line,', TERMINATE ANALYSIS=',terminateanalysis);
end

fprintf(fileId,strcat(line,'\n'));

if ~strcmp(comment,'none') && ~strcmp(comment,'NONE') && ~strcmp(comment,'None')
    fprintf(fileId,strcat('**',comment,'\n'));
end

for i=1:length(data)
    fprintf(fileId,strcat(' ',data{i},'\n'));
end

fprintf(fileId,'**\n');

fclose(fileId);

return
