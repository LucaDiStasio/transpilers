function[]=writeABQdynamic(filepath,subspace,adiabatic,alpha,application,beta,direct,gamma,haftol,halfincscalefactor,impact,incrementation,initial,nohaf,singularmass,timeintegrator,data,comment)
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

line = '*DYNAMIC';

if ~strcmp(subspace,'none') && ~strcmp(subspace,'NONE') && ~strcmp(subspace,'None')
    line = strcat(line,', SUBSPACE=',subspace);
end

if ~strcmp(adiabatic,'none') && ~strcmp(adiabatic,'NONE') && ~strcmp(adiabatic,'None')
    line = strcat(line,', ADIABATIC=',adiabatic);
end

if ~strcmp(alpha,'none') && ~strcmp(alpha,'NONE') && ~strcmp(alpha,'None')
    line = strcat(line,', ALPHA=',alpha);
end

if ~strcmp(application,'none') && ~strcmp(application,'NONE') && ~strcmp(application,'None')
    line = strcat(line,', APPLICATION=',application);
end

if ~strcmp(beta,'none') && ~strcmp(beta,'NONE') && ~strcmp(beta,'None')
    line = strcat(line,', BETA=',beta);
end

if ~strcmp(direct,'none') && ~strcmp(direct,'NONE') && ~strcmp(direct,'None')
    line = strcat(line,', DIRECT=',direct);
end

if ~strcmp(gamma,'none') && ~strcmp(gamma,'NONE') && ~strcmp(gamma,'None')
    line = strcat(line,', GAMMA=',gamma);
end

if ~strcmp(haftol,'none') && ~strcmp(haftol,'NONE') && ~strcmp(haftol,'None')
    line = strcat(line,', HAFTOL=',haftol);
end

if ~strcmp(halfincscalefactor,'none') && ~strcmp(halfincscalefactor,'NONE') && ~strcmp(halfincscalefactor,'None')
    line = strcat(line,', HALFINC SCALE FACTOR=',halfincscalefactor);
end

if ~strcmp(impact,'none') && ~strcmp(impact,'NONE') && ~strcmp(impact,'None')
    line = strcat(line,', IMPACT=',impact);
end

if ~strcmp(incrementation,'none') && ~strcmp(incrementation,'NONE') && ~strcmp(incrementation,'None')
    line = strcat(line,', INCREMENTATION=',incrementation);
end

if ~strcmp(initial,'none') && ~strcmp(initial,'NONE') && ~strcmp(initial,'None')
    line = strcat(line,', INITIAL=',initial);
end

if ~strcmp(nohaf,'none') && ~strcmp(nohaf,'NONE') && ~strcmp(nohaf,'None')
    line = strcat(line,', NOHAF=',nohaf);
end

if ~strcmp(singularmass,'none') && ~strcmp(singularmass,'NONE') && ~strcmp(singularmass,'None')
    line = strcat(line,', SINGULAR MASS=',singularmass);
end

if ~strcmp(timeintegrator,'none') && ~strcmp(timeintegrator,'NONE') && ~strcmp(timeintegrator,'None')
    line = strcat(line,', TIME INTEGRATOR=',timeintegrator);
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
