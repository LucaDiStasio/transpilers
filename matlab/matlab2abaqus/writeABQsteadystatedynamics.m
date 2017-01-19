function[]=writeABQsteadystatedynamics(filepath,direct,subspaceprojection,dampingchange,frequencyscale,frictiondamping,interval,realonly,stiffnesschange,data,comment)
function[]=writeABQsteadystatedynamics(filepath,direct,subspaceprojection,dampingchange,frequencyscale,frictiondamping,interval,realonly,stiffnesschange,data,comment)
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


line = '*STEADY STATE DYNAMICS';
line = '*STEADY STATE DYNAMICS';


if ~strcmp(direct,'none') && ~strcmp(direct,'NONE') && ~strcmp(direct,'None')
if ~strcmp(direct,'none') && ~strcmp(direct,'NONE') && ~strcmp(direct,'None')
    line = strcat(line,', DIRECT=',direct);
    line = strcat(line,', DIRECT=',direct);
end
end


if ~strcmp(subspaceprojection,'none') && ~strcmp(subspaceprojection,'NONE') && ~strcmp(subspaceprojection,'None')
if ~strcmp(subspaceprojection,'none') && ~strcmp(subspaceprojection,'NONE') && ~strcmp(subspaceprojection,'None')
    line = strcat(line,', SUBSPACE PROJECTION=',subspaceprojection);
    line = strcat(line,', SUBSPACE PROJECTION=',subspaceprojection);
end
end


if ~strcmp(dampingchange,'none') && ~strcmp(dampingchange,'NONE') && ~strcmp(dampingchange,'None')
if ~strcmp(dampingchange,'none') && ~strcmp(dampingchange,'NONE') && ~strcmp(dampingchange,'None')
    line = strcat(line,', DAMPING CHANGE=',dampingchange);
    line = strcat(line,', DAMPING CHANGE=',dampingchange);
end
end


if ~strcmp(frequencyscale,'none') && ~strcmp(frequencyscale,'NONE') && ~strcmp(frequencyscale,'None')
if ~strcmp(frequencyscale,'none') && ~strcmp(frequencyscale,'NONE') && ~strcmp(frequencyscale,'None')
    line = strcat(line,', FREQUENCY SCALE=',frequencyscale);
    line = strcat(line,', FREQUENCY SCALE=',frequencyscale);
end
end


if ~strcmp(frictiondamping,'none') && ~strcmp(frictiondamping,'NONE') && ~strcmp(frictiondamping,'None')
if ~strcmp(frictiondamping,'none') && ~strcmp(frictiondamping,'NONE') && ~strcmp(frictiondamping,'None')
    line = strcat(line,', FRICTION DAMPING=',frictiondamping);
    line = strcat(line,', FRICTION DAMPING=',frictiondamping);
end
end


if ~strcmp(interval,'none') && ~strcmp(interval,'NONE') && ~strcmp(interval,'None')
if ~strcmp(interval,'none') && ~strcmp(interval,'NONE') && ~strcmp(interval,'None')
    line = strcat(line,', INTERVAL=',interval);
    line = strcat(line,', INTERVAL=',interval);
end
end


if ~strcmp(realonly,'none') && ~strcmp(realonly,'NONE') && ~strcmp(realonly,'None')
if ~strcmp(realonly,'none') && ~strcmp(realonly,'NONE') && ~strcmp(realonly,'None')
    line = strcat(line,', REAL ONLY=',realonly);
    line = strcat(line,', REAL ONLY=',realonly);
end
end


if ~strcmp(stiffnesschange,'none') && ~strcmp(stiffnesschange,'NONE') && ~strcmp(stiffnesschange,'None')
if ~strcmp(stiffnesschange,'none') && ~strcmp(stiffnesschange,'NONE') && ~strcmp(stiffnesschange,'None')
    line = strcat(line,', STIFFNESS CHANGE=',stiffnesschange);
    line = strcat(line,', STIFFNESS CHANGE=',stiffnesschange);
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
