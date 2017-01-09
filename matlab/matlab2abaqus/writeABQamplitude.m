function[]=writeABQamplitude(filepath,name,definition,input,scalex,scaley,shiftx,shifty,time,value,fixedinterval,begin,smooth,properties,variables,data,comment)
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

line = '*AMPLITUDE';

if ~strcmp(name,'none') && ~strcmp(name,'NONE') && ~strcmp(name,'None')
    line = strcat(line,', NAME=',name);
end

if ~strcmp(definition,'none') && ~strcmp(definition,'NONE') && ~strcmp(definition,'None')
    line = strcat(line,', DEFINITION=',definition);
end

if ~strcmp(input,'none') && ~strcmp(input,'NONE') && ~strcmp(input,'None')
    line = strcat(line,', INPUT=',input);
end

if ~strcmp(scalex,'none') && ~strcmp(scalex,'NONE') && ~strcmp(scalex,'None')
    line = strcat(line,', SCALEX=',scalex);
end

if ~strcmp(scaley,'none') && ~strcmp(scaley,'NONE') && ~strcmp(scaley,'None')
    line = strcat(line,', SCALEY=',scaley);
end

if ~strcmp(shiftx,'none') && ~strcmp(shiftx,'NONE') && ~strcmp(shiftx,'None')
    line = strcat(line,', SHIFTX=',shiftx);
end

if ~strcmp(shifty,'none') && ~strcmp(shifty,'NONE') && ~strcmp(shifty,'None')
    line = strcat(line,', SHIFTY=',shifty);
end

if ~strcmp(time,'none') && ~strcmp(time,'NONE') && ~strcmp(time,'None')
    line = strcat(line,', TIME=',time);
end

if ~strcmp(value,'none') && ~strcmp(value,'NONE') && ~strcmp(value,'None')
    line = strcat(line,', VALUE=',value);
end

if ~strcmp(fixedinterval,'none') && ~strcmp(fixedinterval,'NONE') && ~strcmp(fixedinterval,'None')
    line = strcat(line,', FIXED INTERVAL=',fixedinterval);
end

if ~strcmp(begin,'none') && ~strcmp(begin,'NONE') && ~strcmp(begin,'None')
    line = strcat(line,', BEGIN=',begin);
end

if ~strcmp(smooth,'none') && ~strcmp(smooth,'NONE') && ~strcmp(smooth,'None')
    line = strcat(line,', SMOOTH=',smooth);
end

if ~strcmp(properties,'none') && ~strcmp(properties,'NONE') && ~strcmp(properties,'None')
    line = strcat(line,', PROPERTIES=',properties);
end

if ~strcmp(variables,'none') && ~strcmp(variables,'NONE') && ~strcmp(variables,'None')
    line = strcat(line,', VARIABLES=',variables);
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
