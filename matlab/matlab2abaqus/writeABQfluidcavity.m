function[]=writeABQfluidcavity(filepath,name,refnode,behavior,mixture,addedvolume,adiabatic,ambientpressure,ambienttemperature,checknormals,minimumvolume,surface,data,comment)
function[]=writeABQfluidcavity(filepath,name,refnode,behavior,mixture,addedvolume,adiabatic,ambientpressure,ambienttemperature,checknormals,minimumvolume,surface,data,comment)
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


line = '*FLUID CAVITY';
line = '*FLUID CAVITY';


if ~strcmp(name,'none') && ~strcmp(name,'NONE') && ~strcmp(name,'None')
if ~strcmp(name,'none') && ~strcmp(name,'NONE') && ~strcmp(name,'None')
    line = strcat(line,', NAME=',name);
    line = strcat(line,', NAME=',name);
end
end


if ~strcmp(refnode,'none') && ~strcmp(refnode,'NONE') && ~strcmp(refnode,'None')
if ~strcmp(refnode,'none') && ~strcmp(refnode,'NONE') && ~strcmp(refnode,'None')
    line = strcat(line,', REF NODE=',refnode);
    line = strcat(line,', REF NODE=',refnode);
end
end


if ~strcmp(behavior,'none') && ~strcmp(behavior,'NONE') && ~strcmp(behavior,'None')
if ~strcmp(behavior,'none') && ~strcmp(behavior,'NONE') && ~strcmp(behavior,'None')
    line = strcat(line,', BEHAVIOR=',behavior);
    line = strcat(line,', BEHAVIOR=',behavior);
end
end


if ~strcmp(mixture,'none') && ~strcmp(mixture,'NONE') && ~strcmp(mixture,'None')
if ~strcmp(mixture,'none') && ~strcmp(mixture,'NONE') && ~strcmp(mixture,'None')
    line = strcat(line,', MIXTURE=',mixture);
    line = strcat(line,', MIXTURE=',mixture);
end
end


if ~strcmp(addedvolume,'none') && ~strcmp(addedvolume,'NONE') && ~strcmp(addedvolume,'None')
if ~strcmp(addedvolume,'none') && ~strcmp(addedvolume,'NONE') && ~strcmp(addedvolume,'None')
    line = strcat(line,', ADDED VOLUME=',addedvolume);
    line = strcat(line,', ADDED VOLUME=',addedvolume);
end
end


if ~strcmp(adiabatic,'none') && ~strcmp(adiabatic,'NONE') && ~strcmp(adiabatic,'None')
if ~strcmp(adiabatic,'none') && ~strcmp(adiabatic,'NONE') && ~strcmp(adiabatic,'None')
    line = strcat(line,', ADIABATIC=',adiabatic);
    line = strcat(line,', ADIABATIC=',adiabatic);
end
end


if ~strcmp(ambientpressure,'none') && ~strcmp(ambientpressure,'NONE') && ~strcmp(ambientpressure,'None')
if ~strcmp(ambientpressure,'none') && ~strcmp(ambientpressure,'NONE') && ~strcmp(ambientpressure,'None')
    line = strcat(line,', AMBIENT PRESSURE=',ambientpressure);
    line = strcat(line,', AMBIENT PRESSURE=',ambientpressure);
end
end


if ~strcmp(ambienttemperature,'none') && ~strcmp(ambienttemperature,'NONE') && ~strcmp(ambienttemperature,'None')
if ~strcmp(ambienttemperature,'none') && ~strcmp(ambienttemperature,'NONE') && ~strcmp(ambienttemperature,'None')
    line = strcat(line,', AMBIENT TEMPERATURE=',ambienttemperature);
    line = strcat(line,', AMBIENT TEMPERATURE=',ambienttemperature);
end
end


if ~strcmp(checknormals,'none') && ~strcmp(checknormals,'NONE') && ~strcmp(checknormals,'None')
if ~strcmp(checknormals,'none') && ~strcmp(checknormals,'NONE') && ~strcmp(checknormals,'None')
    line = strcat(line,', CHECK NORMALS=',checknormals);
    line = strcat(line,', CHECK NORMALS=',checknormals);
end
end


if ~strcmp(minimumvolume,'none') && ~strcmp(minimumvolume,'NONE') && ~strcmp(minimumvolume,'None')
if ~strcmp(minimumvolume,'none') && ~strcmp(minimumvolume,'NONE') && ~strcmp(minimumvolume,'None')
    line = strcat(line,', MINIMUM VOLUME=',minimumvolume);
    line = strcat(line,', MINIMUM VOLUME=',minimumvolume);
end
end


if ~strcmp(surface,'none') && ~strcmp(surface,'NONE') && ~strcmp(surface,'None')
if ~strcmp(surface,'none') && ~strcmp(surface,'NONE') && ~strcmp(surface,'None')
    line = strcat(line,', SURFACE=',surface);
    line = strcat(line,', SURFACE=',surface);
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
