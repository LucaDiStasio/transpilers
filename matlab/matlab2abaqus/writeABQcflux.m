function[]=writeABQcflux(filepath,file,amplitude,inc,op,regiontype,step,data,comment)
%%
%==============================================================================
% Copyright (c) 2016-2017 Universite de Lorraine & Lulea tekniska universitet
% Author: Luca Di Stasio <luca.distasio@gmail.com>
%                        <luca.distasio@ingpec.eu>
%
% Redistribution and use in source and binary forms, with or without
% modification, are permitted provided that the following conditions are met:
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

line = '*CFLUX';

if ~strcmp(file,'none') && ~strcmp(file,'NONE') && ~strcmp(file,'None')
    line = strcat(line,', FILE=',file);
end

if ~strcmp(amplitude,'none') && ~strcmp(amplitude,'NONE') && ~strcmp(amplitude,'None')
    line = strcat(line,', AMPLITUDE=',amplitude);
end

if ~strcmp(inc,'none') && ~strcmp(inc,'NONE') && ~strcmp(inc,'None')
    line = strcat(line,', INC=',inc);
end

if ~strcmp(op,'none') && ~strcmp(op,'NONE') && ~strcmp(op,'None')
    line = strcat(line,', OP=',op);
end

if ~strcmp(regiontype,'none') && ~strcmp(regiontype,'NONE') && ~strcmp(regiontype,'None')
    line = strcat(line,', REGION TYPE=',regiontype);
end

if ~strcmp(step,'none') && ~strcmp(step,'NONE') && ~strcmp(step,'None')
    line = strcat(line,', STEP=',step);
end

fprintf(fileId,strcat(line,'\n'));

if ~strcmp(comment,'none') && ~strcmp(comment,'NONE') && ~strcmp(comment,'None')
    fprintf(fileId,strcat('**',comment,'\n'));
end

for i=1:length(data)
    dims = size(data);
    if dims(1)==1 && dims(2)==1
           fprintf(fileId,'%s',strcat(' ',data{i}));
           fprintf(fileId,'\n');
    elseif dims(1)>1 && dims(2)==1
       try
           fprintf(fileId,'%s',strcat(' ',data{i}{1}));
           fprintf(fileId,'\n');
       catch exception
           fprintf(fileId,'%s',strcat(' ',data{i}));
           fprintf(fileId,'\n');
       end
    elseif dims(1)==1 && dims(2)>1
       try
           fprintf(fileId,'%s',strcat(' ',data{1}{i}));
           fprintf(fileId,'\n');
       catch exception
           fprintf(fileId,'%s',strcat(' ',data{i}));
           fprintf(fileId,'\n');
       end
    else
           fprintf(fileId,'%s',strcat(' ',data{i}));
           fprintf(fileId,'\n');
    end
end

fprintf(fileId,'**\n');

fclose(fileId);

return
