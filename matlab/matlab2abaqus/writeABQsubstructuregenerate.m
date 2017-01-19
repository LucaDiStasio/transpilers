function[]=writeABQsubstructuregenerate(filepath,type,elset,gravityload,library,massmatrix,nset,overwrite,propertyevaluation,recoverymatrix,structuraldampingmatrix,viscousdampingmatrix,data,comment)
function[]=writeABQsubstructuregenerate(filepath,type,elset,gravityload,library,massmatrix,nset,overwrite,propertyevaluation,recoverymatrix,structuraldampingmatrix,viscousdampingmatrix,data,comment)
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


line = '*SUBSTRUCTURE GENERATE';
line = '*SUBSTRUCTURE GENERATE';


if ~strcmp(type,'none') && ~strcmp(type,'NONE') && ~strcmp(type,'None')
if ~strcmp(type,'none') && ~strcmp(type,'NONE') && ~strcmp(type,'None')
    line = strcat(line,', TYPE=',type);
    line = strcat(line,', TYPE=',type);
end
end


if ~strcmp(elset,'none') && ~strcmp(elset,'NONE') && ~strcmp(elset,'None')
if ~strcmp(elset,'none') && ~strcmp(elset,'NONE') && ~strcmp(elset,'None')
    line = strcat(line,', ELSET=',elset);
    line = strcat(line,', ELSET=',elset);
end
end


if ~strcmp(gravityload,'none') && ~strcmp(gravityload,'NONE') && ~strcmp(gravityload,'None')
if ~strcmp(gravityload,'none') && ~strcmp(gravityload,'NONE') && ~strcmp(gravityload,'None')
    line = strcat(line,', GRAVITY LOAD=',gravityload);
    line = strcat(line,', GRAVITY LOAD=',gravityload);
end
end


if ~strcmp(library,'none') && ~strcmp(library,'NONE') && ~strcmp(library,'None')
if ~strcmp(library,'none') && ~strcmp(library,'NONE') && ~strcmp(library,'None')
    line = strcat(line,', LIBRARY=',library);
    line = strcat(line,', LIBRARY=',library);
end
end


if ~strcmp(massmatrix,'none') && ~strcmp(massmatrix,'NONE') && ~strcmp(massmatrix,'None')
if ~strcmp(massmatrix,'none') && ~strcmp(massmatrix,'NONE') && ~strcmp(massmatrix,'None')
    line = strcat(line,', MASS MATRIX=',massmatrix);
    line = strcat(line,', MASS MATRIX=',massmatrix);
end
end


if ~strcmp(nset,'none') && ~strcmp(nset,'NONE') && ~strcmp(nset,'None')
if ~strcmp(nset,'none') && ~strcmp(nset,'NONE') && ~strcmp(nset,'None')
    line = strcat(line,', NSET=',nset);
    line = strcat(line,', NSET=',nset);
end
end


if ~strcmp(overwrite,'none') && ~strcmp(overwrite,'NONE') && ~strcmp(overwrite,'None')
if ~strcmp(overwrite,'none') && ~strcmp(overwrite,'NONE') && ~strcmp(overwrite,'None')
    line = strcat(line,', OVERWRITE=',overwrite);
    line = strcat(line,', OVERWRITE=',overwrite);
end
end


if ~strcmp(propertyevaluation,'none') && ~strcmp(propertyevaluation,'NONE') && ~strcmp(propertyevaluation,'None')
if ~strcmp(propertyevaluation,'none') && ~strcmp(propertyevaluation,'NONE') && ~strcmp(propertyevaluation,'None')
    line = strcat(line,', PROPERTY EVALUATION=',propertyevaluation);
    line = strcat(line,', PROPERTY EVALUATION=',propertyevaluation);
end
end


if ~strcmp(recoverymatrix,'none') && ~strcmp(recoverymatrix,'NONE') && ~strcmp(recoverymatrix,'None')
if ~strcmp(recoverymatrix,'none') && ~strcmp(recoverymatrix,'NONE') && ~strcmp(recoverymatrix,'None')
    line = strcat(line,', RECOVERY MATRIX=',recoverymatrix);
    line = strcat(line,', RECOVERY MATRIX=',recoverymatrix);
end
end


if ~strcmp(structuraldampingmatrix,'none') && ~strcmp(structuraldampingmatrix,'NONE') && ~strcmp(structuraldampingmatrix,'None')
if ~strcmp(structuraldampingmatrix,'none') && ~strcmp(structuraldampingmatrix,'NONE') && ~strcmp(structuraldampingmatrix,'None')
    line = strcat(line,', STRUCTURAL DAMPING MATRIX=',structuraldampingmatrix);
    line = strcat(line,', STRUCTURAL DAMPING MATRIX=',structuraldampingmatrix);
end
end


if ~strcmp(viscousdampingmatrix,'none') && ~strcmp(viscousdampingmatrix,'NONE') && ~strcmp(viscousdampingmatrix,'None')
if ~strcmp(viscousdampingmatrix,'none') && ~strcmp(viscousdampingmatrix,'NONE') && ~strcmp(viscousdampingmatrix,'None')
    line = strcat(line,', VISCOUS DAMPING MATRIX=',viscousdampingmatrix);
    line = strcat(line,', VISCOUS DAMPING MATRIX=',viscousdampingmatrix);
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
