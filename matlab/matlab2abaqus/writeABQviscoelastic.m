function[]=writeABQviscoelastic(filepath,frequency,nonlinear,time,law,networkid,sratio,dependencies,preload,type,errtol,nmax,data,comment)
function[]=writeABQviscoelastic(filepath,frequency,nonlinear,time,law,networkid,sratio,dependencies,preload,type,errtol,nmax,data,comment)
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


line = '*VISCOELASTIC';
line = '*VISCOELASTIC';


if ~strcmp(frequency,'none') && ~strcmp(frequency,'NONE') && ~strcmp(frequency,'None')
if ~strcmp(frequency,'none') && ~strcmp(frequency,'NONE') && ~strcmp(frequency,'None')
    line = strcat(line,', FREQUENCY=',frequency);
    line = strcat(line,', FREQUENCY=',frequency);
end
end


if ~strcmp(nonlinear,'none') && ~strcmp(nonlinear,'NONE') && ~strcmp(nonlinear,'None')
if ~strcmp(nonlinear,'none') && ~strcmp(nonlinear,'NONE') && ~strcmp(nonlinear,'None')
    line = strcat(line,', NONLINEAR=',nonlinear);
    line = strcat(line,', NONLINEAR=',nonlinear);
end
end


if ~strcmp(time,'none') && ~strcmp(time,'NONE') && ~strcmp(time,'None')
if ~strcmp(time,'none') && ~strcmp(time,'NONE') && ~strcmp(time,'None')
    line = strcat(line,', TIME=',time);
    line = strcat(line,', TIME=',time);
end
end


if ~strcmp(law,'none') && ~strcmp(law,'NONE') && ~strcmp(law,'None')
if ~strcmp(law,'none') && ~strcmp(law,'NONE') && ~strcmp(law,'None')
    line = strcat(line,', LAW=',law);
    line = strcat(line,', LAW=',law);
end
end


if ~strcmp(networkid,'none') && ~strcmp(networkid,'NONE') && ~strcmp(networkid,'None')
if ~strcmp(networkid,'none') && ~strcmp(networkid,'NONE') && ~strcmp(networkid,'None')
    line = strcat(line,', NETWORKID=',networkid);
    line = strcat(line,', NETWORKID=',networkid);
end
end


if ~strcmp(sratio,'none') && ~strcmp(sratio,'NONE') && ~strcmp(sratio,'None')
if ~strcmp(sratio,'none') && ~strcmp(sratio,'NONE') && ~strcmp(sratio,'None')
    line = strcat(line,', SRATIO=',sratio);
    line = strcat(line,', SRATIO=',sratio);
end
end


if ~strcmp(dependencies,'none') && ~strcmp(dependencies,'NONE') && ~strcmp(dependencies,'None')
if ~strcmp(dependencies,'none') && ~strcmp(dependencies,'NONE') && ~strcmp(dependencies,'None')
    line = strcat(line,', DEPENDENCIES=',dependencies);
    line = strcat(line,', DEPENDENCIES=',dependencies);
end
end


if ~strcmp(preload,'none') && ~strcmp(preload,'NONE') && ~strcmp(preload,'None')
if ~strcmp(preload,'none') && ~strcmp(preload,'NONE') && ~strcmp(preload,'None')
    line = strcat(line,', PRELOAD=',preload);
    line = strcat(line,', PRELOAD=',preload);
end
end


if ~strcmp(type,'none') && ~strcmp(type,'NONE') && ~strcmp(type,'None')
if ~strcmp(type,'none') && ~strcmp(type,'NONE') && ~strcmp(type,'None')
    line = strcat(line,', TYPE=',type);
    line = strcat(line,', TYPE=',type);
end
end


if ~strcmp(errtol,'none') && ~strcmp(errtol,'NONE') && ~strcmp(errtol,'None')
if ~strcmp(errtol,'none') && ~strcmp(errtol,'NONE') && ~strcmp(errtol,'None')
    line = strcat(line,', ERRTOL=',errtol);
    line = strcat(line,', ERRTOL=',errtol);
end
end


if ~strcmp(nmax,'none') && ~strcmp(nmax,'NONE') && ~strcmp(nmax,'None')
if ~strcmp(nmax,'none') && ~strcmp(nmax,'NONE') && ~strcmp(nmax,'None')
    line = strcat(line,', NMAX=',nmax);
    line = strcat(line,', NMAX=',nmax);
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
