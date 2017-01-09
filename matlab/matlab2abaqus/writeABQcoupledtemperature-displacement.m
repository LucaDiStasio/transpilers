function[]=writeABQcoupledtemperature-displacement(filepath,allsdtol,continue,creep,electrical,factor,stabilize,steadystate,cetol,deltmx,data,comment)
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

line = '*COUPLED TEMPERATURE-DISPLACEMENT';

if ~strcmp(allsdtol,'none') && ~strcmp(allsdtol,'NONE') && ~strcmp(allsdtol,'None')
    line = strcat(line,', ALLSDTOL=',allsdtol);
end

if ~strcmp(continue,'none') && ~strcmp(continue,'NONE') && ~strcmp(continue,'None')
    line = strcat(line,', CONTINUE=',continue);
end

if ~strcmp(creep,'none') && ~strcmp(creep,'NONE') && ~strcmp(creep,'None')
    line = strcat(line,', CREEP=',creep);
end

if ~strcmp(electrical,'none') && ~strcmp(electrical,'NONE') && ~strcmp(electrical,'None')
    line = strcat(line,', ELECTRICAL=',electrical);
end

if ~strcmp(factor,'none') && ~strcmp(factor,'NONE') && ~strcmp(factor,'None')
    line = strcat(line,', FACTOR=',factor);
end

if ~strcmp(stabilize,'none') && ~strcmp(stabilize,'NONE') && ~strcmp(stabilize,'None')
    line = strcat(line,', STABILIZE=',stabilize);
end

if ~strcmp(steadystate,'none') && ~strcmp(steadystate,'NONE') && ~strcmp(steadystate,'None')
    line = strcat(line,', STEADY STATE=',steadystate);
end

if ~strcmp(cetol,'none') && ~strcmp(cetol,'NONE') && ~strcmp(cetol,'None')
    line = strcat(line,', CETOL=',cetol);
end

if ~strcmp(deltmx,'none') && ~strcmp(deltmx,'NONE') && ~strcmp(deltmx,'None')
    line = strcat(line,', DELTMX=',deltmx);
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
