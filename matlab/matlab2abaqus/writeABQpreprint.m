function[]=writeABQpreprint(filepath,contact,echo,history,model,parsubstitution,parvalues,massproperty,data,comment)
function[]=writeABQpreprint(filepath,contact,echo,history,model,parsubstitution,parvalues,massproperty,data,comment)
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


line = '*PREPRINT';
line = '*PREPRINT';


if ~strcmp(contact,'none') && ~strcmp(contact,'NONE') && ~strcmp(contact,'None')
if ~strcmp(contact,'none') && ~strcmp(contact,'NONE') && ~strcmp(contact,'None')
    line = strcat(line,', CONTACT=',contact);
    line = strcat(line,', CONTACT=',contact);
end
end


if ~strcmp(echo,'none') && ~strcmp(echo,'NONE') && ~strcmp(echo,'None')
if ~strcmp(echo,'none') && ~strcmp(echo,'NONE') && ~strcmp(echo,'None')
    line = strcat(line,', ECHO=',echo);
    line = strcat(line,', ECHO=',echo);
end
end


if ~strcmp(history,'none') && ~strcmp(history,'NONE') && ~strcmp(history,'None')
if ~strcmp(history,'none') && ~strcmp(history,'NONE') && ~strcmp(history,'None')
    line = strcat(line,', HISTORY=',history);
    line = strcat(line,', HISTORY=',history);
end
end


if ~strcmp(model,'none') && ~strcmp(model,'NONE') && ~strcmp(model,'None')
if ~strcmp(model,'none') && ~strcmp(model,'NONE') && ~strcmp(model,'None')
    line = strcat(line,', MODEL=',model);
    line = strcat(line,', MODEL=',model);
end
end


if ~strcmp(parsubstitution,'none') && ~strcmp(parsubstitution,'NONE') && ~strcmp(parsubstitution,'None')
if ~strcmp(parsubstitution,'none') && ~strcmp(parsubstitution,'NONE') && ~strcmp(parsubstitution,'None')
    line = strcat(line,', PARSUBSTITUTION=',parsubstitution);
    line = strcat(line,', PARSUBSTITUTION=',parsubstitution);
end
end


if ~strcmp(parvalues,'none') && ~strcmp(parvalues,'NONE') && ~strcmp(parvalues,'None')
if ~strcmp(parvalues,'none') && ~strcmp(parvalues,'NONE') && ~strcmp(parvalues,'None')
    line = strcat(line,', PARVALUES=',parvalues);
    line = strcat(line,', PARVALUES=',parvalues);
end
end


if ~strcmp(massproperty,'none') && ~strcmp(massproperty,'NONE') && ~strcmp(massproperty,'None')
if ~strcmp(massproperty,'none') && ~strcmp(massproperty,'NONE') && ~strcmp(massproperty,'None')
    line = strcat(line,', MASS PROPERTY=',massproperty);
    line = strcat(line,', MASS PROPERTY=',massproperty);
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
