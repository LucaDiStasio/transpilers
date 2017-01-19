function[]=writeABQinitialconditions(filepath,type,absoluteexteriortolerance,definition,drivingelsets,exteriortolerance,file,fulltensor,geostatic,inc,input,interpolate,midside,normal,numberbackstresses,outputvariable,rebar,sectionpoints,step,unbalancedstress,user,variable,data,comment)
function[]=writeABQinitialconditions(filepath,type,absoluteexteriortolerance,definition,drivingelsets,exteriortolerance,file,fulltensor,geostatic,inc,input,interpolate,midside,normal,numberbackstresses,outputvariable,rebar,sectionpoints,step,unbalancedstress,user,variable,data,comment)
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


line = '*INITIAL CONDITIONS';
line = '*INITIAL CONDITIONS';


if ~strcmp(type,'none') && ~strcmp(type,'NONE') && ~strcmp(type,'None')
if ~strcmp(type,'none') && ~strcmp(type,'NONE') && ~strcmp(type,'None')
    line = strcat(line,', TYPE=',type);
    line = strcat(line,', TYPE=',type);
end
end


if ~strcmp(absoluteexteriortolerance,'none') && ~strcmp(absoluteexteriortolerance,'NONE') && ~strcmp(absoluteexteriortolerance,'None')
if ~strcmp(absoluteexteriortolerance,'none') && ~strcmp(absoluteexteriortolerance,'NONE') && ~strcmp(absoluteexteriortolerance,'None')
    line = strcat(line,', ABSOLUTE EXTERIOR TOLERANCE=',absoluteexteriortolerance);
    line = strcat(line,', ABSOLUTE EXTERIOR TOLERANCE=',absoluteexteriortolerance);
end
end


if ~strcmp(definition,'none') && ~strcmp(definition,'NONE') && ~strcmp(definition,'None')
if ~strcmp(definition,'none') && ~strcmp(definition,'NONE') && ~strcmp(definition,'None')
    line = strcat(line,', DEFINITION=',definition);
    line = strcat(line,', DEFINITION=',definition);
end
end


if ~strcmp(drivingelsets,'none') && ~strcmp(drivingelsets,'NONE') && ~strcmp(drivingelsets,'None')
if ~strcmp(drivingelsets,'none') && ~strcmp(drivingelsets,'NONE') && ~strcmp(drivingelsets,'None')
    line = strcat(line,', DRIVING ELSETS=',drivingelsets);
    line = strcat(line,', DRIVING ELSETS=',drivingelsets);
end
end


if ~strcmp(exteriortolerance,'none') && ~strcmp(exteriortolerance,'NONE') && ~strcmp(exteriortolerance,'None')
if ~strcmp(exteriortolerance,'none') && ~strcmp(exteriortolerance,'NONE') && ~strcmp(exteriortolerance,'None')
    line = strcat(line,', EXTERIOR TOLERANCE=',exteriortolerance);
    line = strcat(line,', EXTERIOR TOLERANCE=',exteriortolerance);
end
end


if ~strcmp(file,'none') && ~strcmp(file,'NONE') && ~strcmp(file,'None')
if ~strcmp(file,'none') && ~strcmp(file,'NONE') && ~strcmp(file,'None')
    line = strcat(line,', FILE=',file);
    line = strcat(line,', FILE=',file);
end
end


if ~strcmp(fulltensor,'none') && ~strcmp(fulltensor,'NONE') && ~strcmp(fulltensor,'None')
if ~strcmp(fulltensor,'none') && ~strcmp(fulltensor,'NONE') && ~strcmp(fulltensor,'None')
    line = strcat(line,', FULL TENSOR=',fulltensor);
    line = strcat(line,', FULL TENSOR=',fulltensor);
end
end


if ~strcmp(geostatic,'none') && ~strcmp(geostatic,'NONE') && ~strcmp(geostatic,'None')
if ~strcmp(geostatic,'none') && ~strcmp(geostatic,'NONE') && ~strcmp(geostatic,'None')
    line = strcat(line,', GEOSTATIC=',geostatic);
    line = strcat(line,', GEOSTATIC=',geostatic);
end
end


if ~strcmp(inc,'none') && ~strcmp(inc,'NONE') && ~strcmp(inc,'None')
if ~strcmp(inc,'none') && ~strcmp(inc,'NONE') && ~strcmp(inc,'None')
    line = strcat(line,', INC=',inc);
    line = strcat(line,', INC=',inc);
end
end


if ~strcmp(input,'none') && ~strcmp(input,'NONE') && ~strcmp(input,'None')
if ~strcmp(input,'none') && ~strcmp(input,'NONE') && ~strcmp(input,'None')
    line = strcat(line,', INPUT=',input);
    line = strcat(line,', INPUT=',input);
end
end


if ~strcmp(interpolate,'none') && ~strcmp(interpolate,'NONE') && ~strcmp(interpolate,'None')
if ~strcmp(interpolate,'none') && ~strcmp(interpolate,'NONE') && ~strcmp(interpolate,'None')
    line = strcat(line,', INTERPOLATE=',interpolate);
    line = strcat(line,', INTERPOLATE=',interpolate);
end
end


if ~strcmp(midside,'none') && ~strcmp(midside,'NONE') && ~strcmp(midside,'None')
if ~strcmp(midside,'none') && ~strcmp(midside,'NONE') && ~strcmp(midside,'None')
    line = strcat(line,', MIDSIDE=',midside);
    line = strcat(line,', MIDSIDE=',midside);
end
end


if ~strcmp(normal,'none') && ~strcmp(normal,'NONE') && ~strcmp(normal,'None')
if ~strcmp(normal,'none') && ~strcmp(normal,'NONE') && ~strcmp(normal,'None')
    line = strcat(line,', NORMAL=',normal);
    line = strcat(line,', NORMAL=',normal);
end
end


if ~strcmp(numberbackstresses,'none') && ~strcmp(numberbackstresses,'NONE') && ~strcmp(numberbackstresses,'None')
if ~strcmp(numberbackstresses,'none') && ~strcmp(numberbackstresses,'NONE') && ~strcmp(numberbackstresses,'None')
    line = strcat(line,', NUMBER BACKSTRESSES=',numberbackstresses);
    line = strcat(line,', NUMBER BACKSTRESSES=',numberbackstresses);
end
end


if ~strcmp(outputvariable,'none') && ~strcmp(outputvariable,'NONE') && ~strcmp(outputvariable,'None')
if ~strcmp(outputvariable,'none') && ~strcmp(outputvariable,'NONE') && ~strcmp(outputvariable,'None')
    line = strcat(line,', OUTPUT VARIABLE=',outputvariable);
    line = strcat(line,', OUTPUT VARIABLE=',outputvariable);
end
end


if ~strcmp(rebar,'none') && ~strcmp(rebar,'NONE') && ~strcmp(rebar,'None')
if ~strcmp(rebar,'none') && ~strcmp(rebar,'NONE') && ~strcmp(rebar,'None')
    line = strcat(line,', REBAR=',rebar);
    line = strcat(line,', REBAR=',rebar);
end
end


if ~strcmp(sectionpoints,'none') && ~strcmp(sectionpoints,'NONE') && ~strcmp(sectionpoints,'None')
if ~strcmp(sectionpoints,'none') && ~strcmp(sectionpoints,'NONE') && ~strcmp(sectionpoints,'None')
    line = strcat(line,', SECTION POINTS=',sectionpoints);
    line = strcat(line,', SECTION POINTS=',sectionpoints);
end
end


if ~strcmp(step,'none') && ~strcmp(step,'NONE') && ~strcmp(step,'None')
if ~strcmp(step,'none') && ~strcmp(step,'NONE') && ~strcmp(step,'None')
    line = strcat(line,', STEP=',step);
    line = strcat(line,', STEP=',step);
end
end


if ~strcmp(unbalancedstress,'none') && ~strcmp(unbalancedstress,'NONE') && ~strcmp(unbalancedstress,'None')
if ~strcmp(unbalancedstress,'none') && ~strcmp(unbalancedstress,'NONE') && ~strcmp(unbalancedstress,'None')
    line = strcat(line,', UNBALANCED STRESS=',unbalancedstress);
    line = strcat(line,', UNBALANCED STRESS=',unbalancedstress);
end
end


if ~strcmp(user,'none') && ~strcmp(user,'NONE') && ~strcmp(user,'None')
if ~strcmp(user,'none') && ~strcmp(user,'NONE') && ~strcmp(user,'None')
    line = strcat(line,', USER=',user);
    line = strcat(line,', USER=',user);
end
end


if ~strcmp(variable,'none') && ~strcmp(variable,'NONE') && ~strcmp(variable,'None')
if ~strcmp(variable,'none') && ~strcmp(variable,'NONE') && ~strcmp(variable,'None')
    line = strcat(line,', VARIABLE=',variable);
    line = strcat(line,', VARIABLE=',variable);
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
