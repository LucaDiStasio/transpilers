function[]=writeMeshToTikz(logfullfile,latexFolder,latexFile,nodes,edges)
%%
%==============================================================================
% Copyright (c) 2016 Universit� de Lorraine & Lule� tekniska universitet
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
% Neither the name of the Universit� de Lorraine or Lule� tekniska universitet
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

writeToLogFile(logfullfile,'In function: writeMeshToTikz\n');
writeToLogFile(logfullfile,'\nStarting timer\n');
start = tic;

texPath = fullfile(latexFolder,latexFile);

writeToLogFile(logfullfile,['Creating file ', texPath,' ...\n']);
try
  fileID = fopen(texPath,'w');
  writeTIKZcomment(texPath,['Automatically created by The Virtual Lab on ',num2str(datetime('now').Day),'-',num2str(datetime('now').Month),'-',num2str(datetime('now').Year),' at ',num2str(datetime('now').Hour),':',num2str(datetime('now').Minute),':',num2str(datetime('now').Second)]);
  fclose(fileID);
catch ME
  writeToLogFile(logfullfile,['An error occurred: ', ME.identifier,'\n']);
  writeToLogFile(logfullfile,['Terminating program.','\n']);
  exit(2)
end
writeToLogFile(logfullfile,['... done.','\n']);

writeToLogFile(logfullfile,['Calling function ', 'writeTIKZdocumentclass',' ...\n']);
writeTIKZdocumentclass(texPath,'standalone','');
writeToLogFile(logfullfile,['... done.','\n']);

writeToLogFile(logfullfile,['Calling function ', 'writeTIKZpackages',' ...\n']);
writeTIKZpackages(texPath,{{'amsmath',''},{'mathrsfs',''},{'pgf',''},{'tikz',''},{'verbatim',''}});
writeToLogFile(logfullfile,['... done.','\n']);

writeToLogFile(logfullfile,['Calling function ', 'writeTIKZdocumentstart',' ...\n']);
writeTIKZdocumentstart(texPath);
writeToLogFile(logfullfile,['... done.','\n']);

writeToLogFile(logfullfile,['Calling function ', 'writeTIKZpicturestart',' ...\n']);
writeTIKZpicturestart(texPath,'scale=4.5,cap=round,x=1.5cm,y=1.5cm');
writeToLogFile(logfullfile,['... done.','\n']);

writeToLogFile(logfullfile,['For each node, calling function ', 'writeTIKZfillcircle',' ...\n']);
for i=1:length(nodes)
  writeTIKZfillcircle(latexFullpath,nodes(i,1),nodes(i,2),1)   % r is in pt
end
writeToLogFile(logfullfile,['... done.','\n']);

if length(edges(1,:))>2
  for i=1:length(edges)
    writeTIKZthreepointscurve(latexFullpath,nodes(edges(i,1),:),nodes(edges(i,2),:),nodes(edges(i,3),:))
  end
else
  for i=1:length(edges)
    writeTIKZtwopointline(latexFullpath,nodes(edges(i,1),:),nodes(edges(i,2),:))
  end
end

writeToLogFile(logfullfile,['Calling function ', 'writeTIKZpictureends',' ...\n']);
writeTIKZpictureends(texPath);
writeToLogFile(logfullfile,['... done.','\n']);

writeToLogFile(logfullfile,['Calling function ', 'writeTIKZdocumentends',' ...\n']);
writeTIKZdocumentends(texPath);
writeToLogFile(logfullfile,['... done.','\n']);

elapsed = toc(start);
writeToLogFile(logfullfile,'Timer stopped.\n')
writeToLogFile(logfullfile,['\nELAPSED WALLCLOCK TIME: ', num2str(elapsed),' [s]\n\n'])
writeToLogFile(logfullfile,'Exiting function: writeMeshToTikz\n')

return
