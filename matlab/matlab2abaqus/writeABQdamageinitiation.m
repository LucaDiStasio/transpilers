function[]=writeABQdamageinitiation(filepath,criterion,alpha,definition,dependencies,failuremechanisms,feq,fnn,fnt,frequency,ks,lodedependent,normaldirection,numberimperfections,omega,peinc,properties,tolerance,data,comment)
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

line = '*DAMAGE INITIATION';

if ~strcmp(criterion,'none') && ~strcmp(criterion,'NONE') && ~strcmp(criterion,'None')
    line = strcat(line,', CRITERION=',criterion);
end

if ~strcmp(alpha,'none') && ~strcmp(alpha,'NONE') && ~strcmp(alpha,'None')
    line = strcat(line,', ALPHA=',alpha);
end

if ~strcmp(definition,'none') && ~strcmp(definition,'NONE') && ~strcmp(definition,'None')
    line = strcat(line,', DEFINITION=',definition);
end

if ~strcmp(dependencies,'none') && ~strcmp(dependencies,'NONE') && ~strcmp(dependencies,'None')
    line = strcat(line,', DEPENDENCIES=',dependencies);
end

if ~strcmp(failuremechanisms,'none') && ~strcmp(failuremechanisms,'NONE') && ~strcmp(failuremechanisms,'None')
    line = strcat(line,', FAILURE MECHANISMS=',failuremechanisms);
end

if ~strcmp(feq,'none') && ~strcmp(feq,'NONE') && ~strcmp(feq,'None')
    line = strcat(line,', FEQ=',feq);
end

if ~strcmp(fnn,'none') && ~strcmp(fnn,'NONE') && ~strcmp(fnn,'None')
    line = strcat(line,', FNN=',fnn);
end

if ~strcmp(fnt,'none') && ~strcmp(fnt,'NONE') && ~strcmp(fnt,'None')
    line = strcat(line,', FNT=',fnt);
end

if ~strcmp(frequency,'none') && ~strcmp(frequency,'NONE') && ~strcmp(frequency,'None')
    line = strcat(line,', FREQUENCY=',frequency);
end

if ~strcmp(ks,'none') && ~strcmp(ks,'NONE') && ~strcmp(ks,'None')
    line = strcat(line,', KS=',ks);
end

if ~strcmp(lodedependent,'none') && ~strcmp(lodedependent,'NONE') && ~strcmp(lodedependent,'None')
    line = strcat(line,', LODE DEPENDENT=',lodedependent);
end

if ~strcmp(normaldirection,'none') && ~strcmp(normaldirection,'NONE') && ~strcmp(normaldirection,'None')
    line = strcat(line,', NORMAL DIRECTION=',normaldirection);
end

if ~strcmp(numberimperfections,'none') && ~strcmp(numberimperfections,'NONE') && ~strcmp(numberimperfections,'None')
    line = strcat(line,', NUMBER IMPERFECTIONS=',numberimperfections);
end

if ~strcmp(omega,'none') && ~strcmp(omega,'NONE') && ~strcmp(omega,'None')
    line = strcat(line,', OMEGA=',omega);
end

if ~strcmp(peinc,'none') && ~strcmp(peinc,'NONE') && ~strcmp(peinc,'None')
    line = strcat(line,', PEINC=',peinc);
end

if ~strcmp(properties,'none') && ~strcmp(properties,'NONE') && ~strcmp(properties,'None')
    line = strcat(line,', PROPERTIES=',properties);
end

if ~strcmp(tolerance,'none') && ~strcmp(tolerance,'NONE') && ~strcmp(tolerance,'None')
    line = strcat(line,', TOLERANCE=',tolerance);
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
