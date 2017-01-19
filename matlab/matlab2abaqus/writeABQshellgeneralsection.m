function[]=writeABQshellgeneralsection(filepath,elset,density,bendingonly,controls,layup,membraneonly,offset,orientation,poisson,smearalllayers,stackdirection,symmetric,thicknessmodulus,zero,composite,material,user,nodalthickness,shellthickness,iproperties,properties,unsymm,variables,dependencies,data,comment)
function[]=writeABQshellgeneralsection(filepath,elset,density,bendingonly,controls,layup,membraneonly,offset,orientation,poisson,smearalllayers,stackdirection,symmetric,thicknessmodulus,zero,composite,material,user,nodalthickness,shellthickness,iproperties,properties,unsymm,variables,dependencies,data,comment)
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


line = '*SHELL GENERAL SECTION';
line = '*SHELL GENERAL SECTION';


if ~strcmp(elset,'none') && ~strcmp(elset,'NONE') && ~strcmp(elset,'None')
if ~strcmp(elset,'none') && ~strcmp(elset,'NONE') && ~strcmp(elset,'None')
    line = strcat(line,', ELSET=',elset);
    line = strcat(line,', ELSET=',elset);
end
end


if ~strcmp(density,'none') && ~strcmp(density,'NONE') && ~strcmp(density,'None')
if ~strcmp(density,'none') && ~strcmp(density,'NONE') && ~strcmp(density,'None')
    line = strcat(line,', DENSITY=',density);
    line = strcat(line,', DENSITY=',density);
end
end


if ~strcmp(bendingonly,'none') && ~strcmp(bendingonly,'NONE') && ~strcmp(bendingonly,'None')
if ~strcmp(bendingonly,'none') && ~strcmp(bendingonly,'NONE') && ~strcmp(bendingonly,'None')
    line = strcat(line,', BENDING ONLY=',bendingonly);
    line = strcat(line,', BENDING ONLY=',bendingonly);
end
end


if ~strcmp(controls,'none') && ~strcmp(controls,'NONE') && ~strcmp(controls,'None')
if ~strcmp(controls,'none') && ~strcmp(controls,'NONE') && ~strcmp(controls,'None')
    line = strcat(line,', CONTROLS=',controls);
    line = strcat(line,', CONTROLS=',controls);
end
end


if ~strcmp(layup,'none') && ~strcmp(layup,'NONE') && ~strcmp(layup,'None')
if ~strcmp(layup,'none') && ~strcmp(layup,'NONE') && ~strcmp(layup,'None')
    line = strcat(line,', LAYUP=',layup);
    line = strcat(line,', LAYUP=',layup);
end
end


if ~strcmp(membraneonly,'none') && ~strcmp(membraneonly,'NONE') && ~strcmp(membraneonly,'None')
if ~strcmp(membraneonly,'none') && ~strcmp(membraneonly,'NONE') && ~strcmp(membraneonly,'None')
    line = strcat(line,', MEMBRANE ONLY=',membraneonly);
    line = strcat(line,', MEMBRANE ONLY=',membraneonly);
end
end


if ~strcmp(offset,'none') && ~strcmp(offset,'NONE') && ~strcmp(offset,'None')
if ~strcmp(offset,'none') && ~strcmp(offset,'NONE') && ~strcmp(offset,'None')
    line = strcat(line,', OFFSET=',offset);
    line = strcat(line,', OFFSET=',offset);
end
end


if ~strcmp(orientation,'none') && ~strcmp(orientation,'NONE') && ~strcmp(orientation,'None')
if ~strcmp(orientation,'none') && ~strcmp(orientation,'NONE') && ~strcmp(orientation,'None')
    line = strcat(line,', ORIENTATION=',orientation);
    line = strcat(line,', ORIENTATION=',orientation);
end
end


if ~strcmp(poisson,'none') && ~strcmp(poisson,'NONE') && ~strcmp(poisson,'None')
if ~strcmp(poisson,'none') && ~strcmp(poisson,'NONE') && ~strcmp(poisson,'None')
    line = strcat(line,', POISSON=',poisson);
    line = strcat(line,', POISSON=',poisson);
end
end


if ~strcmp(smearalllayers,'none') && ~strcmp(smearalllayers,'NONE') && ~strcmp(smearalllayers,'None')
if ~strcmp(smearalllayers,'none') && ~strcmp(smearalllayers,'NONE') && ~strcmp(smearalllayers,'None')
    line = strcat(line,', SMEAR ALL LAYERS=',smearalllayers);
    line = strcat(line,', SMEAR ALL LAYERS=',smearalllayers);
end
end


if ~strcmp(stackdirection,'none') && ~strcmp(stackdirection,'NONE') && ~strcmp(stackdirection,'None')
if ~strcmp(stackdirection,'none') && ~strcmp(stackdirection,'NONE') && ~strcmp(stackdirection,'None')
    line = strcat(line,', STACK DIRECTION=',stackdirection);
    line = strcat(line,', STACK DIRECTION=',stackdirection);
end
end


if ~strcmp(symmetric,'none') && ~strcmp(symmetric,'NONE') && ~strcmp(symmetric,'None')
if ~strcmp(symmetric,'none') && ~strcmp(symmetric,'NONE') && ~strcmp(symmetric,'None')
    line = strcat(line,', SYMMETRIC=',symmetric);
    line = strcat(line,', SYMMETRIC=',symmetric);
end
end


if ~strcmp(thicknessmodulus,'none') && ~strcmp(thicknessmodulus,'NONE') && ~strcmp(thicknessmodulus,'None')
if ~strcmp(thicknessmodulus,'none') && ~strcmp(thicknessmodulus,'NONE') && ~strcmp(thicknessmodulus,'None')
    line = strcat(line,', THICKNESS MODULUS=',thicknessmodulus);
    line = strcat(line,', THICKNESS MODULUS=',thicknessmodulus);
end
end


if ~strcmp(zero,'none') && ~strcmp(zero,'NONE') && ~strcmp(zero,'None')
if ~strcmp(zero,'none') && ~strcmp(zero,'NONE') && ~strcmp(zero,'None')
    line = strcat(line,', ZERO=',zero);
    line = strcat(line,', ZERO=',zero);
end
end


if ~strcmp(composite,'none') && ~strcmp(composite,'NONE') && ~strcmp(composite,'None')
if ~strcmp(composite,'none') && ~strcmp(composite,'NONE') && ~strcmp(composite,'None')
    line = strcat(line,', COMPOSITE=',composite);
    line = strcat(line,', COMPOSITE=',composite);
end
end


if ~strcmp(material,'none') && ~strcmp(material,'NONE') && ~strcmp(material,'None')
if ~strcmp(material,'none') && ~strcmp(material,'NONE') && ~strcmp(material,'None')
    line = strcat(line,', MATERIAL=',material);
    line = strcat(line,', MATERIAL=',material);
end
end


if ~strcmp(user,'none') && ~strcmp(user,'NONE') && ~strcmp(user,'None')
if ~strcmp(user,'none') && ~strcmp(user,'NONE') && ~strcmp(user,'None')
    line = strcat(line,', USER=',user);
    line = strcat(line,', USER=',user);
end
end


if ~strcmp(nodalthickness,'none') && ~strcmp(nodalthickness,'NONE') && ~strcmp(nodalthickness,'None')
if ~strcmp(nodalthickness,'none') && ~strcmp(nodalthickness,'NONE') && ~strcmp(nodalthickness,'None')
    line = strcat(line,', NODAL THICKNESS=',nodalthickness);
    line = strcat(line,', NODAL THICKNESS=',nodalthickness);
end
end


if ~strcmp(shellthickness,'none') && ~strcmp(shellthickness,'NONE') && ~strcmp(shellthickness,'None')
if ~strcmp(shellthickness,'none') && ~strcmp(shellthickness,'NONE') && ~strcmp(shellthickness,'None')
    line = strcat(line,', SHELL THICKNESS=',shellthickness);
    line = strcat(line,', SHELL THICKNESS=',shellthickness);
end
end


if ~strcmp(iproperties,'none') && ~strcmp(iproperties,'NONE') && ~strcmp(iproperties,'None')
if ~strcmp(iproperties,'none') && ~strcmp(iproperties,'NONE') && ~strcmp(iproperties,'None')
    line = strcat(line,', I PROPERTIES=',iproperties);
    line = strcat(line,', I PROPERTIES=',iproperties);
end
end


if ~strcmp(properties,'none') && ~strcmp(properties,'NONE') && ~strcmp(properties,'None')
if ~strcmp(properties,'none') && ~strcmp(properties,'NONE') && ~strcmp(properties,'None')
    line = strcat(line,', PROPERTIES=',properties);
    line = strcat(line,', PROPERTIES=',properties);
end
end


if ~strcmp(unsymm,'none') && ~strcmp(unsymm,'NONE') && ~strcmp(unsymm,'None')
if ~strcmp(unsymm,'none') && ~strcmp(unsymm,'NONE') && ~strcmp(unsymm,'None')
    line = strcat(line,', UNSYMM=',unsymm);
    line = strcat(line,', UNSYMM=',unsymm);
end
end


if ~strcmp(variables,'none') && ~strcmp(variables,'NONE') && ~strcmp(variables,'None')
if ~strcmp(variables,'none') && ~strcmp(variables,'NONE') && ~strcmp(variables,'None')
    line = strcat(line,', VARIABLES=',variables);
    line = strcat(line,', VARIABLES=',variables);
end
end


if ~strcmp(dependencies,'none') && ~strcmp(dependencies,'NONE') && ~strcmp(dependencies,'None')
if ~strcmp(dependencies,'none') && ~strcmp(dependencies,'NONE') && ~strcmp(dependencies,'None')
    line = strcat(line,', DEPENDENCIES=',dependencies);
    line = strcat(line,', DEPENDENCIES=',dependencies);
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
