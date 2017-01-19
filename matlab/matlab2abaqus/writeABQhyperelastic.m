function[]=writeABQhyperelastic(filepath,arruda-boyce,marlow,mooney-rivlin,neohooke,ogden,polynomial,reducedpolynomial,user,vanderwaals,yeoh,type,beta,moduli,n,poisson,properties,testdatainput,data,comment)
function[]=writeABQhyperelastic(filepath,arruda-boyce,marlow,mooney-rivlin,neohooke,ogden,polynomial,reducedpolynomial,user,vanderwaals,yeoh,type,beta,moduli,n,poisson,properties,testdatainput,data,comment)
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


line = '*HYPERELASTIC';
line = '*HYPERELASTIC';


if ~strcmp(arruda-boyce,'none') && ~strcmp(arruda-boyce,'NONE') && ~strcmp(arruda-boyce,'None')
if ~strcmp(arruda-boyce,'none') && ~strcmp(arruda-boyce,'NONE') && ~strcmp(arruda-boyce,'None')
    line = strcat(line,', ARRUDA-BOYCE=',arruda-boyce);
    line = strcat(line,', ARRUDA-BOYCE=',arruda-boyce);
end
end


if ~strcmp(marlow,'none') && ~strcmp(marlow,'NONE') && ~strcmp(marlow,'None')
if ~strcmp(marlow,'none') && ~strcmp(marlow,'NONE') && ~strcmp(marlow,'None')
    line = strcat(line,', MARLOW=',marlow);
    line = strcat(line,', MARLOW=',marlow);
end
end


if ~strcmp(mooney-rivlin,'none') && ~strcmp(mooney-rivlin,'NONE') && ~strcmp(mooney-rivlin,'None')
if ~strcmp(mooney-rivlin,'none') && ~strcmp(mooney-rivlin,'NONE') && ~strcmp(mooney-rivlin,'None')
    line = strcat(line,', MOONEY-RIVLIN=',mooney-rivlin);
    line = strcat(line,', MOONEY-RIVLIN=',mooney-rivlin);
end
end


if ~strcmp(neohooke,'none') && ~strcmp(neohooke,'NONE') && ~strcmp(neohooke,'None')
if ~strcmp(neohooke,'none') && ~strcmp(neohooke,'NONE') && ~strcmp(neohooke,'None')
    line = strcat(line,', NEO HOOKE=',neohooke);
    line = strcat(line,', NEO HOOKE=',neohooke);
end
end


if ~strcmp(ogden,'none') && ~strcmp(ogden,'NONE') && ~strcmp(ogden,'None')
if ~strcmp(ogden,'none') && ~strcmp(ogden,'NONE') && ~strcmp(ogden,'None')
    line = strcat(line,', OGDEN=',ogden);
    line = strcat(line,', OGDEN=',ogden);
end
end


if ~strcmp(polynomial,'none') && ~strcmp(polynomial,'NONE') && ~strcmp(polynomial,'None')
if ~strcmp(polynomial,'none') && ~strcmp(polynomial,'NONE') && ~strcmp(polynomial,'None')
    line = strcat(line,', POLYNOMIAL=',polynomial);
    line = strcat(line,', POLYNOMIAL=',polynomial);
end
end


if ~strcmp(reducedpolynomial,'none') && ~strcmp(reducedpolynomial,'NONE') && ~strcmp(reducedpolynomial,'None')
if ~strcmp(reducedpolynomial,'none') && ~strcmp(reducedpolynomial,'NONE') && ~strcmp(reducedpolynomial,'None')
    line = strcat(line,', REDUCED POLYNOMIAL=',reducedpolynomial);
    line = strcat(line,', REDUCED POLYNOMIAL=',reducedpolynomial);
end
end


if ~strcmp(user,'none') && ~strcmp(user,'NONE') && ~strcmp(user,'None')
if ~strcmp(user,'none') && ~strcmp(user,'NONE') && ~strcmp(user,'None')
    line = strcat(line,', USER=',user);
    line = strcat(line,', USER=',user);
end
end


if ~strcmp(vanderwaals,'none') && ~strcmp(vanderwaals,'NONE') && ~strcmp(vanderwaals,'None')
if ~strcmp(vanderwaals,'none') && ~strcmp(vanderwaals,'NONE') && ~strcmp(vanderwaals,'None')
    line = strcat(line,', VAN DER WAALS=',vanderwaals);
    line = strcat(line,', VAN DER WAALS=',vanderwaals);
end
end


if ~strcmp(yeoh,'none') && ~strcmp(yeoh,'NONE') && ~strcmp(yeoh,'None')
if ~strcmp(yeoh,'none') && ~strcmp(yeoh,'NONE') && ~strcmp(yeoh,'None')
    line = strcat(line,', YEOH=',yeoh);
    line = strcat(line,', YEOH=',yeoh);
end
end


if ~strcmp(type,'none') && ~strcmp(type,'NONE') && ~strcmp(type,'None')
if ~strcmp(type,'none') && ~strcmp(type,'NONE') && ~strcmp(type,'None')
    line = strcat(line,', TYPE=',type);
    line = strcat(line,', TYPE=',type);
end
end


if ~strcmp(beta,'none') && ~strcmp(beta,'NONE') && ~strcmp(beta,'None')
if ~strcmp(beta,'none') && ~strcmp(beta,'NONE') && ~strcmp(beta,'None')
    line = strcat(line,', BETA=',beta);
    line = strcat(line,', BETA=',beta);
end
end


if ~strcmp(moduli,'none') && ~strcmp(moduli,'NONE') && ~strcmp(moduli,'None')
if ~strcmp(moduli,'none') && ~strcmp(moduli,'NONE') && ~strcmp(moduli,'None')
    line = strcat(line,', MODULI=',moduli);
    line = strcat(line,', MODULI=',moduli);
end
end


if ~strcmp(n,'none') && ~strcmp(n,'NONE') && ~strcmp(n,'None')
if ~strcmp(n,'none') && ~strcmp(n,'NONE') && ~strcmp(n,'None')
    line = strcat(line,', N=',n);
    line = strcat(line,', N=',n);
end
end


if ~strcmp(poisson,'none') && ~strcmp(poisson,'NONE') && ~strcmp(poisson,'None')
if ~strcmp(poisson,'none') && ~strcmp(poisson,'NONE') && ~strcmp(poisson,'None')
    line = strcat(line,', POISSON=',poisson);
    line = strcat(line,', POISSON=',poisson);
end
end


if ~strcmp(properties,'none') && ~strcmp(properties,'NONE') && ~strcmp(properties,'None')
if ~strcmp(properties,'none') && ~strcmp(properties,'NONE') && ~strcmp(properties,'None')
    line = strcat(line,', PROPERTIES=',properties);
    line = strcat(line,', PROPERTIES=',properties);
end
end


if ~strcmp(testdatainput,'none') && ~strcmp(testdatainput,'NONE') && ~strcmp(testdatainput,'None')
if ~strcmp(testdatainput,'none') && ~strcmp(testdatainput,'NONE') && ~strcmp(testdatainput,'None')
    line = strcat(line,', TEST DATA INPUT=',testdatainput);
    line = strcat(line,', TEST DATA INPUT=',testdatainput);
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
