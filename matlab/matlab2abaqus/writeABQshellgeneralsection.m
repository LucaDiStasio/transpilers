function[]=writeABQshellgeneralsection(filepath,elset,density,bendingonly,controls,layup,membraneonly,offset,orientation,poisson,smearalllayers,stackdirection,symmetric,thicknessmodulus,zero,composite,material,user,nodalthickness,shellthickness,iproperties,properties,unsymm,variables,dependencies,data,comment)
%%
%==============================================================================
% Copyright (c) 2016-2017 Universite de Lorraine & Lulea tekniska universitet
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

line = '*SHELL GENERAL SECTION';

if ~strcmp(elset,'none') && ~strcmp(elset,'NONE') && ~strcmp(elset,'None')
    line = strcat(line,', ELSET=',elset);
end

if ~strcmp(density,'none') && ~strcmp(density,'NONE') && ~strcmp(density,'None')
    line = strcat(line,', DENSITY=',density);
end

if ~strcmp(bendingonly,'none') && ~strcmp(bendingonly,'NONE') && ~strcmp(bendingonly,'None')
    line = strcat(line,', BENDING ONLY=',bendingonly);
end

if ~strcmp(controls,'none') && ~strcmp(controls,'NONE') && ~strcmp(controls,'None')
    line = strcat(line,', CONTROLS=',controls);
end

if ~strcmp(layup,'none') && ~strcmp(layup,'NONE') && ~strcmp(layup,'None')
    line = strcat(line,', LAYUP=',layup);
end

if ~strcmp(membraneonly,'none') && ~strcmp(membraneonly,'NONE') && ~strcmp(membraneonly,'None')
    line = strcat(line,', MEMBRANE ONLY=',membraneonly);
end

if ~strcmp(offset,'none') && ~strcmp(offset,'NONE') && ~strcmp(offset,'None')
    line = strcat(line,', OFFSET=',offset);
end

if ~strcmp(orientation,'none') && ~strcmp(orientation,'NONE') && ~strcmp(orientation,'None')
    line = strcat(line,', ORIENTATION=',orientation);
end

if ~strcmp(poisson,'none') && ~strcmp(poisson,'NONE') && ~strcmp(poisson,'None')
    line = strcat(line,', POISSON=',poisson);
end

if ~strcmp(smearalllayers,'none') && ~strcmp(smearalllayers,'NONE') && ~strcmp(smearalllayers,'None')
    line = strcat(line,', SMEAR ALL LAYERS=',smearalllayers);
end

if ~strcmp(stackdirection,'none') && ~strcmp(stackdirection,'NONE') && ~strcmp(stackdirection,'None')
    line = strcat(line,', STACK DIRECTION=',stackdirection);
end

if ~strcmp(symmetric,'none') && ~strcmp(symmetric,'NONE') && ~strcmp(symmetric,'None')
    line = strcat(line,', SYMMETRIC=',symmetric);
end

if ~strcmp(thicknessmodulus,'none') && ~strcmp(thicknessmodulus,'NONE') && ~strcmp(thicknessmodulus,'None')
    line = strcat(line,', THICKNESS MODULUS=',thicknessmodulus);
end

if ~strcmp(zero,'none') && ~strcmp(zero,'NONE') && ~strcmp(zero,'None')
    line = strcat(line,', ZERO=',zero);
end

if ~strcmp(composite,'none') && ~strcmp(composite,'NONE') && ~strcmp(composite,'None')
    line = strcat(line,', COMPOSITE=',composite);
end

if ~strcmp(material,'none') && ~strcmp(material,'NONE') && ~strcmp(material,'None')
    line = strcat(line,', MATERIAL=',material);
end

if ~strcmp(user,'none') && ~strcmp(user,'NONE') && ~strcmp(user,'None')
    line = strcat(line,', USER=',user);
end

if ~strcmp(nodalthickness,'none') && ~strcmp(nodalthickness,'NONE') && ~strcmp(nodalthickness,'None')
    line = strcat(line,', NODAL THICKNESS=',nodalthickness);
end

if ~strcmp(shellthickness,'none') && ~strcmp(shellthickness,'NONE') && ~strcmp(shellthickness,'None')
    line = strcat(line,', SHELL THICKNESS=',shellthickness);
end

if ~strcmp(iproperties,'none') && ~strcmp(iproperties,'NONE') && ~strcmp(iproperties,'None')
    line = strcat(line,', I PROPERTIES=',iproperties);
end

if ~strcmp(properties,'none') && ~strcmp(properties,'NONE') && ~strcmp(properties,'None')
    line = strcat(line,', PROPERTIES=',properties);
end

if ~strcmp(unsymm,'none') && ~strcmp(unsymm,'NONE') && ~strcmp(unsymm,'None')
    line = strcat(line,', UNSYMM=',unsymm);
end

if ~strcmp(variables,'none') && ~strcmp(variables,'NONE') && ~strcmp(variables,'None')
    line = strcat(line,', VARIABLES=',variables);
end

if ~strcmp(dependencies,'none') && ~strcmp(dependencies,'NONE') && ~strcmp(dependencies,'None')
    line = strcat(line,', DEPENDENCIES=',dependencies);
end

fprintf(fileId,strcat(line,'\n'));

if ~strcmp(comment,'none') && ~strcmp(comment,'NONE') && ~strcmp(comment,'None')
    fprintf(fileId,strcat('**',comment,'\n'));
end

for i=1:length(data)
    dims = size(data);
    if dims(1)==1 && dims(2)==1
           fprintf(fileId,'%s',strcat(' ',data{i}));
           fprintf(fileId,'\n');
    elseif dims(1)>1 && dims(2)==1
       try
           fprintf(fileId,'%s',strcat(' ',data{i}{1}));
           fprintf(fileId,'\n');
       catch exception
           fprintf(fileId,'%s',strcat(' ',data{i}));
           fprintf(fileId,'\n');
       end
    elseif dims(1)==1 && dims(2)>1
       try
           fprintf(fileId,'%s',strcat(' ',data{1}{i}));
           fprintf(fileId,'\n');
       catch exception
           fprintf(fileId,'%s',strcat(' ',data{i}));
           fprintf(fileId,'\n');
       end
    else
           fprintf(fileId,'%s',strcat(' ',data{i}));
           fprintf(fileId,'\n');
    end
end

fprintf(fileId,'**\n');

fclose(fileId);

return
