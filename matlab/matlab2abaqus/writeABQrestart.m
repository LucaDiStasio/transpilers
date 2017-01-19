function[]=writeABQrestart(filepath,read,write,cycle,endstep,inc,iteration,step,frequency,numberinterval,timemarks,overlay,read,write,step,endstep,interval,numberinterval,timemarks,overlay,single,read,write,endstep,inc,step,frequency,numberinterval,data,comment)
function[]=writeABQrestart(filepath,read,write,cycle,endstep,inc,iteration,step,frequency,numberinterval,timemarks,overlay,read,write,step,endstep,interval,numberinterval,timemarks,overlay,single,read,write,endstep,inc,step,frequency,numberinterval,data,comment)
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


line = '*RESTART';
line = '*RESTART';


if ~strcmp(read,'none') && ~strcmp(read,'NONE') && ~strcmp(read,'None')
if ~strcmp(read,'none') && ~strcmp(read,'NONE') && ~strcmp(read,'None')
    line = strcat(line,', READ=',read);
    line = strcat(line,', READ=',read);
end
end


if ~strcmp(write,'none') && ~strcmp(write,'NONE') && ~strcmp(write,'None')
if ~strcmp(write,'none') && ~strcmp(write,'NONE') && ~strcmp(write,'None')
    line = strcat(line,', WRITE=',write);
    line = strcat(line,', WRITE=',write);
end
end


if ~strcmp(cycle,'none') && ~strcmp(cycle,'NONE') && ~strcmp(cycle,'None')
if ~strcmp(cycle,'none') && ~strcmp(cycle,'NONE') && ~strcmp(cycle,'None')
    line = strcat(line,', CYCLE=',cycle);
    line = strcat(line,', CYCLE=',cycle);
end
end


if ~strcmp(endstep,'none') && ~strcmp(endstep,'NONE') && ~strcmp(endstep,'None')
if ~strcmp(endstep,'none') && ~strcmp(endstep,'NONE') && ~strcmp(endstep,'None')
    line = strcat(line,', END STEP=',endstep);
    line = strcat(line,', END STEP=',endstep);
end
end


if ~strcmp(inc,'none') && ~strcmp(inc,'NONE') && ~strcmp(inc,'None')
if ~strcmp(inc,'none') && ~strcmp(inc,'NONE') && ~strcmp(inc,'None')
    line = strcat(line,', INC=',inc);
    line = strcat(line,', INC=',inc);
end
end


if ~strcmp(iteration,'none') && ~strcmp(iteration,'NONE') && ~strcmp(iteration,'None')
if ~strcmp(iteration,'none') && ~strcmp(iteration,'NONE') && ~strcmp(iteration,'None')
    line = strcat(line,', ITERATION=',iteration);
    line = strcat(line,', ITERATION=',iteration);
end
end


if ~strcmp(step,'none') && ~strcmp(step,'NONE') && ~strcmp(step,'None')
if ~strcmp(step,'none') && ~strcmp(step,'NONE') && ~strcmp(step,'None')
    line = strcat(line,', STEP=',step);
    line = strcat(line,', STEP=',step);
end
end


if ~strcmp(frequency,'none') && ~strcmp(frequency,'NONE') && ~strcmp(frequency,'None')
if ~strcmp(frequency,'none') && ~strcmp(frequency,'NONE') && ~strcmp(frequency,'None')
    line = strcat(line,', FREQUENCY=',frequency);
    line = strcat(line,', FREQUENCY=',frequency);
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


if ~strcmp(overlay,'none') && ~strcmp(overlay,'NONE') && ~strcmp(overlay,'None')
if ~strcmp(overlay,'none') && ~strcmp(overlay,'NONE') && ~strcmp(overlay,'None')
    line = strcat(line,', OVERLAY=',overlay);
    line = strcat(line,', OVERLAY=',overlay);
end
end


if ~strcmp(read,'none') && ~strcmp(read,'NONE') && ~strcmp(read,'None')
if ~strcmp(read,'none') && ~strcmp(read,'NONE') && ~strcmp(read,'None')
    line = strcat(line,', READ=',read);
    line = strcat(line,', READ=',read);
end
end


if ~strcmp(write,'none') && ~strcmp(write,'NONE') && ~strcmp(write,'None')
if ~strcmp(write,'none') && ~strcmp(write,'NONE') && ~strcmp(write,'None')
    line = strcat(line,', WRITE=',write);
    line = strcat(line,', WRITE=',write);
end
end


if ~strcmp(step,'none') && ~strcmp(step,'NONE') && ~strcmp(step,'None')
if ~strcmp(step,'none') && ~strcmp(step,'NONE') && ~strcmp(step,'None')
    line = strcat(line,', STEP=',step);
    line = strcat(line,', STEP=',step);
end
end


if ~strcmp(endstep,'none') && ~strcmp(endstep,'NONE') && ~strcmp(endstep,'None')
if ~strcmp(endstep,'none') && ~strcmp(endstep,'NONE') && ~strcmp(endstep,'None')
    line = strcat(line,', END STEP=',endstep);
    line = strcat(line,', END STEP=',endstep);
end
end


if ~strcmp(interval,'none') && ~strcmp(interval,'NONE') && ~strcmp(interval,'None')
if ~strcmp(interval,'none') && ~strcmp(interval,'NONE') && ~strcmp(interval,'None')
    line = strcat(line,', INTERVAL=',interval);
    line = strcat(line,', INTERVAL=',interval);
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


if ~strcmp(overlay,'none') && ~strcmp(overlay,'NONE') && ~strcmp(overlay,'None')
if ~strcmp(overlay,'none') && ~strcmp(overlay,'NONE') && ~strcmp(overlay,'None')
    line = strcat(line,', OVERLAY=',overlay);
    line = strcat(line,', OVERLAY=',overlay);
end
end


if ~strcmp(single,'none') && ~strcmp(single,'NONE') && ~strcmp(single,'None')
if ~strcmp(single,'none') && ~strcmp(single,'NONE') && ~strcmp(single,'None')
    line = strcat(line,', SINGLE=',single);
    line = strcat(line,', SINGLE=',single);
end
end


if ~strcmp(read,'none') && ~strcmp(read,'NONE') && ~strcmp(read,'None')
if ~strcmp(read,'none') && ~strcmp(read,'NONE') && ~strcmp(read,'None')
    line = strcat(line,', READ=',read);
    line = strcat(line,', READ=',read);
end
end


if ~strcmp(write,'none') && ~strcmp(write,'NONE') && ~strcmp(write,'None')
if ~strcmp(write,'none') && ~strcmp(write,'NONE') && ~strcmp(write,'None')
    line = strcat(line,', WRITE=',write);
    line = strcat(line,', WRITE=',write);
end
end


if ~strcmp(endstep,'none') && ~strcmp(endstep,'NONE') && ~strcmp(endstep,'None')
if ~strcmp(endstep,'none') && ~strcmp(endstep,'NONE') && ~strcmp(endstep,'None')
    line = strcat(line,', END STEP=',endstep);
    line = strcat(line,', END STEP=',endstep);
end
end


if ~strcmp(inc,'none') && ~strcmp(inc,'NONE') && ~strcmp(inc,'None')
if ~strcmp(inc,'none') && ~strcmp(inc,'NONE') && ~strcmp(inc,'None')
    line = strcat(line,', INC=',inc);
    line = strcat(line,', INC=',inc);
end
end


if ~strcmp(step,'none') && ~strcmp(step,'NONE') && ~strcmp(step,'None')
if ~strcmp(step,'none') && ~strcmp(step,'NONE') && ~strcmp(step,'None')
    line = strcat(line,', STEP=',step);
    line = strcat(line,', STEP=',step);
end
end


if ~strcmp(frequency,'none') && ~strcmp(frequency,'NONE') && ~strcmp(frequency,'None')
if ~strcmp(frequency,'none') && ~strcmp(frequency,'NONE') && ~strcmp(frequency,'None')
    line = strcat(line,', FREQUENCY=',frequency);
    line = strcat(line,', FREQUENCY=',frequency);
end
end


if ~strcmp(numberinterval,'none') && ~strcmp(numberinterval,'NONE') && ~strcmp(numberinterval,'None')
if ~strcmp(numberinterval,'none') && ~strcmp(numberinterval,'NONE') && ~strcmp(numberinterval,'None')
    line = strcat(line,', NUMBER INTERVAL=',numberinterval);
    line = strcat(line,', NUMBER INTERVAL=',numberinterval);
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
