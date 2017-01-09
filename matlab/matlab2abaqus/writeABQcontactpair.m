function[]=writeABQcontactpair(filepath,interaction,adjust,extensionzone,geometriccorrection,hcrit,midfacenodes,minimumdistance,nothickness,smallsliding,smooth,slidingtransition,supplementaryconstraints,tied,tracking,type,data,comment)
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

line = '*CONTACT PAIR';

if ~strcmp(interaction,'none') && ~strcmp(interaction,'NONE') && ~strcmp(interaction,'None')
    line = strcat(line,', INTERACTION=',interaction);
end

if ~strcmp(adjust,'none') && ~strcmp(adjust,'NONE') && ~strcmp(adjust,'None')
    line = strcat(line,', ADJUST=',adjust);
end

if ~strcmp(extensionzone,'none') && ~strcmp(extensionzone,'NONE') && ~strcmp(extensionzone,'None')
    line = strcat(line,', EXTENSION ZONE=',extensionzone);
end

if ~strcmp(geometriccorrection,'none') && ~strcmp(geometriccorrection,'NONE') && ~strcmp(geometriccorrection,'None')
    line = strcat(line,', GEOMETRIC CORRECTION=',geometriccorrection);
end

if ~strcmp(hcrit,'none') && ~strcmp(hcrit,'NONE') && ~strcmp(hcrit,'None')
    line = strcat(line,', HCRIT=',hcrit);
end

if ~strcmp(midfacenodes,'none') && ~strcmp(midfacenodes,'NONE') && ~strcmp(midfacenodes,'None')
    line = strcat(line,', MIDFACE NODES=',midfacenodes);
end

if ~strcmp(minimumdistance,'none') && ~strcmp(minimumdistance,'NONE') && ~strcmp(minimumdistance,'None')
    line = strcat(line,', MINIMUM DISTANCE=',minimumdistance);
end

if ~strcmp(nothickness,'none') && ~strcmp(nothickness,'NONE') && ~strcmp(nothickness,'None')
    line = strcat(line,', NO THICKNESS=',nothickness);
end

if ~strcmp(smallsliding,'none') && ~strcmp(smallsliding,'NONE') && ~strcmp(smallsliding,'None')
    line = strcat(line,', SMALL SLIDING=',smallsliding);
end

if ~strcmp(smooth,'none') && ~strcmp(smooth,'NONE') && ~strcmp(smooth,'None')
    line = strcat(line,', SMOOTH=',smooth);
end

if ~strcmp(slidingtransition,'none') && ~strcmp(slidingtransition,'NONE') && ~strcmp(slidingtransition,'None')
    line = strcat(line,', SLIDING TRANSITION=',slidingtransition);
end

if ~strcmp(supplementaryconstraints,'none') && ~strcmp(supplementaryconstraints,'NONE') && ~strcmp(supplementaryconstraints,'None')
    line = strcat(line,', SUPPLEMENTARY CONSTRAINTS=',supplementaryconstraints);
end

if ~strcmp(tied,'none') && ~strcmp(tied,'NONE') && ~strcmp(tied,'None')
    line = strcat(line,', TIED=',tied);
end

if ~strcmp(tracking,'none') && ~strcmp(tracking,'NONE') && ~strcmp(tracking,'None')
    line = strcat(line,', TRACKING=',tracking);
end

if ~strcmp(type,'none') && ~strcmp(type,'NONE') && ~strcmp(type,'None')
    line = strcat(line,', TYPE=',type);
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
