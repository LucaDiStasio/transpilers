function[]=writeABQfriction(filepath,elasticslip,lagrange,rough,sliptolerance,user,anisotropic,dependencies,depvar,exponentialdecay,properties,sheartractionslope,taumax,testdata,data,comment)
function[]=writeABQfriction(filepath,elasticslip,lagrange,rough,sliptolerance,user,anisotropic,dependencies,depvar,exponentialdecay,properties,sheartractionslope,taumax,testdata,data,comment)
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


line = '*FRICTION';
line = '*FRICTION';


if ~strcmp(elasticslip,'none') && ~strcmp(elasticslip,'NONE') && ~strcmp(elasticslip,'None')
if ~strcmp(elasticslip,'none') && ~strcmp(elasticslip,'NONE') && ~strcmp(elasticslip,'None')
    line = strcat(line,', ELASTIC SLIP=',elasticslip);
    line = strcat(line,', ELASTIC SLIP=',elasticslip);
end
end


if ~strcmp(lagrange,'none') && ~strcmp(lagrange,'NONE') && ~strcmp(lagrange,'None')
if ~strcmp(lagrange,'none') && ~strcmp(lagrange,'NONE') && ~strcmp(lagrange,'None')
    line = strcat(line,', LAGRANGE=',lagrange);
    line = strcat(line,', LAGRANGE=',lagrange);
end
end


if ~strcmp(rough,'none') && ~strcmp(rough,'NONE') && ~strcmp(rough,'None')
if ~strcmp(rough,'none') && ~strcmp(rough,'NONE') && ~strcmp(rough,'None')
    line = strcat(line,', ROUGH=',rough);
    line = strcat(line,', ROUGH=',rough);
end
end


if ~strcmp(sliptolerance,'none') && ~strcmp(sliptolerance,'NONE') && ~strcmp(sliptolerance,'None')
if ~strcmp(sliptolerance,'none') && ~strcmp(sliptolerance,'NONE') && ~strcmp(sliptolerance,'None')
    line = strcat(line,', SLIP TOLERANCE=',sliptolerance);
    line = strcat(line,', SLIP TOLERANCE=',sliptolerance);
end
end


if ~strcmp(user,'none') && ~strcmp(user,'NONE') && ~strcmp(user,'None')
if ~strcmp(user,'none') && ~strcmp(user,'NONE') && ~strcmp(user,'None')
    line = strcat(line,', USER=',user);
    line = strcat(line,', USER=',user);
end
end


if ~strcmp(anisotropic,'none') && ~strcmp(anisotropic,'NONE') && ~strcmp(anisotropic,'None')
if ~strcmp(anisotropic,'none') && ~strcmp(anisotropic,'NONE') && ~strcmp(anisotropic,'None')
    line = strcat(line,', ANISOTROPIC=',anisotropic);
    line = strcat(line,', ANISOTROPIC=',anisotropic);
end
end


if ~strcmp(dependencies,'none') && ~strcmp(dependencies,'NONE') && ~strcmp(dependencies,'None')
if ~strcmp(dependencies,'none') && ~strcmp(dependencies,'NONE') && ~strcmp(dependencies,'None')
    line = strcat(line,', DEPENDENCIES=',dependencies);
    line = strcat(line,', DEPENDENCIES=',dependencies);
end
end


if ~strcmp(depvar,'none') && ~strcmp(depvar,'NONE') && ~strcmp(depvar,'None')
if ~strcmp(depvar,'none') && ~strcmp(depvar,'NONE') && ~strcmp(depvar,'None')
    line = strcat(line,', DEPVAR=',depvar);
    line = strcat(line,', DEPVAR=',depvar);
end
end


if ~strcmp(exponentialdecay,'none') && ~strcmp(exponentialdecay,'NONE') && ~strcmp(exponentialdecay,'None')
if ~strcmp(exponentialdecay,'none') && ~strcmp(exponentialdecay,'NONE') && ~strcmp(exponentialdecay,'None')
    line = strcat(line,', EXPONENTIAL DECAY=',exponentialdecay);
    line = strcat(line,', EXPONENTIAL DECAY=',exponentialdecay);
end
end


if ~strcmp(properties,'none') && ~strcmp(properties,'NONE') && ~strcmp(properties,'None')
if ~strcmp(properties,'none') && ~strcmp(properties,'NONE') && ~strcmp(properties,'None')
    line = strcat(line,', PROPERTIES=',properties);
    line = strcat(line,', PROPERTIES=',properties);
end
end


if ~strcmp(sheartractionslope,'none') && ~strcmp(sheartractionslope,'NONE') && ~strcmp(sheartractionslope,'None')
if ~strcmp(sheartractionslope,'none') && ~strcmp(sheartractionslope,'NONE') && ~strcmp(sheartractionslope,'None')
    line = strcat(line,', SHEAR TRACTION SLOPE=',sheartractionslope);
    line = strcat(line,', SHEAR TRACTION SLOPE=',sheartractionslope);
end
end


if ~strcmp(taumax,'none') && ~strcmp(taumax,'NONE') && ~strcmp(taumax,'None')
if ~strcmp(taumax,'none') && ~strcmp(taumax,'NONE') && ~strcmp(taumax,'None')
    line = strcat(line,', TAUMAX=',taumax);
    line = strcat(line,', TAUMAX=',taumax);
end
end


if ~strcmp(testdata,'none') && ~strcmp(testdata,'NONE') && ~strcmp(testdata,'None')
if ~strcmp(testdata,'none') && ~strcmp(testdata,'NONE') && ~strcmp(testdata,'None')
    line = strcat(line,', TEST DATA=',testdata);
    line = strcat(line,', TEST DATA=',testdata);
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
