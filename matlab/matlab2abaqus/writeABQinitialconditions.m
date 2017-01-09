function[]=writeABQinitialconditions(filepath,type,absoluteexteriortolerance,definition,drivingelsets,exteriortolerance,file,fulltensor,geostatic,inc,input,interpolate,midside,normal,numberbackstresses,outputvariable,rebar,sectionpoints,step,unbalancedstress,user,variable,data,comment)
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

line = '*INITIAL CONDITIONS';

if ~strcmp(type,'none') && ~strcmp(type,'NONE') && ~strcmp(type,'None')
    line = strcat(line,', TYPE=',type);
end

if ~strcmp(absoluteexteriortolerance,'none') && ~strcmp(absoluteexteriortolerance,'NONE') && ~strcmp(absoluteexteriortolerance,'None')
    line = strcat(line,', ABSOLUTE EXTERIOR TOLERANCE=',absoluteexteriortolerance);
end

if ~strcmp(definition,'none') && ~strcmp(definition,'NONE') && ~strcmp(definition,'None')
    line = strcat(line,', DEFINITION=',definition);
end

if ~strcmp(drivingelsets,'none') && ~strcmp(drivingelsets,'NONE') && ~strcmp(drivingelsets,'None')
    line = strcat(line,', DRIVING ELSETS=',drivingelsets);
end

if ~strcmp(exteriortolerance,'none') && ~strcmp(exteriortolerance,'NONE') && ~strcmp(exteriortolerance,'None')
    line = strcat(line,', EXTERIOR TOLERANCE=',exteriortolerance);
end

if ~strcmp(file,'none') && ~strcmp(file,'NONE') && ~strcmp(file,'None')
    line = strcat(line,', FILE=',file);
end

if ~strcmp(fulltensor,'none') && ~strcmp(fulltensor,'NONE') && ~strcmp(fulltensor,'None')
    line = strcat(line,', FULL TENSOR=',fulltensor);
end

if ~strcmp(geostatic,'none') && ~strcmp(geostatic,'NONE') && ~strcmp(geostatic,'None')
    line = strcat(line,', GEOSTATIC=',geostatic);
end

if ~strcmp(inc,'none') && ~strcmp(inc,'NONE') && ~strcmp(inc,'None')
    line = strcat(line,', INC=',inc);
end

if ~strcmp(input,'none') && ~strcmp(input,'NONE') && ~strcmp(input,'None')
    line = strcat(line,', INPUT=',input);
end

if ~strcmp(interpolate,'none') && ~strcmp(interpolate,'NONE') && ~strcmp(interpolate,'None')
    line = strcat(line,', INTERPOLATE=',interpolate);
end

if ~strcmp(midside,'none') && ~strcmp(midside,'NONE') && ~strcmp(midside,'None')
    line = strcat(line,', MIDSIDE=',midside);
end

if ~strcmp(normal,'none') && ~strcmp(normal,'NONE') && ~strcmp(normal,'None')
    line = strcat(line,', NORMAL=',normal);
end

if ~strcmp(numberbackstresses,'none') && ~strcmp(numberbackstresses,'NONE') && ~strcmp(numberbackstresses,'None')
    line = strcat(line,', NUMBER BACKSTRESSES=',numberbackstresses);
end

if ~strcmp(outputvariable,'none') && ~strcmp(outputvariable,'NONE') && ~strcmp(outputvariable,'None')
    line = strcat(line,', OUTPUT VARIABLE=',outputvariable);
end

if ~strcmp(rebar,'none') && ~strcmp(rebar,'NONE') && ~strcmp(rebar,'None')
    line = strcat(line,', REBAR=',rebar);
end

if ~strcmp(sectionpoints,'none') && ~strcmp(sectionpoints,'NONE') && ~strcmp(sectionpoints,'None')
    line = strcat(line,', SECTION POINTS=',sectionpoints);
end

if ~strcmp(step,'none') && ~strcmp(step,'NONE') && ~strcmp(step,'None')
    line = strcat(line,', STEP=',step);
end

if ~strcmp(unbalancedstress,'none') && ~strcmp(unbalancedstress,'NONE') && ~strcmp(unbalancedstress,'None')
    line = strcat(line,', UNBALANCED STRESS=',unbalancedstress);
end

if ~strcmp(user,'none') && ~strcmp(user,'NONE') && ~strcmp(user,'None')
    line = strcat(line,', USER=',user);
end

if ~strcmp(variable,'none') && ~strcmp(variable,'NONE') && ~strcmp(variable,'None')
    line = strcat(line,', VARIABLE=',variable);
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
