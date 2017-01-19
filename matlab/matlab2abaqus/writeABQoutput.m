function[]=writeABQoutput(filepath,diagnostics,field,history,frequency,modelist,name,numberinterval,timemarks,timepoints,op,timeinterval,variable,sensor,data,comment)
function[]=writeABQoutput(filepath,diagnostics,field,history,frequency,modelist,name,numberinterval,timemarks,timepoints,op,timeinterval,variable,sensor,data,comment)
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


line = '*OUTPUT';
line = '*OUTPUT';


if ~strcmp(diagnostics,'none') && ~strcmp(diagnostics,'NONE') && ~strcmp(diagnostics,'None')
if ~strcmp(diagnostics,'none') && ~strcmp(diagnostics,'NONE') && ~strcmp(diagnostics,'None')
    line = strcat(line,', DIAGNOSTICS=',diagnostics);
    line = strcat(line,', DIAGNOSTICS=',diagnostics);
end
end


if ~strcmp(field,'none') && ~strcmp(field,'NONE') && ~strcmp(field,'None')
if ~strcmp(field,'none') && ~strcmp(field,'NONE') && ~strcmp(field,'None')
    line = strcat(line,', FIELD');
    line = strcat(line,', FIELD');
end
end


if ~strcmp(history,'none') && ~strcmp(history,'NONE') && ~strcmp(history,'None')
if ~strcmp(history,'none') && ~strcmp(history,'NONE') && ~strcmp(history,'None')
    line = strcat(line,', HISTORY');
    line = strcat(line,', HISTORY');
end
end


if ~strcmp(frequency,'none') && ~strcmp(frequency,'NONE') && ~strcmp(frequency,'None')
if ~strcmp(frequency,'none') && ~strcmp(frequency,'NONE') && ~strcmp(frequency,'None')
    line = strcat(line,', FREQUENCY=',frequency);
    line = strcat(line,', FREQUENCY=',frequency);
end
end


if ~strcmp(modelist,'none') && ~strcmp(modelist,'NONE') && ~strcmp(modelist,'None')
if ~strcmp(modelist,'none') && ~strcmp(modelist,'NONE') && ~strcmp(modelist,'None')
    line = strcat(line,', MODE LIST=',modelist);
    line = strcat(line,', MODE LIST=',modelist);
end
end


if ~strcmp(name,'none') && ~strcmp(name,'NONE') && ~strcmp(name,'None')
if ~strcmp(name,'none') && ~strcmp(name,'NONE') && ~strcmp(name,'None')
    line = strcat(line,', NAME=',name);
    line = strcat(line,', NAME=',name);
end
end


if ~strcmp(numberinterval,'none') && ~strcmp(numberinterval,'NONE') && ~strcmp(numberinterval,'None')
if ~strcmp(numberinterval,'none') && ~strcmp(numberinterval,'NONE') && ~strcmp(numberinterval,'None')
    line = strcat(line,', NUMBER INTERVAL=',numberinterval);
    line = strcat(line,', NUMBER INTERVAL=',numberinterval);
end
end


if ~strcmp(timemarks,'none') && ~strcmp(timemarks,'NONE') && ~strcmp(timemarks,'None')
if ~strcmp(timemarks,'none') && ~strcmp(timemarks,'NONE') && ~strcmp(timemarks,'None')
    line = strcat(line,', TIME MARKS=',timemarks);
    line = strcat(line,', TIME MARKS=',timemarks);
end
end


if ~strcmp(timepoints,'none') && ~strcmp(timepoints,'NONE') && ~strcmp(timepoints,'None')
if ~strcmp(timepoints,'none') && ~strcmp(timepoints,'NONE') && ~strcmp(timepoints,'None')
    line = strcat(line,', TIME POINTS=',timepoints);
    line = strcat(line,', TIME POINTS=',timepoints);
end
end


if ~strcmp(op,'none') && ~strcmp(op,'NONE') && ~strcmp(op,'None')
if ~strcmp(op,'none') && ~strcmp(op,'NONE') && ~strcmp(op,'None')
    line = strcat(line,', OP=',op);
    line = strcat(line,', OP=',op);
end
end


if ~strcmp(timeinterval,'none') && ~strcmp(timeinterval,'NONE') && ~strcmp(timeinterval,'None')
if ~strcmp(timeinterval,'none') && ~strcmp(timeinterval,'NONE') && ~strcmp(timeinterval,'None')
    line = strcat(line,', TIME INTERVAL=',timeinterval);
    line = strcat(line,', TIME INTERVAL=',timeinterval);
end
end


if ~strcmp(variable,'none') && ~strcmp(variable,'NONE') && ~strcmp(variable,'None')
if ~strcmp(variable,'none') && ~strcmp(variable,'NONE') && ~strcmp(variable,'None')
    line = strcat(line,', VARIABLE=',variable);
    line = strcat(line,', VARIABLE=',variable);
end
end


if ~strcmp(sensor,'none') && ~strcmp(sensor,'NONE') && ~strcmp(sensor,'None')
if ~strcmp(sensor,'none') && ~strcmp(sensor,'NONE') && ~strcmp(sensor,'None')
    line = strcat(line,', SENSOR=',sensor);
    line = strcat(line,', SENSOR=',sensor);
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
