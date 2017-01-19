function[]=writeABQsurfacebehavior(filepath,augmentedlagrange,direct,penalty,noseparation,pressureoverclosure,data,comment)
function[]=writeABQsurfacebehavior(filepath,augmentedlagrange,direct,penalty,noseparation,pressureoverclosure,data,comment)
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


line = '*SURFACE BEHAVIOR';
line = '*SURFACE BEHAVIOR';


if ~strcmp(augmentedlagrange,'none') && ~strcmp(augmentedlagrange,'NONE') && ~strcmp(augmentedlagrange,'None')
if ~strcmp(augmentedlagrange,'none') && ~strcmp(augmentedlagrange,'NONE') && ~strcmp(augmentedlagrange,'None')
    line = strcat(line,', AUGMENTED LAGRANGE=',augmentedlagrange);
    line = strcat(line,', AUGMENTED LAGRANGE=',augmentedlagrange);
end
end


if ~strcmp(direct,'none') && ~strcmp(direct,'NONE') && ~strcmp(direct,'None')
if ~strcmp(direct,'none') && ~strcmp(direct,'NONE') && ~strcmp(direct,'None')
    line = strcat(line,', DIRECT=',direct);
    line = strcat(line,', DIRECT=',direct);
end
end


if ~strcmp(penalty,'none') && ~strcmp(penalty,'NONE') && ~strcmp(penalty,'None')
if ~strcmp(penalty,'none') && ~strcmp(penalty,'NONE') && ~strcmp(penalty,'None')
    line = strcat(line,', PENALTY=',penalty);
    line = strcat(line,', PENALTY=',penalty);
end
end


if ~strcmp(noseparation,'none') && ~strcmp(noseparation,'NONE') && ~strcmp(noseparation,'None')
if ~strcmp(noseparation,'none') && ~strcmp(noseparation,'NONE') && ~strcmp(noseparation,'None')
    line = strcat(line,', NO SEPARATION=',noseparation);
    line = strcat(line,', NO SEPARATION=',noseparation);
end
end


if ~strcmp(pressureoverclosure,'none') && ~strcmp(pressureoverclosure,'NONE') && ~strcmp(pressureoverclosure,'None')
if ~strcmp(pressureoverclosure,'none') && ~strcmp(pressureoverclosure,'NONE') && ~strcmp(pressureoverclosure,'None')
    line = strcat(line,', PRESSURE-OVERCLOSURE=',pressureoverclosure);
    line = strcat(line,', PRESSURE-OVERCLOSURE=',pressureoverclosure);
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
