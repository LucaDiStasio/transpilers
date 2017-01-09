function[]=writeABQcontourintegral(filepath,contours,crackname,cracktipnodes,direction,frequency,normal,output,residualstressstep,symm,type,xfem,data,comment)
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

line = '*CONTOUR INTEGRAL';

if ~strcmp(contours,'none') && ~strcmp(contours,'NONE') && ~strcmp(contours,'None')
    line = strcat(line,', CONTOURS=',contours);
end

if ~strcmp(crackname,'none') && ~strcmp(crackname,'NONE') && ~strcmp(crackname,'None')
    line = strcat(line,', CRACK NAME=',crackname);
end

if ~strcmp(cracktipnodes,'none') && ~strcmp(cracktipnodes,'NONE') && ~strcmp(cracktipnodes,'None')
    line = strcat(line,', CRACK TIP NODES=',cracktipnodes);
end

if ~strcmp(direction,'none') && ~strcmp(direction,'NONE') && ~strcmp(direction,'None')
    line = strcat(line,', DIRECTION=',direction);
end

if ~strcmp(frequency,'none') && ~strcmp(frequency,'NONE') && ~strcmp(frequency,'None')
    line = strcat(line,', FREQUENCY=',frequency);
end

if ~strcmp(normal,'none') && ~strcmp(normal,'NONE') && ~strcmp(normal,'None')
    line = strcat(line,', NORMAL=',normal);
end

if ~strcmp(output,'none') && ~strcmp(output,'NONE') && ~strcmp(output,'None')
    line = strcat(line,', OUTPUT=',output);
end

if ~strcmp(residualstressstep,'none') && ~strcmp(residualstressstep,'NONE') && ~strcmp(residualstressstep,'None')
    line = strcat(line,', RESIDUAL STRESS STEP=',residualstressstep);
end

if ~strcmp(symm,'none') && ~strcmp(symm,'NONE') && ~strcmp(symm,'None')
    line = strcat(line,', SYMM=',symm);
end

if ~strcmp(type,'none') && ~strcmp(type,'NONE') && ~strcmp(type,'None')
    line = strcat(line,', TYPE=',type);
end

if ~strcmp(xfem,'none') && ~strcmp(xfem,'NONE') && ~strcmp(xfem,'None')
    line = strcat(line,', XFEM=',xfem);
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
