function[]=writeABQfastener(filepath,interactionname,property,elset,referencenodeset,adjustorientation,attachmentmethod,coupling,numberoflayers,orientation,radiusofinfluence,searchradius,unsorted,weightingmethod,data,comment)
function[]=writeABQfastener(filepath,interactionname,property,elset,referencenodeset,adjustorientation,attachmentmethod,coupling,numberoflayers,orientation,radiusofinfluence,searchradius,unsorted,weightingmethod,data,comment)
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


line = '*FASTENER';
line = '*FASTENER';


if ~strcmp(interactionname,'none') && ~strcmp(interactionname,'NONE') && ~strcmp(interactionname,'None')
if ~strcmp(interactionname,'none') && ~strcmp(interactionname,'NONE') && ~strcmp(interactionname,'None')
    line = strcat(line,', INTERACTION NAME=',interactionname);
    line = strcat(line,', INTERACTION NAME=',interactionname);
end
end


if ~strcmp(property,'none') && ~strcmp(property,'NONE') && ~strcmp(property,'None')
if ~strcmp(property,'none') && ~strcmp(property,'NONE') && ~strcmp(property,'None')
    line = strcat(line,', PROPERTY=',property);
    line = strcat(line,', PROPERTY=',property);
end
end


if ~strcmp(elset,'none') && ~strcmp(elset,'NONE') && ~strcmp(elset,'None')
if ~strcmp(elset,'none') && ~strcmp(elset,'NONE') && ~strcmp(elset,'None')
    line = strcat(line,', ELSET=',elset);
    line = strcat(line,', ELSET=',elset);
end
end


if ~strcmp(referencenodeset,'none') && ~strcmp(referencenodeset,'NONE') && ~strcmp(referencenodeset,'None')
if ~strcmp(referencenodeset,'none') && ~strcmp(referencenodeset,'NONE') && ~strcmp(referencenodeset,'None')
    line = strcat(line,', REFERENCE NODE SET=',referencenodeset);
    line = strcat(line,', REFERENCE NODE SET=',referencenodeset);
end
end


if ~strcmp(adjustorientation,'none') && ~strcmp(adjustorientation,'NONE') && ~strcmp(adjustorientation,'None')
if ~strcmp(adjustorientation,'none') && ~strcmp(adjustorientation,'NONE') && ~strcmp(adjustorientation,'None')
    line = strcat(line,', ADJUST ORIENTATION=',adjustorientation);
    line = strcat(line,', ADJUST ORIENTATION=',adjustorientation);
end
end


if ~strcmp(attachmentmethod,'none') && ~strcmp(attachmentmethod,'NONE') && ~strcmp(attachmentmethod,'None')
if ~strcmp(attachmentmethod,'none') && ~strcmp(attachmentmethod,'NONE') && ~strcmp(attachmentmethod,'None')
    line = strcat(line,', ATTACHMENT METHOD=',attachmentmethod);
    line = strcat(line,', ATTACHMENT METHOD=',attachmentmethod);
end
end


if ~strcmp(coupling,'none') && ~strcmp(coupling,'NONE') && ~strcmp(coupling,'None')
if ~strcmp(coupling,'none') && ~strcmp(coupling,'NONE') && ~strcmp(coupling,'None')
    line = strcat(line,', COUPLING=',coupling);
    line = strcat(line,', COUPLING=',coupling);
end
end


if ~strcmp(numberoflayers,'none') && ~strcmp(numberoflayers,'NONE') && ~strcmp(numberoflayers,'None')
if ~strcmp(numberoflayers,'none') && ~strcmp(numberoflayers,'NONE') && ~strcmp(numberoflayers,'None')
    line = strcat(line,', NUMBER OF LAYERS=',numberoflayers);
    line = strcat(line,', NUMBER OF LAYERS=',numberoflayers);
end
end


if ~strcmp(orientation,'none') && ~strcmp(orientation,'NONE') && ~strcmp(orientation,'None')
if ~strcmp(orientation,'none') && ~strcmp(orientation,'NONE') && ~strcmp(orientation,'None')
    line = strcat(line,', ORIENTATION=',orientation);
    line = strcat(line,', ORIENTATION=',orientation);
end
end


if ~strcmp(radiusofinfluence,'none') && ~strcmp(radiusofinfluence,'NONE') && ~strcmp(radiusofinfluence,'None')
if ~strcmp(radiusofinfluence,'none') && ~strcmp(radiusofinfluence,'NONE') && ~strcmp(radiusofinfluence,'None')
    line = strcat(line,', RADIUS OF INFLUENCE=',radiusofinfluence);
    line = strcat(line,', RADIUS OF INFLUENCE=',radiusofinfluence);
end
end


if ~strcmp(searchradius,'none') && ~strcmp(searchradius,'NONE') && ~strcmp(searchradius,'None')
if ~strcmp(searchradius,'none') && ~strcmp(searchradius,'NONE') && ~strcmp(searchradius,'None')
    line = strcat(line,', SEARCH RADIUS=',searchradius);
    line = strcat(line,', SEARCH RADIUS=',searchradius);
end
end


if ~strcmp(unsorted,'none') && ~strcmp(unsorted,'NONE') && ~strcmp(unsorted,'None')
if ~strcmp(unsorted,'none') && ~strcmp(unsorted,'NONE') && ~strcmp(unsorted,'None')
    line = strcat(line,', UNSORTED=',unsorted);
    line = strcat(line,', UNSORTED=',unsorted);
end
end


if ~strcmp(weightingmethod,'none') && ~strcmp(weightingmethod,'NONE') && ~strcmp(weightingmethod,'None')
if ~strcmp(weightingmethod,'none') && ~strcmp(weightingmethod,'NONE') && ~strcmp(weightingmethod,'None')
    line = strcat(line,', WEIGHTING METHOD=',weightingmethod);
    line = strcat(line,', WEIGHTING METHOD=',weightingmethod);
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
