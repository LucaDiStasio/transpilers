function[]=writeABQloadingdata(filepath,dependencies,direction,extrapolation,independentcomponents,regularize,rtol,type,ratedependent,rateinterpolation,damageonset,slopedrop,yieldonset,data,comment)
function[]=writeABQloadingdata(filepath,dependencies,direction,extrapolation,independentcomponents,regularize,rtol,type,ratedependent,rateinterpolation,damageonset,slopedrop,yieldonset,data,comment)
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


line = '*LOADING DATA';
line = '*LOADING DATA';


if ~strcmp(dependencies,'none') && ~strcmp(dependencies,'NONE') && ~strcmp(dependencies,'None')
if ~strcmp(dependencies,'none') && ~strcmp(dependencies,'NONE') && ~strcmp(dependencies,'None')
    line = strcat(line,', DEPENDENCIES=',dependencies);
    line = strcat(line,', DEPENDENCIES=',dependencies);
end
end


if ~strcmp(direction,'none') && ~strcmp(direction,'NONE') && ~strcmp(direction,'None')
if ~strcmp(direction,'none') && ~strcmp(direction,'NONE') && ~strcmp(direction,'None')
    line = strcat(line,', DIRECTION=',direction);
    line = strcat(line,', DIRECTION=',direction);
end
end


if ~strcmp(extrapolation,'none') && ~strcmp(extrapolation,'NONE') && ~strcmp(extrapolation,'None')
if ~strcmp(extrapolation,'none') && ~strcmp(extrapolation,'NONE') && ~strcmp(extrapolation,'None')
    line = strcat(line,', EXTRAPOLATION=',extrapolation);
    line = strcat(line,', EXTRAPOLATION=',extrapolation);
end
end


if ~strcmp(independentcomponents,'none') && ~strcmp(independentcomponents,'NONE') && ~strcmp(independentcomponents,'None')
if ~strcmp(independentcomponents,'none') && ~strcmp(independentcomponents,'NONE') && ~strcmp(independentcomponents,'None')
    line = strcat(line,', INDEPENDENT COMPONENTS=',independentcomponents);
    line = strcat(line,', INDEPENDENT COMPONENTS=',independentcomponents);
end
end


if ~strcmp(regularize,'none') && ~strcmp(regularize,'NONE') && ~strcmp(regularize,'None')
if ~strcmp(regularize,'none') && ~strcmp(regularize,'NONE') && ~strcmp(regularize,'None')
    line = strcat(line,', REGULARIZE=',regularize);
    line = strcat(line,', REGULARIZE=',regularize);
end
end


if ~strcmp(rtol,'none') && ~strcmp(rtol,'NONE') && ~strcmp(rtol,'None')
if ~strcmp(rtol,'none') && ~strcmp(rtol,'NONE') && ~strcmp(rtol,'None')
    line = strcat(line,', RTOL=',rtol);
    line = strcat(line,', RTOL=',rtol);
end
end


if ~strcmp(type,'none') && ~strcmp(type,'NONE') && ~strcmp(type,'None')
if ~strcmp(type,'none') && ~strcmp(type,'NONE') && ~strcmp(type,'None')
    line = strcat(line,', TYPE=',type);
    line = strcat(line,', TYPE=',type);
end
end


if ~strcmp(ratedependent,'none') && ~strcmp(ratedependent,'NONE') && ~strcmp(ratedependent,'None')
if ~strcmp(ratedependent,'none') && ~strcmp(ratedependent,'NONE') && ~strcmp(ratedependent,'None')
    line = strcat(line,', RATE DEPENDENT=',ratedependent);
    line = strcat(line,', RATE DEPENDENT=',ratedependent);
end
end


if ~strcmp(rateinterpolation,'none') && ~strcmp(rateinterpolation,'NONE') && ~strcmp(rateinterpolation,'None')
if ~strcmp(rateinterpolation,'none') && ~strcmp(rateinterpolation,'NONE') && ~strcmp(rateinterpolation,'None')
    line = strcat(line,', RATE INTERPOLATION=',rateinterpolation);
    line = strcat(line,', RATE INTERPOLATION=',rateinterpolation);
end
end


if ~strcmp(damageonset,'none') && ~strcmp(damageonset,'NONE') && ~strcmp(damageonset,'None')
if ~strcmp(damageonset,'none') && ~strcmp(damageonset,'NONE') && ~strcmp(damageonset,'None')
    line = strcat(line,', DAMAGE ONSET=',damageonset);
    line = strcat(line,', DAMAGE ONSET=',damageonset);
end
end


if ~strcmp(slopedrop,'none') && ~strcmp(slopedrop,'NONE') && ~strcmp(slopedrop,'None')
if ~strcmp(slopedrop,'none') && ~strcmp(slopedrop,'NONE') && ~strcmp(slopedrop,'None')
    line = strcat(line,', SLOPE DROP=',slopedrop);
    line = strcat(line,', SLOPE DROP=',slopedrop);
end
end


if ~strcmp(yieldonset,'none') && ~strcmp(yieldonset,'NONE') && ~strcmp(yieldonset,'None')
if ~strcmp(yieldonset,'none') && ~strcmp(yieldonset,'NONE') && ~strcmp(yieldonset,'None')
    line = strcat(line,', YIELD ONSET=',yieldonset);
    line = strcat(line,', YIELD ONSET=',yieldonset);
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
