function[]=writeABQsteadystatetransport(filepath,allsdtol,continue,direct,elset,factor,inertia,longterm,mullins,passbypass,stabilize,data,comment)
function[]=writeABQsteadystatetransport(filepath,allsdtol,continue,direct,elset,factor,inertia,longterm,mullins,passbypass,stabilize,data,comment)
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


line = '*STEADY STATE TRANSPORT';
line = '*STEADY STATE TRANSPORT';


if ~strcmp(allsdtol,'none') && ~strcmp(allsdtol,'NONE') && ~strcmp(allsdtol,'None')
if ~strcmp(allsdtol,'none') && ~strcmp(allsdtol,'NONE') && ~strcmp(allsdtol,'None')
    line = strcat(line,', ALLSDTOL=',allsdtol);
    line = strcat(line,', ALLSDTOL=',allsdtol);
end
end


if ~strcmp(continue,'none') && ~strcmp(continue,'NONE') && ~strcmp(continue,'None')
if ~strcmp(continue,'none') && ~strcmp(continue,'NONE') && ~strcmp(continue,'None')
    line = strcat(line,', CONTINUE=',continue);
    line = strcat(line,', CONTINUE=',continue);
end
end


if ~strcmp(direct,'none') && ~strcmp(direct,'NONE') && ~strcmp(direct,'None')
if ~strcmp(direct,'none') && ~strcmp(direct,'NONE') && ~strcmp(direct,'None')
    line = strcat(line,', DIRECT=',direct);
    line = strcat(line,', DIRECT=',direct);
end
end


if ~strcmp(elset,'none') && ~strcmp(elset,'NONE') && ~strcmp(elset,'None')
if ~strcmp(elset,'none') && ~strcmp(elset,'NONE') && ~strcmp(elset,'None')
    line = strcat(line,', ELSET=',elset);
    line = strcat(line,', ELSET=',elset);
end
end


if ~strcmp(factor,'none') && ~strcmp(factor,'NONE') && ~strcmp(factor,'None')
if ~strcmp(factor,'none') && ~strcmp(factor,'NONE') && ~strcmp(factor,'None')
    line = strcat(line,', FACTOR=',factor);
    line = strcat(line,', FACTOR=',factor);
end
end


if ~strcmp(inertia,'none') && ~strcmp(inertia,'NONE') && ~strcmp(inertia,'None')
if ~strcmp(inertia,'none') && ~strcmp(inertia,'NONE') && ~strcmp(inertia,'None')
    line = strcat(line,', INERTIA=',inertia);
    line = strcat(line,', INERTIA=',inertia);
end
end


if ~strcmp(longterm,'none') && ~strcmp(longterm,'NONE') && ~strcmp(longterm,'None')
if ~strcmp(longterm,'none') && ~strcmp(longterm,'NONE') && ~strcmp(longterm,'None')
    line = strcat(line,', LONG TERM=',longterm);
    line = strcat(line,', LONG TERM=',longterm);
end
end


if ~strcmp(mullins,'none') && ~strcmp(mullins,'NONE') && ~strcmp(mullins,'None')
if ~strcmp(mullins,'none') && ~strcmp(mullins,'NONE') && ~strcmp(mullins,'None')
    line = strcat(line,', MULLINS=',mullins);
    line = strcat(line,', MULLINS=',mullins);
end
end


if ~strcmp(passbypass,'none') && ~strcmp(passbypass,'NONE') && ~strcmp(passbypass,'None')
if ~strcmp(passbypass,'none') && ~strcmp(passbypass,'NONE') && ~strcmp(passbypass,'None')
    line = strcat(line,', PASS BY PASS=',passbypass);
    line = strcat(line,', PASS BY PASS=',passbypass);
end
end


if ~strcmp(stabilize,'none') && ~strcmp(stabilize,'NONE') && ~strcmp(stabilize,'None')
if ~strcmp(stabilize,'none') && ~strcmp(stabilize,'NONE') && ~strcmp(stabilize,'None')
    line = strcat(line,', STABILIZE=',stabilize);
    line = strcat(line,', STABILIZE=',stabilize);
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
