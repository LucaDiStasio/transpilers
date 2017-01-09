function[]=writeABQdiagnostics(filepath,adaptivemesh,contactinitialoverclosure,criticalelements,cutoffratio,deeppenetrationfactor,deformationspeedcheck,detectcrossedsurfaces,plasticity,warningratio,warpedsurface,data,comment)
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

line = '*DIAGNOSTICS';

if ~strcmp(adaptivemesh,'none') && ~strcmp(adaptivemesh,'NONE') && ~strcmp(adaptivemesh,'None')
    line = strcat(line,', ADAPTIVE MESH=',adaptivemesh);
end

if ~strcmp(contactinitialoverclosure,'none') && ~strcmp(contactinitialoverclosure,'NONE') && ~strcmp(contactinitialoverclosure,'None')
    line = strcat(line,', CONTACT INITIAL OVERCLOSURE=',contactinitialoverclosure);
end

if ~strcmp(criticalelements,'none') && ~strcmp(criticalelements,'NONE') && ~strcmp(criticalelements,'None')
    line = strcat(line,', CRITICAL ELEMENTS=',criticalelements);
end

if ~strcmp(cutoffratio,'none') && ~strcmp(cutoffratio,'NONE') && ~strcmp(cutoffratio,'None')
    line = strcat(line,', CUTOFF RATIO=',cutoffratio);
end

if ~strcmp(deeppenetrationfactor,'none') && ~strcmp(deeppenetrationfactor,'NONE') && ~strcmp(deeppenetrationfactor,'None')
    line = strcat(line,', DEEP PENETRATION FACTOR=',deeppenetrationfactor);
end

if ~strcmp(deformationspeedcheck,'none') && ~strcmp(deformationspeedcheck,'NONE') && ~strcmp(deformationspeedcheck,'None')
    line = strcat(line,', DEFORMATION SPEED CHECK=',deformationspeedcheck);
end

if ~strcmp(detectcrossedsurfaces,'none') && ~strcmp(detectcrossedsurfaces,'NONE') && ~strcmp(detectcrossedsurfaces,'None')
    line = strcat(line,', DETECT CROSSED SURFACES=',detectcrossedsurfaces);
end

if ~strcmp(plasticity,'none') && ~strcmp(plasticity,'NONE') && ~strcmp(plasticity,'None')
    line = strcat(line,', PLASTICITY=',plasticity);
end

if ~strcmp(warningratio,'none') && ~strcmp(warningratio,'NONE') && ~strcmp(warningratio,'None')
    line = strcat(line,', WARNING RATIO=',warningratio);
end

if ~strcmp(warpedsurface,'none') && ~strcmp(warpedsurface,'NONE') && ~strcmp(warpedsurface,'None')
    line = strcat(line,', WARPED SURFACE=',warpedsurface);
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
