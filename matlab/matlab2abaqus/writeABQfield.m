function[]=writeABQfield(filepath,variable,amplitude,input,op,file,bstep,binc,estep,einc,outputvariable,interpolate,user,number,blocking,data,comment)
function[]=writeABQfield(filepath,variable,amplitude,input,op,file,bstep,binc,estep,einc,outputvariable,interpolate,user,number,blocking,data,comment)
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


line = '*FIELD';
line = '*FIELD';


if ~strcmp(variable,'none') && ~strcmp(variable,'NONE') && ~strcmp(variable,'None')
if ~strcmp(variable,'none') && ~strcmp(variable,'NONE') && ~strcmp(variable,'None')
    line = strcat(line,', VARIABLE=',variable);
    line = strcat(line,', VARIABLE=',variable);
end
end


if ~strcmp(amplitude,'none') && ~strcmp(amplitude,'NONE') && ~strcmp(amplitude,'None')
if ~strcmp(amplitude,'none') && ~strcmp(amplitude,'NONE') && ~strcmp(amplitude,'None')
    line = strcat(line,', AMPLITUDE=',amplitude);
    line = strcat(line,', AMPLITUDE=',amplitude);
end
end


if ~strcmp(input,'none') && ~strcmp(input,'NONE') && ~strcmp(input,'None')
if ~strcmp(input,'none') && ~strcmp(input,'NONE') && ~strcmp(input,'None')
    line = strcat(line,', INPUT=',input);
    line = strcat(line,', INPUT=',input);
end
end


if ~strcmp(op,'none') && ~strcmp(op,'NONE') && ~strcmp(op,'None')
if ~strcmp(op,'none') && ~strcmp(op,'NONE') && ~strcmp(op,'None')
    line = strcat(line,', OP=',op);
    line = strcat(line,', OP=',op);
end
end


if ~strcmp(file,'none') && ~strcmp(file,'NONE') && ~strcmp(file,'None')
if ~strcmp(file,'none') && ~strcmp(file,'NONE') && ~strcmp(file,'None')
    line = strcat(line,', FILE=',file);
    line = strcat(line,', FILE=',file);
end
end


if ~strcmp(bstep,'none') && ~strcmp(bstep,'NONE') && ~strcmp(bstep,'None')
if ~strcmp(bstep,'none') && ~strcmp(bstep,'NONE') && ~strcmp(bstep,'None')
    line = strcat(line,', BSTEP=',bstep);
    line = strcat(line,', BSTEP=',bstep);
end
end


if ~strcmp(binc,'none') && ~strcmp(binc,'NONE') && ~strcmp(binc,'None')
if ~strcmp(binc,'none') && ~strcmp(binc,'NONE') && ~strcmp(binc,'None')
    line = strcat(line,', BINC=',binc);
    line = strcat(line,', BINC=',binc);
end
end


if ~strcmp(estep,'none') && ~strcmp(estep,'NONE') && ~strcmp(estep,'None')
if ~strcmp(estep,'none') && ~strcmp(estep,'NONE') && ~strcmp(estep,'None')
    line = strcat(line,', ESTEP=',estep);
    line = strcat(line,', ESTEP=',estep);
end
end


if ~strcmp(einc,'none') && ~strcmp(einc,'NONE') && ~strcmp(einc,'None')
if ~strcmp(einc,'none') && ~strcmp(einc,'NONE') && ~strcmp(einc,'None')
    line = strcat(line,', EINC=',einc);
    line = strcat(line,', EINC=',einc);
end
end


if ~strcmp(outputvariable,'none') && ~strcmp(outputvariable,'NONE') && ~strcmp(outputvariable,'None')
if ~strcmp(outputvariable,'none') && ~strcmp(outputvariable,'NONE') && ~strcmp(outputvariable,'None')
    line = strcat(line,', OUTPUT VARIABLE=',outputvariable);
    line = strcat(line,', OUTPUT VARIABLE=',outputvariable);
end
end


if ~strcmp(interpolate,'none') && ~strcmp(interpolate,'NONE') && ~strcmp(interpolate,'None')
if ~strcmp(interpolate,'none') && ~strcmp(interpolate,'NONE') && ~strcmp(interpolate,'None')
    line = strcat(line,', INTERPOLATE=',interpolate);
    line = strcat(line,', INTERPOLATE=',interpolate);
end
end


if ~strcmp(user,'none') && ~strcmp(user,'NONE') && ~strcmp(user,'None')
if ~strcmp(user,'none') && ~strcmp(user,'NONE') && ~strcmp(user,'None')
    line = strcat(line,', USER=',user);
    line = strcat(line,', USER=',user);
end
end


if ~strcmp(number,'none') && ~strcmp(number,'NONE') && ~strcmp(number,'None')
if ~strcmp(number,'none') && ~strcmp(number,'NONE') && ~strcmp(number,'None')
    line = strcat(line,', NUMBER=',number);
    line = strcat(line,', NUMBER=',number);
end
end


if ~strcmp(blocking,'none') && ~strcmp(blocking,'NONE') && ~strcmp(blocking,'None')
if ~strcmp(blocking,'none') && ~strcmp(blocking,'NONE') && ~strcmp(blocking,'None')
    line = strcat(line,', BLOCKING=',blocking);
    line = strcat(line,', BLOCKING=',blocking);
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
