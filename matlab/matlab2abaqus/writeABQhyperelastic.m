function[]=writeABQhyperelastic(filepath,arruda-boyce,marlow,mooney-rivlin,neohooke,ogden,polynomial,reducedpolynomial,user,vanderwaals,yeoh,type,beta,moduli,n,poisson,properties,testdatainput,data,comment)
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

line = '*HYPERELASTIC';

if ~strcmp(arruda-boyce,'none') && ~strcmp(arruda-boyce,'NONE') && ~strcmp(arruda-boyce,'None')
    line = strcat(line,', ARRUDA-BOYCE=',arruda-boyce);
end

if ~strcmp(marlow,'none') && ~strcmp(marlow,'NONE') && ~strcmp(marlow,'None')
    line = strcat(line,', MARLOW=',marlow);
end

if ~strcmp(mooney-rivlin,'none') && ~strcmp(mooney-rivlin,'NONE') && ~strcmp(mooney-rivlin,'None')
    line = strcat(line,', MOONEY-RIVLIN=',mooney-rivlin);
end

if ~strcmp(neohooke,'none') && ~strcmp(neohooke,'NONE') && ~strcmp(neohooke,'None')
    line = strcat(line,', NEO HOOKE=',neohooke);
end

if ~strcmp(ogden,'none') && ~strcmp(ogden,'NONE') && ~strcmp(ogden,'None')
    line = strcat(line,', OGDEN=',ogden);
end

if ~strcmp(polynomial,'none') && ~strcmp(polynomial,'NONE') && ~strcmp(polynomial,'None')
    line = strcat(line,', POLYNOMIAL=',polynomial);
end

if ~strcmp(reducedpolynomial,'none') && ~strcmp(reducedpolynomial,'NONE') && ~strcmp(reducedpolynomial,'None')
    line = strcat(line,', REDUCED POLYNOMIAL=',reducedpolynomial);
end

if ~strcmp(user,'none') && ~strcmp(user,'NONE') && ~strcmp(user,'None')
    line = strcat(line,', USER=',user);
end

if ~strcmp(vanderwaals,'none') && ~strcmp(vanderwaals,'NONE') && ~strcmp(vanderwaals,'None')
    line = strcat(line,', VAN DER WAALS=',vanderwaals);
end

if ~strcmp(yeoh,'none') && ~strcmp(yeoh,'NONE') && ~strcmp(yeoh,'None')
    line = strcat(line,', YEOH=',yeoh);
end

if ~strcmp(type,'none') && ~strcmp(type,'NONE') && ~strcmp(type,'None')
    line = strcat(line,', TYPE=',type);
end

if ~strcmp(beta,'none') && ~strcmp(beta,'NONE') && ~strcmp(beta,'None')
    line = strcat(line,', BETA=',beta);
end

if ~strcmp(moduli,'none') && ~strcmp(moduli,'NONE') && ~strcmp(moduli,'None')
    line = strcat(line,', MODULI=',moduli);
end

if ~strcmp(n,'none') && ~strcmp(n,'NONE') && ~strcmp(n,'None')
    line = strcat(line,', N=',n);
end

if ~strcmp(poisson,'none') && ~strcmp(poisson,'NONE') && ~strcmp(poisson,'None')
    line = strcat(line,', POISSON=',poisson);
end

if ~strcmp(properties,'none') && ~strcmp(properties,'NONE') && ~strcmp(properties,'None')
    line = strcat(line,', PROPERTIES=',properties);
end

if ~strcmp(testdatainput,'none') && ~strcmp(testdatainput,'NONE') && ~strcmp(testdatainput,'None')
    line = strcat(line,', TEST DATA INPUT=',testdatainput);
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
