function[]=writeABQmatrixgenerate(filepath,stiffness,mass,viscousdamping,structuraldamping,load,solidinfiniteformulation,elementbyelement,elset,propertyevaluation,publicnodes,data,comment)
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

line = '*MATRIX GENERATE';

if ~strcmp(stiffness,'none') && ~strcmp(stiffness,'NONE') && ~strcmp(stiffness,'None')
    line = strcat(line,', STIFFNESS=',stiffness);
end

if ~strcmp(mass,'none') && ~strcmp(mass,'NONE') && ~strcmp(mass,'None')
    line = strcat(line,', MASS=',mass);
end

if ~strcmp(viscousdamping,'none') && ~strcmp(viscousdamping,'NONE') && ~strcmp(viscousdamping,'None')
    line = strcat(line,', VISCOUS DAMPING=',viscousdamping);
end

if ~strcmp(structuraldamping,'none') && ~strcmp(structuraldamping,'NONE') && ~strcmp(structuraldamping,'None')
    line = strcat(line,', STRUCTURAL DAMPING=',structuraldamping);
end

if ~strcmp(load,'none') && ~strcmp(load,'NONE') && ~strcmp(load,'None')
    line = strcat(line,', LOAD=',load);
end

if ~strcmp(solidinfiniteformulation,'none') && ~strcmp(solidinfiniteformulation,'NONE') && ~strcmp(solidinfiniteformulation,'None')
    line = strcat(line,', SOLID INFINITE FORMULATION=',solidinfiniteformulation);
end

if ~strcmp(elementbyelement,'none') && ~strcmp(elementbyelement,'NONE') && ~strcmp(elementbyelement,'None')
    line = strcat(line,', ELEMENT BY ELEMENT=',elementbyelement);
end

if ~strcmp(elset,'none') && ~strcmp(elset,'NONE') && ~strcmp(elset,'None')
    line = strcat(line,', ELSET=',elset);
end

if ~strcmp(propertyevaluation,'none') && ~strcmp(propertyevaluation,'NONE') && ~strcmp(propertyevaluation,'None')
    line = strcat(line,', PROPERTY EVALUATION=',propertyevaluation);
end

if ~strcmp(publicnodes,'none') && ~strcmp(publicnodes,'NONE') && ~strcmp(publicnodes,'None')
    line = strcat(line,', PUBLIC NODES=',publicnodes);
end

fprintf(fileId,strcat(line,'\n'));

if ~strcmp(comment,'none') && ~strcmp(comment,'NONE') && ~strcmp(comment,'None')
    fprintf(fileId,strcat('**',comment,'\n'));
end

for i=1:length(data)
    fprintf(fileId,'%s',strcat(' ',data{i},'\n'));
end

fprintf(fileId,'**\n');

fclose(fileId);

return
