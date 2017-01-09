function[]=writeABQcontactcontrols(filepath,absolutepenetrationtolerance,relativepenetrationtolerance,master,perturbationtangentscalefactor,reset,slave,stabilize,stiffnessscalefactor,tangentfraction,data,comment)
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

line = '*CONTACT CONTROLS';

if ~strcmp(absolutepenetrationtolerance,'none') && ~strcmp(absolutepenetrationtolerance,'NONE') && ~strcmp(absolutepenetrationtolerance,'None')
    line = strcat(line,', ABSOLUTE PENETRATION TOLERANCE=',absolutepenetrationtolerance);
end

if ~strcmp(relativepenetrationtolerance,'none') && ~strcmp(relativepenetrationtolerance,'NONE') && ~strcmp(relativepenetrationtolerance,'None')
    line = strcat(line,', RELATIVE PENETRATION TOLERANCE=',relativepenetrationtolerance);
end

if ~strcmp(master,'none') && ~strcmp(master,'NONE') && ~strcmp(master,'None')
    line = strcat(line,', MASTER=',master);
end

if ~strcmp(perturbationtangentscalefactor,'none') && ~strcmp(perturbationtangentscalefactor,'NONE') && ~strcmp(perturbationtangentscalefactor,'None')
    line = strcat(line,', PERTURBATION TANGENT SCALE FACTOR=',perturbationtangentscalefactor);
end

if ~strcmp(reset,'none') && ~strcmp(reset,'NONE') && ~strcmp(reset,'None')
    line = strcat(line,', RESET=',reset);
end

if ~strcmp(slave,'none') && ~strcmp(slave,'NONE') && ~strcmp(slave,'None')
    line = strcat(line,', SLAVE=',slave);
end

if ~strcmp(stabilize,'none') && ~strcmp(stabilize,'NONE') && ~strcmp(stabilize,'None')
    line = strcat(line,', STABILIZE=',stabilize);
end

if ~strcmp(stiffnessscalefactor,'none') && ~strcmp(stiffnessscalefactor,'NONE') && ~strcmp(stiffnessscalefactor,'None')
    line = strcat(line,', STIFFNESS SCALE FACTOR=',stiffnessscalefactor);
end

if ~strcmp(tangentfraction,'none') && ~strcmp(tangentfraction,'NONE') && ~strcmp(tangentfraction,'None')
    line = strcat(line,', TANGENT FRACTION=',tangentfraction);
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
