function[]=writeABQlicense(filepath,holder,author,license)
%%
%==============================================================================
% Copyright (c) 2016 Université de Lorraine & Luleå tekniska universitet
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
% Neither the name of the Université de Lorraine or Luleå tekniska universitet
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
fprintf(fileId,'**---------------------------------------------------------------------------------------------------------------------------------\n');
fprintf(fileId,'**----------------------------------------------------- LICENSE -------------------------------------------------------------------\n');
fprintf(fileId,'**---------------------------------------------------------------------------------------------------------------------------------\n');
fprintf(fileId,'**\n');

if varargin==3
    fprintf(fileId,'**---------------------------------------------------------------------------------------------------------------------------------\n');
    fprintf(fileId, strcat('** Copyright (C) ', num2str(year(today)), ' ', holder, '\n'));
    fprintf(fileId, strcat('** Author: ', author, '\n'));
    fprintf(fileId,'**\n');
    fprintf(fileId,'** Redistribution and use in source and binary forms, with or without\n');
    fprintf(fileId,'** modification, are permitted provided that the following conditions are met:\n');
    fprintf(fileId,'**\n');
    fprintf(fileId,'** Redistributions of source code must retain the above copyright\n');
    fprintf(fileId,'** notice, this list of conditions and the following disclaimer.\n');
    fprintf(fileId,'** Redistributions in binary form must reproduce the above copyright\n');
    fprintf(fileId,'** notice, this list of conditions and the following disclaimer in\n');
    fprintf(fileId,'** the documentation and/or other materials provided with the distribution\n');
    fprintf(fileId, strcat('** Neither the name of the ', holder, '\n'));
    fprintf(fileId,'** nor the names of its contributors may be used to endorse or promote products\n');
    fprintf(fileId,'** derived from this software without specific prior written permission.\n');
    fprintf(fileId,'**\n');
    fprintf(fileId,'** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"\n');
    fprintf(fileId,'** AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE\n');
    fprintf(fileId,'** IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE\n');
    fprintf(fileId,'** ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE\n');
    fprintf(fileId,'** LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR\n');
    fprintf(fileId,'** CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF\n');
    fprintf(fileId,'** SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS\n');
    fprintf(fileId,'** INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN\n');
    fprintf(fileId,'** CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)\n');
    fprintf(fileId,'** ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE\n');
    fprintf(fileId,'** POSSIBILITY OF SUCH DAMAGE.\n');
    fprintf(fileId,'**---------------------------------------------------------------------------------------------------------------------------------\n');
elseif strcmp(license,'GNU-GPL-v3.0')
    fprintf(fileId,'**---------------------------------------------------------------------------------------------------------------------------------\n');
    fprintf(fileId, strcat('** Copyright (C) ', num2str(year(today)), ' ', holder, '\n'));
    fprintf(fileId, strcat('** Author: ', author, '\n'));
    fprintf(fileId,'**\n');
    fprintf(fileId,'** This program is free software: you can redistribute it and/or modify\n');
    fprintf(fileId,'** it under the terms of the GNU General Public License as published by\n');
    fprintf(fileId,'** the Free Software Foundation, either version 3 of the License, or\n');
    fprintf(fileId,'** (at your option) any later version.\n');
    fprintf(fileId,'**\n');
    fprintf(fileId,'** This program is distributed in the hope that it will be useful,\n');
    fprintf(fileId,'** but WITHOUT ANY WARRANTY; without even the implied warranty of\n');
    fprintf(fileId,'** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n');
    fprintf(fileId,'** GNU General Public License for more details.\n');
    fprintf(fileId,'**\n');
    fprintf(fileId,'** You should have received a copy of the GNU General Public License\n');
    fprintf(fileId,'** along with this program.  If not, see <http://www.gnu.org/licenses/>.\n');
    fprintf(fileId,'**---------------------------------------------------------------------------------------------------------------------------------\n');
elseif strcmp(license,'Apache-License-2.0')
    fprintf(fileId,'**---------------------------------------------------------------------------------------------------------------------------------\n');
    fprintf(fileId, strcat('** Copyright (C) ', num2str(year(today)), ' ', holder, '\n'));
    fprintf(fileId, strcat('** Author: ', author, '\n'));
    fprintf(fileId,'**\n');
    fprintf(fileId,'** Licensed under the Apache License, Version 2.0 (the "License");\n');
    fprintf(fileId,'** you may not use this file except in compliance with the License.\n');
    fprintf(fileId,'** You may obtain a copy of the License at\n');
    fprintf(fileId,'**\n');
    fprintf(fileId,'**     http://www.apache.org/licenses/LICENSE-2.0\n');
    fprintf(fileId,'**\n');
    fprintf(fileId,'** Unless required by applicable law or agreed to in writing, software\n');
    fprintf(fileId,'** distributed under the License is distributed on an "AS IS" BASIS,\n');
    fprintf(fileId,'** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n');
    fprintf(fileId,'** See the License for the specific language governing permissions and\n');
    fprintf(fileId,'** limitations under the License.\n');
elseif strcmp(license,'MIT')
    fprintf(fileId,'**---------------------------------------------------------------------------------------------------------------------------------\n');
    fprintf(fileId,'** MIT License\n');
    fprintf(fileId,'**\n');
    fprintf(fileId, strcat('** Copyright (C) ', num2str(year(today)), ' ', holder, '\n'));
    fprintf(fileId, strcat('** Author: ', author, '\n'));
    fprintf(fileId,'**\n');
    fprintf(fileId,'** Permission is hereby granted, free of charge, to any person obtaining a copy\n');
    fprintf(fileId,'** of this software and associated documentation files (the "Software"), to deal\n');
    fprintf(fileId,'** in the Software without restriction, including without limitation the rights\n');
    fprintf(fileId,'** to use, copy, modify, merge, publish, distribute, sublicense, and/or sell\n');
    fprintf(fileId,'** copies of the Software, and to permit persons to whom the Software is\n');
    fprintf(fileId,'** furnished to do so, subject to the following conditions:\n');
    fprintf(fileId,'**\n');
    fprintf(fileId,'** The above copyright notice and this permission notice shall be included in all\n');
    fprintf(fileId,'** copies or substantial portions of the Software.\n');
    fprintf(fileId,'**\n');
    fprintf(fileId,'** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR\n');
    fprintf(fileId,'** IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,\n');
    fprintf(fileId,'** FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE\n');
    fprintf(fileId,'** AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER\n');
    fprintf(fileId,'** LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,\n');
    fprintf(fileId,'** OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE\n');
    fprintf(fileId,'** SOFTWARE.\n');
    fprintf(fileId,'**---------------------------------------------------------------------------------------------------------------------------------\n');
elseif strcmp(license,'unlicense')
    fprintf(fileId,'**---------------------------------------------------------------------------------------------------------------------------------\n');
    fprintf(fileId,'** This is free and unencumbered software released into the public domain.\n');
    fprintf(fileId,'**\n');
    fprintf(fileId,'** Anyone is free to copy, modify, publish, use, compile, sell, or\n');
    fprintf(fileId,'** distribute this software, either in source code form or as a compiled\n');
    fprintf(fileId,'** binary, for any purpose, commercial or non-commercial, and by any\n');
    fprintf(fileId,'** means.\n');
    fprintf(fileId,'**\n');
    fprintf(fileId,'** In jurisdictions that recognize copyright laws, the author or authors\n');
    fprintf(fileId,'** of this software dedicate any and all copyright interest in the\n');
    fprintf(fileId,'** software to the public domain. We make this dedication for the benefit\n');
    fprintf(fileId,'** of the public at large and to the detriment of our heirs and\n');
    fprintf(fileId,'** successors. We intend this dedication to be an overt act of\n');
    fprintf(fileId,'** relinquishment in perpetuity of all present and future rights to this\n');
    fprintf(fileId,'** software under copyright law.\n');
    fprintf(fileId,'**\n');
    fprintf(fileId,'** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,\n');
    fprintf(fileId,'** EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF\n');
    fprintf(fileId,'** MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.\n');
    fprintf(fileId,'** IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR\n');
    fprintf(fileId,'** OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,\n');
    fprintf(fileId,'** ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR\n');
    fprintf(fileId,'** OTHER DEALINGS IN THE SOFTWARE.\n');
    fprintf(fileId,'**\n');
    fprintf(fileId,'** For more information, please refer to <http://unlicense.org>\n');
    fprintf(fileId,'**---------------------------------------------------------------------------------------------------------------------------------\n');
elseif strcmp(license,'GNU-AGPL-v3.0')
    fprintf(fileId,'**---------------------------------------------------------------------------------------------------------------------------------\n');
    fprintf(fileId, strcat('** Copyright (C) ', num2str(year(today)), ' ', holder, '\n'));
    fprintf(fileId, strcat('** Author: ', author, '\n'));
    fprintf(fileId,'**\n');
    fprintf(fileId,'** This program is free software: you can redistribute it and/or modify\n');
    fprintf(fileId,'** it under the terms of the GNU Affero General Public License as published\n');
    fprintf(fileId,'** by the Free Software Foundation, either version 3 of the License, or\n');
    fprintf(fileId,'** (at your option) any later version.\n');
    fprintf(fileId,'**\n');
    fprintf(fileId,'** This program is distributed in the hope that it will be useful,\n');
    fprintf(fileId,'** but WITHOUT ANY WARRANTY; without even the implied warranty of\n');
    fprintf(fileId,'** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n');
    fprintf(fileId,'** GNU Affero General Public License for more details.\n');
    fprintf(fileId,'**\n');
    fprintf(fileId,'** You should have received a copy of the GNU Affero General Public License\n');
    fprintf(fileId,'** along with this program.  If not, see <http://www.gnu.org/licenses/>.\n');
    fprintf(fileId,'**---------------------------------------------------------------------------------------------------------------------------------\n');
end

fclose(fileId);

return