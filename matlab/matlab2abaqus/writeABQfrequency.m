function[]=writeABQfrequency(filepath,acousticcoupling,dampingprojection,eigensolver,normalization,propertyevaluation,residualmodes,sim,nset,data,comment)
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

line = '*FREQUENCY';

if ~strcmp(acousticcoupling,'none') && ~strcmp(acousticcoupling,'NONE') && ~strcmp(acousticcoupling,'None')
    line = strcat(line,', ACOUSTIC COUPLING=',acousticcoupling);
end

if ~strcmp(dampingprojection,'none') && ~strcmp(dampingprojection,'NONE') && ~strcmp(dampingprojection,'None')
    line = strcat(line,', DAMPING PROJECTION=',dampingprojection);
end

if ~strcmp(eigensolver,'none') && ~strcmp(eigensolver,'NONE') && ~strcmp(eigensolver,'None')
    line = strcat(line,', EIGENSOLVER=',eigensolver);
end

if ~strcmp(normalization,'none') && ~strcmp(normalization,'NONE') && ~strcmp(normalization,'None')
    line = strcat(line,', NORMALIZATION=',normalization);
end

if ~strcmp(propertyevaluation,'none') && ~strcmp(propertyevaluation,'NONE') && ~strcmp(propertyevaluation,'None')
    line = strcat(line,', PROPERTY EVALUATION=',propertyevaluation);
end

if ~strcmp(residualmodes,'none') && ~strcmp(residualmodes,'NONE') && ~strcmp(residualmodes,'None')
    line = strcat(line,', RESIDUAL MODES=',residualmodes);
end

if ~strcmp(sim,'none') && ~strcmp(sim,'NONE') && ~strcmp(sim,'None')
    line = strcat(line,', SIM=',sim);
end

if ~strcmp(nset,'none') && ~strcmp(nset,'NONE') && ~strcmp(nset,'None')
    line = strcat(line,', NSET=',nset);
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
