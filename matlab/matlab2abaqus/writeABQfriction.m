function[]=writeABQfriction(filepath,elasticslip,lagrange,rough,sliptolerance,user,anisotropic,dependencies,depvar,exponentialdecay,properties,sheartractionslope,taumax,testdata,data,comment)
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

line = '*FRICTION';

if ~strcmp(elasticslip,'none') && ~strcmp(elasticslip,'NONE') && ~strcmp(elasticslip,'None')
    line = strcat(line,', ELASTIC SLIP=',elasticslip);
end

if ~strcmp(lagrange,'none') && ~strcmp(lagrange,'NONE') && ~strcmp(lagrange,'None')
    line = strcat(line,', LAGRANGE=',lagrange);
end

if ~strcmp(rough,'none') && ~strcmp(rough,'NONE') && ~strcmp(rough,'None')
    line = strcat(line,', ROUGH=',rough);
end

if ~strcmp(sliptolerance,'none') && ~strcmp(sliptolerance,'NONE') && ~strcmp(sliptolerance,'None')
    line = strcat(line,', SLIP TOLERANCE=',sliptolerance);
end

if ~strcmp(user,'none') && ~strcmp(user,'NONE') && ~strcmp(user,'None')
    line = strcat(line,', USER=',user);
end

if ~strcmp(anisotropic,'none') && ~strcmp(anisotropic,'NONE') && ~strcmp(anisotropic,'None')
    line = strcat(line,', ANISOTROPIC=',anisotropic);
end

if ~strcmp(dependencies,'none') && ~strcmp(dependencies,'NONE') && ~strcmp(dependencies,'None')
    line = strcat(line,', DEPENDENCIES=',dependencies);
end

if ~strcmp(depvar,'none') && ~strcmp(depvar,'NONE') && ~strcmp(depvar,'None')
    line = strcat(line,', DEPVAR=',depvar);
end

if ~strcmp(exponentialdecay,'none') && ~strcmp(exponentialdecay,'NONE') && ~strcmp(exponentialdecay,'None')
    line = strcat(line,', EXPONENTIAL DECAY=',exponentialdecay);
end

if ~strcmp(properties,'none') && ~strcmp(properties,'NONE') && ~strcmp(properties,'None')
    line = strcat(line,', PROPERTIES=',properties);
end

if ~strcmp(sheartractionslope,'none') && ~strcmp(sheartractionslope,'NONE') && ~strcmp(sheartractionslope,'None')
    line = strcat(line,', SHEAR TRACTION SLOPE=',sheartractionslope);
end

if ~strcmp(taumax,'none') && ~strcmp(taumax,'NONE') && ~strcmp(taumax,'None')
    line = strcat(line,', TAUMAX=',taumax);
end

if ~strcmp(testdata,'none') && ~strcmp(testdata,'NONE') && ~strcmp(testdata,'None')
    line = strcat(line,', TEST DATA=',testdata);
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
