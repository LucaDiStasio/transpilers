function[]=writeABQsteadystatedynamics(filepath,direct,subspaceprojection,dampingchange,frequencyscale,frictiondamping,interval,realonly,stiffnesschange,data,comment)
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

line = '*STEADY STATE DYNAMICS';

if ~strcmp(direct,'none') && ~strcmp(direct,'NONE') && ~strcmp(direct,'None')
    line = strcat(line,', DIRECT=',direct);
end

if ~strcmp(subspaceprojection,'none') && ~strcmp(subspaceprojection,'NONE') && ~strcmp(subspaceprojection,'None')
    line = strcat(line,', SUBSPACE PROJECTION=',subspaceprojection);
end

if ~strcmp(dampingchange,'none') && ~strcmp(dampingchange,'NONE') && ~strcmp(dampingchange,'None')
    line = strcat(line,', DAMPING CHANGE=',dampingchange);
end

if ~strcmp(frequencyscale,'none') && ~strcmp(frequencyscale,'NONE') && ~strcmp(frequencyscale,'None')
    line = strcat(line,', FREQUENCY SCALE=',frequencyscale);
end

if ~strcmp(frictiondamping,'none') && ~strcmp(frictiondamping,'NONE') && ~strcmp(frictiondamping,'None')
    line = strcat(line,', FRICTION DAMPING=',frictiondamping);
end

if ~strcmp(interval,'none') && ~strcmp(interval,'NONE') && ~strcmp(interval,'None')
    line = strcat(line,', INTERVAL=',interval);
end

if ~strcmp(realonly,'none') && ~strcmp(realonly,'NONE') && ~strcmp(realonly,'None')
    line = strcat(line,', REAL ONLY=',realonly);
end

if ~strcmp(stiffnesschange,'none') && ~strcmp(stiffnesschange,'NONE') && ~strcmp(stiffnesschange,'None')
    line = strcat(line,', STIFFNESS CHANGE=',stiffnesschange);
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
