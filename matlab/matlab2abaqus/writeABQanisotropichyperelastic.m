function[]=writeABQanisotropichyperelastic(filepath,fung-anisotropic,fung-orthotropic,holzapfel,user,formulation,type,dependencies,localdirections,moduli,properties,data,comment)
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

line = '*ANISOTROPIC HYPERELASTIC';

if ~strcmp(fung-anisotropic,'none') && ~strcmp(fung-anisotropic,'NONE') && ~strcmp(fung-anisotropic,'None')
    line = strcat(line,', FUNG-ANISOTROPIC=',fung-anisotropic);
end

if ~strcmp(fung-orthotropic,'none') && ~strcmp(fung-orthotropic,'NONE') && ~strcmp(fung-orthotropic,'None')
    line = strcat(line,', FUNG-ORTHOTROPIC=',fung-orthotropic);
end

if ~strcmp(holzapfel,'none') && ~strcmp(holzapfel,'NONE') && ~strcmp(holzapfel,'None')
    line = strcat(line,', HOLZAPFEL=',holzapfel);
end

if ~strcmp(user,'none') && ~strcmp(user,'NONE') && ~strcmp(user,'None')
    line = strcat(line,', USER=',user);
end

if ~strcmp(formulation,'none') && ~strcmp(formulation,'NONE') && ~strcmp(formulation,'None')
    line = strcat(line,', FORMULATION=',formulation);
end

if ~strcmp(type,'none') && ~strcmp(type,'NONE') && ~strcmp(type,'None')
    line = strcat(line,', TYPE=',type);
end

if ~strcmp(dependencies,'none') && ~strcmp(dependencies,'NONE') && ~strcmp(dependencies,'None')
    line = strcat(line,', DEPENDENCIES=',dependencies);
end

if ~strcmp(localdirections,'none') && ~strcmp(localdirections,'NONE') && ~strcmp(localdirections,'None')
    line = strcat(line,', LOCAL DIRECTIONS=',localdirections);
end

if ~strcmp(moduli,'none') && ~strcmp(moduli,'NONE') && ~strcmp(moduli,'None')
    line = strcat(line,', MODULI=',moduli);
end

if ~strcmp(properties,'none') && ~strcmp(properties,'NONE') && ~strcmp(properties,'None')
    line = strcat(line,', PROPERTIES=',properties);
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
