function[]=writeABQsectioncontrols(filepath,name,conversioncriterion,distortioncontrol,drillstiffness,elementconversion,elementdeletion,hourglass,initialgapopening,kernel,kinematicsplit,lengthratio,maxdegradation,perturbation,rampinitialstress,secondorderaccuracy,viscosity,weightfactor,data,comment)
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

line = '*SECTION CONTROLS';

if ~strcmp(name,'none') && ~strcmp(name,'NONE') && ~strcmp(name,'None')
    line = strcat(line,', NAME=',name);
end

if ~strcmp(conversioncriterion,'none') && ~strcmp(conversioncriterion,'NONE') && ~strcmp(conversioncriterion,'None')
    line = strcat(line,', CONVERSION CRITERION=',conversioncriterion);
end

if ~strcmp(distortioncontrol,'none') && ~strcmp(distortioncontrol,'NONE') && ~strcmp(distortioncontrol,'None')
    line = strcat(line,', DISTORTION CONTROL=',distortioncontrol);
end

if ~strcmp(drillstiffness,'none') && ~strcmp(drillstiffness,'NONE') && ~strcmp(drillstiffness,'None')
    line = strcat(line,', DRILL STIFFNESS=',drillstiffness);
end

if ~strcmp(elementconversion,'none') && ~strcmp(elementconversion,'NONE') && ~strcmp(elementconversion,'None')
    line = strcat(line,', ELEMENT CONVERSION=',elementconversion);
end

if ~strcmp(elementdeletion,'none') && ~strcmp(elementdeletion,'NONE') && ~strcmp(elementdeletion,'None')
    line = strcat(line,', ELEMENT DELETION=',elementdeletion);
end

if ~strcmp(hourglass,'none') && ~strcmp(hourglass,'NONE') && ~strcmp(hourglass,'None')
    line = strcat(line,', HOURGLASS=',hourglass);
end

if ~strcmp(initialgapopening,'none') && ~strcmp(initialgapopening,'NONE') && ~strcmp(initialgapopening,'None')
    line = strcat(line,', INITIAL GAP OPENING=',initialgapopening);
end

if ~strcmp(kernel,'none') && ~strcmp(kernel,'NONE') && ~strcmp(kernel,'None')
    line = strcat(line,', KERNEL=',kernel);
end

if ~strcmp(kinematicsplit,'none') && ~strcmp(kinematicsplit,'NONE') && ~strcmp(kinematicsplit,'None')
    line = strcat(line,', KINEMATIC SPLIT=',kinematicsplit);
end

if ~strcmp(lengthratio,'none') && ~strcmp(lengthratio,'NONE') && ~strcmp(lengthratio,'None')
    line = strcat(line,', LENGTH RATIO=',lengthratio);
end

if ~strcmp(maxdegradation,'none') && ~strcmp(maxdegradation,'NONE') && ~strcmp(maxdegradation,'None')
    line = strcat(line,', MAX DEGRADATION=',maxdegradation);
end

if ~strcmp(perturbation,'none') && ~strcmp(perturbation,'NONE') && ~strcmp(perturbation,'None')
    line = strcat(line,', PERTURBATION=',perturbation);
end

if ~strcmp(rampinitialstress,'none') && ~strcmp(rampinitialstress,'NONE') && ~strcmp(rampinitialstress,'None')
    line = strcat(line,', RAMP INITIAL STRESS=',rampinitialstress);
end

if ~strcmp(secondorderaccuracy,'none') && ~strcmp(secondorderaccuracy,'NONE') && ~strcmp(secondorderaccuracy,'None')
    line = strcat(line,', SECOND ORDER ACCURACY=',secondorderaccuracy);
end

if ~strcmp(viscosity,'none') && ~strcmp(viscosity,'NONE') && ~strcmp(viscosity,'None')
    line = strcat(line,', VISCOSITY=',viscosity);
end

if ~strcmp(weightfactor,'none') && ~strcmp(weightfactor,'NONE') && ~strcmp(weightfactor,'None')
    line = strcat(line,', WEIGHT FACTOR=',weightfactor);
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
