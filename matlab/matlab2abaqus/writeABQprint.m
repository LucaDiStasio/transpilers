function[]=writeABQprint(filepath,adaptivemesh,contact,frequency,modelchange,plasticity,residual,solve,allke,criticalelement,dmass,etotal,mass,data,comment)
function[]=writeABQprint(filepath,adaptivemesh,contact,frequency,modelchange,plasticity,residual,solve,allke,criticalelement,dmass,etotal,mass,data,comment)
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


line = '*PRINT';
line = '*PRINT';


if ~strcmp(adaptivemesh,'none') && ~strcmp(adaptivemesh,'NONE') && ~strcmp(adaptivemesh,'None')
if ~strcmp(adaptivemesh,'none') && ~strcmp(adaptivemesh,'NONE') && ~strcmp(adaptivemesh,'None')
    line = strcat(line,', ADAPTIVE MESH=',adaptivemesh);
    line = strcat(line,', ADAPTIVE MESH=',adaptivemesh);
end
end


if ~strcmp(contact,'none') && ~strcmp(contact,'NONE') && ~strcmp(contact,'None')
if ~strcmp(contact,'none') && ~strcmp(contact,'NONE') && ~strcmp(contact,'None')
    line = strcat(line,', CONTACT=',contact);
    line = strcat(line,', CONTACT=',contact);
end
end


if ~strcmp(frequency,'none') && ~strcmp(frequency,'NONE') && ~strcmp(frequency,'None')
if ~strcmp(frequency,'none') && ~strcmp(frequency,'NONE') && ~strcmp(frequency,'None')
    line = strcat(line,', FREQUENCY=',frequency);
    line = strcat(line,', FREQUENCY=',frequency);
end
end


if ~strcmp(modelchange,'none') && ~strcmp(modelchange,'NONE') && ~strcmp(modelchange,'None')
if ~strcmp(modelchange,'none') && ~strcmp(modelchange,'NONE') && ~strcmp(modelchange,'None')
    line = strcat(line,', MODEL CHANGE=',modelchange);
    line = strcat(line,', MODEL CHANGE=',modelchange);
end
end


if ~strcmp(plasticity,'none') && ~strcmp(plasticity,'NONE') && ~strcmp(plasticity,'None')
if ~strcmp(plasticity,'none') && ~strcmp(plasticity,'NONE') && ~strcmp(plasticity,'None')
    line = strcat(line,', PLASTICITY=',plasticity);
    line = strcat(line,', PLASTICITY=',plasticity);
end
end


if ~strcmp(residual,'none') && ~strcmp(residual,'NONE') && ~strcmp(residual,'None')
if ~strcmp(residual,'none') && ~strcmp(residual,'NONE') && ~strcmp(residual,'None')
    line = strcat(line,', RESIDUAL=',residual);
    line = strcat(line,', RESIDUAL=',residual);
end
end


if ~strcmp(solve,'none') && ~strcmp(solve,'NONE') && ~strcmp(solve,'None')
if ~strcmp(solve,'none') && ~strcmp(solve,'NONE') && ~strcmp(solve,'None')
    line = strcat(line,', SOLVE=',solve);
    line = strcat(line,', SOLVE=',solve);
end
end


if ~strcmp(allke,'none') && ~strcmp(allke,'NONE') && ~strcmp(allke,'None')
if ~strcmp(allke,'none') && ~strcmp(allke,'NONE') && ~strcmp(allke,'None')
    line = strcat(line,', ALLKE=',allke);
    line = strcat(line,', ALLKE=',allke);
end
end


if ~strcmp(criticalelement,'none') && ~strcmp(criticalelement,'NONE') && ~strcmp(criticalelement,'None')
if ~strcmp(criticalelement,'none') && ~strcmp(criticalelement,'NONE') && ~strcmp(criticalelement,'None')
    line = strcat(line,', CRITICAL ELEMENT=',criticalelement);
    line = strcat(line,', CRITICAL ELEMENT=',criticalelement);
end
end


if ~strcmp(dmass,'none') && ~strcmp(dmass,'NONE') && ~strcmp(dmass,'None')
if ~strcmp(dmass,'none') && ~strcmp(dmass,'NONE') && ~strcmp(dmass,'None')
    line = strcat(line,', DMASS=',dmass);
    line = strcat(line,', DMASS=',dmass);
end
end


if ~strcmp(etotal,'none') && ~strcmp(etotal,'NONE') && ~strcmp(etotal,'None')
if ~strcmp(etotal,'none') && ~strcmp(etotal,'NONE') && ~strcmp(etotal,'None')
    line = strcat(line,', ETOTAL=',etotal);
    line = strcat(line,', ETOTAL=',etotal);
end
end


if ~strcmp(mass,'none') && ~strcmp(mass,'NONE') && ~strcmp(mass,'None')
if ~strcmp(mass,'none') && ~strcmp(mass,'NONE') && ~strcmp(mass,'None')
    line = strcat(line,', MASS=',mass);
    line = strcat(line,', MASS=',mass);
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
