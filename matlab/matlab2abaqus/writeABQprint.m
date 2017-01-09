function[]=writeABQprint(filepath,adaptivemesh,contact,frequency,modelchange,plasticity,residual,solve,allke,criticalelement,dmass,etotal,mass,data,comment)
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

line = '*PRINT';

if ~strcmp(adaptivemesh,'none') && ~strcmp(adaptivemesh,'NONE') && ~strcmp(adaptivemesh,'None')
    line = strcat(line,', ADAPTIVE MESH=',adaptivemesh);
end

if ~strcmp(contact,'none') && ~strcmp(contact,'NONE') && ~strcmp(contact,'None')
    line = strcat(line,', CONTACT=',contact);
end

if ~strcmp(frequency,'none') && ~strcmp(frequency,'NONE') && ~strcmp(frequency,'None')
    line = strcat(line,', FREQUENCY=',frequency);
end

if ~strcmp(modelchange,'none') && ~strcmp(modelchange,'NONE') && ~strcmp(modelchange,'None')
    line = strcat(line,', MODEL CHANGE=',modelchange);
end

if ~strcmp(plasticity,'none') && ~strcmp(plasticity,'NONE') && ~strcmp(plasticity,'None')
    line = strcat(line,', PLASTICITY=',plasticity);
end

if ~strcmp(residual,'none') && ~strcmp(residual,'NONE') && ~strcmp(residual,'None')
    line = strcat(line,', RESIDUAL=',residual);
end

if ~strcmp(solve,'none') && ~strcmp(solve,'NONE') && ~strcmp(solve,'None')
    line = strcat(line,', SOLVE=',solve);
end

if ~strcmp(allke,'none') && ~strcmp(allke,'NONE') && ~strcmp(allke,'None')
    line = strcat(line,', ALLKE=',allke);
end

if ~strcmp(criticalelement,'none') && ~strcmp(criticalelement,'NONE') && ~strcmp(criticalelement,'None')
    line = strcat(line,', CRITICAL ELEMENT=',criticalelement);
end

if ~strcmp(dmass,'none') && ~strcmp(dmass,'NONE') && ~strcmp(dmass,'None')
    line = strcat(line,', DMASS=',dmass);
end

if ~strcmp(etotal,'none') && ~strcmp(etotal,'NONE') && ~strcmp(etotal,'None')
    line = strcat(line,', ETOTAL=',etotal);
end

if ~strcmp(mass,'none') && ~strcmp(mass,'NONE') && ~strcmp(mass,'None')
    line = strcat(line,', MASS=',mass);
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
