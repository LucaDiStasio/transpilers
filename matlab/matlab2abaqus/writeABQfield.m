function[]=writeABQfield(filepath,variable,amplitude,input,op,file,bstep,binc,estep,einc,outputvariable,interpolate,user,number,blocking,data,comment)
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

line = '*FIELD';

if ~strcmp(variable,'none') && ~strcmp(variable,'NONE') && ~strcmp(variable,'None')
    line = strcat(line,', VARIABLE=',variable);
end

if ~strcmp(amplitude,'none') && ~strcmp(amplitude,'NONE') && ~strcmp(amplitude,'None')
    line = strcat(line,', AMPLITUDE=',amplitude);
end

if ~strcmp(input,'none') && ~strcmp(input,'NONE') && ~strcmp(input,'None')
    line = strcat(line,', INPUT=',input);
end

if ~strcmp(op,'none') && ~strcmp(op,'NONE') && ~strcmp(op,'None')
    line = strcat(line,', OP=',op);
end

if ~strcmp(file,'none') && ~strcmp(file,'NONE') && ~strcmp(file,'None')
    line = strcat(line,', FILE=',file);
end

if ~strcmp(bstep,'none') && ~strcmp(bstep,'NONE') && ~strcmp(bstep,'None')
    line = strcat(line,', BSTEP=',bstep);
end

if ~strcmp(binc,'none') && ~strcmp(binc,'NONE') && ~strcmp(binc,'None')
    line = strcat(line,', BINC=',binc);
end

if ~strcmp(estep,'none') && ~strcmp(estep,'NONE') && ~strcmp(estep,'None')
    line = strcat(line,', ESTEP=',estep);
end

if ~strcmp(einc,'none') && ~strcmp(einc,'NONE') && ~strcmp(einc,'None')
    line = strcat(line,', EINC=',einc);
end

if ~strcmp(outputvariable,'none') && ~strcmp(outputvariable,'NONE') && ~strcmp(outputvariable,'None')
    line = strcat(line,', OUTPUT VARIABLE=',outputvariable);
end

if ~strcmp(interpolate,'none') && ~strcmp(interpolate,'NONE') && ~strcmp(interpolate,'None')
    line = strcat(line,', INTERPOLATE=',interpolate);
end

if ~strcmp(user,'none') && ~strcmp(user,'NONE') && ~strcmp(user,'None')
    line = strcat(line,', USER=',user);
end

if ~strcmp(number,'none') && ~strcmp(number,'NONE') && ~strcmp(number,'None')
    line = strcat(line,', NUMBER=',number);
end

if ~strcmp(blocking,'none') && ~strcmp(blocking,'NONE') && ~strcmp(blocking,'None')
    line = strcat(line,', BLOCKING=',blocking);
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
