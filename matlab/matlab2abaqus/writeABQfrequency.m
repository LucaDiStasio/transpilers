function[]=writeABQfrequency(filepath,acousticcoupling,dampingprojection,eigensolver,normalization,propertyevaluation,residualmodes,sim,nset,data,comment)
function[]=writeABQfrequency(filepath,acousticcoupling,dampingprojection,eigensolver,normalization,propertyevaluation,residualmodes,sim,nset,data,comment)
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


line = '*FREQUENCY';
line = '*FREQUENCY';


if ~strcmp(acousticcoupling,'none') && ~strcmp(acousticcoupling,'NONE') && ~strcmp(acousticcoupling,'None')
if ~strcmp(acousticcoupling,'none') && ~strcmp(acousticcoupling,'NONE') && ~strcmp(acousticcoupling,'None')
    line = strcat(line,', ACOUSTIC COUPLING=',acousticcoupling);
    line = strcat(line,', ACOUSTIC COUPLING=',acousticcoupling);
end
end


if ~strcmp(dampingprojection,'none') && ~strcmp(dampingprojection,'NONE') && ~strcmp(dampingprojection,'None')
if ~strcmp(dampingprojection,'none') && ~strcmp(dampingprojection,'NONE') && ~strcmp(dampingprojection,'None')
    line = strcat(line,', DAMPING PROJECTION=',dampingprojection);
    line = strcat(line,', DAMPING PROJECTION=',dampingprojection);
end
end


if ~strcmp(eigensolver,'none') && ~strcmp(eigensolver,'NONE') && ~strcmp(eigensolver,'None')
if ~strcmp(eigensolver,'none') && ~strcmp(eigensolver,'NONE') && ~strcmp(eigensolver,'None')
    line = strcat(line,', EIGENSOLVER=',eigensolver);
    line = strcat(line,', EIGENSOLVER=',eigensolver);
end
end


if ~strcmp(normalization,'none') && ~strcmp(normalization,'NONE') && ~strcmp(normalization,'None')
if ~strcmp(normalization,'none') && ~strcmp(normalization,'NONE') && ~strcmp(normalization,'None')
    line = strcat(line,', NORMALIZATION=',normalization);
    line = strcat(line,', NORMALIZATION=',normalization);
end
end


if ~strcmp(propertyevaluation,'none') && ~strcmp(propertyevaluation,'NONE') && ~strcmp(propertyevaluation,'None')
if ~strcmp(propertyevaluation,'none') && ~strcmp(propertyevaluation,'NONE') && ~strcmp(propertyevaluation,'None')
    line = strcat(line,', PROPERTY EVALUATION=',propertyevaluation);
    line = strcat(line,', PROPERTY EVALUATION=',propertyevaluation);
end
end


if ~strcmp(residualmodes,'none') && ~strcmp(residualmodes,'NONE') && ~strcmp(residualmodes,'None')
if ~strcmp(residualmodes,'none') && ~strcmp(residualmodes,'NONE') && ~strcmp(residualmodes,'None')
    line = strcat(line,', RESIDUAL MODES=',residualmodes);
    line = strcat(line,', RESIDUAL MODES=',residualmodes);
end
end


if ~strcmp(sim,'none') && ~strcmp(sim,'NONE') && ~strcmp(sim,'None')
if ~strcmp(sim,'none') && ~strcmp(sim,'NONE') && ~strcmp(sim,'None')
    line = strcat(line,', SIM=',sim);
    line = strcat(line,', SIM=',sim);
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
