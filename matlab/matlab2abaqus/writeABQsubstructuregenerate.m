function[]=writeABQsubstructuregenerate(filepath,type,elset,gravityload,library,massmatrix,nset,overwrite,propertyevaluation,recoverymatrix,structuraldampingmatrix,viscousdampingmatrix,data,comment)
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

line = '*SUBSTRUCTURE GENERATE';

if ~strcmp(type,'none') && ~strcmp(type,'NONE') && ~strcmp(type,'None')
    line = strcat(line,', TYPE=',type);
end

if ~strcmp(elset,'none') && ~strcmp(elset,'NONE') && ~strcmp(elset,'None')
    line = strcat(line,', ELSET=',elset);
end

if ~strcmp(gravityload,'none') && ~strcmp(gravityload,'NONE') && ~strcmp(gravityload,'None')
    line = strcat(line,', GRAVITY LOAD=',gravityload);
end

if ~strcmp(library,'none') && ~strcmp(library,'NONE') && ~strcmp(library,'None')
    line = strcat(line,', LIBRARY=',library);
end

if ~strcmp(massmatrix,'none') && ~strcmp(massmatrix,'NONE') && ~strcmp(massmatrix,'None')
    line = strcat(line,', MASS MATRIX=',massmatrix);
end

if ~strcmp(nset,'none') && ~strcmp(nset,'NONE') && ~strcmp(nset,'None')
    line = strcat(line,', NSET=',nset);
end

if ~strcmp(overwrite,'none') && ~strcmp(overwrite,'NONE') && ~strcmp(overwrite,'None')
    line = strcat(line,', OVERWRITE=',overwrite);
end

if ~strcmp(propertyevaluation,'none') && ~strcmp(propertyevaluation,'NONE') && ~strcmp(propertyevaluation,'None')
    line = strcat(line,', PROPERTY EVALUATION=',propertyevaluation);
end

if ~strcmp(recoverymatrix,'none') && ~strcmp(recoverymatrix,'NONE') && ~strcmp(recoverymatrix,'None')
    line = strcat(line,', RECOVERY MATRIX=',recoverymatrix);
end

if ~strcmp(structuraldampingmatrix,'none') && ~strcmp(structuraldampingmatrix,'NONE') && ~strcmp(structuraldampingmatrix,'None')
    line = strcat(line,', STRUCTURAL DAMPING MATRIX=',structuraldampingmatrix);
end

if ~strcmp(viscousdampingmatrix,'none') && ~strcmp(viscousdampingmatrix,'NONE') && ~strcmp(viscousdampingmatrix,'None')
    line = strcat(line,', VISCOUS DAMPING MATRIX=',viscousdampingmatrix);
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
