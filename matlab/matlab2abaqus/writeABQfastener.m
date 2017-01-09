function[]=writeABQfastener(filepath,interactionname,property,elset,referencenodeset,adjustorientation,attachmentmethod,coupling,numberoflayers,orientation,radiusofinfluence,searchradius,unsorted,weightingmethod,data,comment)
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

line = '*FASTENER';

if ~strcmp(interactionname,'none') && ~strcmp(interactionname,'NONE') && ~strcmp(interactionname,'None')
    line = strcat(line,', INTERACTION NAME=',interactionname);
end

if ~strcmp(property,'none') && ~strcmp(property,'NONE') && ~strcmp(property,'None')
    line = strcat(line,', PROPERTY=',property);
end

if ~strcmp(elset,'none') && ~strcmp(elset,'NONE') && ~strcmp(elset,'None')
    line = strcat(line,', ELSET=',elset);
end

if ~strcmp(referencenodeset,'none') && ~strcmp(referencenodeset,'NONE') && ~strcmp(referencenodeset,'None')
    line = strcat(line,', REFERENCE NODE SET=',referencenodeset);
end

if ~strcmp(adjustorientation,'none') && ~strcmp(adjustorientation,'NONE') && ~strcmp(adjustorientation,'None')
    line = strcat(line,', ADJUST ORIENTATION=',adjustorientation);
end

if ~strcmp(attachmentmethod,'none') && ~strcmp(attachmentmethod,'NONE') && ~strcmp(attachmentmethod,'None')
    line = strcat(line,', ATTACHMENT METHOD=',attachmentmethod);
end

if ~strcmp(coupling,'none') && ~strcmp(coupling,'NONE') && ~strcmp(coupling,'None')
    line = strcat(line,', COUPLING=',coupling);
end

if ~strcmp(numberoflayers,'none') && ~strcmp(numberoflayers,'NONE') && ~strcmp(numberoflayers,'None')
    line = strcat(line,', NUMBER OF LAYERS=',numberoflayers);
end

if ~strcmp(orientation,'none') && ~strcmp(orientation,'NONE') && ~strcmp(orientation,'None')
    line = strcat(line,', ORIENTATION=',orientation);
end

if ~strcmp(radiusofinfluence,'none') && ~strcmp(radiusofinfluence,'NONE') && ~strcmp(radiusofinfluence,'None')
    line = strcat(line,', RADIUS OF INFLUENCE=',radiusofinfluence);
end

if ~strcmp(searchradius,'none') && ~strcmp(searchradius,'NONE') && ~strcmp(searchradius,'None')
    line = strcat(line,', SEARCH RADIUS=',searchradius);
end

if ~strcmp(unsorted,'none') && ~strcmp(unsorted,'NONE') && ~strcmp(unsorted,'None')
    line = strcat(line,', UNSORTED=',unsorted);
end

if ~strcmp(weightingmethod,'none') && ~strcmp(weightingmethod,'NONE') && ~strcmp(weightingmethod,'None')
    line = strcat(line,', WEIGHTING METHOD=',weightingmethod);
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
