function[]=writeABQfluidcavity(filepath,name,refnode,behavior,mixture,addedvolume,adiabatic,ambientpressure,ambienttemperature,checknormals,minimumvolume,surface,data,comment)
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

line = '*FLUID CAVITY';

if ~strcmp(name,'none') && ~strcmp(name,'NONE') && ~strcmp(name,'None')
    line = strcat(line,', NAME=',name);
end

if ~strcmp(refnode,'none') && ~strcmp(refnode,'NONE') && ~strcmp(refnode,'None')
    line = strcat(line,', REF NODE=',refnode);
end

if ~strcmp(behavior,'none') && ~strcmp(behavior,'NONE') && ~strcmp(behavior,'None')
    line = strcat(line,', BEHAVIOR=',behavior);
end

if ~strcmp(mixture,'none') && ~strcmp(mixture,'NONE') && ~strcmp(mixture,'None')
    line = strcat(line,', MIXTURE=',mixture);
end

if ~strcmp(addedvolume,'none') && ~strcmp(addedvolume,'NONE') && ~strcmp(addedvolume,'None')
    line = strcat(line,', ADDED VOLUME=',addedvolume);
end

if ~strcmp(adiabatic,'none') && ~strcmp(adiabatic,'NONE') && ~strcmp(adiabatic,'None')
    line = strcat(line,', ADIABATIC=',adiabatic);
end

if ~strcmp(ambientpressure,'none') && ~strcmp(ambientpressure,'NONE') && ~strcmp(ambientpressure,'None')
    line = strcat(line,', AMBIENT PRESSURE=',ambientpressure);
end

if ~strcmp(ambienttemperature,'none') && ~strcmp(ambienttemperature,'NONE') && ~strcmp(ambienttemperature,'None')
    line = strcat(line,', AMBIENT TEMPERATURE=',ambienttemperature);
end

if ~strcmp(checknormals,'none') && ~strcmp(checknormals,'NONE') && ~strcmp(checknormals,'None')
    line = strcat(line,', CHECK NORMALS=',checknormals);
end

if ~strcmp(minimumvolume,'none') && ~strcmp(minimumvolume,'NONE') && ~strcmp(minimumvolume,'None')
    line = strcat(line,', MINIMUM VOLUME=',minimumvolume);
end

if ~strcmp(surface,'none') && ~strcmp(surface,'NONE') && ~strcmp(surface,'None')
    line = strcat(line,', SURFACE=',surface);
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
