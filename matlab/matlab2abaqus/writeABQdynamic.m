function[]=writeABQdynamic(filepath,subspace,adiabatic,alpha,application,beta,direct,gamma,haftol,halfincscalefactor,impact,incrementation,initial,nohaf,singularmass,timeintegrator,data,comment)
function[]=writeABQdynamic(filepath,subspace,adiabatic,alpha,application,beta,direct,gamma,haftol,halfincscalefactor,impact,incrementation,initial,nohaf,singularmass,timeintegrator,data,comment)
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


line = '*DYNAMIC';
line = '*DYNAMIC';


if ~strcmp(subspace,'none') && ~strcmp(subspace,'NONE') && ~strcmp(subspace,'None')
if ~strcmp(subspace,'none') && ~strcmp(subspace,'NONE') && ~strcmp(subspace,'None')
    line = strcat(line,', SUBSPACE=',subspace);
    line = strcat(line,', SUBSPACE=',subspace);
end
end


if ~strcmp(adiabatic,'none') && ~strcmp(adiabatic,'NONE') && ~strcmp(adiabatic,'None')
if ~strcmp(adiabatic,'none') && ~strcmp(adiabatic,'NONE') && ~strcmp(adiabatic,'None')
    line = strcat(line,', ADIABATIC=',adiabatic);
    line = strcat(line,', ADIABATIC=',adiabatic);
end
end


if ~strcmp(alpha,'none') && ~strcmp(alpha,'NONE') && ~strcmp(alpha,'None')
if ~strcmp(alpha,'none') && ~strcmp(alpha,'NONE') && ~strcmp(alpha,'None')
    line = strcat(line,', ALPHA=',alpha);
    line = strcat(line,', ALPHA=',alpha);
end
end


if ~strcmp(application,'none') && ~strcmp(application,'NONE') && ~strcmp(application,'None')
if ~strcmp(application,'none') && ~strcmp(application,'NONE') && ~strcmp(application,'None')
    line = strcat(line,', APPLICATION=',application);
    line = strcat(line,', APPLICATION=',application);
end
end


if ~strcmp(beta,'none') && ~strcmp(beta,'NONE') && ~strcmp(beta,'None')
if ~strcmp(beta,'none') && ~strcmp(beta,'NONE') && ~strcmp(beta,'None')
    line = strcat(line,', BETA=',beta);
    line = strcat(line,', BETA=',beta);
end
end


if ~strcmp(direct,'none') && ~strcmp(direct,'NONE') && ~strcmp(direct,'None')
if ~strcmp(direct,'none') && ~strcmp(direct,'NONE') && ~strcmp(direct,'None')
    line = strcat(line,', DIRECT=',direct);
    line = strcat(line,', DIRECT=',direct);
end
end


if ~strcmp(gamma,'none') && ~strcmp(gamma,'NONE') && ~strcmp(gamma,'None')
if ~strcmp(gamma,'none') && ~strcmp(gamma,'NONE') && ~strcmp(gamma,'None')
    line = strcat(line,', GAMMA=',gamma);
    line = strcat(line,', GAMMA=',gamma);
end
end


if ~strcmp(haftol,'none') && ~strcmp(haftol,'NONE') && ~strcmp(haftol,'None')
if ~strcmp(haftol,'none') && ~strcmp(haftol,'NONE') && ~strcmp(haftol,'None')
    line = strcat(line,', HAFTOL=',haftol);
    line = strcat(line,', HAFTOL=',haftol);
end
end


if ~strcmp(halfincscalefactor,'none') && ~strcmp(halfincscalefactor,'NONE') && ~strcmp(halfincscalefactor,'None')
if ~strcmp(halfincscalefactor,'none') && ~strcmp(halfincscalefactor,'NONE') && ~strcmp(halfincscalefactor,'None')
    line = strcat(line,', HALFINC SCALE FACTOR=',halfincscalefactor);
    line = strcat(line,', HALFINC SCALE FACTOR=',halfincscalefactor);
end
end


if ~strcmp(impact,'none') && ~strcmp(impact,'NONE') && ~strcmp(impact,'None')
if ~strcmp(impact,'none') && ~strcmp(impact,'NONE') && ~strcmp(impact,'None')
    line = strcat(line,', IMPACT=',impact);
    line = strcat(line,', IMPACT=',impact);
end
end


if ~strcmp(incrementation,'none') && ~strcmp(incrementation,'NONE') && ~strcmp(incrementation,'None')
if ~strcmp(incrementation,'none') && ~strcmp(incrementation,'NONE') && ~strcmp(incrementation,'None')
    line = strcat(line,', INCREMENTATION=',incrementation);
    line = strcat(line,', INCREMENTATION=',incrementation);
end
end


if ~strcmp(initial,'none') && ~strcmp(initial,'NONE') && ~strcmp(initial,'None')
if ~strcmp(initial,'none') && ~strcmp(initial,'NONE') && ~strcmp(initial,'None')
    line = strcat(line,', INITIAL=',initial);
    line = strcat(line,', INITIAL=',initial);
end
end


if ~strcmp(nohaf,'none') && ~strcmp(nohaf,'NONE') && ~strcmp(nohaf,'None')
if ~strcmp(nohaf,'none') && ~strcmp(nohaf,'NONE') && ~strcmp(nohaf,'None')
    line = strcat(line,', NOHAF=',nohaf);
    line = strcat(line,', NOHAF=',nohaf);
end
end


if ~strcmp(singularmass,'none') && ~strcmp(singularmass,'NONE') && ~strcmp(singularmass,'None')
if ~strcmp(singularmass,'none') && ~strcmp(singularmass,'NONE') && ~strcmp(singularmass,'None')
    line = strcat(line,', SINGULAR MASS=',singularmass);
    line = strcat(line,', SINGULAR MASS=',singularmass);
end
end


if ~strcmp(timeintegrator,'none') && ~strcmp(timeintegrator,'NONE') && ~strcmp(timeintegrator,'None')
if ~strcmp(timeintegrator,'none') && ~strcmp(timeintegrator,'NONE') && ~strcmp(timeintegrator,'None')
    line = strcat(line,', TIME INTEGRATOR=',timeintegrator);
    line = strcat(line,', TIME INTEGRATOR=',timeintegrator);
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
