function[]=writeABQacousticmedium(filepath,bulkmodulus,cavitationlimit,complexbulkmodulus,complexdensity,porousmodel,volumetricdrag,dependencies,data,comment)
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

line = '*ACOUSTIC MEDIUM';

if ~strcmp(bulkmodulus,'none') && ~strcmp(bulkmodulus,'NONE') && ~strcmp(bulkmodulus,'None')
    line = strcat(line,', BULK MODULUS=',bulkmodulus);
end

if ~strcmp(cavitationlimit,'none') && ~strcmp(cavitationlimit,'NONE') && ~strcmp(cavitationlimit,'None')
    line = strcat(line,', CAVITATION LIMIT=',cavitationlimit);
end

if ~strcmp(complexbulkmodulus,'none') && ~strcmp(complexbulkmodulus,'NONE') && ~strcmp(complexbulkmodulus,'None')
    line = strcat(line,', COMPLEX BULK MODULUS=',complexbulkmodulus);
end

if ~strcmp(complexdensity,'none') && ~strcmp(complexdensity,'NONE') && ~strcmp(complexdensity,'None')
    line = strcat(line,', COMPLEX DENSITY=',complexdensity);
end

if ~strcmp(porousmodel,'none') && ~strcmp(porousmodel,'NONE') && ~strcmp(porousmodel,'None')
    line = strcat(line,', POROUS MODEL=',porousmodel);
end

if ~strcmp(volumetricdrag,'none') && ~strcmp(volumetricdrag,'NONE') && ~strcmp(volumetricdrag,'None')
    line = strcat(line,', VOLUMETRIC DRAG=',volumetricdrag);
end

if ~strcmp(dependencies,'none') && ~strcmp(dependencies,'NONE') && ~strcmp(dependencies,'None')
    line = strcat(line,', DEPENDENCIES=',dependencies);
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
