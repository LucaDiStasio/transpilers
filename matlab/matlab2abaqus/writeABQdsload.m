function[]=writeABQdsload(filepath,cyclicmode,amplitude,constantresultant,follower,op,orientation,refnode,imaginary,real,data,comment)
function[]=writeABQdsload(filepath,cyclicmode,amplitude,constantresultant,follower,op,orientation,refnode,imaginary,real,data,comment)
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


line = '*DSLOAD';
line = '*DSLOAD';


if ~strcmp(cyclicmode,'none') && ~strcmp(cyclicmode,'NONE') && ~strcmp(cyclicmode,'None')
if ~strcmp(cyclicmode,'none') && ~strcmp(cyclicmode,'NONE') && ~strcmp(cyclicmode,'None')
    line = strcat(line,', CYCLIC MODE=',cyclicmode);
    line = strcat(line,', CYCLIC MODE=',cyclicmode);
end
end


if ~strcmp(amplitude,'none') && ~strcmp(amplitude,'NONE') && ~strcmp(amplitude,'None')
if ~strcmp(amplitude,'none') && ~strcmp(amplitude,'NONE') && ~strcmp(amplitude,'None')
    line = strcat(line,', AMPLITUDE=',amplitude);
    line = strcat(line,', AMPLITUDE=',amplitude);
end
end


if ~strcmp(constantresultant,'none') && ~strcmp(constantresultant,'NONE') && ~strcmp(constantresultant,'None')
if ~strcmp(constantresultant,'none') && ~strcmp(constantresultant,'NONE') && ~strcmp(constantresultant,'None')
    line = strcat(line,', CONSTANT RESULTANT=',constantresultant);
    line = strcat(line,', CONSTANT RESULTANT=',constantresultant);
end
end


if ~strcmp(follower,'none') && ~strcmp(follower,'NONE') && ~strcmp(follower,'None')
if ~strcmp(follower,'none') && ~strcmp(follower,'NONE') && ~strcmp(follower,'None')
    line = strcat(line,', FOLLOWER=',follower);
    line = strcat(line,', FOLLOWER=',follower);
end
end


if ~strcmp(op,'none') && ~strcmp(op,'NONE') && ~strcmp(op,'None')
if ~strcmp(op,'none') && ~strcmp(op,'NONE') && ~strcmp(op,'None')
    line = strcat(line,', OP=',op);
    line = strcat(line,', OP=',op);
end
end


if ~strcmp(orientation,'none') && ~strcmp(orientation,'NONE') && ~strcmp(orientation,'None')
if ~strcmp(orientation,'none') && ~strcmp(orientation,'NONE') && ~strcmp(orientation,'None')
    line = strcat(line,', ORIENTATION=',orientation);
    line = strcat(line,', ORIENTATION=',orientation);
end
end


if ~strcmp(refnode,'none') && ~strcmp(refnode,'NONE') && ~strcmp(refnode,'None')
if ~strcmp(refnode,'none') && ~strcmp(refnode,'NONE') && ~strcmp(refnode,'None')
    line = strcat(line,', REF NODE=',refnode);
    line = strcat(line,', REF NODE=',refnode);
end
end


if ~strcmp(imaginary,'none') && ~strcmp(imaginary,'NONE') && ~strcmp(imaginary,'None')
if ~strcmp(imaginary,'none') && ~strcmp(imaginary,'NONE') && ~strcmp(imaginary,'None')
    line = strcat(line,', IMAGINARY=',imaginary);
    line = strcat(line,', IMAGINARY=',imaginary);
end
end


if ~strcmp(real,'none') && ~strcmp(real,'NONE') && ~strcmp(real,'None')
if ~strcmp(real,'none') && ~strcmp(real,'NONE') && ~strcmp(real,'None')
    line = strcat(line,', REAL=',real);
    line = strcat(line,', REAL=',real);
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
