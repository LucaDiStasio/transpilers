function[]=writeLTXalph(filepath,args,options)
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
%  A function to create a Latex file.
% causes the current value of a specified counter to be printed in alphabetic characters%
%%

fileId = fopen(filepath, 'a');

fprintf(fileId,'\n');
line = '\alph';

if ~strcmp(options,'none') && ~strcmp(options,'NONE') && ~strcmp(options,'None')
    line = strcat(line,'[',options,']');
end

if ~isempty(args)
    line = strcat(line,'{');
    for i=1:length(args)
        dims = size(args);
        if dims(1)==1 && dims(2)==1
            line = strcat(line,args{i});
        elseif dims(1)>1 && dims(2)==1
            try
                line = strcat(line,args{i}{1});
            catch exception
                line = strcat(line,args{i});
            end
        elseif dims(1)==1 && dims(2)>1
            try
                line = strcat(line,args{1}{i});
            catch exception
                line = strcat(line,args{i});
            end
        else
            line = strcat(line,args{i});
        end
    end
    line = strcat(line,'}');
end
fprintf(fileId,strcat(line,'\n'));

fclose(fileId);

return
