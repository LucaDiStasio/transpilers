# -*- coding: utf-8 -*-

'''
=====================================================================================

Copyright (c) 2017 Université de Lorraine & Luleå tekniska universitet
Author: Luca Di Stasio <luca.distasio@gmail.com>
                       <luca.distasio@ingpec.eu>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

=====================================================================================

DESCRIPTION

Write ABAQUS input files.

Tested with Python 2.7 Anaconda 2.4.1 (64-bit) distribution
       in Windows 7.

'''

from os.path import join


def writeABQacousticcontribution(filepath,acousticnodes,name,type,structuralnodes,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*ACOUSTIC CONTRIBUTION';

    if 'none'!=acousticnodes and 'NONE'!=acousticnodes and 'None'!=acousticnodes:
        line += ', ACOUSTIC NODES=' + acousticnodes

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=structuralnodes and 'NONE'!=structuralnodes and 'None'!=structuralnodes:
        line += ', STRUCTURAL NODES=' + structuralnodes
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQacousticflowvelocity(filepath,rotation,translation,amplitude,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*ACOUSTIC FLOW VELOCITY';

    if 'none'!=rotation and 'NONE'!=rotation and 'None'!=rotation:
        line += ', ROTATION=' + rotation

    if 'none'!=translation and 'NONE'!=translation and 'None'!=translation:
        line += ', TRANSLATION=' + translation

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQacousticmedium(filepath,bulkmodulus,cavitationlimit,complexbulkmodulus,complexdensity,porousmodel,volumetricdrag,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*ACOUSTIC MEDIUM';

    if 'none'!=bulkmodulus and 'NONE'!=bulkmodulus and 'None'!=bulkmodulus:
        line += ', BULK MODULUS=' + bulkmodulus

    if 'none'!=cavitationlimit and 'NONE'!=cavitationlimit and 'None'!=cavitationlimit:
        line += ', CAVITATION LIMIT=' + cavitationlimit

    if 'none'!=complexbulkmodulus and 'NONE'!=complexbulkmodulus and 'None'!=complexbulkmodulus:
        line += ', COMPLEX BULK MODULUS=' + complexbulkmodulus

    if 'none'!=complexdensity and 'NONE'!=complexdensity and 'None'!=complexdensity:
        line += ', COMPLEX DENSITY=' + complexdensity

    if 'none'!=porousmodel and 'NONE'!=porousmodel and 'None'!=porousmodel:
        line += ', POROUS MODEL=' + porousmodel

    if 'none'!=volumetricdrag and 'NONE'!=volumetricdrag and 'None'!=volumetricdrag:
        line += ', VOLUMETRIC DRAG=' + volumetricdrag

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQacousticwaveformulation(filepath,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*ACOUSTIC WAVE FORMULATION';

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQadaptivemesh(filepath,elset,op,controls,frequency,initialmeshsweeps,meshsweeps,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*ADAPTIVE MESH';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op

    if 'none'!=controls and 'NONE'!=controls and 'None'!=controls:
        line += ', CONTROLS=' + controls

    if 'none'!=frequency and 'NONE'!=frequency and 'None'!=frequency:
        line += ', FREQUENCY=' + frequency

    if 'none'!=initialmeshsweeps and 'NONE'!=initialmeshsweeps and 'None'!=initialmeshsweeps:
        line += ', INITIAL MESH SWEEPS=' + initialmeshsweeps

    if 'none'!=meshsweeps and 'NONE'!=meshsweeps and 'None'!=meshsweeps:
        line += ', MESH SWEEPS=' + meshsweeps
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQadaptivemeshconstraint(filepath,amplitude,constrainttype,op,type,user,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*ADAPTIVE MESH CONSTRAINT';

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=constrainttype and 'NONE'!=constrainttype and 'None'!=constrainttype:
        line += ', CONSTRAINT TYPE=' + constrainttype

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=user and 'NONE'!=user and 'None'!=user:
        line += ', USER=' + user
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQadaptivemeshcontrols(filepath,name,advection,curvaturerefinement,geometricenhancement,initialfeatureangle,meshconstraintangle,meshingpredictor,momentumadvection,reset,smoothingobjective,transitionfeatureangle,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*ADAPTIVE MESH CONTROLS';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=advection and 'NONE'!=advection and 'None'!=advection:
        line += ', ADVECTION=' + advection

    if 'none'!=curvaturerefinement and 'NONE'!=curvaturerefinement and 'None'!=curvaturerefinement:
        line += ', CURVATURE REFINEMENT=' + curvaturerefinement

    if 'none'!=geometricenhancement and 'NONE'!=geometricenhancement and 'None'!=geometricenhancement:
        line += ', GEOMETRIC ENHANCEMENT=' + geometricenhancement

    if 'none'!=initialfeatureangle and 'NONE'!=initialfeatureangle and 'None'!=initialfeatureangle:
        line += ', INITIAL FEATURE ANGLE=' + initialfeatureangle

    if 'none'!=meshconstraintangle and 'NONE'!=meshconstraintangle and 'None'!=meshconstraintangle:
        line += ', MESH CONSTRAINT ANGLE=' + meshconstraintangle

    if 'none'!=meshingpredictor and 'NONE'!=meshingpredictor and 'None'!=meshingpredictor:
        line += ', MESHING PREDICTOR=' + meshingpredictor

    if 'none'!=momentumadvection and 'NONE'!=momentumadvection and 'None'!=momentumadvection:
        line += ', MOMENTUM ADVECTION=' + momentumadvection

    if 'none'!=reset and 'NONE'!=reset and 'None'!=reset:
        line += ', RESET=' + reset

    if 'none'!=smoothingobjective and 'NONE'!=smoothingobjective and 'None'!=smoothingobjective:
        line += ', SMOOTHING OBJECTIVE=' + smoothingobjective

    if 'none'!=transitionfeatureangle and 'NONE'!=transitionfeatureangle and 'None'!=transitionfeatureangle:
        line += ', TRANSITION FEATURE ANGLE=' + transitionfeatureangle
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQadaptivemeshrefinement(filepath,elset,level,coarsening,ratio,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*ADAPTIVE MESH REFINEMENT';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=level and 'NONE'!=level and 'None'!=level:
        line += ', LEVEL=' + level

    if 'none'!=coarsening and 'NONE'!=coarsening and 'None'!=coarsening:
        line += ', COARSENING=' + coarsening

    if 'none'!=ratio and 'NONE'!=ratio and 'None'!=ratio:
        line += ', RATIO=' + ratio
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQadjust(filepath,nodeset,surface,orientation,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*ADJUST';

    if 'none'!=nodeset and 'NONE'!=nodeset and 'None'!=nodeset:
        line += ', NODE SET=' + nodeset

    if 'none'!=surface and 'NONE'!=surface and 'None'!=surface:
        line += ', SURFACE=' + surface

    if 'none'!=orientation and 'NONE'!=orientation and 'None'!=orientation:
        line += ', ORIENTATION=' + orientation
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQamplitude(filepath,name,definition,input,scalex,scaley,shiftx,shifty,time,value,fixedinterval,begin,smooth,properties,variables,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*AMPLITUDE';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=definition and 'NONE'!=definition and 'None'!=definition:
        line += ', DEFINITION=' + definition

    if 'none'!=input and 'NONE'!=input and 'None'!=input:
        line += ', INPUT=' + input

    if 'none'!=scalex and 'NONE'!=scalex and 'None'!=scalex:
        line += ', SCALEX=' + scalex

    if 'none'!=scaley and 'NONE'!=scaley and 'None'!=scaley:
        line += ', SCALEY=' + scaley

    if 'none'!=shiftx and 'NONE'!=shiftx and 'None'!=shiftx:
        line += ', SHIFTX=' + shiftx

    if 'none'!=shifty and 'NONE'!=shifty and 'None'!=shifty:
        line += ', SHIFTY=' + shifty

    if 'none'!=time and 'NONE'!=time and 'None'!=time:
        line += ', TIME=' + time

    if 'none'!=value and 'NONE'!=value and 'None'!=value:
        line += ', VALUE=' + value

    if 'none'!=fixedinterval and 'NONE'!=fixedinterval and 'None'!=fixedinterval:
        line += ', FIXED INTERVAL=' + fixedinterval

    if 'none'!=begin and 'NONE'!=begin and 'None'!=begin:
        line += ', BEGIN=' + begin

    if 'none'!=smooth and 'NONE'!=smooth and 'None'!=smooth:
        line += ', SMOOTH=' + smooth

    if 'none'!=properties and 'NONE'!=properties and 'None'!=properties:
        line += ', PROPERTIES=' + properties

    if 'none'!=variables and 'NONE'!=variables and 'None'!=variables:
        line += ', VARIABLES=' + variables
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQanisotropichyperelastic(filepath,fung-anisotropic,fung-orthotropic,holzapfel,user,formulation,type,dependencies,localdirections,moduli,properties,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*ANISOTROPIC HYPERELASTIC';

    if 'none'!=fung-anisotropic and 'NONE'!=fung-anisotropic and 'None'!=fung-anisotropic:
        line += ', FUNG-ANISOTROPIC=' + fung-anisotropic

    if 'none'!=fung-orthotropic and 'NONE'!=fung-orthotropic and 'None'!=fung-orthotropic:
        line += ', FUNG-ORTHOTROPIC=' + fung-orthotropic

    if 'none'!=holzapfel and 'NONE'!=holzapfel and 'None'!=holzapfel:
        line += ', HOLZAPFEL=' + holzapfel

    if 'none'!=user and 'NONE'!=user and 'None'!=user:
        line += ', USER=' + user

    if 'none'!=formulation and 'NONE'!=formulation and 'None'!=formulation:
        line += ', FORMULATION=' + formulation

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=localdirections and 'NONE'!=localdirections and 'None'!=localdirections:
        line += ', LOCAL DIRECTIONS=' + localdirections

    if 'none'!=moduli and 'NONE'!=moduli and 'None'!=moduli:
        line += ', MODULI=' + moduli

    if 'none'!=properties and 'NONE'!=properties and 'None'!=properties:
        line += ', PROPERTIES=' + properties
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQanneal(filepath,temperature,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*ANNEAL';

    if 'none'!=temperature and 'NONE'!=temperature and 'None'!=temperature:
        line += ', TEMPERATURE=' + temperature
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQannealtemperature(filepath,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*ANNEAL TEMPERATURE';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQaqua(filepath,input,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*AQUA';

    if 'none'!=input and 'NONE'!=input and 'None'!=input:
        line += ', INPUT=' + input
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQassembly(filepath,name,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*ASSEMBLY';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQasymmetric-axisymmetric(filepath,angle,mode,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*ASYMMETRIC-AXISYMMETRIC';

    if 'none'!=angle and 'NONE'!=angle and 'None'!=angle:
        line += ', ANGLE=' + angle

    if 'none'!=mode and 'NONE'!=mode and 'None'!=mode:
        line += ', MODE=' + mode
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQaxial(filepath,dependencies,elastic,linear,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*AXIAL';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=elastic and 'NONE'!=elastic and 'None'!=elastic:
        line += ', ELASTIC=' + elastic

    if 'none'!=linear and 'NONE'!=linear and 'None'!=linear:
        line += ', LINEAR=' + linear
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQbasemotion(filepath,dof,amplitude,basename,loadcase,scale,type,imaginary,real,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*BASE MOTION';

    if 'none'!=dof and 'NONE'!=dof and 'None'!=dof:
        line += ', DOF=' + dof

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=basename and 'NONE'!=basename and 'None'!=basename:
        line += ', BASE NAME=' + basename

    if 'none'!=loadcase and 'NONE'!=loadcase and 'None'!=loadcase:
        line += ', LOAD CASE=' + loadcase

    if 'none'!=scale and 'NONE'!=scale and 'None'!=scale:
        line += ', SCALE=' + scale

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=imaginary and 'NONE'!=imaginary and 'None'!=imaginary:
        line += ', IMAGINARY=' + imaginary

    if 'none'!=real and 'NONE'!=real and 'None'!=real:
        line += ', REAL=' + real
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQbaselinecorrection(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*BASELINE CORRECTION';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQbeamaddedinertia(filepath,alpha,composite,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*BEAM ADDED INERTIA';

    if 'none'!=alpha and 'NONE'!=alpha and 'None'!=alpha:
        line += ', ALPHA=' + alpha

    if 'none'!=composite and 'NONE'!=composite and 'None'!=composite:
        line += ', COMPOSITE=' + composite
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQbeamfluidinertia(filepath,full,half,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*BEAM FLUID INERTIA';

    if 'none'!=full and 'NONE'!=full and 'None'!=full:
        line += ', FULL=' + full

    if 'none'!=half and 'NONE'!=half and 'None'!=half:
        line += ', HALF=' + half
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQbeamgeneralsection(filepath,elset,density,dependencies,lumped,poisson,rotaryinertia,section,taper,zero,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*BEAM GENERAL SECTION';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=density and 'NONE'!=density and 'None'!=density:
        line += ', DENSITY=' + density

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=lumped and 'NONE'!=lumped and 'None'!=lumped:
        line += ', LUMPED=' + lumped

    if 'none'!=poisson and 'NONE'!=poisson and 'None'!=poisson:
        line += ', POISSON=' + poisson

    if 'none'!=rotaryinertia and 'NONE'!=rotaryinertia and 'None'!=rotaryinertia:
        line += ', ROTARY INERTIA=' + rotaryinertia

    if 'none'!=section and 'NONE'!=section and 'None'!=section:
        line += ', SECTION=' + section

    if 'none'!=taper and 'NONE'!=taper and 'None'!=taper:
        line += ', TAPER=' + taper

    if 'none'!=zero and 'NONE'!=zero and 'None'!=zero:
        line += ', ZERO=' + zero
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQbeamsection(filepath,elset,material,section,lumped,poisson,rotaryinertia,temperature,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*BEAM SECTION';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=material and 'NONE'!=material and 'None'!=material:
        line += ', MATERIAL=' + material

    if 'none'!=section and 'NONE'!=section and 'None'!=section:
        line += ', SECTION=' + section

    if 'none'!=lumped and 'NONE'!=lumped and 'None'!=lumped:
        line += ', LUMPED=' + lumped

    if 'none'!=poisson and 'NONE'!=poisson and 'None'!=poisson:
        line += ', POISSON=' + poisson

    if 'none'!=rotaryinertia and 'NONE'!=rotaryinertia and 'None'!=rotaryinertia:
        line += ', ROTARY INERTIA=' + rotaryinertia

    if 'none'!=temperature and 'NONE'!=temperature and 'None'!=temperature:
        line += ', TEMPERATURE=' + temperature
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQbeamsectiongenerate(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*BEAM SECTION GENERATE';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQbeamsectionoffset(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*BEAM SECTION OFFSET';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQbiaxialtestdata(filepath,smooth,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*BIAXIAL TEST DATA';

    if 'none'!=smooth and 'NONE'!=smooth and 'None'!=smooth:
        line += ', SMOOTH=' + smooth

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQblockage(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*BLOCKAGE';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQbond(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*BOND';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQboundary(filepath,amplitude,blocking,fixed,loadcase,name,op,phantom,regiontype,type,user,imaginary,real,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*BOUNDARY';

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=blocking and 'NONE'!=blocking and 'None'!=blocking:
        line += ', BLOCKING=' + blocking

    if 'none'!=fixed and 'NONE'!=fixed and 'None'!=fixed:
        line += ', FIXED=' + fixed

    if 'none'!=loadcase and 'NONE'!=loadcase and 'None'!=loadcase:
        line += ', LOAD CASE=' + loadcase

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op

    if 'none'!=phantom and 'NONE'!=phantom and 'None'!=phantom:
        line += ', PHANTOM=' + phantom

    if 'none'!=regiontype and 'NONE'!=regiontype and 'None'!=regiontype:
        line += ', REGION TYPE=' + regiontype

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=user and 'NONE'!=user and 'None'!=user:
        line += ', USER=' + user

    if 'none'!=imaginary and 'NONE'!=imaginary and 'None'!=imaginary:
        line += ', IMAGINARY=' + imaginary

    if 'none'!=real and 'NONE'!=real and 'None'!=real:
        line += ', REAL=' + real
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQbrittlecracking(filepath,dependencies,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*BRITTLE CRACKING';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQbrittlefailure(filepath,cracks,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*BRITTLE FAILURE';

    if 'none'!=cracks and 'NONE'!=cracks and 'None'!=cracks:
        line += ', CRACKS=' + cracks

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQbrittleshear(filepath,dependencies,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*BRITTLE SHEAR';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQbuckle(filepath,eigensolver,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*BUCKLE';

    if 'none'!=eigensolver and 'NONE'!=eigensolver and 'None'!=eigensolver:
        line += ', EIGENSOLVER=' + eigensolver
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQbucklingenvelope(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*BUCKLING ENVELOPE';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQbucklinglength(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*BUCKLING LENGTH';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQbucklingreductionfactors(filepath,axis1,axis2,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*BUCKLING REDUCTION FACTORS';

    if 'none'!=axis1 and 'NONE'!=axis1 and 'None'!=axis1:
        line += ', AXIS1=' + axis1

    if 'none'!=axis2 and 'NONE'!=axis2 and 'None'!=axis2:
        line += ', AXIS2=' + axis2
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQbulkviscosity(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*BULK VISCOSITY';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcaddedmass(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*C ADDED MASS';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcapcreep(filepath,dependencies,law,mechanism,time,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CAP CREEP';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=law and 'NONE'!=law and 'None'!=law:
        line += ', LAW=' + law

    if 'none'!=mechanism and 'NONE'!=mechanism and 'None'!=mechanism:
        line += ', MECHANISM=' + mechanism

    if 'none'!=time and 'NONE'!=time and 'None'!=time:
        line += ', TIME=' + time
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcaphardening(filepath,dependencies,scalestress,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CAP HARDENING';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=scalestress and 'NONE'!=scalestress and 'None'!=scalestress:
        line += ', SCALESTRESS=' + scalestress
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcapplasticity(filepath,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CAP PLASTICITY';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcapacity(filepath,type,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CAPACITY';

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcastironcompressionhardening(filepath,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CAST IRON COMPRESSION HARDENING';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcastironplasticity(filepath,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CAST IRON PLASTICITY';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcastirontensionhardening(filepath,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CAST IRON TENSION HARDENING';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcavitydefinition(filepath,name,ambienttemp,paralleldecomposition,setproperty,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CAVITY DEFINITION';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=ambienttemp and 'NONE'!=ambienttemp and 'None'!=ambienttemp:
        line += ', AMBIENT TEMP=' + ambienttemp

    if 'none'!=paralleldecomposition and 'NONE'!=paralleldecomposition and 'None'!=paralleldecomposition:
        line += ', PARALLEL DECOMPOSITION=' + paralleldecomposition

    if 'none'!=setproperty and 'NONE'!=setproperty and 'None'!=setproperty:
        line += ', SET PROPERTY=' + setproperty
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcecharge(filepath,amplitude,op,imaginary,real,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CECHARGE';

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op

    if 'none'!=imaginary and 'NONE'!=imaginary and 'None'!=imaginary:
        line += ', IMAGINARY=' + imaginary

    if 'none'!=real and 'NONE'!=real and 'None'!=real:
        line += ', REAL=' + real
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcecurrent(filepath,amplitude,op,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CECURRENT';

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcentroid(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CENTROID';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcfd(filepath,incompressiblenavierstokes,energyequation,incrementation,steadystate,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CFD';

    if 'none'!=incompressiblenavierstokes and 'NONE'!=incompressiblenavierstokes and 'None'!=incompressiblenavierstokes:
        line += ', INCOMPRESSIBLE NAVIER STOKES=' + incompressiblenavierstokes

    if 'none'!=energyequation and 'NONE'!=energyequation and 'None'!=energyequation:
        line += ', ENERGY EQUATION=' + energyequation

    if 'none'!=incrementation and 'NONE'!=incrementation and 'None'!=incrementation:
        line += ', INCREMENTATION=' + incrementation

    if 'none'!=steadystate and 'NONE'!=steadystate and 'None'!=steadystate:
        line += ', STEADY STATE=' + steadystate
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcfilm(filepath,amplitude,filmamplitude,op,regiontype,user,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CFILM';

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=filmamplitude and 'NONE'!=filmamplitude and 'None'!=filmamplitude:
        line += ', FILM AMPLITUDE=' + filmamplitude

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op

    if 'none'!=regiontype and 'NONE'!=regiontype and 'None'!=regiontype:
        line += ', REGION TYPE=' + regiontype

    if 'none'!=user and 'NONE'!=user and 'None'!=user:
        line += ', USER=' + user
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcflow(filepath,amplitude,op,phantom,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CFLOW';

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op

    if 'none'!=phantom and 'NONE'!=phantom and 'None'!=phantom:
        line += ', PHANTOM=' + phantom
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcflux(filepath,file,amplitude,inc,op,regiontype,step,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CFLUX';

    if 'none'!=file and 'NONE'!=file and 'None'!=file:
        line += ', FILE=' + file

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=inc and 'NONE'!=inc and 'None'!=inc:
        line += ', INC=' + inc

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op

    if 'none'!=regiontype and 'NONE'!=regiontype and 'None'!=regiontype:
        line += ', REGION TYPE=' + regiontype

    if 'none'!=step and 'NONE'!=step and 'None'!=step:
        line += ', STEP=' + step
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQchangefriction(filepath,elset,interaction,amplitude,reset,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CHANGE FRICTION';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=interaction and 'NONE'!=interaction and 'None'!=interaction:
        line += ', INTERACTION=' + interaction

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=reset and 'NONE'!=reset and 'None'!=reset:
        line += ', RESET=' + reset
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcharacteristiclength(filepath,definition,components,properties,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CHARACTERISTIC LENGTH';

    if 'none'!=definition and 'NONE'!=definition and 'None'!=definition:
        line += ', DEFINITION=' + definition

    if 'none'!=components and 'NONE'!=components and 'None'!=components:
        line += ', COMPONENTS=' + components

    if 'none'!=properties and 'NONE'!=properties and 'None'!=properties:
        line += ', PROPERTIES=' + properties
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQclayhardening(filepath,dependencies,sr,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CLAY HARDENING';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=sr and 'NONE'!=sr and 'None'!=sr:
        line += ', SR=' + sr

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQclayplasticity(filepath,dependencies,hardening,intercept,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CLAY PLASTICITY';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=hardening and 'NONE'!=hardening and 'None'!=hardening:
        line += ', HARDENING=' + hardening

    if 'none'!=intercept and 'NONE'!=intercept and 'None'!=intercept:
        line += ', INTERCEPT=' + intercept
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQclearance(filepath,cpset,master,slave,tabular,value,bolt,input,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CLEARANCE';

    if 'none'!=cpset and 'NONE'!=cpset and 'None'!=cpset:
        line += ', CPSET=' + cpset

    if 'none'!=master and 'NONE'!=master and 'None'!=master:
        line += ', MASTER=' + master

    if 'none'!=slave and 'NONE'!=slave and 'None'!=slave:
        line += ', SLAVE=' + slave

    if 'none'!=tabular and 'NONE'!=tabular and 'None'!=tabular:
        line += ', TABULAR=' + tabular

    if 'none'!=value and 'NONE'!=value and 'None'!=value:
        line += ', VALUE=' + value

    if 'none'!=bolt and 'NONE'!=bolt and 'None'!=bolt:
        line += ', BOLT=' + bolt

    if 'none'!=input and 'NONE'!=input and 'None'!=input:
        line += ', INPUT=' + input
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcload(filepath,file,cyclicmode,amplitude,follower,inc,loadcase,op,regiontype,step,imaginary,real,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CLOAD';

    if 'none'!=file and 'NONE'!=file and 'None'!=file:
        line += ', FILE=' + file

    if 'none'!=cyclicmode and 'NONE'!=cyclicmode and 'None'!=cyclicmode:
        line += ', CYCLIC MODE=' + cyclicmode

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=follower and 'NONE'!=follower and 'None'!=follower:
        line += ', FOLLOWER=' + follower

    if 'none'!=inc and 'NONE'!=inc and 'None'!=inc:
        line += ', INC=' + inc

    if 'none'!=loadcase and 'NONE'!=loadcase and 'None'!=loadcase:
        line += ', LOAD CASE=' + loadcase

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op

    if 'none'!=regiontype and 'NONE'!=regiontype and 'None'!=regiontype:
        line += ', REGION TYPE=' + regiontype

    if 'none'!=step and 'NONE'!=step and 'None'!=step:
        line += ', STEP=' + step

    if 'none'!=imaginary and 'NONE'!=imaginary and 'None'!=imaginary:
        line += ', IMAGINARY=' + imaginary

    if 'none'!=real and 'NONE'!=real and 'None'!=real:
        line += ', REAL=' + real
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcohesivebehavior(filepath,dependencies,eligibility,repeatedcontacts,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*COHESIVE BEHAVIOR';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=eligibility and 'NONE'!=eligibility and 'None'!=eligibility:
        line += ', ELIGIBILITY=' + eligibility

    if 'none'!=repeatedcontacts and 'NONE'!=repeatedcontacts and 'None'!=repeatedcontacts:
        line += ', REPEATED CONTACTS=' + repeatedcontacts

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcohesivesection(filepath,elset,material,response,controls,orientation,stackdirection,thickness,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*COHESIVE SECTION';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=material and 'NONE'!=material and 'None'!=material:
        line += ', MATERIAL=' + material

    if 'none'!=response and 'NONE'!=response and 'None'!=response:
        line += ', RESPONSE=' + response

    if 'none'!=controls and 'NONE'!=controls and 'None'!=controls:
        line += ', CONTROLS=' + controls

    if 'none'!=orientation and 'NONE'!=orientation and 'None'!=orientation:
        line += ', ORIENTATION=' + orientation

    if 'none'!=stackdirection and 'NONE'!=stackdirection and 'None'!=stackdirection:
        line += ', STACK DIRECTION=' + stackdirection

    if 'none'!=thickness and 'NONE'!=thickness and 'None'!=thickness:
        line += ', THICKNESS=' + thickness
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcombinedtestdata(filepath,shrinf,volinf,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*COMBINED TEST DATA';

    if 'none'!=shrinf and 'NONE'!=shrinf and 'None'!=shrinf:
        line += ', SHRINF=' + shrinf

    if 'none'!=volinf and 'NONE'!=volinf and 'None'!=volinf:
        line += ', VOLINF=' + volinf
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcomplexfrequency(filepath,frictiondamping,normalization,propertyevaluation,unstablemodesonly,lefteigenvectors,righteigenvectors,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*COMPLEX FREQUENCY';

    if 'none'!=frictiondamping and 'NONE'!=frictiondamping and 'None'!=frictiondamping:
        line += ', FRICTION DAMPING=' + frictiondamping

    if 'none'!=normalization and 'NONE'!=normalization and 'None'!=normalization:
        line += ', NORMALIZATION=' + normalization

    if 'none'!=propertyevaluation and 'NONE'!=propertyevaluation and 'None'!=propertyevaluation:
        line += ', PROPERTY EVALUATION=' + propertyevaluation

    if 'none'!=unstablemodesonly and 'NONE'!=unstablemodesonly and 'None'!=unstablemodesonly:
        line += ', UNSTABLE MODES ONLY=' + unstablemodesonly

    if 'none'!=lefteigenvectors and 'NONE'!=lefteigenvectors and 'None'!=lefteigenvectors:
        line += ', LEFT EIGENVECTORS=' + lefteigenvectors

    if 'none'!=righteigenvectors and 'NONE'!=righteigenvectors and 'None'!=righteigenvectors:
        line += ', RIGHT EIGENVECTORS=' + righteigenvectors
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcompositemodaldamping(filepath,massmatrixinput,stiffnessmatrixinput,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*COMPOSITE MODAL DAMPING';

    if 'none'!=massmatrixinput and 'NONE'!=massmatrixinput and 'None'!=massmatrixinput:
        line += ', MASS MATRIX INPUT=' + massmatrixinput

    if 'none'!=stiffnessmatrixinput and 'NONE'!=stiffnessmatrixinput and 'None'!=stiffnessmatrixinput:
        line += ', STIFFNESS MATRIX INPUT=' + stiffnessmatrixinput
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQconcrete(filepath,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONCRETE';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQconcretecompressiondamage(filepath,dependencies,tensionrecovery,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONCRETE COMPRESSION DAMAGE';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=tensionrecovery and 'NONE'!=tensionrecovery and 'None'!=tensionrecovery:
        line += ', TENSION RECOVERY=' + tensionrecovery
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQconcretecompressionhardening(filepath,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONCRETE COMPRESSION HARDENING';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQconcretedamagedplasticity(filepath,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONCRETE DAMAGED PLASTICITY';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQconcretetensiondamage(filepath,compressionrecovery,dependencies,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONCRETE TENSION DAMAGE';

    if 'none'!=compressionrecovery and 'NONE'!=compressionrecovery and 'None'!=compressionrecovery:
        line += ', COMPRESSION RECOVERY=' + compressionrecovery

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQconcretetensionstiffening(filepath,dependencies,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONCRETE TENSION STIFFENING';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQconductivity(filepath,dependencies,porefluid,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONDUCTIVITY';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=porefluid and 'NONE'!=porefluid and 'None'!=porefluid:
        line += ', PORE FLUID=' + porefluid

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQconnectorbehavior(filepath,name,extrapolation,integration,regularize,rtol,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONNECTOR BEHAVIOR';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=extrapolation and 'NONE'!=extrapolation and 'None'!=extrapolation:
        line += ', EXTRAPOLATION=' + extrapolation

    if 'none'!=integration and 'NONE'!=integration and 'None'!=integration:
        line += ', INTEGRATION=' + integration

    if 'none'!=regularize and 'NONE'!=regularize and 'None'!=regularize:
        line += ', REGULARIZE=' + regularize

    if 'none'!=rtol and 'NONE'!=rtol and 'None'!=rtol:
        line += ', RTOL=' + rtol
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQconnectorconstitutivereference(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONNECTOR CONSTITUTIVE REFERENCE';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQconnectordamageevolution(filepath,type,affectedcomponents,degradation,dependencies,extrapolation,regularize,rtol,softening,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONNECTOR DAMAGE EVOLUTION';

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=affectedcomponents and 'NONE'!=affectedcomponents and 'None'!=affectedcomponents:
        line += ', AFFECTED COMPONENTS=' + affectedcomponents

    if 'none'!=degradation and 'NONE'!=degradation and 'None'!=degradation:
        line += ', DEGRADATION=' + degradation

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=extrapolation and 'NONE'!=extrapolation and 'None'!=extrapolation:
        line += ', EXTRAPOLATION=' + extrapolation

    if 'none'!=regularize and 'NONE'!=regularize and 'None'!=regularize:
        line += ', REGULARIZE=' + regularize

    if 'none'!=rtol and 'NONE'!=rtol and 'None'!=rtol:
        line += ', RTOL=' + rtol

    if 'none'!=softening and 'NONE'!=softening and 'None'!=softening:
        line += ', SOFTENING=' + softening
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQconnectordamageinitiation(filepath,component,criterion,dependencies,extrapolation,ratefilterfactor,rateinterpolation,regularize,rtol,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONNECTOR DAMAGE INITIATION';

    if 'none'!=component and 'NONE'!=component and 'None'!=component:
        line += ', COMPONENT=' + component

    if 'none'!=criterion and 'NONE'!=criterion and 'None'!=criterion:
        line += ', CRITERION=' + criterion

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=extrapolation and 'NONE'!=extrapolation and 'None'!=extrapolation:
        line += ', EXTRAPOLATION=' + extrapolation

    if 'none'!=ratefilterfactor and 'NONE'!=ratefilterfactor and 'None'!=ratefilterfactor:
        line += ', RATE FILTER FACTOR=' + ratefilterfactor

    if 'none'!=rateinterpolation and 'NONE'!=rateinterpolation and 'None'!=rateinterpolation:
        line += ', RATE INTERPOLATION=' + rateinterpolation

    if 'none'!=regularize and 'NONE'!=regularize and 'None'!=regularize:
        line += ', REGULARIZE=' + regularize

    if 'none'!=rtol and 'NONE'!=rtol and 'None'!=rtol:
        line += ', RTOL=' + rtol
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQconnectordamping(filepath,component,type,dependencies,extrapolation,frequencydependence,independentcomponents,nonlinear,regularize,rtol,unsymm,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONNECTOR DAMPING';

    if 'none'!=component and 'NONE'!=component and 'None'!=component:
        line += ', COMPONENT=' + component

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=extrapolation and 'NONE'!=extrapolation and 'None'!=extrapolation:
        line += ', EXTRAPOLATION=' + extrapolation

    if 'none'!=frequencydependence and 'NONE'!=frequencydependence and 'None'!=frequencydependence:
        line += ', FREQUENCY DEPENDENCE=' + frequencydependence

    if 'none'!=independentcomponents and 'NONE'!=independentcomponents and 'None'!=independentcomponents:
        line += ', INDEPENDENT COMPONENTS=' + independentcomponents

    if 'none'!=nonlinear and 'NONE'!=nonlinear and 'None'!=nonlinear:
        line += ', NONLINEAR=' + nonlinear

    if 'none'!=regularize and 'NONE'!=regularize and 'None'!=regularize:
        line += ', REGULARIZE=' + regularize

    if 'none'!=rtol and 'NONE'!=rtol and 'None'!=rtol:
        line += ', RTOL=' + rtol

    if 'none'!=unsymm and 'NONE'!=unsymm and 'None'!=unsymm:
        line += ', UNSYMM=' + unsymm
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQconnectorderivedcomponent(filepath,name,dependencies,extrapolation,independentcomponents,operator,regularize,rtol,sign,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONNECTOR DERIVED COMPONENT';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=extrapolation and 'NONE'!=extrapolation and 'None'!=extrapolation:
        line += ', EXTRAPOLATION=' + extrapolation

    if 'none'!=independentcomponents and 'NONE'!=independentcomponents and 'None'!=independentcomponents:
        line += ', INDEPENDENT COMPONENTS=' + independentcomponents

    if 'none'!=operator and 'NONE'!=operator and 'None'!=operator:
        line += ', OPERATOR=' + operator

    if 'none'!=regularize and 'NONE'!=regularize and 'None'!=regularize:
        line += ', REGULARIZE=' + regularize

    if 'none'!=rtol and 'NONE'!=rtol and 'None'!=rtol:
        line += ', RTOL=' + rtol

    if 'none'!=sign and 'NONE'!=sign and 'None'!=sign:
        line += ', SIGN=' + sign
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQconnectorelasticity(filepath,component,dependencies,extrapolation,frequencydependence,independentcomponents,nonlinear,regularize,rtol,rigid,unsymm,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONNECTOR ELASTICITY';

    if 'none'!=component and 'NONE'!=component and 'None'!=component:
        line += ', COMPONENT=' + component

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=extrapolation and 'NONE'!=extrapolation and 'None'!=extrapolation:
        line += ', EXTRAPOLATION=' + extrapolation

    if 'none'!=frequencydependence and 'NONE'!=frequencydependence and 'None'!=frequencydependence:
        line += ', FREQUENCY DEPENDENCE=' + frequencydependence

    if 'none'!=independentcomponents and 'NONE'!=independentcomponents and 'None'!=independentcomponents:
        line += ', INDEPENDENT COMPONENTS=' + independentcomponents

    if 'none'!=nonlinear and 'NONE'!=nonlinear and 'None'!=nonlinear:
        line += ', NONLINEAR=' + nonlinear

    if 'none'!=regularize and 'NONE'!=regularize and 'None'!=regularize:
        line += ', REGULARIZE=' + regularize

    if 'none'!=rtol and 'NONE'!=rtol and 'None'!=rtol:
        line += ', RTOL=' + rtol

    if 'none'!=rigid and 'NONE'!=rigid and 'None'!=rigid:
        line += ', RIGID=' + rigid

    if 'none'!=unsymm and 'NONE'!=unsymm and 'None'!=unsymm:
        line += ', UNSYMM=' + unsymm
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQconnectorfailure(filepath,component,release,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONNECTOR FAILURE';

    if 'none'!=component and 'NONE'!=component and 'None'!=component:
        line += ', COMPONENT=' + component

    if 'none'!=release and 'NONE'!=release and 'None'!=release:
        line += ', RELEASE=' + release
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQconnectorfriction(filepath,predefined,stickstiffness,component,contactforce,dependencies,extrapolation,independentcomponents,regularize,rtol,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONNECTOR FRICTION';

    if 'none'!=predefined and 'NONE'!=predefined and 'None'!=predefined:
        line += ', PREDEFINED=' + predefined

    if 'none'!=stickstiffness and 'NONE'!=stickstiffness and 'None'!=stickstiffness:
        line += ', STICK STIFFNESS=' + stickstiffness

    if 'none'!=component and 'NONE'!=component and 'None'!=component:
        line += ', COMPONENT=' + component

    if 'none'!=contactforce and 'NONE'!=contactforce and 'None'!=contactforce:
        line += ', CONTACT FORCE=' + contactforce

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=extrapolation and 'NONE'!=extrapolation and 'None'!=extrapolation:
        line += ', EXTRAPOLATION=' + extrapolation

    if 'none'!=independentcomponents and 'NONE'!=independentcomponents and 'None'!=independentcomponents:
        line += ', INDEPENDENT COMPONENTS=' + independentcomponents

    if 'none'!=regularize and 'NONE'!=regularize and 'None'!=regularize:
        line += ', REGULARIZE=' + regularize

    if 'none'!=rtol and 'NONE'!=rtol and 'None'!=rtol:
        line += ', RTOL=' + rtol
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQconnectorhardening(filepath,definition,dependencies,extrapolation,ratefilterfactor,rateinterpolation,regularize,rtol,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONNECTOR HARDENING';

    if 'none'!=definition and 'NONE'!=definition and 'None'!=definition:
        line += ', DEFINITION=' + definition

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=extrapolation and 'NONE'!=extrapolation and 'None'!=extrapolation:
        line += ', EXTRAPOLATION=' + extrapolation

    if 'none'!=ratefilterfactor and 'NONE'!=ratefilterfactor and 'None'!=ratefilterfactor:
        line += ', RATE FILTER FACTOR=' + ratefilterfactor

    if 'none'!=rateinterpolation and 'NONE'!=rateinterpolation and 'None'!=rateinterpolation:
        line += ', RATE INTERPOLATION=' + rateinterpolation

    if 'none'!=regularize and 'NONE'!=regularize and 'None'!=regularize:
        line += ', REGULARIZE=' + regularize

    if 'none'!=rtol and 'NONE'!=rtol and 'None'!=rtol:
        line += ', RTOL=' + rtol

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQconnectorload(filepath,amplitude,loadcase,op,imaginary,real,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONNECTOR LOAD';

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=loadcase and 'NONE'!=loadcase and 'None'!=loadcase:
        line += ', LOAD CASE=' + loadcase

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op

    if 'none'!=imaginary and 'NONE'!=imaginary and 'None'!=imaginary:
        line += ', IMAGINARY=' + imaginary

    if 'none'!=real and 'NONE'!=real and 'None'!=real:
        line += ', REAL=' + real
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQconnectorlock(filepath,component,dependencies,extrapolation,lock,regularize,rtol,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONNECTOR LOCK';

    if 'none'!=component and 'NONE'!=component and 'None'!=component:
        line += ', COMPONENT=' + component

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=extrapolation and 'NONE'!=extrapolation and 'None'!=extrapolation:
        line += ', EXTRAPOLATION=' + extrapolation

    if 'none'!=lock and 'NONE'!=lock and 'None'!=lock:
        line += ', LOCK=' + lock

    if 'none'!=regularize and 'NONE'!=regularize and 'None'!=regularize:
        line += ', REGULARIZE=' + regularize

    if 'none'!=rtol and 'NONE'!=rtol and 'None'!=rtol:
        line += ', RTOL=' + rtol
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQconnectormotion(filepath,amplitude,loadcase,op,fixed,type,user,imaginary,real,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONNECTOR MOTION';

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=loadcase and 'NONE'!=loadcase and 'None'!=loadcase:
        line += ', LOAD CASE=' + loadcase

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op

    if 'none'!=fixed and 'NONE'!=fixed and 'None'!=fixed:
        line += ', FIXED=' + fixed

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=user and 'NONE'!=user and 'None'!=user:
        line += ', USER=' + user

    if 'none'!=imaginary and 'NONE'!=imaginary and 'None'!=imaginary:
        line += ', IMAGINARY=' + imaginary

    if 'none'!=real and 'NONE'!=real and 'None'!=real:
        line += ', REAL=' + real
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQconnectorplasticity(filepath,component,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONNECTOR PLASTICITY';

    if 'none'!=component and 'NONE'!=component and 'None'!=component:
        line += ', COMPONENT=' + component
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQconnectorpotential(filepath,exponent,operator,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONNECTOR POTENTIAL';

    if 'none'!=exponent and 'NONE'!=exponent and 'None'!=exponent:
        line += ', EXPONENT=' + exponent

    if 'none'!=operator and 'NONE'!=operator and 'None'!=operator:
        line += ', OPERATOR=' + operator
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQconnectorsection(filepath,elset,behavior,controls,elimination,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONNECTOR SECTION';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=behavior and 'NONE'!=behavior and 'None'!=behavior:
        line += ', BEHAVIOR=' + behavior

    if 'none'!=controls and 'NONE'!=controls and 'None'!=controls:
        line += ', CONTROLS=' + controls

    if 'none'!=elimination and 'NONE'!=elimination and 'None'!=elimination:
        line += ', ELIMINATION=' + elimination
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQconnectorstop(filepath,component,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONNECTOR STOP';

    if 'none'!=component and 'NONE'!=component and 'None'!=component:
        line += ', COMPONENT=' + component
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQconnectoruniaxialbehavior(filepath,component,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONNECTOR UNIAXIAL BEHAVIOR';

    if 'none'!=component and 'NONE'!=component and 'None'!=component:
        line += ', COMPONENT=' + component
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQconstraintcontrols(filepath,deleteslave,nochanges,nochecks,print,checkfrequency,terminateanalysis,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONSTRAINT CONTROLS';

    if 'none'!=deleteslave and 'NONE'!=deleteslave and 'None'!=deleteslave:
        line += ', DELETE SLAVE=' + deleteslave

    if 'none'!=nochanges and 'NONE'!=nochanges and 'None'!=nochanges:
        line += ', NO CHANGES=' + nochanges

    if 'none'!=nochecks and 'NONE'!=nochecks and 'None'!=nochecks:
        line += ', NO CHECKS=' + nochecks

    if 'none'!=print and 'NONE'!=print and 'None'!=print:
        line += ', PRINT=' + print

    if 'none'!=checkfrequency and 'NONE'!=checkfrequency and 'None'!=checkfrequency:
        line += ', CHECK FREQUENCY=' + checkfrequency

    if 'none'!=terminateanalysis and 'NONE'!=terminateanalysis and 'None'!=terminateanalysis:
        line += ', TERMINATE ANALYSIS=' + terminateanalysis
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcontact(filepath,op,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONTACT';

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcontactclearance(filepath,name,adjust,clearance,searchabove,searchbelow,searchnset,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONTACT CLEARANCE';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=adjust and 'NONE'!=adjust and 'None'!=adjust:
        line += ', ADJUST=' + adjust

    if 'none'!=clearance and 'NONE'!=clearance and 'None'!=clearance:
        line += ', CLEARANCE=' + clearance

    if 'none'!=searchabove and 'NONE'!=searchabove and 'None'!=searchabove:
        line += ', SEARCH ABOVE=' + searchabove

    if 'none'!=searchbelow and 'NONE'!=searchbelow and 'None'!=searchbelow:
        line += ', SEARCH BELOW=' + searchbelow

    if 'none'!=searchnset and 'NONE'!=searchnset and 'None'!=searchnset:
        line += ', SEARCH NSET=' + searchnset
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcontactclearanceassignment(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONTACT CLEARANCE ASSIGNMENT';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcontactcontrols(filepath,absolutepenetrationtolerance,relativepenetrationtolerance,master,perturbationtangentscalefactor,pressuredependentperturbation,reset,slave,stabilize,stiffnessscalefactor,tangentfraction,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONTACT CONTROLS';

    if 'none'!=absolutepenetrationtolerance and 'NONE'!=absolutepenetrationtolerance and 'None'!=absolutepenetrationtolerance:
        line += ', ABSOLUTE PENETRATION TOLERANCE=' + absolutepenetrationtolerance

    if 'none'!=relativepenetrationtolerance and 'NONE'!=relativepenetrationtolerance and 'None'!=relativepenetrationtolerance:
        line += ', RELATIVE PENETRATION TOLERANCE=' + relativepenetrationtolerance

    if 'none'!=master and 'NONE'!=master and 'None'!=master:
        line += ', MASTER=' + master

    if 'none'!=perturbationtangentscalefactor and 'NONE'!=perturbationtangentscalefactor and 'None'!=perturbationtangentscalefactor:
        line += ', PERTURBATION TANGENT SCALE FACTOR=' + perturbationtangentscalefactor

    if 'none'!=pressuredependentperturbation and 'NONE'!=pressuredependentperturbation and 'None'!=pressuredependentperturbation:
        line += ', PRESSURE DEPENDENT PERTURBATION=' + pressuredependentperturbation

    if 'none'!=reset and 'NONE'!=reset and 'None'!=reset:
        line += ', RESET=' + reset

    if 'none'!=slave and 'NONE'!=slave and 'None'!=slave:
        line += ', SLAVE=' + slave

    if 'none'!=stabilize and 'NONE'!=stabilize and 'None'!=stabilize:
        line += ', STABILIZE=' + stabilize

    if 'none'!=stiffnessscalefactor and 'NONE'!=stiffnessscalefactor and 'None'!=stiffnessscalefactor:
        line += ', STIFFNESS SCALE FACTOR=' + stiffnessscalefactor

    if 'none'!=tangentfraction and 'NONE'!=tangentfraction and 'None'!=tangentfraction:
        line += ', TANGENT FRACTION=' + tangentfraction
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcontactcontrolsassignment(filepath,automaticoverclosureresolution,contactthicknessreduction,nodalerosion,rotationalterms,type,seeding,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONTACT CONTROLS ASSIGNMENT';

    if 'none'!=automaticoverclosureresolution and 'NONE'!=automaticoverclosureresolution and 'None'!=automaticoverclosureresolution:
        line += ', AUTOMATIC OVERCLOSURE RESOLUTION=' + automaticoverclosureresolution

    if 'none'!=contactthicknessreduction and 'NONE'!=contactthicknessreduction and 'None'!=contactthicknessreduction:
        line += ', CONTACT THICKNESS REDUCTION=' + contactthicknessreduction

    if 'none'!=nodalerosion and 'NONE'!=nodalerosion and 'None'!=nodalerosion:
        line += ', NODAL EROSION=' + nodalerosion

    if 'none'!=rotationalterms and 'NONE'!=rotationalterms and 'None'!=rotationalterms:
        line += ', ROTATIONAL TERMS=' + rotationalterms

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=seeding and 'NONE'!=seeding and 'None'!=seeding:
        line += ', SEEDING=' + seeding
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcontactdamping(filepath,definition,tangentfraction,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONTACT DAMPING';

    if 'none'!=definition and 'NONE'!=definition and 'None'!=definition:
        line += ', DEFINITION=' + definition

    if 'none'!=tangentfraction and 'NONE'!=tangentfraction and 'None'!=tangentfraction:
        line += ', TANGENT FRACTION=' + tangentfraction
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcontactexclusions(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONTACT EXCLUSIONS';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcontactfile(filepath,frequency,master,nset,slave,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONTACT FILE';

    if 'none'!=frequency and 'NONE'!=frequency and 'None'!=frequency:
        line += ', FREQUENCY=' + frequency

    if 'none'!=master and 'NONE'!=master and 'None'!=master:
        line += ', MASTER=' + master

    if 'none'!=nset and 'NONE'!=nset and 'None'!=nset:
        line += ', NSET=' + nset

    if 'none'!=slave and 'NONE'!=slave and 'None'!=slave:
        line += ', SLAVE=' + slave
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcontactformulation(filepath,type,formulation,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONTACT FORMULATION';

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=formulation and 'NONE'!=formulation and 'None'!=formulation:
        line += ', FORMULATION=' + formulation
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcontactinclusions(filepath,allexterior,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONTACT INCLUSIONS';

    if 'none'!=allexterior and 'NONE'!=allexterior and 'None'!=allexterior:
        line += ', ALL EXTERIOR=' + allexterior
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcontactinitializationassignment(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONTACT INITIALIZATION ASSIGNMENT';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcontactinitializationdata(filepath,name,initialclearance,interferencefit,minimumdistance,searchabove,searchbelow,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONTACT INITIALIZATION DATA';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=initialclearance and 'NONE'!=initialclearance and 'None'!=initialclearance:
        line += ', INITIAL CLEARANCE=' + initialclearance

    if 'none'!=interferencefit and 'NONE'!=interferencefit and 'None'!=interferencefit:
        line += ', INTERFERENCE FIT=' + interferencefit

    if 'none'!=minimumdistance and 'NONE'!=minimumdistance and 'None'!=minimumdistance:
        line += ', MINIMUM DISTANCE=' + minimumdistance

    if 'none'!=searchabove and 'NONE'!=searchabove and 'None'!=searchabove:
        line += ', SEARCH ABOVE=' + searchabove

    if 'none'!=searchbelow and 'NONE'!=searchbelow and 'None'!=searchbelow:
        line += ', SEARCH BELOW=' + searchbelow
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcontactinterference(filepath,amplitude,op,shrink,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONTACT INTERFERENCE';

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op

    if 'none'!=shrink and 'NONE'!=shrink and 'None'!=shrink:
        line += ', SHRINK=' + shrink

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcontactoutput(filepath,cpset,nset,surface,secondsurface,cpset,generalcontact,surface,secondsurface,variable,master,nset,slave,surface,variable,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONTACT OUTPUT';

    if 'none'!=cpset and 'NONE'!=cpset and 'None'!=cpset:
        line += ', CPSET=' + cpset

    if 'none'!=nset and 'NONE'!=nset and 'None'!=nset:
        line += ', NSET=' + nset

    if 'none'!=surface and 'NONE'!=surface and 'None'!=surface:
        line += ', SURFACE=' + surface

    if 'none'!=secondsurface and 'NONE'!=secondsurface and 'None'!=secondsurface:
        line += ', SECOND SURFACE=' + secondsurface

    if 'none'!=cpset and 'NONE'!=cpset and 'None'!=cpset:
        line += ', CPSET=' + cpset

    if 'none'!=generalcontact and 'NONE'!=generalcontact and 'None'!=generalcontact:
        line += ', GENERAL CONTACT=' + generalcontact

    if 'none'!=surface and 'NONE'!=surface and 'None'!=surface:
        line += ', SURFACE=' + surface

    if 'none'!=secondsurface and 'NONE'!=secondsurface and 'None'!=secondsurface:
        line += ', SECOND SURFACE=' + secondsurface

    if 'none'!=variable and 'NONE'!=variable and 'None'!=variable:
        line += ', VARIABLE=' + variable

    if 'none'!=master and 'NONE'!=master and 'None'!=master:
        line += ', MASTER=' + master

    if 'none'!=nset and 'NONE'!=nset and 'None'!=nset:
        line += ', NSET=' + nset

    if 'none'!=slave and 'NONE'!=slave and 'None'!=slave:
        line += ', SLAVE=' + slave

    if 'none'!=surface and 'NONE'!=surface and 'None'!=surface:
        line += ', SURFACE=' + surface

    if 'none'!=variable and 'NONE'!=variable and 'None'!=variable:
        line += ', VARIABLE=' + variable
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcontactpair(filepath,interaction,adjust,extensionzone,geometriccorrection,hcrit,midfacenodes,minimumdistance,nothickness,smallsliding,smooth,slidingtransition,supplementaryconstraints,tied,tracking,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONTACT PAIR';

    if 'none'!=interaction and 'NONE'!=interaction and 'None'!=interaction:
        line += ', INTERACTION=' + interaction

    if 'none'!=adjust and 'NONE'!=adjust and 'None'!=adjust:
        line += ', ADJUST=' + adjust

    if 'none'!=extensionzone and 'NONE'!=extensionzone and 'None'!=extensionzone:
        line += ', EXTENSION ZONE=' + extensionzone

    if 'none'!=geometriccorrection and 'NONE'!=geometriccorrection and 'None'!=geometriccorrection:
        line += ', GEOMETRIC CORRECTION=' + geometriccorrection

    if 'none'!=hcrit and 'NONE'!=hcrit and 'None'!=hcrit:
        line += ', HCRIT=' + hcrit

    if 'none'!=midfacenodes and 'NONE'!=midfacenodes and 'None'!=midfacenodes:
        line += ', MIDFACE NODES=' + midfacenodes

    if 'none'!=minimumdistance and 'NONE'!=minimumdistance and 'None'!=minimumdistance:
        line += ', MINIMUM DISTANCE=' + minimumdistance

    if 'none'!=nothickness and 'NONE'!=nothickness and 'None'!=nothickness:
        line += ', NO THICKNESS=' + nothickness

    if 'none'!=smallsliding and 'NONE'!=smallsliding and 'None'!=smallsliding:
        line += ', SMALL SLIDING=' + smallsliding

    if 'none'!=smooth and 'NONE'!=smooth and 'None'!=smooth:
        line += ', SMOOTH=' + smooth

    if 'none'!=slidingtransition and 'NONE'!=slidingtransition and 'None'!=slidingtransition:
        line += ', SLIDING TRANSITION=' + slidingtransition

    if 'none'!=supplementaryconstraints and 'NONE'!=supplementaryconstraints and 'None'!=supplementaryconstraints:
        line += ', SUPPLEMENTARY CONSTRAINTS=' + supplementaryconstraints

    if 'none'!=tied and 'NONE'!=tied and 'None'!=tied:
        line += ', TIED=' + tied

    if 'none'!=tracking and 'NONE'!=tracking and 'None'!=tracking:
        line += ', TRACKING=' + tracking

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcontactpermeability(filepath,cutoffflowacross,cutoffgapfill,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONTACT PERMEABILITY';

    if 'none'!=cutoffflowacross and 'NONE'!=cutoffflowacross and 'None'!=cutoffflowacross:
        line += ', CUTOFF FLOW ACROSS=' + cutoffflowacross

    if 'none'!=cutoffgapfill and 'NONE'!=cutoffgapfill and 'None'!=cutoffgapfill:
        line += ', CUTOFF GAP FILL=' + cutoffgapfill

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcontactprint(filepath,frequency,master,nset,slave,summary,totals,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONTACT PRINT';

    if 'none'!=frequency and 'NONE'!=frequency and 'None'!=frequency:
        line += ', FREQUENCY=' + frequency

    if 'none'!=master and 'NONE'!=master and 'None'!=master:
        line += ', MASTER=' + master

    if 'none'!=nset and 'NONE'!=nset and 'None'!=nset:
        line += ', NSET=' + nset

    if 'none'!=slave and 'NONE'!=slave and 'None'!=slave:
        line += ', SLAVE=' + slave

    if 'none'!=summary and 'NONE'!=summary and 'None'!=summary:
        line += ', SUMMARY=' + summary

    if 'none'!=totals and 'NONE'!=totals and 'None'!=totals:
        line += ', TOTALS=' + totals
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcontactpropertyassignment(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONTACT PROPERTY ASSIGNMENT';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcontactresponse(filepath,master,nset,slave,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONTACT RESPONSE';

    if 'none'!=master and 'NONE'!=master and 'None'!=master:
        line += ', MASTER=' + master

    if 'none'!=nset and 'NONE'!=nset and 'None'!=nset:
        line += ', NSET=' + nset

    if 'none'!=slave and 'NONE'!=slave and 'None'!=slave:
        line += ', SLAVE=' + slave
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcontactstabilization(filepath,amplitude,range,reductionperincrement,reset,scalefactor,tangentfraction,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONTACT STABILIZATION';

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=range and 'NONE'!=range and 'None'!=range:
        line += ', RANGE=' + range

    if 'none'!=reductionperincrement and 'NONE'!=reductionperincrement and 'None'!=reductionperincrement:
        line += ', REDUCTION PER INCREMENT=' + reductionperincrement

    if 'none'!=reset and 'NONE'!=reset and 'None'!=reset:
        line += ', RESET=' + reset

    if 'none'!=scalefactor and 'NONE'!=scalefactor and 'None'!=scalefactor:
        line += ', SCALE FACTOR=' + scalefactor

    if 'none'!=tangentfraction and 'NONE'!=tangentfraction and 'None'!=tangentfraction:
        line += ', TANGENT FRACTION=' + tangentfraction
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcontourintegral(filepath,contours,crackname,cracktipnodes,direction,frequency,normal,output,residualstressstep,symm,type,xfem,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONTOUR INTEGRAL';

    if 'none'!=contours and 'NONE'!=contours and 'None'!=contours:
        line += ', CONTOURS=' + contours

    if 'none'!=crackname and 'NONE'!=crackname and 'None'!=crackname:
        line += ', CRACK NAME=' + crackname

    if 'none'!=cracktipnodes and 'NONE'!=cracktipnodes and 'None'!=cracktipnodes:
        line += ', CRACK TIP NODES=' + cracktipnodes

    if 'none'!=direction and 'NONE'!=direction and 'None'!=direction:
        line += ', DIRECTION=' + direction

    if 'none'!=frequency and 'NONE'!=frequency and 'None'!=frequency:
        line += ', FREQUENCY=' + frequency

    if 'none'!=normal and 'NONE'!=normal and 'None'!=normal:
        line += ', NORMAL=' + normal

    if 'none'!=output and 'NONE'!=output and 'None'!=output:
        line += ', OUTPUT=' + output

    if 'none'!=residualstressstep and 'NONE'!=residualstressstep and 'None'!=residualstressstep:
        line += ', RESIDUAL STRESS STEP=' + residualstressstep

    if 'none'!=symm and 'NONE'!=symm and 'None'!=symm:
        line += ', SYMM=' + symm

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=xfem and 'NONE'!=xfem and 'None'!=xfem:
        line += ', XFEM=' + xfem
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcontrols(filepath,analysis,parameters,reset,type,distortioncontrol,field,meshsmoothing,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONTROLS';

    if 'none'!=analysis and 'NONE'!=analysis and 'None'!=analysis:
        line += ', ANALYSIS=' + analysis

    if 'none'!=parameters and 'NONE'!=parameters and 'None'!=parameters:
        line += ', PARAMETERS=' + parameters

    if 'none'!=reset and 'NONE'!=reset and 'None'!=reset:
        line += ', RESET=' + reset

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=distortioncontrol and 'NONE'!=distortioncontrol and 'None'!=distortioncontrol:
        line += ', DISTORTION CONTROL=' + distortioncontrol

    if 'none'!=field and 'NONE'!=field and 'None'!=field:
        line += ', FIELD=' + field

    if 'none'!=meshsmoothing and 'NONE'!=meshsmoothing and 'None'!=meshsmoothing:
        line += ', MESH SMOOTHING=' + meshsmoothing
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQconwepchargeproperty(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CONWEP CHARGE PROPERTY';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcorrelation(filepath,psd,complex,input,type,user,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CORRELATION';

    if 'none'!=psd and 'NONE'!=psd and 'None'!=psd:
        line += ', PSD=' + psd

    if 'none'!=complex and 'NONE'!=complex and 'None'!=complex:
        line += ', COMPLEX=' + complex

    if 'none'!=input and 'NONE'!=input and 'None'!=input:
        line += ', INPUT=' + input

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=user and 'NONE'!=user and 'None'!=user:
        line += ', USER=' + user
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQco-simulation(filepath,name,program,controls,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CO-SIMULATION';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=program and 'NONE'!=program and 'None'!=program:
        line += ', PROGRAM=' + program

    if 'none'!=controls and 'NONE'!=controls and 'None'!=controls:
        line += ', CONTROLS=' + controls
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQco-simulationcontrols(filepath,name,factorizationfrequency,timeincrementation,name,stepsize,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CO-SIMULATION CONTROLS';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=factorizationfrequency and 'NONE'!=factorizationfrequency and 'None'!=factorizationfrequency:
        line += ', FACTORIZATION FREQUENCY=' + factorizationfrequency

    if 'none'!=timeincrementation and 'NONE'!=timeincrementation and 'None'!=timeincrementation:
        line += ', TIME INCREMENTATION=' + timeincrementation

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=stepsize and 'NONE'!=stepsize and 'None'!=stepsize:
        line += ', STEP SIZE=' + stepsize
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQco-simulationregion(filepath,export,import,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CO-SIMULATION REGION';

    if 'none'!=export and 'NONE'!=export and 'None'!=export:
        line += ', EXPORT=' + export

    if 'none'!=import and 'NONE'!=import and 'None'!=import:
        line += ', IMPORT=' + import

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcoupledtemperature-displacement(filepath,allsdtol,continue,creep,electrical,factor,stabilize,steadystate,cetol,deltmx,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*COUPLED TEMPERATURE-DISPLACEMENT';

    if 'none'!=allsdtol and 'NONE'!=allsdtol and 'None'!=allsdtol:
        line += ', ALLSDTOL=' + allsdtol

    if 'none'!=continue and 'NONE'!=continue and 'None'!=continue:
        line += ', CONTINUE=' + continue

    if 'none'!=creep and 'NONE'!=creep and 'None'!=creep:
        line += ', CREEP=' + creep

    if 'none'!=electrical and 'NONE'!=electrical and 'None'!=electrical:
        line += ', ELECTRICAL=' + electrical

    if 'none'!=factor and 'NONE'!=factor and 'None'!=factor:
        line += ', FACTOR=' + factor

    if 'none'!=stabilize and 'NONE'!=stabilize and 'None'!=stabilize:
        line += ', STABILIZE=' + stabilize

    if 'none'!=steadystate and 'NONE'!=steadystate and 'None'!=steadystate:
        line += ', STEADY STATE=' + steadystate

    if 'none'!=cetol and 'NONE'!=cetol and 'None'!=cetol:
        line += ', CETOL=' + cetol

    if 'none'!=deltmx and 'NONE'!=deltmx and 'None'!=deltmx:
        line += ', DELTMX=' + deltmx
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcoupledthermal-electrical(filepath,deltmx,end,mxdem,steadystate,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*COUPLED THERMAL-ELECTRICAL';

    if 'none'!=deltmx and 'NONE'!=deltmx and 'None'!=deltmx:
        line += ', DELTMX=' + deltmx

    if 'none'!=end and 'NONE'!=end and 'None'!=end:
        line += ', END=' + end

    if 'none'!=mxdem and 'NONE'!=mxdem and 'None'!=mxdem:
        line += ', MXDEM=' + mxdem

    if 'none'!=steadystate and 'NONE'!=steadystate and 'None'!=steadystate:
        line += ', STEADY STATE=' + steadystate
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcoupling(filepath,constraintname,refnode,surface,influenceradius,orientation,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*COUPLING';

    if 'none'!=constraintname and 'NONE'!=constraintname and 'None'!=constraintname:
        line += ', CONSTRAINT NAME=' + constraintname

    if 'none'!=refnode and 'NONE'!=refnode and 'None'!=refnode:
        line += ', REF NODE=' + refnode

    if 'none'!=surface and 'NONE'!=surface and 'None'!=surface:
        line += ', SURFACE=' + surface

    if 'none'!=influenceradius and 'NONE'!=influenceradius and 'None'!=influenceradius:
        line += ', INFLUENCE RADIUS=' + influenceradius

    if 'none'!=orientation and 'NONE'!=orientation and 'None'!=orientation:
        line += ', ORIENTATION=' + orientation
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcradiate(filepath,amplitude,op,regiontype,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CRADIATE';

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op

    if 'none'!=regiontype and 'NONE'!=regiontype and 'None'!=regiontype:
        line += ', REGION TYPE=' + regiontype
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcreep(filepath,dependencies,law,time,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CREEP';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=law and 'NONE'!=law and 'None'!=law:
        line += ', LAW=' + law

    if 'none'!=time and 'NONE'!=time and 'None'!=time:
        line += ', TIME=' + time
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcreepstrainratecontrol(filepath,amplitude,elset,dependencies,op,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CREEP STRAIN RATE CONTROL';

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcrushablefoam(filepath,dependencies,hardening,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CRUSHABLE FOAM';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=hardening and 'NONE'!=hardening and 'None'!=hardening:
        line += ', HARDENING=' + hardening
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcrushablefoamhardening(filepath,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CRUSHABLE FOAM HARDENING';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcycledplastic(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CYCLED PLASTIC';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcyclic(filepath,nc,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CYCLIC';

    if 'none'!=nc and 'NONE'!=nc and 'None'!=nc:
        line += ', NC=' + nc

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcyclichardening(filepath,dependencies,parameters,user,properties,rate,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CYCLIC HARDENING';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=parameters and 'NONE'!=parameters and 'None'!=parameters:
        line += ', PARAMETERS=' + parameters

    if 'none'!=user and 'NONE'!=user and 'None'!=user:
        line += ', USER=' + user

    if 'none'!=properties and 'NONE'!=properties and 'None'!=properties:
        line += ', PROPERTIES=' + properties

    if 'none'!=rate and 'NONE'!=rate and 'None'!=rate:
        line += ', RATE=' + rate
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQcyclicsymmetrymodel(filepath,n,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*CYCLIC SYMMETRY MODEL';

    if 'none'!=n and 'NONE'!=n and 'None'!=n:
        line += ', N=' + n
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdaddedmass(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*D ADDED MASS';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdempotential(filepath,amplitude,op,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*D EM POTENTIAL';

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdamageevolution(filepath,type,degradation,dependencies,failureindex,mixedmodebehavior,modemixratio,power,softening,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DAMAGE EVOLUTION';

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=degradation and 'NONE'!=degradation and 'None'!=degradation:
        line += ', DEGRADATION=' + degradation

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=failureindex and 'NONE'!=failureindex and 'None'!=failureindex:
        line += ', FAILURE INDEX=' + failureindex

    if 'none'!=mixedmodebehavior and 'NONE'!=mixedmodebehavior and 'None'!=mixedmodebehavior:
        line += ', MIXED MODE BEHAVIOR=' + mixedmodebehavior

    if 'none'!=modemixratio and 'NONE'!=modemixratio and 'None'!=modemixratio:
        line += ', MODE MIX RATIO=' + modemixratio

    if 'none'!=power and 'NONE'!=power and 'None'!=power:
        line += ', POWER=' + power

    if 'none'!=softening and 'NONE'!=softening and 'None'!=softening:
        line += ', SOFTENING=' + softening
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdamageinitiation(filepath,criterion,alpha,definition,dependencies,failuremechanisms,feq,fnn,fnt,frequency,ks,lodedependent,normaldirection,numberimperfections,omega,peinc,position,properties,rcrackdirection,smoothing,tolerance,weightingmethod,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DAMAGE INITIATION';

    if 'none'!=criterion and 'NONE'!=criterion and 'None'!=criterion:
        line += ', CRITERION=' + criterion

    if 'none'!=alpha and 'NONE'!=alpha and 'None'!=alpha:
        line += ', ALPHA=' + alpha

    if 'none'!=definition and 'NONE'!=definition and 'None'!=definition:
        line += ', DEFINITION=' + definition

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=failuremechanisms and 'NONE'!=failuremechanisms and 'None'!=failuremechanisms:
        line += ', FAILURE MECHANISMS=' + failuremechanisms

    if 'none'!=feq and 'NONE'!=feq and 'None'!=feq:
        line += ', FEQ=' + feq

    if 'none'!=fnn and 'NONE'!=fnn and 'None'!=fnn:
        line += ', FNN=' + fnn

    if 'none'!=fnt and 'NONE'!=fnt and 'None'!=fnt:
        line += ', FNT=' + fnt

    if 'none'!=frequency and 'NONE'!=frequency and 'None'!=frequency:
        line += ', FREQUENCY=' + frequency

    if 'none'!=ks and 'NONE'!=ks and 'None'!=ks:
        line += ', KS=' + ks

    if 'none'!=lodedependent and 'NONE'!=lodedependent and 'None'!=lodedependent:
        line += ', LODE DEPENDENT=' + lodedependent

    if 'none'!=normaldirection and 'NONE'!=normaldirection and 'None'!=normaldirection:
        line += ', NORMAL DIRECTION=' + normaldirection

    if 'none'!=numberimperfections and 'NONE'!=numberimperfections and 'None'!=numberimperfections:
        line += ', NUMBER IMPERFECTIONS=' + numberimperfections

    if 'none'!=omega and 'NONE'!=omega and 'None'!=omega:
        line += ', OMEGA=' + omega

    if 'none'!=peinc and 'NONE'!=peinc and 'None'!=peinc:
        line += ', PEINC=' + peinc

    if 'none'!=position and 'NONE'!=position and 'None'!=position:
        line += ', POSITION=' + position

    if 'none'!=properties and 'NONE'!=properties and 'None'!=properties:
        line += ', PROPERTIES=' + properties

    if 'none'!=rcrackdirection and 'NONE'!=rcrackdirection and 'None'!=rcrackdirection:
        line += ', R CRACK DIRECTION=' + rcrackdirection

    if 'none'!=smoothing and 'NONE'!=smoothing and 'None'!=smoothing:
        line += ', SMOOTHING=' + smoothing

    if 'none'!=tolerance and 'NONE'!=tolerance and 'None'!=tolerance:
        line += ', TOLERANCE=' + tolerance

    if 'none'!=weightingmethod and 'NONE'!=weightingmethod and 'None'!=weightingmethod:
        line += ', WEIGHTING METHOD=' + weightingmethod
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdamagestabilization(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DAMAGE STABILIZATION';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdamping(filepath,alpha,beta,composite,dependencies,structural,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DAMPING';

    if 'none'!=alpha and 'NONE'!=alpha and 'None'!=alpha:
        line += ', ALPHA=' + alpha

    if 'none'!=beta and 'NONE'!=beta and 'None'!=beta:
        line += ', BETA=' + beta

    if 'none'!=composite and 'NONE'!=composite and 'None'!=composite:
        line += ', COMPOSITE=' + composite

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=structural and 'NONE'!=structural and 'None'!=structural:
        line += ', STRUCTURAL=' + structural
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdampingcontrols(filepath,lowfrequencycutoff,structural,viscous,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DAMPING CONTROLS';

    if 'none'!=lowfrequencycutoff and 'NONE'!=lowfrequencycutoff and 'None'!=lowfrequencycutoff:
        line += ', LOW FREQUENCY CUTOFF=' + lowfrequencycutoff

    if 'none'!=structural and 'NONE'!=structural and 'None'!=structural:
        line += ', STRUCTURAL=' + structural

    if 'none'!=viscous and 'NONE'!=viscous and 'None'!=viscous:
        line += ', VISCOUS=' + viscous
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdashpot(filepath,elset,dependencies,nonlinear,orientation,rtol,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DASHPOT';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=nonlinear and 'NONE'!=nonlinear and 'None'!=nonlinear:
        line += ', NONLINEAR=' + nonlinear

    if 'none'!=orientation and 'NONE'!=orientation and 'None'!=orientation:
        line += ', ORIENTATION=' + orientation

    if 'none'!=rtol and 'NONE'!=rtol and 'None'!=rtol:
        line += ', RTOL=' + rtol
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdebond(filepath,master,slave,debondingforce,frequency,output,timeincrement,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DEBOND';

    if 'none'!=master and 'NONE'!=master and 'None'!=master:
        line += ', MASTER=' + master

    if 'none'!=slave and 'NONE'!=slave and 'None'!=slave:
        line += ', SLAVE=' + slave

    if 'none'!=debondingforce and 'NONE'!=debondingforce and 'None'!=debondingforce:
        line += ', DEBONDING FORCE=' + debondingforce

    if 'none'!=frequency and 'NONE'!=frequency and 'None'!=frequency:
        line += ', FREQUENCY=' + frequency

    if 'none'!=output and 'NONE'!=output and 'None'!=output:
        line += ', OUTPUT=' + output

    if 'none'!=timeincrement and 'NONE'!=timeincrement and 'None'!=timeincrement:
        line += ', TIME INCREMENT=' + timeincrement
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdecharge(filepath,amplitude,op,imaginary,real,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DECHARGE';

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op

    if 'none'!=imaginary and 'NONE'!=imaginary and 'None'!=imaginary:
        line += ', IMAGINARY=' + imaginary

    if 'none'!=real and 'NONE'!=real and 'None'!=real:
        line += ', REAL=' + real
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdecurrent(filepath,amplitude,op,imaginary,real,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DECURRENT';

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op

    if 'none'!=imaginary and 'NONE'!=imaginary and 'None'!=imaginary:
        line += ', IMAGINARY=' + imaginary

    if 'none'!=real and 'NONE'!=real and 'None'!=real:
        line += ', REAL=' + real
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdeformationplasticity(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DEFORMATION PLASTICITY';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdensity(filepath,dependencies,porefluid,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DENSITY';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=porefluid and 'NONE'!=porefluid and 'None'!=porefluid:
        line += ', PORE FLUID=' + porefluid
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdepvar(filepath,convert,delete,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DEPVAR';

    if 'none'!=convert and 'NONE'!=convert and 'None'!=convert:
        line += ', CONVERT=' + convert

    if 'none'!=delete and 'NONE'!=delete and 'None'!=delete:
        line += ', DELETE=' + delete
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdesigngradient(filepath,dependent,independent,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DESIGN GRADIENT';

    if 'none'!=dependent and 'NONE'!=dependent and 'None'!=dependent:
        line += ', DEPENDENT=' + dependent

    if 'none'!=independent and 'NONE'!=independent and 'None'!=independent:
        line += ', INDEPENDENT=' + independent
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdesignparameter(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DESIGN PARAMETER';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdesignresponse(filepath,frequency,modelist,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DESIGN RESPONSE';

    if 'none'!=frequency and 'NONE'!=frequency and 'None'!=frequency:
        line += ', FREQUENCY=' + frequency

    if 'none'!=modelist and 'NONE'!=modelist and 'None'!=modelist:
        line += ', MODE LIST=' + modelist
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdetonationpoint(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DETONATION POINT';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdflow(filepath,amplitude,op,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DFLOW';

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdflux(filepath,amplitude,op,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DFLUX';

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdiagnostics(filepath,adaptivemesh,contactinitialoverclosure,criticalelements,cutoffratio,deeppenetrationfactor,deformationspeedcheck,detectcrossedsurfaces,plasticity,warningratio,warpedsurface,nonhybridincompressible,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DIAGNOSTICS';

    if 'none'!=adaptivemesh and 'NONE'!=adaptivemesh and 'None'!=adaptivemesh:
        line += ', ADAPTIVE MESH=' + adaptivemesh

    if 'none'!=contactinitialoverclosure and 'NONE'!=contactinitialoverclosure and 'None'!=contactinitialoverclosure:
        line += ', CONTACT INITIAL OVERCLOSURE=' + contactinitialoverclosure

    if 'none'!=criticalelements and 'NONE'!=criticalelements and 'None'!=criticalelements:
        line += ', CRITICAL ELEMENTS=' + criticalelements

    if 'none'!=cutoffratio and 'NONE'!=cutoffratio and 'None'!=cutoffratio:
        line += ', CUTOFF RATIO=' + cutoffratio

    if 'none'!=deeppenetrationfactor and 'NONE'!=deeppenetrationfactor and 'None'!=deeppenetrationfactor:
        line += ', DEEP PENETRATION FACTOR=' + deeppenetrationfactor

    if 'none'!=deformationspeedcheck and 'NONE'!=deformationspeedcheck and 'None'!=deformationspeedcheck:
        line += ', DEFORMATION SPEED CHECK=' + deformationspeedcheck

    if 'none'!=detectcrossedsurfaces and 'NONE'!=detectcrossedsurfaces and 'None'!=detectcrossedsurfaces:
        line += ', DETECT CROSSED SURFACES=' + detectcrossedsurfaces

    if 'none'!=plasticity and 'NONE'!=plasticity and 'None'!=plasticity:
        line += ', PLASTICITY=' + plasticity

    if 'none'!=warningratio and 'NONE'!=warningratio and 'None'!=warningratio:
        line += ', WARNING RATIO=' + warningratio

    if 'none'!=warpedsurface and 'NONE'!=warpedsurface and 'None'!=warpedsurface:
        line += ', WARPED SURFACE=' + warpedsurface

    if 'none'!=nonhybridincompressible and 'NONE'!=nonhybridincompressible and 'None'!=nonhybridincompressible:
        line += ', NONHYBRID INCOMPRESSIBLE=' + nonhybridincompressible
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdielectric(filepath,dependencies,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DIELECTRIC';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdiffusivity(filepath,dependencies,law,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DIFFUSIVITY';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=law and 'NONE'!=law and 'None'!=law:
        line += ', LAW=' + law

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdirectcyclic(filepath,cetol,continue,deltmx,fatigue,timepoints,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DIRECT CYCLIC';

    if 'none'!=cetol and 'NONE'!=cetol and 'None'!=cetol:
        line += ', CETOL=' + cetol

    if 'none'!=continue and 'NONE'!=continue and 'None'!=continue:
        line += ', CONTINUE=' + continue

    if 'none'!=deltmx and 'NONE'!=deltmx and 'None'!=deltmx:
        line += ', DELTMX=' + deltmx

    if 'none'!=fatigue and 'NONE'!=fatigue and 'None'!=fatigue:
        line += ', FATIGUE=' + fatigue

    if 'none'!=timepoints and 'NONE'!=timepoints and 'None'!=timepoints:
        line += ', TIME POINTS=' + timepoints
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdiscreteelasticity(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DISCRETE ELASTICITY';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdiscretesection(filepath,elset,density,shape,alpha,controls,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DISCRETE SECTION';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=density and 'NONE'!=density and 'None'!=density:
        line += ', DENSITY=' + density

    if 'none'!=shape and 'NONE'!=shape and 'None'!=shape:
        line += ', SHAPE=' + shape

    if 'none'!=alpha and 'NONE'!=alpha and 'None'!=alpha:
        line += ', ALPHA=' + alpha

    if 'none'!=controls and 'NONE'!=controls and 'None'!=controls:
        line += ', CONTROLS=' + controls
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdisplaybody(filepath,instance,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DISPLAY BODY';

    if 'none'!=instance and 'NONE'!=instance and 'None'!=instance:
        line += ', INSTANCE=' + instance
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdistributing(filepath,coupling,weightingmethod,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DISTRIBUTING';

    if 'none'!=coupling and 'NONE'!=coupling and 'None'!=coupling:
        line += ', COUPLING=' + coupling

    if 'none'!=weightingmethod and 'NONE'!=weightingmethod and 'None'!=weightingmethod:
        line += ', WEIGHTING METHOD=' + weightingmethod
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdistributingcoupling(filepath,elset,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DISTRIBUTING COUPLING';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdistribution(filepath,location,name,table,input,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DISTRIBUTION';

    if 'none'!=location and 'NONE'!=location and 'None'!=location:
        line += ', LOCATION=' + location

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=table and 'NONE'!=table and 'None'!=table:
        line += ', TABLE=' + table

    if 'none'!=input and 'NONE'!=input and 'None'!=input:
        line += ', INPUT=' + input
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdistributiontable(filepath,name,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DISTRIBUTION TABLE';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdload(filepath,cyclicmode,amplitude,constantresultant,follower,op,orientation,refnode,regiontype,imaginary,real,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DLOAD';

    if 'none'!=cyclicmode and 'NONE'!=cyclicmode and 'None'!=cyclicmode:
        line += ', CYCLIC MODE=' + cyclicmode

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=constantresultant and 'NONE'!=constantresultant and 'None'!=constantresultant:
        line += ', CONSTANT RESULTANT=' + constantresultant

    if 'none'!=follower and 'NONE'!=follower and 'None'!=follower:
        line += ', FOLLOWER=' + follower

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op

    if 'none'!=orientation and 'NONE'!=orientation and 'None'!=orientation:
        line += ', ORIENTATION=' + orientation

    if 'none'!=refnode and 'NONE'!=refnode and 'None'!=refnode:
        line += ', REF NODE=' + refnode

    if 'none'!=regiontype and 'NONE'!=regiontype and 'None'!=regiontype:
        line += ', REGION TYPE=' + regiontype

    if 'none'!=imaginary and 'NONE'!=imaginary and 'None'!=imaginary:
        line += ', IMAGINARY=' + imaginary

    if 'none'!=real and 'NONE'!=real and 'None'!=real:
        line += ', REAL=' + real
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdomaindecomposition(filepath,elset,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DOMAIN DECOMPOSITION';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdragchain(filepath,elset,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DRAG CHAIN';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdruckerprager(filepath,dependencies,eccentricity,shearcriterion,testdata,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DRUCKER PRAGER';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=eccentricity and 'NONE'!=eccentricity and 'None'!=eccentricity:
        line += ', ECCENTRICITY=' + eccentricity

    if 'none'!=shearcriterion and 'NONE'!=shearcriterion and 'None'!=shearcriterion:
        line += ', SHEAR CRITERION=' + shearcriterion

    if 'none'!=testdata and 'NONE'!=testdata and 'None'!=testdata:
        line += ', TEST DATA=' + testdata
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdruckerpragercreep(filepath,dependencies,law,time,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DRUCKER PRAGER CREEP';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=law and 'NONE'!=law and 'None'!=law:
        line += ', LAW=' + law

    if 'none'!=time and 'NONE'!=time and 'None'!=time:
        line += ', TIME=' + time
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdruckerpragerhardening(filepath,dependencies,rate,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DRUCKER PRAGER HARDENING';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=rate and 'NONE'!=rate and 'None'!=rate:
        line += ', RATE=' + rate

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdsacontrols(filepath,formulation,reset,sizingfrequency,tolerance,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DSA CONTROLS';

    if 'none'!=formulation and 'NONE'!=formulation and 'None'!=formulation:
        line += ', FORMULATION=' + formulation

    if 'none'!=reset and 'NONE'!=reset and 'None'!=reset:
        line += ', RESET=' + reset

    if 'none'!=sizingfrequency and 'NONE'!=sizingfrequency and 'None'!=sizingfrequency:
        line += ', SIZING FREQUENCY=' + sizingfrequency

    if 'none'!=tolerance and 'NONE'!=tolerance and 'None'!=tolerance:
        line += ', TOLERANCE=' + tolerance
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdsecharge(filepath,amplitude,op,imaginary,real,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DSECHARGE';

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op

    if 'none'!=imaginary and 'NONE'!=imaginary and 'None'!=imaginary:
        line += ', IMAGINARY=' + imaginary

    if 'none'!=real and 'NONE'!=real and 'None'!=real:
        line += ', REAL=' + real
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdsecurrent(filepath,amplitude,op,imaginary,real,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DSECURRENT';

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op

    if 'none'!=imaginary and 'NONE'!=imaginary and 'None'!=imaginary:
        line += ', IMAGINARY=' + imaginary

    if 'none'!=real and 'NONE'!=real and 'None'!=real:
        line += ', REAL=' + real
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdsflow(filepath,amplitude,op,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DSFLOW';

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdsflux(filepath,amplitude,op,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DSFLUX';

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdsload(filepath,cyclicmode,amplitude,constantresultant,follower,op,orientation,refnode,imaginary,real,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DSLOAD';

    if 'none'!=cyclicmode and 'NONE'!=cyclicmode and 'None'!=cyclicmode:
        line += ', CYCLIC MODE=' + cyclicmode

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=constantresultant and 'NONE'!=constantresultant and 'None'!=constantresultant:
        line += ', CONSTANT RESULTANT=' + constantresultant

    if 'none'!=follower and 'NONE'!=follower and 'None'!=follower:
        line += ', FOLLOWER=' + follower

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op

    if 'none'!=orientation and 'NONE'!=orientation and 'None'!=orientation:
        line += ', ORIENTATION=' + orientation

    if 'none'!=refnode and 'NONE'!=refnode and 'None'!=refnode:
        line += ', REF NODE=' + refnode

    if 'none'!=imaginary and 'NONE'!=imaginary and 'None'!=imaginary:
        line += ', IMAGINARY=' + imaginary

    if 'none'!=real and 'NONE'!=real and 'None'!=real:
        line += ', REAL=' + real
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdynamic(filepath,subspace,adiabatic,alpha,application,beta,direct,gamma,haftol,halfincscalefactor,impact,incrementation,initial,nohaf,singularmass,timeintegrator,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DYNAMIC';

    if 'none'!=subspace and 'NONE'!=subspace and 'None'!=subspace:
        line += ', SUBSPACE=' + subspace

    if 'none'!=adiabatic and 'NONE'!=adiabatic and 'None'!=adiabatic:
        line += ', ADIABATIC=' + adiabatic

    if 'none'!=alpha and 'NONE'!=alpha and 'None'!=alpha:
        line += ', ALPHA=' + alpha

    if 'none'!=application and 'NONE'!=application and 'None'!=application:
        line += ', APPLICATION=' + application

    if 'none'!=beta and 'NONE'!=beta and 'None'!=beta:
        line += ', BETA=' + beta

    if 'none'!=direct and 'NONE'!=direct and 'None'!=direct:
        line += ', DIRECT=' + direct

    if 'none'!=gamma and 'NONE'!=gamma and 'None'!=gamma:
        line += ', GAMMA=' + gamma

    if 'none'!=haftol and 'NONE'!=haftol and 'None'!=haftol:
        line += ', HAFTOL=' + haftol

    if 'none'!=halfincscalefactor and 'NONE'!=halfincscalefactor and 'None'!=halfincscalefactor:
        line += ', HALFINC SCALE FACTOR=' + halfincscalefactor

    if 'none'!=impact and 'NONE'!=impact and 'None'!=impact:
        line += ', IMPACT=' + impact

    if 'none'!=incrementation and 'NONE'!=incrementation and 'None'!=incrementation:
        line += ', INCREMENTATION=' + incrementation

    if 'none'!=initial and 'NONE'!=initial and 'None'!=initial:
        line += ', INITIAL=' + initial

    if 'none'!=nohaf and 'NONE'!=nohaf and 'None'!=nohaf:
        line += ', NOHAF=' + nohaf

    if 'none'!=singularmass and 'NONE'!=singularmass and 'None'!=singularmass:
        line += ', SINGULAR MASS=' + singularmass

    if 'none'!=timeintegrator and 'NONE'!=timeintegrator and 'None'!=timeintegrator:
        line += ', TIME INTEGRATOR=' + timeintegrator
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQdynamictemperature-displacement(filepath,explicit,directusercontrol,elementbyelement,fixedtimeincrementation,improveddtmethod,scalefactor,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*DYNAMIC TEMPERATURE-DISPLACEMENT';

    if 'none'!=explicit and 'NONE'!=explicit and 'None'!=explicit:
        line += ', EXPLICIT=' + explicit

    if 'none'!=directusercontrol and 'NONE'!=directusercontrol and 'None'!=directusercontrol:
        line += ', DIRECT USER CONTROL=' + directusercontrol

    if 'none'!=elementbyelement and 'NONE'!=elementbyelement and 'None'!=elementbyelement:
        line += ', ELEMENT BY ELEMENT=' + elementbyelement

    if 'none'!=fixedtimeincrementation and 'NONE'!=fixedtimeincrementation and 'None'!=fixedtimeincrementation:
        line += ', FIXED TIME INCREMENTATION=' + fixedtimeincrementation

    if 'none'!=improveddtmethod and 'NONE'!=improveddtmethod and 'None'!=improveddtmethod:
        line += ', IMPROVED DT METHOD=' + improveddtmethod

    if 'none'!=scalefactor and 'NONE'!=scalefactor and 'None'!=scalefactor:
        line += ', SCALE FACTOR=' + scalefactor
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQelfile(filepath,directions,elset,frequency,lastmode,mode,position,rebar,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*EL FILE';

    if 'none'!=directions and 'NONE'!=directions and 'None'!=directions:
        line += ', DIRECTIONS=' + directions

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=frequency and 'NONE'!=frequency and 'None'!=frequency:
        line += ', FREQUENCY=' + frequency

    if 'none'!=lastmode and 'NONE'!=lastmode and 'None'!=lastmode:
        line += ', LAST MODE=' + lastmode

    if 'none'!=mode and 'NONE'!=mode and 'None'!=mode:
        line += ', MODE=' + mode

    if 'none'!=position and 'NONE'!=position and 'None'!=position:
        line += ', POSITION=' + position

    if 'none'!=rebar and 'NONE'!=rebar and 'None'!=rebar:
        line += ', REBAR=' + rebar
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQelprint(filepath,elset,frequency,lastmode,mode,position,rebar,summary,totals,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*EL PRINT';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=frequency and 'NONE'!=frequency and 'None'!=frequency:
        line += ', FREQUENCY=' + frequency

    if 'none'!=lastmode and 'NONE'!=lastmode and 'None'!=lastmode:
        line += ', LAST MODE=' + lastmode

    if 'none'!=mode and 'NONE'!=mode and 'None'!=mode:
        line += ', MODE=' + mode

    if 'none'!=position and 'NONE'!=position and 'None'!=position:
        line += ', POSITION=' + position

    if 'none'!=rebar and 'NONE'!=rebar and 'None'!=rebar:
        line += ', REBAR=' + rebar

    if 'none'!=summary and 'NONE'!=summary and 'None'!=summary:
        line += ', SUMMARY=' + summary

    if 'none'!=totals and 'NONE'!=totals and 'None'!=totals:
        line += ', TOTALS=' + totals
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQelastic(filepath,compressionfactor,dependencies,moduli,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*ELASTIC';

    if 'none'!=compressionfactor and 'NONE'!=compressionfactor and 'None'!=compressionfactor:
        line += ', COMPRESSION FACTOR=' + compressionfactor

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=moduli and 'NONE'!=moduli and 'None'!=moduli:
        line += ', MODULI=' + moduli

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQelcopy(filepath,elementshift,oldset,shiftnodes,newset,reflect,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*ELCOPY';

    if 'none'!=elementshift and 'NONE'!=elementshift and 'None'!=elementshift:
        line += ', ELEMENT SHIFT=' + elementshift

    if 'none'!=oldset and 'NONE'!=oldset and 'None'!=oldset:
        line += ', OLD SET=' + oldset

    if 'none'!=shiftnodes and 'NONE'!=shiftnodes and 'None'!=shiftnodes:
        line += ', SHIFT NODES=' + shiftnodes

    if 'none'!=newset and 'NONE'!=newset and 'None'!=newset:
        line += ', NEW SET=' + newset

    if 'none'!=reflect and 'NONE'!=reflect and 'None'!=reflect:
        line += ', REFLECT=' + reflect
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQelectricalconductivity(filepath,dependencies,frequency,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*ELECTRICAL CONDUCTIVITY';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=frequency and 'NONE'!=frequency and 'None'!=frequency:
        line += ', FREQUENCY=' + frequency

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQelectromagnetic(filepath,lowfrequency,timeharmonic,transient,direct,stabilization,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*ELECTROMAGNETIC';

    if 'none'!=lowfrequency and 'NONE'!=lowfrequency and 'None'!=lowfrequency:
        line += ', LOW FREQUENCY=' + lowfrequency

    if 'none'!=timeharmonic and 'NONE'!=timeharmonic and 'None'!=timeharmonic:
        line += ', TIME HARMONIC=' + timeharmonic

    if 'none'!=transient and 'NONE'!=transient and 'None'!=transient:
        line += ', TRANSIENT=' + transient

    if 'none'!=direct and 'NONE'!=direct and 'None'!=direct:
        line += ', DIRECT=' + direct

    if 'none'!=stabilization and 'NONE'!=stabilization and 'None'!=stabilization:
        line += ', STABILIZATION=' + stabilization
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQelement(filepath,type,elset,file,input,offset,solidelementnumbering,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*ELEMENT';

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=file and 'NONE'!=file and 'None'!=file:
        line += ', FILE=' + file

    if 'none'!=input and 'NONE'!=input and 'None'!=input:
        line += ', INPUT=' + input

    if 'none'!=offset and 'NONE'!=offset and 'None'!=offset:
        line += ', OFFSET=' + offset

    if 'none'!=solidelementnumbering and 'NONE'!=solidelementnumbering and 'None'!=solidelementnumbering:
        line += ', SOLID ELEMENT NUMBERING=' + solidelementnumbering
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQelementmatrixoutput(filepath,elset,dload,filename,frequency,mass,outputfile,stiffness,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*ELEMENT MATRIX OUTPUT';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=dload and 'NONE'!=dload and 'None'!=dload:
        line += ', DLOAD=' + dload

    if 'none'!=filename and 'NONE'!=filename and 'None'!=filename:
        line += ', FILE NAME=' + filename

    if 'none'!=frequency and 'NONE'!=frequency and 'None'!=frequency:
        line += ', FREQUENCY=' + frequency

    if 'none'!=mass and 'NONE'!=mass and 'None'!=mass:
        line += ', MASS=' + mass

    if 'none'!=outputfile and 'NONE'!=outputfile and 'None'!=outputfile:
        line += ', OUTPUT FILE=' + outputfile

    if 'none'!=stiffness and 'NONE'!=stiffness and 'None'!=stiffness:
        line += ', STIFFNESS=' + stiffness
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQelementoperatoroutput(filepath,assemble,damping,elset,frequency,load,loadtype,stiffness,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*ELEMENT OPERATOR OUTPUT';

    if 'none'!=assemble and 'NONE'!=assemble and 'None'!=assemble:
        line += ', ASSEMBLE=' + assemble

    if 'none'!=damping and 'NONE'!=damping and 'None'!=damping:
        line += ', DAMPING=' + damping

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=frequency and 'NONE'!=frequency and 'None'!=frequency:
        line += ', FREQUENCY=' + frequency

    if 'none'!=load and 'NONE'!=load and 'None'!=load:
        line += ', LOAD=' + load

    if 'none'!=loadtype and 'NONE'!=loadtype and 'None'!=loadtype:
        line += ', LOADTYPE=' + loadtype

    if 'none'!=stiffness and 'NONE'!=stiffness and 'None'!=stiffness:
        line += ', STIFFNESS=' + stiffness
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQelementoutput(filepath,elset,tracerset,allsectionpts,directions,elset,exterior,position,rebar,variable,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*ELEMENT OUTPUT';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=tracerset and 'NONE'!=tracerset and 'None'!=tracerset:
        line += ', TRACER SET=' + tracerset

    if 'none'!=allsectionpts and 'NONE'!=allsectionpts and 'None'!=allsectionpts:
        line += ', ALLSECTIONPTS=' + allsectionpts

    if 'none'!=directions and 'NONE'!=directions and 'None'!=directions:
        line += ', DIRECTIONS=' + directions

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=exterior and 'NONE'!=exterior and 'None'!=exterior:
        line += ', EXTERIOR=' + exterior

    if 'none'!=position and 'NONE'!=position and 'None'!=position:
        line += ', POSITION=' + position

    if 'none'!=rebar and 'NONE'!=rebar and 'None'!=rebar:
        line += ', REBAR=' + rebar

    if 'none'!=variable and 'NONE'!=variable and 'None'!=variable:
        line += ', VARIABLE=' + variable
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQelementresponse(filepath,elset,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*ELEMENT RESPONSE';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQelgen(filepath,allnodes,elset,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*ELGEN';

    if 'none'!=allnodes and 'NONE'!=allnodes and 'None'!=allnodes:
        line += ', ALL NODES=' + allnodes

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQelset(filepath,elset,generate,instance,internal,unsorted,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*ELSET';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=generate and 'NONE'!=generate and 'None'!=generate:
        line += ', GENERATE=' + generate

    if 'none'!=instance and 'NONE'!=instance and 'None'!=instance:
        line += ', INSTANCE=' + instance

    if 'none'!=internal and 'NONE'!=internal and 'None'!=internal:
        line += ', INTERNAL=' + internal

    if 'none'!=unsorted and 'NONE'!=unsorted and 'None'!=unsorted:
        line += ', UNSORTED=' + unsorted
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQembeddedelement(filepath,absoluteexteriortolerance,embednodes,exteriortolerance,hostelset,partialembed,roundofftolerance,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*EMBEDDED ELEMENT';

    if 'none'!=absoluteexteriortolerance and 'NONE'!=absoluteexteriortolerance and 'None'!=absoluteexteriortolerance:
        line += ', ABSOLUTE EXTERIOR TOLERANCE=' + absoluteexteriortolerance

    if 'none'!=embednodes and 'NONE'!=embednodes and 'None'!=embednodes:
        line += ', EMBED NODES=' + embednodes

    if 'none'!=exteriortolerance and 'NONE'!=exteriortolerance and 'None'!=exteriortolerance:
        line += ', EXTERIOR TOLERANCE=' + exteriortolerance

    if 'none'!=hostelset and 'NONE'!=hostelset and 'None'!=hostelset:
        line += ', HOST ELSET=' + hostelset

    if 'none'!=partialembed and 'NONE'!=partialembed and 'None'!=partialembed:
        line += ', PARTIAL EMBED=' + partialembed

    if 'none'!=roundofftolerance and 'NONE'!=roundofftolerance and 'None'!=roundofftolerance:
        line += ', ROUNDOFF TOLERANCE=' + roundofftolerance
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQemissivity(filepath,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*EMISSIVITY';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQendassembly(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*END ASSEMBLY';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQendinstance(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*END INSTANCE';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQendloadcase(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*END LOAD CASE';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQendpart(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*END PART';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQendstep(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*END STEP';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQenergyequationsolver(filepath,convergence,diagnostics,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*ENERGY EQUATION SOLVER';

    if 'none'!=convergence and 'NONE'!=convergence and 'None'!=convergence:
        line += ', CONVERGENCE=' + convergence

    if 'none'!=diagnostics and 'NONE'!=diagnostics and 'None'!=diagnostics:
        line += ', DIAGNOSTICS=' + diagnostics

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQenergyfile(filepath,elset,frequency,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*ENERGY FILE';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=frequency and 'NONE'!=frequency and 'None'!=frequency:
        line += ', FREQUENCY=' + frequency
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQenergyoutput(filepath,elset,variable,perelementset,persection,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*ENERGY OUTPUT';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=variable and 'NONE'!=variable and 'None'!=variable:
        line += ', VARIABLE=' + variable

    if 'none'!=perelementset and 'NONE'!=perelementset and 'None'!=perelementset:
        line += ', PER ELEMENT SET=' + perelementset

    if 'none'!=persection and 'NONE'!=persection and 'None'!=persection:
        line += ', PER SECTION=' + persection
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQenergyprint(filepath,elset,frequency,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*ENERGY PRINT';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=frequency and 'NONE'!=frequency and 'None'!=frequency:
        line += ', FREQUENCY=' + frequency
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQenrichment(filepath,elset,name,enrichmentradius,interaction,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*ENRICHMENT';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=enrichmentradius and 'NONE'!=enrichmentradius and 'None'!=enrichmentradius:
        line += ', ENRICHMENT RADIUS=' + enrichmentradius

    if 'none'!=interaction and 'NONE'!=interaction and 'None'!=interaction:
        line += ', INTERACTION=' + interaction

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQenrichmentactivation(filepath,name,activate,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*ENRICHMENT ACTIVATION';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=activate and 'NONE'!=activate and 'None'!=activate:
        line += ', ACTIVATE=' + activate

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQeos(filepath,type,detonationenergy,properties,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*EOS';

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=detonationenergy and 'NONE'!=detonationenergy and 'None'!=detonationenergy:
        line += ', DETONATION ENERGY=' + detonationenergy

    if 'none'!=properties and 'NONE'!=properties and 'None'!=properties:
        line += ', PROPERTIES=' + properties
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQeoscompaction(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*EOS COMPACTION';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQepjoint(filepath,elset,orientation,section,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*EPJOINT';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=orientation and 'NONE'!=orientation and 'None'!=orientation:
        line += ', ORIENTATION=' + orientation

    if 'none'!=section and 'NONE'!=section and 'None'!=section:
        line += ', SECTION=' + section
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQequation(filepath,input,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*EQUATION';

    if 'none'!=input and 'NONE'!=input and 'None'!=input:
        line += ', INPUT=' + input
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQeulerianboundary(filepath,inflow,op,outflow,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*EULERIAN BOUNDARY';

    if 'none'!=inflow and 'NONE'!=inflow and 'None'!=inflow:
        line += ', INFLOW=' + inflow

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op

    if 'none'!=outflow and 'NONE'!=outflow and 'None'!=outflow:
        line += ', OUTFLOW=' + outflow
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQeulerianmeshmotion(filepath,elset,surface,aspectratiomax,buffer,center,contract,op,orientation,vmaxfactor,volfracmin,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*EULERIAN MESH MOTION';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=surface and 'NONE'!=surface and 'None'!=surface:
        line += ', SURFACE=' + surface

    if 'none'!=aspectratiomax and 'NONE'!=aspectratiomax and 'None'!=aspectratiomax:
        line += ', ASPECT RATIO MAX=' + aspectratiomax

    if 'none'!=buffer and 'NONE'!=buffer and 'None'!=buffer:
        line += ', BUFFER=' + buffer

    if 'none'!=center and 'NONE'!=center and 'None'!=center:
        line += ', CENTER=' + center

    if 'none'!=contract and 'NONE'!=contract and 'None'!=contract:
        line += ', CONTRACT=' + contract

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op

    if 'none'!=orientation and 'NONE'!=orientation and 'None'!=orientation:
        line += ', ORIENTATION=' + orientation

    if 'none'!=vmaxfactor and 'NONE'!=vmaxfactor and 'None'!=vmaxfactor:
        line += ', VMAX FACTOR=' + vmaxfactor

    if 'none'!=volfracmin and 'NONE'!=volfracmin and 'None'!=volfracmin:
        line += ', VOLFRAC MIN=' + volfracmin
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQeuleriansection(filepath,elset,advection,controls,fluxlimitratio,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*EULERIAN SECTION';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=advection and 'NONE'!=advection and 'None'!=advection:
        line += ', ADVECTION=' + advection

    if 'none'!=controls and 'NONE'!=controls and 'None'!=controls:
        line += ', CONTROLS=' + controls

    if 'none'!=fluxlimitratio and 'NONE'!=fluxlimitratio and 'None'!=fluxlimitratio:
        line += ', FLUX LIMIT RATIO=' + fluxlimitratio
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQexpansion(filepath,dependencies,field,porefluid,type,user,zero,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*EXPANSION';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=field and 'NONE'!=field and 'None'!=field:
        line += ', FIELD=' + field

    if 'none'!=porefluid and 'NONE'!=porefluid and 'None'!=porefluid:
        line += ', PORE FLUID=' + porefluid

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=user and 'NONE'!=user and 'None'!=user:
        line += ', USER=' + user

    if 'none'!=zero and 'NONE'!=zero and 'None'!=zero:
        line += ', ZERO=' + zero
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQextremeelementvalue(filepath,elset,abs,max,min,output,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*EXTREME ELEMENT VALUE';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=abs and 'NONE'!=abs and 'None'!=abs:
        line += ', ABS=' + abs

    if 'none'!=max and 'NONE'!=max and 'None'!=max:
        line += ', MAX=' + max

    if 'none'!=min and 'NONE'!=min and 'None'!=min:
        line += ', MIN=' + min

    if 'none'!=output and 'NONE'!=output and 'None'!=output:
        line += ', OUTPUT=' + output
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQextremenodevalue(filepath,nset,abs,max,min,output,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*EXTREME NODE VALUE';

    if 'none'!=nset and 'NONE'!=nset and 'None'!=nset:
        line += ', NSET=' + nset

    if 'none'!=abs and 'NONE'!=abs and 'None'!=abs:
        line += ', ABS=' + abs

    if 'none'!=max and 'NONE'!=max and 'None'!=max:
        line += ', MAX=' + max

    if 'none'!=min and 'NONE'!=min and 'None'!=min:
        line += ', MIN=' + min

    if 'none'!=output and 'NONE'!=output and 'None'!=output:
        line += ', OUTPUT=' + output
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQextremevalue(filepath,halt,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*EXTREME VALUE';

    if 'none'!=halt and 'NONE'!=halt and 'None'!=halt:
        line += ', HALT=' + halt
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQfabric(filepath,properties,stressfreeinitialslack,user,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FABRIC';

    if 'none'!=properties and 'NONE'!=properties and 'None'!=properties:
        line += ', PROPERTIES=' + properties

    if 'none'!=stressfreeinitialslack and 'NONE'!=stressfreeinitialslack and 'None'!=stressfreeinitialslack:
        line += ', STRESS FREE INITIAL SLACK=' + stressfreeinitialslack

    if 'none'!=user and 'NONE'!=user and 'None'!=user:
        line += ', USER=' + user
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQfailstrain(filepath,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FAIL STRAIN';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQfailstress(filepath,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FAIL STRESS';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQfailureratios(filepath,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FAILURE RATIOS';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQfastener(filepath,interactionname,property,elset,referencenodeset,adjustorientation,attachmentmethod,coupling,numberoflayers,orientation,radiusofinfluence,searchradius,unsorted,weightingmethod,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FASTENER';

    if 'none'!=interactionname and 'NONE'!=interactionname and 'None'!=interactionname:
        line += ', INTERACTION NAME=' + interactionname

    if 'none'!=property and 'NONE'!=property and 'None'!=property:
        line += ', PROPERTY=' + property

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=referencenodeset and 'NONE'!=referencenodeset and 'None'!=referencenodeset:
        line += ', REFERENCE NODE SET=' + referencenodeset

    if 'none'!=adjustorientation and 'NONE'!=adjustorientation and 'None'!=adjustorientation:
        line += ', ADJUST ORIENTATION=' + adjustorientation

    if 'none'!=attachmentmethod and 'NONE'!=attachmentmethod and 'None'!=attachmentmethod:
        line += ', ATTACHMENT METHOD=' + attachmentmethod

    if 'none'!=coupling and 'NONE'!=coupling and 'None'!=coupling:
        line += ', COUPLING=' + coupling

    if 'none'!=numberoflayers and 'NONE'!=numberoflayers and 'None'!=numberoflayers:
        line += ', NUMBER OF LAYERS=' + numberoflayers

    if 'none'!=orientation and 'NONE'!=orientation and 'None'!=orientation:
        line += ', ORIENTATION=' + orientation

    if 'none'!=radiusofinfluence and 'NONE'!=radiusofinfluence and 'None'!=radiusofinfluence:
        line += ', RADIUS OF INFLUENCE=' + radiusofinfluence

    if 'none'!=searchradius and 'NONE'!=searchradius and 'None'!=searchradius:
        line += ', SEARCH RADIUS=' + searchradius

    if 'none'!=unsorted and 'NONE'!=unsorted and 'None'!=unsorted:
        line += ', UNSORTED=' + unsorted

    if 'none'!=weightingmethod and 'NONE'!=weightingmethod and 'None'!=weightingmethod:
        line += ', WEIGHTING METHOD=' + weightingmethod
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQfastenerproperty(filepath,name,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FASTENER PROPERTY';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQfield(filepath,variable,amplitude,input,op,file,bstep,binc,estep,einc,outputvariable,interpolate,user,number,blocking,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FIELD';

    if 'none'!=variable and 'NONE'!=variable and 'None'!=variable:
        line += ', VARIABLE=' + variable

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=input and 'NONE'!=input and 'None'!=input:
        line += ', INPUT=' + input

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op

    if 'none'!=file and 'NONE'!=file and 'None'!=file:
        line += ', FILE=' + file

    if 'none'!=bstep and 'NONE'!=bstep and 'None'!=bstep:
        line += ', BSTEP=' + bstep

    if 'none'!=binc and 'NONE'!=binc and 'None'!=binc:
        line += ', BINC=' + binc

    if 'none'!=estep and 'NONE'!=estep and 'None'!=estep:
        line += ', ESTEP=' + estep

    if 'none'!=einc and 'NONE'!=einc and 'None'!=einc:
        line += ', EINC=' + einc

    if 'none'!=outputvariable and 'NONE'!=outputvariable and 'None'!=outputvariable:
        line += ', OUTPUT VARIABLE=' + outputvariable

    if 'none'!=interpolate and 'NONE'!=interpolate and 'None'!=interpolate:
        line += ', INTERPOLATE=' + interpolate

    if 'none'!=user and 'NONE'!=user and 'None'!=user:
        line += ', USER=' + user

    if 'none'!=number and 'NONE'!=number and 'None'!=number:
        line += ', NUMBER=' + number

    if 'none'!=blocking and 'NONE'!=blocking and 'None'!=blocking:
        line += ', BLOCKING=' + blocking
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQfileformat(filepath,ascii,zeroincrement,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FILE FORMAT';

    if 'none'!=ascii and 'NONE'!=ascii and 'None'!=ascii:
        line += ', ASCII=' + ascii

    if 'none'!=zeroincrement and 'NONE'!=zeroincrement and 'None'!=zeroincrement:
        line += ', ZERO INCREMENT=' + zeroincrement
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQfileoutput(filepath,numberinterval,timemarks,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FILE OUTPUT';

    if 'none'!=numberinterval and 'NONE'!=numberinterval and 'None'!=numberinterval:
        line += ', NUMBER INTERVAL=' + numberinterval

    if 'none'!=timemarks and 'NONE'!=timemarks and 'None'!=timemarks:
        line += ', TIME MARKS=' + timemarks
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQfilm(filepath,amplitude,filmamplitude,op,regiontype,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FILM';

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=filmamplitude and 'NONE'!=filmamplitude and 'None'!=filmamplitude:
        line += ', FILM AMPLITUDE=' + filmamplitude

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op

    if 'none'!=regiontype and 'NONE'!=regiontype and 'None'!=regiontype:
        line += ', REGION TYPE=' + regiontype
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQfilmproperty(filepath,name,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FILM PROPERTY';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQfilter(filepath,name,halt,invariant,limit,operator,startcondition,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FILTER';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=halt and 'NONE'!=halt and 'None'!=halt:
        line += ', HALT=' + halt

    if 'none'!=invariant and 'NONE'!=invariant and 'None'!=invariant:
        line += ', INVARIANT=' + invariant

    if 'none'!=limit and 'NONE'!=limit and 'None'!=limit:
        line += ', LIMIT=' + limit

    if 'none'!=operator and 'NONE'!=operator and 'None'!=operator:
        line += ', OPERATOR=' + operator

    if 'none'!=startcondition and 'NONE'!=startcondition and 'None'!=startcondition:
        line += ', START CONDITION=' + startcondition

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQfixedmassscaling(filepath,dt,elset,factor,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FIXED MASS SCALING';

    if 'none'!=dt and 'NONE'!=dt and 'None'!=dt:
        line += ', DT=' + dt

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=factor and 'NONE'!=factor and 'None'!=factor:
        line += ', FACTOR=' + factor

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQflexiblebody(filepath,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FLEXIBLE BODY';

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQflow(filepath,amplitude,op,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FLOW';

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQfluidbehavior(filepath,name,user,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FLUID BEHAVIOR';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=user and 'NONE'!=user and 'None'!=user:
        line += ', USER=' + user
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQfluidboundary(filepath,surface,pressureoutlet,symmetric,velocityinlet,wall,op,slip,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FLUID BOUNDARY';

    if 'none'!=surface and 'NONE'!=surface and 'None'!=surface:
        line += ', SURFACE=' + surface

    if 'none'!=pressureoutlet and 'NONE'!=pressureoutlet and 'None'!=pressureoutlet:
        line += ', PRESSURE OUTLET=' + pressureoutlet

    if 'none'!=symmetric and 'NONE'!=symmetric and 'None'!=symmetric:
        line += ', SYMMETRIC=' + symmetric

    if 'none'!=velocityinlet and 'NONE'!=velocityinlet and 'None'!=velocityinlet:
        line += ', VELOCITY INLET=' + velocityinlet

    if 'none'!=wall and 'NONE'!=wall and 'None'!=wall:
        line += ', WALL=' + wall

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op

    if 'none'!=slip and 'NONE'!=slip and 'None'!=slip:
        line += ', SLIP=' + slip
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQfluidbulkmodulus(filepath,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FLUID BULK MODULUS';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQfluidcavity(filepath,name,refnode,behavior,mixture,addedvolume,adiabatic,ambientpressure,ambienttemperature,checknormals,minimumvolume,surface,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FLUID CAVITY';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=refnode and 'NONE'!=refnode and 'None'!=refnode:
        line += ', REF NODE=' + refnode

    if 'none'!=behavior and 'NONE'!=behavior and 'None'!=behavior:
        line += ', BEHAVIOR=' + behavior

    if 'none'!=mixture and 'NONE'!=mixture and 'None'!=mixture:
        line += ', MIXTURE=' + mixture

    if 'none'!=addedvolume and 'NONE'!=addedvolume and 'None'!=addedvolume:
        line += ', ADDED VOLUME=' + addedvolume

    if 'none'!=adiabatic and 'NONE'!=adiabatic and 'None'!=adiabatic:
        line += ', ADIABATIC=' + adiabatic

    if 'none'!=ambientpressure and 'NONE'!=ambientpressure and 'None'!=ambientpressure:
        line += ', AMBIENT PRESSURE=' + ambientpressure

    if 'none'!=ambienttemperature and 'NONE'!=ambienttemperature and 'None'!=ambienttemperature:
        line += ', AMBIENT TEMPERATURE=' + ambienttemperature

    if 'none'!=checknormals and 'NONE'!=checknormals and 'None'!=checknormals:
        line += ', CHECK NORMALS=' + checknormals

    if 'none'!=minimumvolume and 'NONE'!=minimumvolume and 'None'!=minimumvolume:
        line += ', MINIMUM VOLUME=' + minimumvolume

    if 'none'!=surface and 'NONE'!=surface and 'None'!=surface:
        line += ', SURFACE=' + surface
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQfluiddensity(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FLUID DENSITY';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQfluidexchange(filepath,name,property,cavitypressure,constants,effectivearea,surface,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FLUID EXCHANGE';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=property and 'NONE'!=property and 'None'!=property:
        line += ', PROPERTY=' + property

    if 'none'!=cavitypressure and 'NONE'!=cavitypressure and 'None'!=cavitypressure:
        line += ', CAVITY PRESSURE=' + cavitypressure

    if 'none'!=constants and 'NONE'!=constants and 'None'!=constants:
        line += ', CONSTANTS=' + constants

    if 'none'!=effectivearea and 'NONE'!=effectivearea and 'None'!=effectivearea:
        line += ', EFFECTIVE AREA=' + effectivearea

    if 'none'!=surface and 'NONE'!=surface and 'None'!=surface:
        line += ', SURFACE=' + surface
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQfluidexchangeactivation(filepath,amplitude,blockage,deltaleakagearea,op,outflowonly,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FLUID EXCHANGE ACTIVATION';

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=blockage and 'NONE'!=blockage and 'None'!=blockage:
        line += ', BLOCKAGE=' + blockage

    if 'none'!=deltaleakagearea and 'NONE'!=deltaleakagearea and 'None'!=deltaleakagearea:
        line += ', DELTA LEAKAGE AREA=' + deltaleakagearea

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op

    if 'none'!=outflowonly and 'NONE'!=outflowonly and 'None'!=outflowonly:
        line += ', OUTFLOW ONLY=' + outflowonly
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQfluidexchangeproperty(filepath,name,type,constants,dependencies,depvar,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FLUID EXCHANGE PROPERTY';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=constants and 'NONE'!=constants and 'None'!=constants:
        line += ', CONSTANTS=' + constants

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=depvar and 'NONE'!=depvar and 'None'!=depvar:
        line += ', DEPVAR=' + depvar
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQfluidexpansion(filepath,dependencies,zero,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FLUID EXPANSION';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=zero and 'NONE'!=zero and 'None'!=zero:
        line += ', ZERO=' + zero
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQfluidflux(filepath,amplitude,op,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FLUID FLUX';

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQfluidinflator(filepath,name,property,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FLUID INFLATOR';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=property and 'NONE'!=property and 'None'!=property:
        line += ', PROPERTY=' + property
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQfluidinflatoractivation(filepath,inflationtimeamplitude,massflowamplitude,op,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FLUID INFLATOR ACTIVATION';

    if 'none'!=inflationtimeamplitude and 'NONE'!=inflationtimeamplitude and 'None'!=inflationtimeamplitude:
        line += ', INFLATION TIME AMPLITUDE=' + inflationtimeamplitude

    if 'none'!=massflowamplitude and 'NONE'!=massflowamplitude and 'None'!=massflowamplitude:
        line += ', MASS FLOW AMPLITUDE=' + massflowamplitude

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQfluidinflatormixture(filepath,numberspecies,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FLUID INFLATOR MIXTURE';

    if 'none'!=numberspecies and 'NONE'!=numberspecies and 'None'!=numberspecies:
        line += ', NUMBER SPECIES=' + numberspecies

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQfluidinflatorproperty(filepath,effectivearea,name,tankvolume,type,dischargecoefficient,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FLUID INFLATOR PROPERTY';

    if 'none'!=effectivearea and 'NONE'!=effectivearea and 'None'!=effectivearea:
        line += ', EFFECTIVE AREA=' + effectivearea

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=tankvolume and 'NONE'!=tankvolume and 'None'!=tankvolume:
        line += ', TANK VOLUME=' + tankvolume

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=dischargecoefficient and 'NONE'!=dischargecoefficient and 'None'!=dischargecoefficient:
        line += ', DISCHARGE COEFFICIENT=' + dischargecoefficient
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQfluidleakoff(filepath,dependencies,user,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FLUID LEAKOFF';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=user and 'NONE'!=user and 'None'!=user:
        line += ', USER=' + user
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQfluidpipeconnectorloss(filepath,type,laminarflowtransition,valvecontrol,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FLUID PIPE CONNECTOR LOSS';

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=laminarflowtransition and 'NONE'!=laminarflowtransition and 'None'!=laminarflowtransition:
        line += ', LAMINAR FLOW TRANSITION=' + laminarflowtransition

    if 'none'!=valvecontrol and 'NONE'!=valvecontrol and 'None'!=valvecontrol:
        line += ', VALVE CONTROL=' + valvecontrol
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQfluidpipeconnectorsection(filepath,elset,material,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FLUID PIPE CONNECTOR SECTION';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=material and 'NONE'!=material and 'None'!=material:
        line += ', MATERIAL=' + material
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQfluidpipeflowloss(filepath,type,laminarflowtransition,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FLUID PIPE FLOW LOSS';

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=laminarflowtransition and 'NONE'!=laminarflowtransition and 'None'!=laminarflowtransition:
        line += ', LAMINAR FLOW TRANSITION=' + laminarflowtransition
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQfluidpipesection(filepath,elset,material,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FLUID PIPE SECTION';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=material and 'NONE'!=material and 'None'!=material:
        line += ', MATERIAL=' + material
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQfluidsection(filepath,elset,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FLUID SECTION';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQfoundation(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FOUNDATION';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQfracturecriterion(filepath,distance,nset,type,dependencies,mixedmodebehavior,nodalenergyrate,normaldirection,symmetry,unstablegrowthtolerance,tolerance,viscosity,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FRACTURE CRITERION';

    if 'none'!=distance and 'NONE'!=distance and 'None'!=distance:
        line += ', DISTANCE=' + distance

    if 'none'!=nset and 'NONE'!=nset and 'None'!=nset:
        line += ', NSET=' + nset

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=mixedmodebehavior and 'NONE'!=mixedmodebehavior and 'None'!=mixedmodebehavior:
        line += ', MIXED MODE BEHAVIOR=' + mixedmodebehavior

    if 'none'!=nodalenergyrate and 'NONE'!=nodalenergyrate and 'None'!=nodalenergyrate:
        line += ', NODAL ENERGY RATE=' + nodalenergyrate

    if 'none'!=normaldirection and 'NONE'!=normaldirection and 'None'!=normaldirection:
        line += ', NORMAL DIRECTION=' + normaldirection

    if 'none'!=symmetry and 'NONE'!=symmetry and 'None'!=symmetry:
        line += ', SYMMETRY=' + symmetry

    if 'none'!=unstablegrowthtolerance and 'NONE'!=unstablegrowthtolerance and 'None'!=unstablegrowthtolerance:
        line += ', UNSTABLE GROWTH TOLERANCE=' + unstablegrowthtolerance

    if 'none'!=tolerance and 'NONE'!=tolerance and 'None'!=tolerance:
        line += ', TOLERANCE=' + tolerance

    if 'none'!=viscosity and 'NONE'!=viscosity and 'None'!=viscosity:
        line += ', VISCOSITY=' + viscosity
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQframesection(filepath,elset,buckling,density,dependencies,pinned,plasticdefaults,section,yieldstress,zero,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FRAME SECTION';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=buckling and 'NONE'!=buckling and 'None'!=buckling:
        line += ', BUCKLING=' + buckling

    if 'none'!=density and 'NONE'!=density and 'None'!=density:
        line += ', DENSITY=' + density

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=pinned and 'NONE'!=pinned and 'None'!=pinned:
        line += ', PINNED=' + pinned

    if 'none'!=plasticdefaults and 'NONE'!=plasticdefaults and 'None'!=plasticdefaults:
        line += ', PLASTIC DEFAULTS=' + plasticdefaults

    if 'none'!=section and 'NONE'!=section and 'None'!=section:
        line += ', SECTION=' + section

    if 'none'!=yieldstress and 'NONE'!=yieldstress and 'None'!=yieldstress:
        line += ', YIELD STRESS=' + yieldstress

    if 'none'!=zero and 'NONE'!=zero and 'None'!=zero:
        line += ', ZERO=' + zero
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQfrequency(filepath,acousticcoupling,dampingprojection,eigensolver,normalization,propertyevaluation,residualmodes,sim,nset,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FREQUENCY';

    if 'none'!=acousticcoupling and 'NONE'!=acousticcoupling and 'None'!=acousticcoupling:
        line += ', ACOUSTIC COUPLING=' + acousticcoupling

    if 'none'!=dampingprojection and 'NONE'!=dampingprojection and 'None'!=dampingprojection:
        line += ', DAMPING PROJECTION=' + dampingprojection

    if 'none'!=eigensolver and 'NONE'!=eigensolver and 'None'!=eigensolver:
        line += ', EIGENSOLVER=' + eigensolver

    if 'none'!=normalization and 'NONE'!=normalization and 'None'!=normalization:
        line += ', NORMALIZATION=' + normalization

    if 'none'!=propertyevaluation and 'NONE'!=propertyevaluation and 'None'!=propertyevaluation:
        line += ', PROPERTY EVALUATION=' + propertyevaluation

    if 'none'!=residualmodes and 'NONE'!=residualmodes and 'None'!=residualmodes:
        line += ', RESIDUAL MODES=' + residualmodes

    if 'none'!=sim and 'NONE'!=sim and 'None'!=sim:
        line += ', SIM=' + sim

    if 'none'!=nset and 'NONE'!=nset and 'None'!=nset:
        line += ', NSET=' + nset
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQfriction(filepath,elasticslip,lagrange,rough,sliptolerance,user,anisotropic,dependencies,depvar,exponentialdecay,properties,sheartractionslope,taumax,testdata,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*FRICTION';

    if 'none'!=elasticslip and 'NONE'!=elasticslip and 'None'!=elasticslip:
        line += ', ELASTIC SLIP=' + elasticslip

    if 'none'!=lagrange and 'NONE'!=lagrange and 'None'!=lagrange:
        line += ', LAGRANGE=' + lagrange

    if 'none'!=rough and 'NONE'!=rough and 'None'!=rough:
        line += ', ROUGH=' + rough

    if 'none'!=sliptolerance and 'NONE'!=sliptolerance and 'None'!=sliptolerance:
        line += ', SLIP TOLERANCE=' + sliptolerance

    if 'none'!=user and 'NONE'!=user and 'None'!=user:
        line += ', USER=' + user

    if 'none'!=anisotropic and 'NONE'!=anisotropic and 'None'!=anisotropic:
        line += ', ANISOTROPIC=' + anisotropic

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=depvar and 'NONE'!=depvar and 'None'!=depvar:
        line += ', DEPVAR=' + depvar

    if 'none'!=exponentialdecay and 'NONE'!=exponentialdecay and 'None'!=exponentialdecay:
        line += ', EXPONENTIAL DECAY=' + exponentialdecay

    if 'none'!=properties and 'NONE'!=properties and 'None'!=properties:
        line += ', PROPERTIES=' + properties

    if 'none'!=sheartractionslope and 'NONE'!=sheartractionslope and 'None'!=sheartractionslope:
        line += ', SHEAR TRACTION SLOPE=' + sheartractionslope

    if 'none'!=taumax and 'NONE'!=taumax and 'None'!=taumax:
        line += ', TAUMAX=' + taumax

    if 'none'!=testdata and 'NONE'!=testdata and 'None'!=testdata:
        line += ', TEST DATA=' + testdata
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQgap(filepath,elset,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*GAP';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQgapconductance(filepath,dependencies,pressure,user,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*GAP CONDUCTANCE';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=pressure and 'NONE'!=pressure and 'None'!=pressure:
        line += ', PRESSURE=' + pressure

    if 'none'!=user and 'NONE'!=user and 'None'!=user:
        line += ', USER=' + user
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQgapelectricalconductance(filepath,dependencies,pressure,user,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*GAP ELECTRICAL CONDUCTANCE';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=pressure and 'NONE'!=pressure and 'None'!=pressure:
        line += ', PRESSURE=' + pressure

    if 'none'!=user and 'NONE'!=user and 'None'!=user:
        line += ', USER=' + user
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQgapflow(filepath,dependencies,type,kmax,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*GAP FLOW';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=kmax and 'NONE'!=kmax and 'None'!=kmax:
        line += ', KMAX=' + kmax
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQgapheatgeneration(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*GAP HEAT GENERATION';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQgapradiation(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*GAP RADIATION';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQgasspecificheat(filepath,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*GAS SPECIFIC HEAT';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQgasketbehavior(filepath,name,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*GASKET BEHAVIOR';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQgasketcontactarea(filepath,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*GASKET CONTACT AREA';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQgasketelasticity(filepath,component,dependencies,variable,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*GASKET ELASTICITY';

    if 'none'!=component and 'NONE'!=component and 'None'!=component:
        line += ', COMPONENT=' + component

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=variable and 'NONE'!=variable and 'None'!=variable:
        line += ', VARIABLE=' + variable
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQgasketsection(filepath,elset,behavior,material,orientation,stabilizationstiffness,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*GASKET SECTION';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=behavior and 'NONE'!=behavior and 'None'!=behavior:
        line += ', BEHAVIOR=' + behavior

    if 'none'!=material and 'NONE'!=material and 'None'!=material:
        line += ', MATERIAL=' + material

    if 'none'!=orientation and 'NONE'!=orientation and 'None'!=orientation:
        line += ', ORIENTATION=' + orientation

    if 'none'!=stabilizationstiffness and 'NONE'!=stabilizationstiffness and 'None'!=stabilizationstiffness:
        line += ', STABILIZATION STIFFNESS=' + stabilizationstiffness
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQgasketthicknessbehavior(filepath,dependencies,direction,tensilestiffnessfactor,type,variable,slopedrop,yieldonset,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*GASKET THICKNESS BEHAVIOR';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=direction and 'NONE'!=direction and 'None'!=direction:
        line += ', DIRECTION=' + direction

    if 'none'!=tensilestiffnessfactor and 'NONE'!=tensilestiffnessfactor and 'None'!=tensilestiffnessfactor:
        line += ', TENSILE STIFFNESS FACTOR=' + tensilestiffnessfactor

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=variable and 'NONE'!=variable and 'None'!=variable:
        line += ', VARIABLE=' + variable

    if 'none'!=slopedrop and 'NONE'!=slopedrop and 'None'!=slopedrop:
        line += ', SLOPE DROP=' + slopedrop

    if 'none'!=yieldonset and 'NONE'!=yieldonset and 'None'!=yieldonset:
        line += ', YIELD ONSET=' + yieldonset
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQgel(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*GEL';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQgeostatic(filepath,heat,utol,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*GEOSTATIC';

    if 'none'!=heat and 'NONE'!=heat and 'None'!=heat:
        line += ', HEAT=' + heat

    if 'none'!=utol and 'NONE'!=utol and 'None'!=utol:
        line += ', UTOL=' + utol
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQglobaldamping(filepath,alpha,beta,field,structural,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*GLOBAL DAMPING';

    if 'none'!=alpha and 'NONE'!=alpha and 'None'!=alpha:
        line += ', ALPHA=' + alpha

    if 'none'!=beta and 'NONE'!=beta and 'None'!=beta:
        line += ', BETA=' + beta

    if 'none'!=field and 'NONE'!=field and 'None'!=field:
        line += ', FIELD=' + field

    if 'none'!=structural and 'NONE'!=structural and 'None'!=structural:
        line += ', STRUCTURAL=' + structural
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQheading(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*HEADING';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQheatgeneration(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*HEAT GENERATION';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQheattransfer(filepath,centering,type,deltmx,end,steadystate,mxdem,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*HEAT TRANSFER';

    if 'none'!=centering and 'NONE'!=centering and 'None'!=centering:
        line += ', CENTERING=' + centering

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=deltmx and 'NONE'!=deltmx and 'None'!=deltmx:
        line += ', DELTMX=' + deltmx

    if 'none'!=end and 'NONE'!=end and 'None'!=end:
        line += ', END=' + end

    if 'none'!=steadystate and 'NONE'!=steadystate and 'None'!=steadystate:
        line += ', STEADY STATE=' + steadystate

    if 'none'!=mxdem and 'NONE'!=mxdem and 'None'!=mxdem:
        line += ', MXDEM=' + mxdem
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQheatcap(filepath,dependencies,elset,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*HEATCAP';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQhourglassstiffness(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*HOURGLASS STIFFNESS';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQhyperelastic(filepath,arruda-boyce,marlow,mooney-rivlin,neohooke,ogden,polynomial,reducedpolynomial,user,vanderwaals,yeoh,type,beta,moduli,n,poisson,properties,testdatainput,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*HYPERELASTIC';

    if 'none'!=arruda-boyce and 'NONE'!=arruda-boyce and 'None'!=arruda-boyce:
        line += ', ARRUDA-BOYCE=' + arruda-boyce

    if 'none'!=marlow and 'NONE'!=marlow and 'None'!=marlow:
        line += ', MARLOW=' + marlow

    if 'none'!=mooney-rivlin and 'NONE'!=mooney-rivlin and 'None'!=mooney-rivlin:
        line += ', MOONEY-RIVLIN=' + mooney-rivlin

    if 'none'!=neohooke and 'NONE'!=neohooke and 'None'!=neohooke:
        line += ', NEO HOOKE=' + neohooke

    if 'none'!=ogden and 'NONE'!=ogden and 'None'!=ogden:
        line += ', OGDEN=' + ogden

    if 'none'!=polynomial and 'NONE'!=polynomial and 'None'!=polynomial:
        line += ', POLYNOMIAL=' + polynomial

    if 'none'!=reducedpolynomial and 'NONE'!=reducedpolynomial and 'None'!=reducedpolynomial:
        line += ', REDUCED POLYNOMIAL=' + reducedpolynomial

    if 'none'!=user and 'NONE'!=user and 'None'!=user:
        line += ', USER=' + user

    if 'none'!=vanderwaals and 'NONE'!=vanderwaals and 'None'!=vanderwaals:
        line += ', VAN DER WAALS=' + vanderwaals

    if 'none'!=yeoh and 'NONE'!=yeoh and 'None'!=yeoh:
        line += ', YEOH=' + yeoh

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=beta and 'NONE'!=beta and 'None'!=beta:
        line += ', BETA=' + beta

    if 'none'!=moduli and 'NONE'!=moduli and 'None'!=moduli:
        line += ', MODULI=' + moduli

    if 'none'!=n and 'NONE'!=n and 'None'!=n:
        line += ', N=' + n

    if 'none'!=poisson and 'NONE'!=poisson and 'None'!=poisson:
        line += ', POISSON=' + poisson

    if 'none'!=properties and 'NONE'!=properties and 'None'!=properties:
        line += ', PROPERTIES=' + properties

    if 'none'!=testdatainput and 'NONE'!=testdatainput and 'None'!=testdatainput:
        line += ', TEST DATA INPUT=' + testdatainput
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQhyperfoam(filepath,moduli,n,poisson,testdatainput,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*HYPERFOAM';

    if 'none'!=moduli and 'NONE'!=moduli and 'None'!=moduli:
        line += ', MODULI=' + moduli

    if 'none'!=n and 'NONE'!=n and 'None'!=n:
        line += ', N=' + n

    if 'none'!=poisson and 'NONE'!=poisson and 'None'!=poisson:
        line += ', POISSON=' + poisson

    if 'none'!=testdatainput and 'NONE'!=testdatainput and 'None'!=testdatainput:
        line += ', TEST DATA INPUT=' + testdatainput
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQhypoelastic(filepath,user,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*HYPOELASTIC';

    if 'none'!=user and 'NONE'!=user and 'None'!=user:
        line += ', USER=' + user
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQhysteresis(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*HYSTERESIS';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQimpedance(filepath,property,nonreflecting,op,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*IMPEDANCE';

    if 'none'!=property and 'NONE'!=property and 'None'!=property:
        line += ', PROPERTY=' + property

    if 'none'!=nonreflecting and 'NONE'!=nonreflecting and 'None'!=nonreflecting:
        line += ', NONREFLECTING=' + nonreflecting

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQimpedanceproperty(filepath,name,data,input,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*IMPEDANCE PROPERTY';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=data and 'NONE'!=data and 'None'!=data:
        line += ', DATA=' + data

    if 'none'!=input and 'NONE'!=input and 'None'!=input:
        line += ', INPUT=' + input
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQimperfection(filepath,file,input,step,inc,nset,system,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*IMPERFECTION';

    if 'none'!=file and 'NONE'!=file and 'None'!=file:
        line += ', FILE=' + file

    if 'none'!=input and 'NONE'!=input and 'None'!=input:
        line += ', INPUT=' + input

    if 'none'!=step and 'NONE'!=step and 'None'!=step:
        line += ', STEP=' + step

    if 'none'!=inc and 'NONE'!=inc and 'None'!=inc:
        line += ', INC=' + inc

    if 'none'!=nset and 'NONE'!=nset and 'None'!=nset:
        line += ', NSET=' + nset

    if 'none'!=system and 'NONE'!=system and 'None'!=system:
        line += ', SYSTEM=' + system
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQimport(filepath,update,eoffset,noffset,rename,increment,interval,iteration,state,step,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*IMPORT';

    if 'none'!=update and 'NONE'!=update and 'None'!=update:
        line += ', UPDATE=' + update

    if 'none'!=eoffset and 'NONE'!=eoffset and 'None'!=eoffset:
        line += ', EOFFSET=' + eoffset

    if 'none'!=noffset and 'NONE'!=noffset and 'None'!=noffset:
        line += ', NOFFSET=' + noffset

    if 'none'!=rename and 'NONE'!=rename and 'None'!=rename:
        line += ', RENAME=' + rename

    if 'none'!=increment and 'NONE'!=increment and 'None'!=increment:
        line += ', INCREMENT=' + increment

    if 'none'!=interval and 'NONE'!=interval and 'None'!=interval:
        line += ', INTERVAL=' + interval

    if 'none'!=iteration and 'NONE'!=iteration and 'None'!=iteration:
        line += ', ITERATION=' + iteration

    if 'none'!=state and 'NONE'!=state and 'None'!=state:
        line += ', STATE=' + state

    if 'none'!=step and 'NONE'!=step and 'None'!=step:
        line += ', STEP=' + step
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQimportcontrols(filepath,normaltol,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*IMPORT CONTROLS';

    if 'none'!=normaltol and 'NONE'!=normaltol and 'None'!=normaltol:
        line += ', NORMAL TOL=' + normaltol
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQimportelset(filepath,rename,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*IMPORT ELSET';

    if 'none'!=rename and 'NONE'!=rename and 'None'!=rename:
        line += ', RENAME=' + rename
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQimportnset(filepath,rename,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*IMPORT NSET';

    if 'none'!=rename and 'NONE'!=rename and 'None'!=rename:
        line += ', RENAME=' + rename
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQincidentwave(filepath,property,accelerationamplitude,pressureamplitude,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*INCIDENT WAVE';

    if 'none'!=property and 'NONE'!=property and 'None'!=property:
        line += ', PROPERTY=' + property

    if 'none'!=accelerationamplitude and 'NONE'!=accelerationamplitude and 'None'!=accelerationamplitude:
        line += ', ACCELERATION AMPLITUDE=' + accelerationamplitude

    if 'none'!=pressureamplitude and 'NONE'!=pressureamplitude and 'None'!=pressureamplitude:
        line += ', PRESSURE AMPLITUDE=' + pressureamplitude
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQincidentwavefluidproperty(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*INCIDENT WAVE FLUID PROPERTY';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQincidentwaveinteraction(filepath,property,accelerationamplitude,conwep,pressureamplitude,undex,imaginary,real,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*INCIDENT WAVE INTERACTION';

    if 'none'!=property and 'NONE'!=property and 'None'!=property:
        line += ', PROPERTY=' + property

    if 'none'!=accelerationamplitude and 'NONE'!=accelerationamplitude and 'None'!=accelerationamplitude:
        line += ', ACCELERATION AMPLITUDE=' + accelerationamplitude

    if 'none'!=conwep and 'NONE'!=conwep and 'None'!=conwep:
        line += ', CONWEP=' + conwep

    if 'none'!=pressureamplitude and 'NONE'!=pressureamplitude and 'None'!=pressureamplitude:
        line += ', PRESSURE AMPLITUDE=' + pressureamplitude

    if 'none'!=undex and 'NONE'!=undex and 'None'!=undex:
        line += ', UNDEX=' + undex

    if 'none'!=imaginary and 'NONE'!=imaginary and 'None'!=imaginary:
        line += ', IMAGINARY=' + imaginary

    if 'none'!=real and 'NONE'!=real and 'None'!=real:
        line += ', REAL=' + real
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQincidentwaveinteractionproperty(filepath,name,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*INCIDENT WAVE INTERACTION PROPERTY';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQincidentwaveproperty(filepath,name,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*INCIDENT WAVE PROPERTY';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQincidentwavereflection(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*INCIDENT WAVE REFLECTION';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQinclude(filepath,input,password,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*INCLUDE';

    if 'none'!=input and 'NONE'!=input and 'None'!=input:
        line += ', INPUT=' + input

    if 'none'!=password and 'NONE'!=password and 'None'!=password:
        line += ', PASSWORD=' + password
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQincrementationoutput(filepath,variable,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*INCREMENTATION OUTPUT';

    if 'none'!=variable and 'NONE'!=variable and 'None'!=variable:
        line += ', VARIABLE=' + variable
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQinelasticheatfraction(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*INELASTIC HEAT FRACTION';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQinertiarelief(filepath,orientation,fixed,remove,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*INERTIA RELIEF';

    if 'none'!=orientation and 'NONE'!=orientation and 'None'!=orientation:
        line += ', ORIENTATION=' + orientation

    if 'none'!=fixed and 'NONE'!=fixed and 'None'!=fixed:
        line += ', FIXED=' + fixed

    if 'none'!=remove and 'NONE'!=remove and 'None'!=remove:
        line += ', REMOVE=' + remove
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQinitialconditions(filepath,type,absoluteexteriortolerance,criterion,definition,drivingelsets,exteriortolerance,file,fulltensor,geostatic,inc,input,interpolate,midside,normal,numberbackstresses,outputvariable,rebar,sectionpoints,step,unbalancedstress,user,variable,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*INITIAL CONDITIONS';

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=absoluteexteriortolerance and 'NONE'!=absoluteexteriortolerance and 'None'!=absoluteexteriortolerance:
        line += ', ABSOLUTE EXTERIOR TOLERANCE=' + absoluteexteriortolerance

    if 'none'!=criterion and 'NONE'!=criterion and 'None'!=criterion:
        line += ', CRITERION=' + criterion

    if 'none'!=definition and 'NONE'!=definition and 'None'!=definition:
        line += ', DEFINITION=' + definition

    if 'none'!=drivingelsets and 'NONE'!=drivingelsets and 'None'!=drivingelsets:
        line += ', DRIVING ELSETS=' + drivingelsets

    if 'none'!=exteriortolerance and 'NONE'!=exteriortolerance and 'None'!=exteriortolerance:
        line += ', EXTERIOR TOLERANCE=' + exteriortolerance

    if 'none'!=file and 'NONE'!=file and 'None'!=file:
        line += ', FILE=' + file

    if 'none'!=fulltensor and 'NONE'!=fulltensor and 'None'!=fulltensor:
        line += ', FULL TENSOR=' + fulltensor

    if 'none'!=geostatic and 'NONE'!=geostatic and 'None'!=geostatic:
        line += ', GEOSTATIC=' + geostatic

    if 'none'!=inc and 'NONE'!=inc and 'None'!=inc:
        line += ', INC=' + inc

    if 'none'!=input and 'NONE'!=input and 'None'!=input:
        line += ', INPUT=' + input

    if 'none'!=interpolate and 'NONE'!=interpolate and 'None'!=interpolate:
        line += ', INTERPOLATE=' + interpolate

    if 'none'!=midside and 'NONE'!=midside and 'None'!=midside:
        line += ', MIDSIDE=' + midside

    if 'none'!=normal and 'NONE'!=normal and 'None'!=normal:
        line += ', NORMAL=' + normal

    if 'none'!=numberbackstresses and 'NONE'!=numberbackstresses and 'None'!=numberbackstresses:
        line += ', NUMBER BACKSTRESSES=' + numberbackstresses

    if 'none'!=outputvariable and 'NONE'!=outputvariable and 'None'!=outputvariable:
        line += ', OUTPUT VARIABLE=' + outputvariable

    if 'none'!=rebar and 'NONE'!=rebar and 'None'!=rebar:
        line += ', REBAR=' + rebar

    if 'none'!=sectionpoints and 'NONE'!=sectionpoints and 'None'!=sectionpoints:
        line += ', SECTION POINTS=' + sectionpoints

    if 'none'!=step and 'NONE'!=step and 'None'!=step:
        line += ', STEP=' + step

    if 'none'!=unbalancedstress and 'NONE'!=unbalancedstress and 'None'!=unbalancedstress:
        line += ', UNBALANCED STRESS=' + unbalancedstress

    if 'none'!=user and 'NONE'!=user and 'None'!=user:
        line += ', USER=' + user

    if 'none'!=variable and 'NONE'!=variable and 'None'!=variable:
        line += ', VARIABLE=' + variable
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQinstance(filepath,name,part,instance,name,instance,library,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*INSTANCE';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=part and 'NONE'!=part and 'None'!=part:
        line += ', PART=' + part

    if 'none'!=instance and 'NONE'!=instance and 'None'!=instance:
        line += ', INSTANCE=' + instance

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=instance and 'NONE'!=instance and 'None'!=instance:
        line += ', INSTANCE=' + instance

    if 'none'!=library and 'NONE'!=library and 'None'!=library:
        line += ', LIBRARY=' + library
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQintegratedoutput(filepath,section,surface,elset,section,surface,variable,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*INTEGRATED OUTPUT';

    if 'none'!=section and 'NONE'!=section and 'None'!=section:
        line += ', SECTION=' + section

    if 'none'!=surface and 'NONE'!=surface and 'None'!=surface:
        line += ', SURFACE=' + surface

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=section and 'NONE'!=section and 'None'!=section:
        line += ', SECTION=' + section

    if 'none'!=surface and 'NONE'!=surface and 'None'!=surface:
        line += ', SURFACE=' + surface

    if 'none'!=variable and 'NONE'!=variable and 'None'!=variable:
        line += ', VARIABLE=' + variable
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQintegratedoutputsection(filepath,name,surface,orientation,position,projectorientation,refnode,refnodemotion,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*INTEGRATED OUTPUT SECTION';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=surface and 'NONE'!=surface and 'None'!=surface:
        line += ', SURFACE=' + surface

    if 'none'!=orientation and 'NONE'!=orientation and 'None'!=orientation:
        line += ', ORIENTATION=' + orientation

    if 'none'!=position and 'NONE'!=position and 'None'!=position:
        line += ', POSITION=' + position

    if 'none'!=projectorientation and 'NONE'!=projectorientation and 'None'!=projectorientation:
        line += ', PROJECT ORIENTATION=' + projectorientation

    if 'none'!=refnode and 'NONE'!=refnode and 'None'!=refnode:
        line += ', REF NODE=' + refnode

    if 'none'!=refnodemotion and 'NONE'!=refnodemotion and 'None'!=refnodemotion:
        line += ', REF NODE MOTION=' + refnodemotion
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQinterface(filepath,elset,name,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*INTERFACE';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQits(filepath,elset,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*ITS';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQjoint(filepath,elset,orientation,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*JOINT';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=orientation and 'NONE'!=orientation and 'None'!=orientation:
        line += ', ORIENTATION=' + orientation
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQjointelasticity(filepath,moduli,ndim,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*JOINT ELASTICITY';

    if 'none'!=moduli and 'NONE'!=moduli and 'None'!=moduli:
        line += ', MODULI=' + moduli

    if 'none'!=ndim and 'NONE'!=ndim and 'None'!=ndim:
        line += ', NDIM=' + ndim

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQjointplasticity(filepath,type,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*JOINT PLASTICITY';

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQjointedmaterial(filepath,dependencies,jointdirection,noseparation,shearretention,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*JOINTED MATERIAL';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=jointdirection and 'NONE'!=jointdirection and 'None'!=jointdirection:
        line += ', JOINT DIRECTION=' + jointdirection

    if 'none'!=noseparation and 'NONE'!=noseparation and 'None'!=noseparation:
        line += ', NO SEPARATION=' + noseparation

    if 'none'!=shearretention and 'NONE'!=shearretention and 'None'!=shearretention:
        line += ', SHEAR RETENTION=' + shearretention
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQjouleheatfraction(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*JOULE HEAT FRACTION';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQkappa(filepath,dependencies,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*KAPPA';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQkinematic(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*KINEMATIC';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQkinematiccoupling(filepath,refnode,orientation,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*KINEMATIC COUPLING';

    if 'none'!=refnode and 'NONE'!=refnode and 'None'!=refnode:
        line += ', REF NODE=' + refnode

    if 'none'!=orientation and 'NONE'!=orientation and 'None'!=orientation:
        line += ', ORIENTATION=' + orientation
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQlatentheat(filepath,porefluid,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*LATENT HEAT';

    if 'none'!=porefluid and 'NONE'!=porefluid and 'None'!=porefluid:
        line += ', PORE FLUID=' + porefluid
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQloadcase(filepath,name,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*LOAD CASE';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQloadingdata(filepath,dependencies,direction,extrapolation,independentcomponents,regularize,rtol,type,ratedependent,rateinterpolation,damageonset,slopedrop,yieldonset,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*LOADING DATA';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=direction and 'NONE'!=direction and 'None'!=direction:
        line += ', DIRECTION=' + direction

    if 'none'!=extrapolation and 'NONE'!=extrapolation and 'None'!=extrapolation:
        line += ', EXTRAPOLATION=' + extrapolation

    if 'none'!=independentcomponents and 'NONE'!=independentcomponents and 'None'!=independentcomponents:
        line += ', INDEPENDENT COMPONENTS=' + independentcomponents

    if 'none'!=regularize and 'NONE'!=regularize and 'None'!=regularize:
        line += ', REGULARIZE=' + regularize

    if 'none'!=rtol and 'NONE'!=rtol and 'None'!=rtol:
        line += ', RTOL=' + rtol

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=ratedependent and 'NONE'!=ratedependent and 'None'!=ratedependent:
        line += ', RATE DEPENDENT=' + ratedependent

    if 'none'!=rateinterpolation and 'NONE'!=rateinterpolation and 'None'!=rateinterpolation:
        line += ', RATE INTERPOLATION=' + rateinterpolation

    if 'none'!=damageonset and 'NONE'!=damageonset and 'None'!=damageonset:
        line += ', DAMAGE ONSET=' + damageonset

    if 'none'!=slopedrop and 'NONE'!=slopedrop and 'None'!=slopedrop:
        line += ', SLOPE DROP=' + slopedrop

    if 'none'!=yieldonset and 'NONE'!=yieldonset and 'None'!=yieldonset:
        line += ', YIELD ONSET=' + yieldonset
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQlowdensityfoam(filepath,lateralstraindata,strainrate,rateextrapolation,tensioncutoff,fail,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*LOW DENSITY FOAM';

    if 'none'!=lateralstraindata and 'NONE'!=lateralstraindata and 'None'!=lateralstraindata:
        line += ', LATERAL STRAIN DATA=' + lateralstraindata

    if 'none'!=strainrate and 'NONE'!=strainrate and 'None'!=strainrate:
        line += ', STRAIN RATE=' + strainrate

    if 'none'!=rateextrapolation and 'NONE'!=rateextrapolation and 'None'!=rateextrapolation:
        line += ', RATE EXTRAPOLATION=' + rateextrapolation

    if 'none'!=tensioncutoff and 'NONE'!=tensioncutoff and 'None'!=tensioncutoff:
        line += ', TENSION CUTOFF=' + tensioncutoff

    if 'none'!=fail and 'NONE'!=fail and 'None'!=fail:
        line += ', FAIL=' + fail
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQmagneticpermeability(filepath,dependencies,frequency,nonlinear,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*MAGNETIC PERMEABILITY';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=frequency and 'NONE'!=frequency and 'None'!=frequency:
        line += ', FREQUENCY=' + frequency

    if 'none'!=nonlinear and 'NONE'!=nonlinear and 'None'!=nonlinear:
        line += ', NONLINEAR=' + nonlinear

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQmagnetostatic(filepath,direct,stabilization,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*MAGNETOSTATIC';

    if 'none'!=direct and 'NONE'!=direct and 'None'!=direct:
        line += ', DIRECT=' + direct

    if 'none'!=stabilization and 'NONE'!=stabilization and 'None'!=stabilization:
        line += ', STABILIZATION=' + stabilization
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQmapsolution(filepath,inc,step,unbalancedstress,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*MAP SOLUTION';

    if 'none'!=inc and 'NONE'!=inc and 'None'!=inc:
        line += ', INC=' + inc

    if 'none'!=step and 'NONE'!=step and 'None'!=step:
        line += ', STEP=' + step

    if 'none'!=unbalancedstress and 'NONE'!=unbalancedstress and 'None'!=unbalancedstress:
        line += ', UNBALANCED STRESS=' + unbalancedstress
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQmass(filepath,elset,alpha,composite,orientation,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*MASS';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=alpha and 'NONE'!=alpha and 'None'!=alpha:
        line += ', ALPHA=' + alpha

    if 'none'!=composite and 'NONE'!=composite and 'None'!=composite:
        line += ', COMPOSITE=' + composite

    if 'none'!=orientation and 'NONE'!=orientation and 'None'!=orientation:
        line += ', ORIENTATION=' + orientation

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQmassadjust(filepath,targetdt,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*MASS ADJUST';

    if 'none'!=targetdt and 'NONE'!=targetdt and 'None'!=targetdt:
        line += ', TARGET DT=' + targetdt
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQmassdiffusion(filepath,dcmax,end,steadystate,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*MASS DIFFUSION';

    if 'none'!=dcmax and 'NONE'!=dcmax and 'None'!=dcmax:
        line += ', DCMAX=' + dcmax

    if 'none'!=end and 'NONE'!=end and 'None'!=end:
        line += ', END=' + end

    if 'none'!=steadystate and 'NONE'!=steadystate and 'None'!=steadystate:
        line += ', STEADY STATE=' + steadystate
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQmassflowrate(filepath,amplitude,input,op,user,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*MASS FLOW RATE';

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=input and 'NONE'!=input and 'None'!=input:
        line += ', INPUT=' + input

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op

    if 'none'!=user and 'NONE'!=user and 'None'!=user:
        line += ', USER=' + user
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQmaterial(filepath,name,rtol,sratefactor,strainrateregularization,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*MATERIAL';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=rtol and 'NONE'!=rtol and 'None'!=rtol:
        line += ', RTOL=' + rtol

    if 'none'!=sratefactor and 'NONE'!=sratefactor and 'None'!=sratefactor:
        line += ', SRATE FACTOR=' + sratefactor

    if 'none'!=strainrateregularization and 'NONE'!=strainrateregularization and 'None'!=strainrateregularization:
        line += ', STRAIN RATE REGULARIZATION=' + strainrateregularization
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQmatrix(filepath,type,input,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*MATRIX';

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=input and 'NONE'!=input and 'None'!=input:
        line += ', INPUT=' + input
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQmatrixassemble(filepath,mass,stiffness,structuraldamping,viscousdamping,nset,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*MATRIX ASSEMBLE';

    if 'none'!=mass and 'NONE'!=mass and 'None'!=mass:
        line += ', MASS=' + mass

    if 'none'!=stiffness and 'NONE'!=stiffness and 'None'!=stiffness:
        line += ', STIFFNESS=' + stiffness

    if 'none'!=structuraldamping and 'NONE'!=structuraldamping and 'None'!=structuraldamping:
        line += ', STRUCTURAL DAMPING=' + structuraldamping

    if 'none'!=viscousdamping and 'NONE'!=viscousdamping and 'None'!=viscousdamping:
        line += ', VISCOUS DAMPING=' + viscousdamping

    if 'none'!=nset and 'NONE'!=nset and 'None'!=nset:
        line += ', NSET=' + nset
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQmatrixcheck(filepath,referencenode,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*MATRIX CHECK';

    if 'none'!=referencenode and 'NONE'!=referencenode and 'None'!=referencenode:
        line += ', REFERENCE NODE=' + referencenode
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQmatrixgenerate(filepath,stiffness,mass,viscousdamping,structuraldamping,load,solidinfiniteformulation,elementbyelement,elset,field,mpc,propertyevaluation,publicnodes,source,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*MATRIX GENERATE';

    if 'none'!=stiffness and 'NONE'!=stiffness and 'None'!=stiffness:
        line += ', STIFFNESS=' + stiffness

    if 'none'!=mass and 'NONE'!=mass and 'None'!=mass:
        line += ', MASS=' + mass

    if 'none'!=viscousdamping and 'NONE'!=viscousdamping and 'None'!=viscousdamping:
        line += ', VISCOUS DAMPING=' + viscousdamping

    if 'none'!=structuraldamping and 'NONE'!=structuraldamping and 'None'!=structuraldamping:
        line += ', STRUCTURAL DAMPING=' + structuraldamping

    if 'none'!=load and 'NONE'!=load and 'None'!=load:
        line += ', LOAD=' + load

    if 'none'!=solidinfiniteformulation and 'NONE'!=solidinfiniteformulation and 'None'!=solidinfiniteformulation:
        line += ', SOLID INFINITE FORMULATION=' + solidinfiniteformulation

    if 'none'!=elementbyelement and 'NONE'!=elementbyelement and 'None'!=elementbyelement:
        line += ', ELEMENT BY ELEMENT=' + elementbyelement

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=field and 'NONE'!=field and 'None'!=field:
        line += ', FIELD=' + field

    if 'none'!=mpc and 'NONE'!=mpc and 'None'!=mpc:
        line += ', MPC=' + mpc

    if 'none'!=propertyevaluation and 'NONE'!=propertyevaluation and 'None'!=propertyevaluation:
        line += ', PROPERTY EVALUATION=' + propertyevaluation

    if 'none'!=publicnodes and 'NONE'!=publicnodes and 'None'!=publicnodes:
        line += ', PUBLIC NODES=' + publicnodes

    if 'none'!=source and 'NONE'!=source and 'None'!=source:
        line += ', SOURCE=' + source
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQmatrixinput(filepath,name,input,matrix,scalefactor,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*MATRIX INPUT';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=input and 'NONE'!=input and 'None'!=input:
        line += ', INPUT=' + input

    if 'none'!=matrix and 'NONE'!=matrix and 'None'!=matrix:
        line += ', MATRIX=' + matrix

    if 'none'!=scalefactor and 'NONE'!=scalefactor and 'None'!=scalefactor:
        line += ', SCALE FACTOR=' + scalefactor

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQmatrixoutput(filepath,stiffness,mass,viscousdamping,structuraldamping,load,format,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*MATRIX OUTPUT';

    if 'none'!=stiffness and 'NONE'!=stiffness and 'None'!=stiffness:
        line += ', STIFFNESS=' + stiffness

    if 'none'!=mass and 'NONE'!=mass and 'None'!=mass:
        line += ', MASS=' + mass

    if 'none'!=viscousdamping and 'NONE'!=viscousdamping and 'None'!=viscousdamping:
        line += ', VISCOUS DAMPING=' + viscousdamping

    if 'none'!=structuraldamping and 'NONE'!=structuraldamping and 'None'!=structuraldamping:
        line += ', STRUCTURAL DAMPING=' + structuraldamping

    if 'none'!=load and 'NONE'!=load and 'None'!=load:
        line += ', LOAD=' + load

    if 'none'!=format and 'NONE'!=format and 'None'!=format:
        line += ', FORMAT=' + format
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQmediatransport(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*MEDIA TRANSPORT';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQmembranesection(filepath,elset,material,controls,density,membranethickness,nodalthickness,orientation,poisson,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*MEMBRANE SECTION';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=material and 'NONE'!=material and 'None'!=material:
        line += ', MATERIAL=' + material

    if 'none'!=controls and 'NONE'!=controls and 'None'!=controls:
        line += ', CONTROLS=' + controls

    if 'none'!=density and 'NONE'!=density and 'None'!=density:
        line += ', DENSITY=' + density

    if 'none'!=membranethickness and 'NONE'!=membranethickness and 'None'!=membranethickness:
        line += ', MEMBRANE THICKNESS=' + membranethickness

    if 'none'!=nodalthickness and 'NONE'!=nodalthickness and 'None'!=nodalthickness:
        line += ', NODAL THICKNESS=' + nodalthickness

    if 'none'!=orientation and 'NONE'!=orientation and 'None'!=orientation:
        line += ', ORIENTATION=' + orientation

    if 'none'!=poisson and 'NONE'!=poisson and 'None'!=poisson:
        line += ', POISSON=' + poisson
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQmodaldamping(filepath,structural,viscous,definition,field,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*MODAL DAMPING';

    if 'none'!=structural and 'NONE'!=structural and 'None'!=structural:
        line += ', STRUCTURAL=' + structural

    if 'none'!=viscous and 'NONE'!=viscous and 'None'!=viscous:
        line += ', VISCOUS=' + viscous

    if 'none'!=definition and 'NONE'!=definition and 'None'!=definition:
        line += ', DEFINITION=' + definition

    if 'none'!=field and 'NONE'!=field and 'None'!=field:
        line += ', FIELD=' + field
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQmodaldynamic(filepath,continue,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*MODAL DYNAMIC';

    if 'none'!=continue and 'NONE'!=continue and 'None'!=continue:
        line += ', CONTINUE=' + continue
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQmodalfile(filepath,frequency,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*MODAL FILE';

    if 'none'!=frequency and 'NONE'!=frequency and 'None'!=frequency:
        line += ', FREQUENCY=' + frequency
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQmodaloutput(filepath,variable,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*MODAL OUTPUT';

    if 'none'!=variable and 'NONE'!=variable and 'None'!=variable:
        line += ', VARIABLE=' + variable
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQmodalprint(filepath,frequency,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*MODAL PRINT';

    if 'none'!=frequency and 'NONE'!=frequency and 'None'!=frequency:
        line += ', FREQUENCY=' + frequency
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQmodelchange(filepath,activate,add,remove,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*MODEL CHANGE';

    if 'none'!=activate and 'NONE'!=activate and 'None'!=activate:
        line += ', ACTIVATE=' + activate

    if 'none'!=add and 'NONE'!=add and 'None'!=add:
        line += ', ADD=' + add

    if 'none'!=remove and 'NONE'!=remove and 'None'!=remove:
        line += ', REMOVE=' + remove

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQmohrcoulomb(filepath,dependencies,deviatoriceccentricity,eccentricity,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*MOHR COULOMB';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=deviatoriceccentricity and 'NONE'!=deviatoriceccentricity and 'None'!=deviatoriceccentricity:
        line += ', DEVIATORIC ECCENTRICITY=' + deviatoriceccentricity

    if 'none'!=eccentricity and 'NONE'!=eccentricity and 'None'!=eccentricity:
        line += ', ECCENTRICITY=' + eccentricity
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQmohrcoulombhardening(filepath,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*MOHR COULOMB HARDENING';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQmoistureswelling(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*MOISTURE SWELLING';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQmolecularweight(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*MOLECULAR WEIGHT';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQmomentumequationsolver(filepath,convergence,diagnostics,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*MOMENTUM EQUATION SOLVER';

    if 'none'!=convergence and 'NONE'!=convergence and 'None'!=convergence:
        line += ', CONVERGENCE=' + convergence

    if 'none'!=diagnostics and 'NONE'!=diagnostics and 'None'!=diagnostics:
        line += ', DIAGNOSTICS=' + diagnostics

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQmonitor(filepath,dof,node,frequency,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*MONITOR';

    if 'none'!=dof and 'NONE'!=dof and 'None'!=dof:
        line += ', DOF=' + dof

    if 'none'!=node and 'NONE'!=node and 'None'!=node:
        line += ', NODE=' + node

    if 'none'!=frequency and 'NONE'!=frequency and 'None'!=frequency:
        line += ', FREQUENCY=' + frequency
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQmotion(filepath,rotation,translation,user,amplitude,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*MOTION';

    if 'none'!=rotation and 'NONE'!=rotation and 'None'!=rotation:
        line += ', ROTATION=' + rotation

    if 'none'!=translation and 'NONE'!=translation and 'None'!=translation:
        line += ', TRANSLATION=' + translation

    if 'none'!=user and 'NONE'!=user and 'None'!=user:
        line += ', USER=' + user

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQmpc(filepath,input,mode,user,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*MPC';

    if 'none'!=input and 'NONE'!=input and 'None'!=input:
        line += ', INPUT=' + input

    if 'none'!=mode and 'NONE'!=mode and 'None'!=mode:
        line += ', MODE=' + mode

    if 'none'!=user and 'NONE'!=user and 'None'!=user:
        line += ', USER=' + user
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQmullinseffect(filepath,testdatainput,user,beta,dependencies,m,properties,r,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*MULLINS EFFECT';

    if 'none'!=testdatainput and 'NONE'!=testdatainput and 'None'!=testdatainput:
        line += ', TEST DATA INPUT=' + testdatainput

    if 'none'!=user and 'NONE'!=user and 'None'!=user:
        line += ', USER=' + user

    if 'none'!=beta and 'NONE'!=beta and 'None'!=beta:
        line += ', BETA=' + beta

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=m and 'NONE'!=m and 'None'!=m:
        line += ', M=' + m

    if 'none'!=properties and 'NONE'!=properties and 'None'!=properties:
        line += ', PROPERTIES=' + properties

    if 'none'!=r and 'NONE'!=r and 'None'!=r:
        line += ', R=' + r
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQm1(filepath,dependencies,elastic,linear,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*M1';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=elastic and 'NONE'!=elastic and 'None'!=elastic:
        line += ', ELASTIC=' + elastic

    if 'none'!=linear and 'NONE'!=linear and 'None'!=linear:
        line += ', LINEAR=' + linear
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQm2(filepath,dependencies,elastic,linear,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*M2';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=elastic and 'NONE'!=elastic and 'None'!=elastic:
        line += ', ELASTIC=' + elastic

    if 'none'!=linear and 'NONE'!=linear and 'None'!=linear:
        line += ', LINEAR=' + linear
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQncopy(filepath,changenumber,oldset,pole,reflect,shift,multiple,newset,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*NCOPY';

    if 'none'!=changenumber and 'NONE'!=changenumber and 'None'!=changenumber:
        line += ', CHANGE NUMBER=' + changenumber

    if 'none'!=oldset and 'NONE'!=oldset and 'None'!=oldset:
        line += ', OLD SET=' + oldset

    if 'none'!=pole and 'NONE'!=pole and 'None'!=pole:
        line += ', POLE=' + pole

    if 'none'!=reflect and 'NONE'!=reflect and 'None'!=reflect:
        line += ', REFLECT=' + reflect

    if 'none'!=shift and 'NONE'!=shift and 'None'!=shift:
        line += ', SHIFT=' + shift

    if 'none'!=multiple and 'NONE'!=multiple and 'None'!=multiple:
        line += ', MULTIPLE=' + multiple

    if 'none'!=newset and 'NONE'!=newset and 'None'!=newset:
        line += ', NEW SET=' + newset
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQnetworkstiffnessratio(filepath,n,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*NETWORK STIFFNESS RATIO';

    if 'none'!=n and 'NONE'!=n and 'None'!=n:
        line += ', N=' + n

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQnfill(filepath,bias,nset,singular,twostep,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*NFILL';

    if 'none'!=bias and 'NONE'!=bias and 'None'!=bias:
        line += ', BIAS=' + bias

    if 'none'!=nset and 'NONE'!=nset and 'None'!=nset:
        line += ', NSET=' + nset

    if 'none'!=singular and 'NONE'!=singular and 'None'!=singular:
        line += ', SINGULAR=' + singular

    if 'none'!=twostep and 'NONE'!=twostep and 'None'!=twostep:
        line += ', TWO STEP=' + twostep
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQngen(filepath,line,nset,system,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*NGEN';

    if 'none'!=line and 'NONE'!=line and 'None'!=line:
        line += ', LINE=' + line

    if 'none'!=nset and 'NONE'!=nset and 'None'!=nset:
        line += ', NSET=' + nset

    if 'none'!=system and 'NONE'!=system and 'None'!=system:
        line += ', SYSTEM=' + system
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQnmap(filepath,nset,type,definition,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*NMAP';

    if 'none'!=nset and 'NONE'!=nset and 'None'!=nset:
        line += ', NSET=' + nset

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=definition and 'NONE'!=definition and 'None'!=definition:
        line += ', DEFINITION=' + definition
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQnocompression(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*NO COMPRESSION';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQnotension(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*NO TENSION';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQnodalenergyrate(filepath,generate,input,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*NODAL ENERGY RATE';

    if 'none'!=generate and 'NONE'!=generate and 'None'!=generate:
        line += ', GENERATE=' + generate

    if 'none'!=input and 'NONE'!=input and 'None'!=input:
        line += ', INPUT=' + input
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQnodalthickness(filepath,generate,input,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*NODAL THICKNESS';

    if 'none'!=generate and 'NONE'!=generate and 'None'!=generate:
        line += ', GENERATE=' + generate

    if 'none'!=input and 'NONE'!=input and 'None'!=input:
        line += ', INPUT=' + input
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQnode(filepath,input,nset,system,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*NODE';

    if 'none'!=input and 'NONE'!=input and 'None'!=input:
        line += ', INPUT=' + input

    if 'none'!=nset and 'NONE'!=nset and 'None'!=nset:
        line += ', NSET=' + nset

    if 'none'!=system and 'NONE'!=system and 'None'!=system:
        line += ', SYSTEM=' + system
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQnodefile(filepath,frequency,global,lastmode,mode,nset,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*NODE FILE';

    if 'none'!=frequency and 'NONE'!=frequency and 'None'!=frequency:
        line += ', FREQUENCY=' + frequency

    if 'none'!=global and 'NONE'!=global and 'None'!=global:
        line += ', GLOBAL=' + global

    if 'none'!=lastmode and 'NONE'!=lastmode and 'None'!=lastmode:
        line += ', LAST MODE=' + lastmode

    if 'none'!=mode and 'NONE'!=mode and 'None'!=mode:
        line += ', MODE=' + mode

    if 'none'!=nset and 'NONE'!=nset and 'None'!=nset:
        line += ', NSET=' + nset
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQnodeoutput(filepath,nset,tracerset,exterior,nset,tracerset,global,variable,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*NODE OUTPUT';

    if 'none'!=nset and 'NONE'!=nset and 'None'!=nset:
        line += ', NSET=' + nset

    if 'none'!=tracerset and 'NONE'!=tracerset and 'None'!=tracerset:
        line += ', TRACER SET=' + tracerset

    if 'none'!=exterior and 'NONE'!=exterior and 'None'!=exterior:
        line += ', EXTERIOR=' + exterior

    if 'none'!=nset and 'NONE'!=nset and 'None'!=nset:
        line += ', NSET=' + nset

    if 'none'!=tracerset and 'NONE'!=tracerset and 'None'!=tracerset:
        line += ', TRACER SET=' + tracerset

    if 'none'!=global and 'NONE'!=global and 'None'!=global:
        line += ', GLOBAL=' + global

    if 'none'!=variable and 'NONE'!=variable and 'None'!=variable:
        line += ', VARIABLE=' + variable
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQnodeprint(filepath,frequency,global,lastmode,mode,nset,summary,totals,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*NODE PRINT';

    if 'none'!=frequency and 'NONE'!=frequency and 'None'!=frequency:
        line += ', FREQUENCY=' + frequency

    if 'none'!=global and 'NONE'!=global and 'None'!=global:
        line += ', GLOBAL=' + global

    if 'none'!=lastmode and 'NONE'!=lastmode and 'None'!=lastmode:
        line += ', LAST MODE=' + lastmode

    if 'none'!=mode and 'NONE'!=mode and 'None'!=mode:
        line += ', MODE=' + mode

    if 'none'!=nset and 'NONE'!=nset and 'None'!=nset:
        line += ', NSET=' + nset

    if 'none'!=summary and 'NONE'!=summary and 'None'!=summary:
        line += ', SUMMARY=' + summary

    if 'none'!=totals and 'NONE'!=totals and 'None'!=totals:
        line += ', TOTALS=' + totals
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQnoderesponse(filepath,nset,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*NODE RESPONSE';

    if 'none'!=nset and 'NONE'!=nset and 'None'!=nset:
        line += ', NSET=' + nset
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQnonlinearbh(filepath,dir,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*NONLINEAR BH';

    if 'none'!=dir and 'NONE'!=dir and 'None'!=dir:
        line += ', DIR=' + dir

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQnonstructuralmass(filepath,elset,units,distribution,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*NONSTRUCTURAL MASS';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=units and 'NONE'!=units and 'None'!=units:
        line += ', UNITS=' + units

    if 'none'!=distribution and 'NONE'!=distribution and 'None'!=distribution:
        line += ', DISTRIBUTION=' + distribution
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQnormal(filepath,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*NORMAL';

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQnset(filepath,nset,elset,generate,instance,internal,unsorted,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*NSET';

    if 'none'!=nset and 'NONE'!=nset and 'None'!=nset:
        line += ', NSET=' + nset

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=generate and 'NONE'!=generate and 'None'!=generate:
        line += ', GENERATE=' + generate

    if 'none'!=instance and 'NONE'!=instance and 'None'!=instance:
        line += ', INSTANCE=' + instance

    if 'none'!=internal and 'NONE'!=internal and 'None'!=internal:
        line += ', INTERNAL=' + internal

    if 'none'!=unsorted and 'NONE'!=unsorted and 'None'!=unsorted:
        line += ', UNSORTED=' + unsorted
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQorientation(filepath,name,definition,localdirections,system,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*ORIENTATION';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=definition and 'NONE'!=definition and 'None'!=definition:
        line += ', DEFINITION=' + definition

    if 'none'!=localdirections and 'NONE'!=localdirections and 'None'!=localdirections:
        line += ', LOCAL DIRECTIONS=' + localdirections

    if 'none'!=system and 'NONE'!=system and 'None'!=system:
        line += ', SYSTEM=' + system
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQornl(filepath,a,h,material,reset,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*ORNL';

    if 'none'!=a and 'NONE'!=a and 'None'!=a:
        line += ', A=' + a

    if 'none'!=h and 'NONE'!=h and 'None'!=h:
        line += ', H=' + h

    if 'none'!=material and 'NONE'!=material and 'None'!=material:
        line += ', MATERIAL=' + material

    if 'none'!=reset and 'NONE'!=reset and 'None'!=reset:
        line += ', RESET=' + reset
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQoutput(filepath,diagnostics,field,history,frequency,modelist,name,numberinterval,timemarks,timepoints,op,timeinterval,variable,sensor,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*OUTPUT';

    if 'none'!=diagnostics and 'NONE'!=diagnostics and 'None'!=diagnostics:
        line += ', DIAGNOSTICS=' + diagnostics

    if 'none'!=field and 'NONE'!=field and 'None'!=field:
        line += ', FIELD=' + field

    if 'none'!=history and 'NONE'!=history and 'None'!=history:
        line += ', HISTORY=' + history

    if 'none'!=frequency and 'NONE'!=frequency and 'None'!=frequency:
        line += ', FREQUENCY=' + frequency

    if 'none'!=modelist and 'NONE'!=modelist and 'None'!=modelist:
        line += ', MODE LIST=' + modelist

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=numberinterval and 'NONE'!=numberinterval and 'None'!=numberinterval:
        line += ', NUMBER INTERVAL=' + numberinterval

    if 'none'!=timemarks and 'NONE'!=timemarks and 'None'!=timemarks:
        line += ', TIME MARKS=' + timemarks

    if 'none'!=timepoints and 'NONE'!=timepoints and 'None'!=timepoints:
        line += ', TIME POINTS=' + timepoints

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op

    if 'none'!=timeinterval and 'NONE'!=timeinterval and 'None'!=timeinterval:
        line += ', TIME INTERVAL=' + timeinterval

    if 'none'!=variable and 'NONE'!=variable and 'None'!=variable:
        line += ', VARIABLE=' + variable

    if 'none'!=sensor and 'NONE'!=sensor and 'None'!=sensor:
        line += ', SENSOR=' + sensor
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQparameter(filepath,dependent,independent,table,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*PARAMETER';

    if 'none'!=dependent and 'NONE'!=dependent and 'None'!=dependent:
        line += ', DEPENDENT=' + dependent

    if 'none'!=independent and 'NONE'!=independent and 'None'!=independent:
        line += ', INDEPENDENT=' + independent

    if 'none'!=table and 'NONE'!=table and 'None'!=table:
        line += ', TABLE=' + table
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQparameterdependence(filepath,numbervalues,table,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*PARAMETER DEPENDENCE';

    if 'none'!=numbervalues and 'NONE'!=numbervalues and 'None'!=numbervalues:
        line += ', NUMBER VALUES=' + numbervalues

    if 'none'!=table and 'NONE'!=table and 'None'!=table:
        line += ', TABLE=' + table
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQparametershapevariation(filepath,parameter,file,input,step,inc,mode,nset,system,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*PARAMETER SHAPE VARIATION';

    if 'none'!=parameter and 'NONE'!=parameter and 'None'!=parameter:
        line += ', PARAMETER=' + parameter

    if 'none'!=file and 'NONE'!=file and 'None'!=file:
        line += ', FILE=' + file

    if 'none'!=input and 'NONE'!=input and 'None'!=input:
        line += ', INPUT=' + input

    if 'none'!=step and 'NONE'!=step and 'None'!=step:
        line += ', STEP=' + step

    if 'none'!=inc and 'NONE'!=inc and 'None'!=inc:
        line += ', INC=' + inc

    if 'none'!=mode and 'NONE'!=mode and 'None'!=mode:
        line += ', MODE=' + mode

    if 'none'!=nset and 'NONE'!=nset and 'None'!=nset:
        line += ', NSET=' + nset

    if 'none'!=system and 'NONE'!=system and 'None'!=system:
        line += ', SYSTEM=' + system
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQpart(filepath,name,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*PART';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQparticlegenerator(filepath,maximumnumberofparticles,name,type,maxattemptsperincrement,maxinsertionattempts,solidfraction,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*PARTICLE GENERATOR';

    if 'none'!=maximumnumberofparticles and 'NONE'!=maximumnumberofparticles and 'None'!=maximumnumberofparticles:
        line += ', MAXIMUM NUMBER OF PARTICLES=' + maximumnumberofparticles

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=maxattemptsperincrement and 'NONE'!=maxattemptsperincrement and 'None'!=maxattemptsperincrement:
        line += ', MAX ATTEMPTS PER INCREMENT=' + maxattemptsperincrement

    if 'none'!=maxinsertionattempts and 'NONE'!=maxinsertionattempts and 'None'!=maxinsertionattempts:
        line += ', MAX INSERTION ATTEMPTS=' + maxinsertionattempts

    if 'none'!=solidfraction and 'NONE'!=solidfraction and 'None'!=solidfraction:
        line += ', SOLID FRACTION=' + solidfraction
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQparticlegeneratorflow(filepath,generator,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*PARTICLE GENERATOR FLOW';

    if 'none'!=generator and 'NONE'!=generator and 'None'!=generator:
        line += ', GENERATOR=' + generator
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQparticlegeneratorinlet(filepath,surface,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*PARTICLE GENERATOR INLET';

    if 'none'!=surface and 'NONE'!=surface and 'None'!=surface:
        line += ', SURFACE=' + surface
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQparticlegeneratormixture(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*PARTICLE GENERATOR MIXTURE';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQperfectlymatchedlayer(filepath,elset,name,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*PERFECTLY MATCHED LAYER';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQperiodic(filepath,type,nr,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*PERIODIC';

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=nr and 'NONE'!=nr and 'None'!=nr:
        line += ', NR=' + nr
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQperiodicmedia(filepath,inletcontrolnode,name,orientation,outletcontrolnode,triggernode,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*PERIODIC MEDIA';

    if 'none'!=inletcontrolnode and 'NONE'!=inletcontrolnode and 'None'!=inletcontrolnode:
        line += ', INLET CONTROL NODE=' + inletcontrolnode

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=orientation and 'NONE'!=orientation and 'None'!=orientation:
        line += ', ORIENTATION=' + orientation

    if 'none'!=outletcontrolnode and 'NONE'!=outletcontrolnode and 'None'!=outletcontrolnode:
        line += ', OUTLET CONTROL NODE=' + outletcontrolnode

    if 'none'!=triggernode and 'NONE'!=triggernode and 'None'!=triggernode:
        line += ', TRIGGER NODE=' + triggernode
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQpermanentmagnetization(filepath,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*PERMANENT MAGNETIZATION';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQpermeability(filepath,dependencies,type,specific,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*PERMEABILITY';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=specific and 'NONE'!=specific and 'None'!=specific:
        line += ', SPECIFIC=' + specific
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQphysicalconstants(filepath,absolutezero,stefanboltzmann,universalgasconstant,splreferencepressure,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*PHYSICAL CONSTANTS';

    if 'none'!=absolutezero and 'NONE'!=absolutezero and 'None'!=absolutezero:
        line += ', ABSOLUTE ZERO=' + absolutezero

    if 'none'!=stefanboltzmann and 'NONE'!=stefanboltzmann and 'None'!=stefanboltzmann:
        line += ', STEFAN BOLTZMANN=' + stefanboltzmann

    if 'none'!=universalgasconstant and 'NONE'!=universalgasconstant and 'None'!=universalgasconstant:
        line += ', UNIVERSAL GAS CONSTANT=' + universalgasconstant

    if 'none'!=splreferencepressure and 'NONE'!=splreferencepressure and 'None'!=splreferencepressure:
        line += ', SPL REFERENCE PRESSURE=' + splreferencepressure
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQpiezoelectric(filepath,dependencies,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*PIEZOELECTRIC';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQpipe-soilinteraction(filepath,elset,orientation,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*PIPE-SOIL INTERACTION';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=orientation and 'NONE'!=orientation and 'None'!=orientation:
        line += ', ORIENTATION=' + orientation
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQpipe-soilstiffness(filepath,dependencies,direction,type,properties,variables,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*PIPE-SOIL STIFFNESS';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=direction and 'NONE'!=direction and 'None'!=direction:
        line += ', DIRECTION=' + direction

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=properties and 'NONE'!=properties and 'None'!=properties:
        line += ', PROPERTIES=' + properties

    if 'none'!=variables and 'NONE'!=variables and 'None'!=variables:
        line += ', VARIABLES=' + variables
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQplanartestdata(filepath,smooth,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*PLANAR TEST DATA';

    if 'none'!=smooth and 'NONE'!=smooth and 'None'!=smooth:
        line += ', SMOOTH=' + smooth

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQplastic(filepath,hardening,scalestress,dependencies,rate,datatype,numberbackstresses,properties,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*PLASTIC';

    if 'none'!=hardening and 'NONE'!=hardening and 'None'!=hardening:
        line += ', HARDENING=' + hardening

    if 'none'!=scalestress and 'NONE'!=scalestress and 'None'!=scalestress:
        line += ', SCALESTRESS=' + scalestress

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=rate and 'NONE'!=rate and 'None'!=rate:
        line += ', RATE=' + rate

    if 'none'!=datatype and 'NONE'!=datatype and 'None'!=datatype:
        line += ', DATA TYPE=' + datatype

    if 'none'!=numberbackstresses and 'NONE'!=numberbackstresses and 'None'!=numberbackstresses:
        line += ', NUMBER BACKSTRESSES=' + numberbackstresses

    if 'none'!=properties and 'NONE'!=properties and 'None'!=properties:
        line += ', PROPERTIES=' + properties
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQplasticaxial(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*PLASTIC AXIAL';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQplasticm1(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*PLASTIC M1';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQplasticm2(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*PLASTIC M2';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQplastictorque(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*PLASTIC TORQUE';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQpmlcoefficient(filepath,variation,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*PML COEFFICIENT';

    if 'none'!=variation and 'NONE'!=variation and 'None'!=variation:
        line += ', VARIATION=' + variation
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQporousbulkmoduli(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*POROUS BULK MODULI';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQporouselastic(filepath,dependencies,shear,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*POROUS ELASTIC';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=shear and 'NONE'!=shear and 'None'!=shear:
        line += ', SHEAR=' + shear
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQporousfailurecriteria(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*POROUS FAILURE CRITERIA';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQporousmetalplasticity(filepath,dependencies,relativedensity,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*POROUS METAL PLASTICITY';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=relativedensity and 'NONE'!=relativedensity and 'None'!=relativedensity:
        line += ', RELATIVE DENSITY=' + relativedensity
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQpostoutput(filepath,step,cycle,iteration,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*POST OUTPUT';

    if 'none'!=step and 'NONE'!=step and 'None'!=step:
        line += ', STEP=' + step

    if 'none'!=cycle and 'NONE'!=cycle and 'None'!=cycle:
        line += ', CYCLE=' + cycle

    if 'none'!=iteration and 'NONE'!=iteration and 'None'!=iteration:
        line += ', ITERATION=' + iteration
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQpotential(filepath,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*POTENTIAL';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQpreprint(filepath,contact,echo,history,model,parsubstitution,parvalues,massproperty,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*PREPRINT';

    if 'none'!=contact and 'NONE'!=contact and 'None'!=contact:
        line += ', CONTACT=' + contact

    if 'none'!=echo and 'NONE'!=echo and 'None'!=echo:
        line += ', ECHO=' + echo

    if 'none'!=history and 'NONE'!=history and 'None'!=history:
        line += ', HISTORY=' + history

    if 'none'!=model and 'NONE'!=model and 'None'!=model:
        line += ', MODEL=' + model

    if 'none'!=parsubstitution and 'NONE'!=parsubstitution and 'None'!=parsubstitution:
        line += ', PARSUBSTITUTION=' + parsubstitution

    if 'none'!=parvalues and 'NONE'!=parvalues and 'None'!=parvalues:
        line += ', PARVALUES=' + parvalues

    if 'none'!=massproperty and 'NONE'!=massproperty and 'None'!=massproperty:
        line += ', MASS PROPERTY=' + massproperty
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQpressureequationsolver(filepath,convergence,diagnostics,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*PRESSURE EQUATION SOLVER';

    if 'none'!=convergence and 'NONE'!=convergence and 'None'!=convergence:
        line += ', CONVERGENCE=' + convergence

    if 'none'!=diagnostics and 'NONE'!=diagnostics and 'None'!=diagnostics:
        line += ', DIAGNOSTICS=' + diagnostics

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQpressurepenetration(filepath,master,slave,amplitude,op,penetrationtime,imaginary,real,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*PRESSURE PENETRATION';

    if 'none'!=master and 'NONE'!=master and 'None'!=master:
        line += ', MASTER=' + master

    if 'none'!=slave and 'NONE'!=slave and 'None'!=slave:
        line += ', SLAVE=' + slave

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op

    if 'none'!=penetrationtime and 'NONE'!=penetrationtime and 'None'!=penetrationtime:
        line += ', PENETRATION TIME=' + penetrationtime

    if 'none'!=imaginary and 'NONE'!=imaginary and 'None'!=imaginary:
        line += ', IMAGINARY=' + imaginary

    if 'none'!=real and 'NONE'!=real and 'None'!=real:
        line += ', REAL=' + real
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQpressurestress(filepath,amplitude,input,op,file,bstep,binc,estep,einc,user,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*PRESSURE STRESS';

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=input and 'NONE'!=input and 'None'!=input:
        line += ', INPUT=' + input

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op

    if 'none'!=file and 'NONE'!=file and 'None'!=file:
        line += ', FILE=' + file

    if 'none'!=bstep and 'NONE'!=bstep and 'None'!=bstep:
        line += ', BSTEP=' + bstep

    if 'none'!=binc and 'NONE'!=binc and 'None'!=binc:
        line += ', BINC=' + binc

    if 'none'!=estep and 'NONE'!=estep and 'None'!=estep:
        line += ', ESTEP=' + estep

    if 'none'!=einc and 'NONE'!=einc and 'None'!=einc:
        line += ', EINC=' + einc

    if 'none'!=user and 'NONE'!=user and 'None'!=user:
        line += ', USER=' + user
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQprestresshold(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*PRESTRESS HOLD';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQpre-tensionsection(filepath,node,element,surface,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*PRE-TENSION SECTION';

    if 'none'!=node and 'NONE'!=node and 'None'!=node:
        line += ', NODE=' + node

    if 'none'!=element and 'NONE'!=element and 'None'!=element:
        line += ', ELEMENT=' + element

    if 'none'!=surface and 'NONE'!=surface and 'None'!=surface:
        line += ', SURFACE=' + surface
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQprint(filepath,adaptivemesh,contact,frequency,modelchange,plasticity,residual,solve,allke,criticalelement,dmass,etotal,mass,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*PRINT';

    if 'none'!=adaptivemesh and 'NONE'!=adaptivemesh and 'None'!=adaptivemesh:
        line += ', ADAPTIVE MESH=' + adaptivemesh

    if 'none'!=contact and 'NONE'!=contact and 'None'!=contact:
        line += ', CONTACT=' + contact

    if 'none'!=frequency and 'NONE'!=frequency and 'None'!=frequency:
        line += ', FREQUENCY=' + frequency

    if 'none'!=modelchange and 'NONE'!=modelchange and 'None'!=modelchange:
        line += ', MODEL CHANGE=' + modelchange

    if 'none'!=plasticity and 'NONE'!=plasticity and 'None'!=plasticity:
        line += ', PLASTICITY=' + plasticity

    if 'none'!=residual and 'NONE'!=residual and 'None'!=residual:
        line += ', RESIDUAL=' + residual

    if 'none'!=solve and 'NONE'!=solve and 'None'!=solve:
        line += ', SOLVE=' + solve

    if 'none'!=allke and 'NONE'!=allke and 'None'!=allke:
        line += ', ALLKE=' + allke

    if 'none'!=criticalelement and 'NONE'!=criticalelement and 'None'!=criticalelement:
        line += ', CRITICAL ELEMENT=' + criticalelement

    if 'none'!=dmass and 'NONE'!=dmass and 'None'!=dmass:
        line += ', DMASS=' + dmass

    if 'none'!=etotal and 'NONE'!=etotal and 'None'!=etotal:
        line += ', ETOTAL=' + etotal

    if 'none'!=mass and 'NONE'!=mass and 'None'!=mass:
        line += ', MASS=' + mass
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQprobabilitydensityfunction(filepath,name,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*PROBABILITY DENSITY FUNCTION';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQpsd-definition(filepath,name,dbreference,g,input,type,user,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*PSD-DEFINITION';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=dbreference and 'NONE'!=dbreference and 'None'!=dbreference:
        line += ', DB REFERENCE=' + dbreference

    if 'none'!=g and 'NONE'!=g and 'None'!=g:
        line += ', G=' + g

    if 'none'!=input and 'NONE'!=input and 'None'!=input:
        line += ', INPUT=' + input

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=user and 'NONE'!=user and 'None'!=user:
        line += ', USER=' + user
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQradiate(filepath,amplitude,op,regiontype,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*RADIATE';

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op

    if 'none'!=regiontype and 'NONE'!=regiontype and 'None'!=regiontype:
        line += ', REGION TYPE=' + regiontype
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQradiationfile(filepath,cavity,elset,surface,frequency,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*RADIATION FILE';

    if 'none'!=cavity and 'NONE'!=cavity and 'None'!=cavity:
        line += ', CAVITY=' + cavity

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=surface and 'NONE'!=surface and 'None'!=surface:
        line += ', SURFACE=' + surface

    if 'none'!=frequency and 'NONE'!=frequency and 'None'!=frequency:
        line += ', FREQUENCY=' + frequency
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQradiationoutput(filepath,cavity,elset,surface,variable,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*RADIATION OUTPUT';

    if 'none'!=cavity and 'NONE'!=cavity and 'None'!=cavity:
        line += ', CAVITY=' + cavity

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=surface and 'NONE'!=surface and 'None'!=surface:
        line += ', SURFACE=' + surface

    if 'none'!=variable and 'NONE'!=variable and 'None'!=variable:
        line += ', VARIABLE=' + variable
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQradiationprint(filepath,cavity,elset,surface,frequency,summary,totals,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*RADIATION PRINT';

    if 'none'!=cavity and 'NONE'!=cavity and 'None'!=cavity:
        line += ', CAVITY=' + cavity

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=surface and 'NONE'!=surface and 'None'!=surface:
        line += ', SURFACE=' + surface

    if 'none'!=frequency and 'NONE'!=frequency and 'None'!=frequency:
        line += ', FREQUENCY=' + frequency

    if 'none'!=summary and 'NONE'!=summary and 'None'!=summary:
        line += ', SUMMARY=' + summary

    if 'none'!=totals and 'NONE'!=totals and 'None'!=totals:
        line += ', TOTALS=' + totals
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQradiationsymmetry(filepath,name,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*RADIATION SYMMETRY';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQradiationviewfactor(filepath,blocking,cavity,infinitesimal,integration,lumpedarea,off,range,reflection,symmetry,vtol,mdisp,nset,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*RADIATION VIEW FACTOR';

    if 'none'!=blocking and 'NONE'!=blocking and 'None'!=blocking:
        line += ', BLOCKING=' + blocking

    if 'none'!=cavity and 'NONE'!=cavity and 'None'!=cavity:
        line += ', CAVITY=' + cavity

    if 'none'!=infinitesimal and 'NONE'!=infinitesimal and 'None'!=infinitesimal:
        line += ', INFINITESIMAL=' + infinitesimal

    if 'none'!=integration and 'NONE'!=integration and 'None'!=integration:
        line += ', INTEGRATION=' + integration

    if 'none'!=lumpedarea and 'NONE'!=lumpedarea and 'None'!=lumpedarea:
        line += ', LUMPED AREA=' + lumpedarea

    if 'none'!=off and 'NONE'!=off and 'None'!=off:
        line += ', OFF=' + off

    if 'none'!=range and 'NONE'!=range and 'None'!=range:
        line += ', RANGE=' + range

    if 'none'!=reflection and 'NONE'!=reflection and 'None'!=reflection:
        line += ', REFLECTION=' + reflection

    if 'none'!=symmetry and 'NONE'!=symmetry and 'None'!=symmetry:
        line += ', SYMMETRY=' + symmetry

    if 'none'!=vtol and 'NONE'!=vtol and 'None'!=vtol:
        line += ', VTOL=' + vtol

    if 'none'!=mdisp and 'NONE'!=mdisp and 'None'!=mdisp:
        line += ', MDISP=' + mdisp

    if 'none'!=nset and 'NONE'!=nset and 'None'!=nset:
        line += ', NSET=' + nset
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQrandomresponse(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*RANDOM RESPONSE';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQratedependent(filepath,dependencies,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*RATE DEPENDENT';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQratios(filepath,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*RATIOS';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQreactionrate(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*REACTION RATE';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQrebar(filepath,element,material,name,geometry,isodirection,orientation,single,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*REBAR';

    if 'none'!=element and 'NONE'!=element and 'None'!=element:
        line += ', ELEMENT=' + element

    if 'none'!=material and 'NONE'!=material and 'None'!=material:
        line += ', MATERIAL=' + material

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=geometry and 'NONE'!=geometry and 'None'!=geometry:
        line += ', GEOMETRY=' + geometry

    if 'none'!=isodirection and 'NONE'!=isodirection and 'None'!=isodirection:
        line += ', ISODIRECTION=' + isodirection

    if 'none'!=orientation and 'NONE'!=orientation and 'None'!=orientation:
        line += ', ORIENTATION=' + orientation

    if 'none'!=single and 'NONE'!=single and 'None'!=single:
        line += ', SINGLE=' + single
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQrebarlayer(filepath,geometry,orientation,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*REBAR LAYER';

    if 'none'!=geometry and 'NONE'!=geometry and 'None'!=geometry:
        line += ', GEOMETRY=' + geometry

    if 'none'!=orientation and 'NONE'!=orientation and 'None'!=orientation:
        line += ', ORIENTATION=' + orientation
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQreflection(filepath,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*REFLECTION';

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQrelease(filepath,input,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*RELEASE';

    if 'none'!=input and 'NONE'!=input and 'None'!=input:
        line += ', INPUT=' + input
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQresponsespectrum(filepath,comp,sum,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*RESPONSE SPECTRUM';

    if 'none'!=comp and 'NONE'!=comp and 'None'!=comp:
        line += ', COMP=' + comp

    if 'none'!=sum and 'NONE'!=sum and 'None'!=sum:
        line += ', SUM=' + sum
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQrestart(filepath,read,write,cycle,endstep,inc,iteration,step,frequency,numberinterval,timemarks,overlay,read,write,step,endstep,interval,numberinterval,timemarks,overlay,single,read,write,endstep,inc,step,frequency,numberinterval,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*RESTART';

    if 'none'!=read and 'NONE'!=read and 'None'!=read:
        line += ', READ=' + read

    if 'none'!=write and 'NONE'!=write and 'None'!=write:
        line += ', WRITE=' + write

    if 'none'!=cycle and 'NONE'!=cycle and 'None'!=cycle:
        line += ', CYCLE=' + cycle

    if 'none'!=endstep and 'NONE'!=endstep and 'None'!=endstep:
        line += ', END STEP=' + endstep

    if 'none'!=inc and 'NONE'!=inc and 'None'!=inc:
        line += ', INC=' + inc

    if 'none'!=iteration and 'NONE'!=iteration and 'None'!=iteration:
        line += ', ITERATION=' + iteration

    if 'none'!=step and 'NONE'!=step and 'None'!=step:
        line += ', STEP=' + step

    if 'none'!=frequency and 'NONE'!=frequency and 'None'!=frequency:
        line += ', FREQUENCY=' + frequency

    if 'none'!=numberinterval and 'NONE'!=numberinterval and 'None'!=numberinterval:
        line += ', NUMBER INTERVAL=' + numberinterval

    if 'none'!=timemarks and 'NONE'!=timemarks and 'None'!=timemarks:
        line += ', TIME MARKS=' + timemarks

    if 'none'!=overlay and 'NONE'!=overlay and 'None'!=overlay:
        line += ', OVERLAY=' + overlay

    if 'none'!=read and 'NONE'!=read and 'None'!=read:
        line += ', READ=' + read

    if 'none'!=write and 'NONE'!=write and 'None'!=write:
        line += ', WRITE=' + write

    if 'none'!=step and 'NONE'!=step and 'None'!=step:
        line += ', STEP=' + step

    if 'none'!=endstep and 'NONE'!=endstep and 'None'!=endstep:
        line += ', END STEP=' + endstep

    if 'none'!=interval and 'NONE'!=interval and 'None'!=interval:
        line += ', INTERVAL=' + interval

    if 'none'!=numberinterval and 'NONE'!=numberinterval and 'None'!=numberinterval:
        line += ', NUMBER INTERVAL=' + numberinterval

    if 'none'!=timemarks and 'NONE'!=timemarks and 'None'!=timemarks:
        line += ', TIME MARKS=' + timemarks

    if 'none'!=overlay and 'NONE'!=overlay and 'None'!=overlay:
        line += ', OVERLAY=' + overlay

    if 'none'!=single and 'NONE'!=single and 'None'!=single:
        line += ', SINGLE=' + single

    if 'none'!=read and 'NONE'!=read and 'None'!=read:
        line += ', READ=' + read

    if 'none'!=write and 'NONE'!=write and 'None'!=write:
        line += ', WRITE=' + write

    if 'none'!=endstep and 'NONE'!=endstep and 'None'!=endstep:
        line += ', END STEP=' + endstep

    if 'none'!=inc and 'NONE'!=inc and 'None'!=inc:
        line += ', INC=' + inc

    if 'none'!=step and 'NONE'!=step and 'None'!=step:
        line += ', STEP=' + step

    if 'none'!=frequency and 'NONE'!=frequency and 'None'!=frequency:
        line += ', FREQUENCY=' + frequency

    if 'none'!=numberinterval and 'NONE'!=numberinterval and 'None'!=numberinterval:
        line += ', NUMBER INTERVAL=' + numberinterval
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQretainednodaldofs(filepath,sorted,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*RETAINED NODAL DOFS';

    if 'none'!=sorted and 'NONE'!=sorted and 'None'!=sorted:
        line += ', SORTED=' + sorted
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQrigidbody(filepath,refnode,analyticalsurface,elset,pinnset,tienset,isothermal,position,density,nodalthickness,offset,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*RIGID BODY';

    if 'none'!=refnode and 'NONE'!=refnode and 'None'!=refnode:
        line += ', REF NODE=' + refnode

    if 'none'!=analyticalsurface and 'NONE'!=analyticalsurface and 'None'!=analyticalsurface:
        line += ', ANALYTICAL SURFACE=' + analyticalsurface

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=pinnset and 'NONE'!=pinnset and 'None'!=pinnset:
        line += ', PIN NSET=' + pinnset

    if 'none'!=tienset and 'NONE'!=tienset and 'None'!=tienset:
        line += ', TIE NSET=' + tienset

    if 'none'!=isothermal and 'NONE'!=isothermal and 'None'!=isothermal:
        line += ', ISOTHERMAL=' + isothermal

    if 'none'!=position and 'NONE'!=position and 'None'!=position:
        line += ', POSITION=' + position

    if 'none'!=density and 'NONE'!=density and 'None'!=density:
        line += ', DENSITY=' + density

    if 'none'!=nodalthickness and 'NONE'!=nodalthickness and 'None'!=nodalthickness:
        line += ', NODAL THICKNESS=' + nodalthickness

    if 'none'!=offset and 'NONE'!=offset and 'None'!=offset:
        line += ', OFFSET=' + offset
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQrigidsurface(filepath,elset,name,refnode,type,filletradius,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*RIGID SURFACE';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=refnode and 'NONE'!=refnode and 'None'!=refnode:
        line += ', REF NODE=' + refnode

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=filletradius and 'NONE'!=filletradius and 'None'!=filletradius:
        line += ', FILLET RADIUS=' + filletradius
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQrotaryinertia(filepath,elset,alpha,composite,orientation,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*ROTARY INERTIA';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=alpha and 'NONE'!=alpha and 'None'!=alpha:
        line += ', ALPHA=' + alpha

    if 'none'!=composite and 'NONE'!=composite and 'None'!=composite:
        line += ', COMPOSITE=' + composite

    if 'none'!=orientation and 'NONE'!=orientation and 'None'!=orientation:
        line += ', ORIENTATION=' + orientation
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsectioncontrols(filepath,name,conversioncriterion,distortioncontrol,drillstiffness,elementconversion,elementdeletion,hourglass,initialgapopening,kernel,kinematicsplit,lengthratio,maxdegradation,particlethickness,perturbation,rampinitialstress,secondorderaccuracy,sphformulation,sphsmoothinglength,viscosity,weightfactor,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SECTION CONTROLS';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=conversioncriterion and 'NONE'!=conversioncriterion and 'None'!=conversioncriterion:
        line += ', CONVERSION CRITERION=' + conversioncriterion

    if 'none'!=distortioncontrol and 'NONE'!=distortioncontrol and 'None'!=distortioncontrol:
        line += ', DISTORTION CONTROL=' + distortioncontrol

    if 'none'!=drillstiffness and 'NONE'!=drillstiffness and 'None'!=drillstiffness:
        line += ', DRILL STIFFNESS=' + drillstiffness

    if 'none'!=elementconversion and 'NONE'!=elementconversion and 'None'!=elementconversion:
        line += ', ELEMENT CONVERSION=' + elementconversion

    if 'none'!=elementdeletion and 'NONE'!=elementdeletion and 'None'!=elementdeletion:
        line += ', ELEMENT DELETION=' + elementdeletion

    if 'none'!=hourglass and 'NONE'!=hourglass and 'None'!=hourglass:
        line += ', HOURGLASS=' + hourglass

    if 'none'!=initialgapopening and 'NONE'!=initialgapopening and 'None'!=initialgapopening:
        line += ', INITIAL GAP OPENING=' + initialgapopening

    if 'none'!=kernel and 'NONE'!=kernel and 'None'!=kernel:
        line += ', KERNEL=' + kernel

    if 'none'!=kinematicsplit and 'NONE'!=kinematicsplit and 'None'!=kinematicsplit:
        line += ', KINEMATIC SPLIT=' + kinematicsplit

    if 'none'!=lengthratio and 'NONE'!=lengthratio and 'None'!=lengthratio:
        line += ', LENGTH RATIO=' + lengthratio

    if 'none'!=maxdegradation and 'NONE'!=maxdegradation and 'None'!=maxdegradation:
        line += ', MAX DEGRADATION=' + maxdegradation

    if 'none'!=particlethickness and 'NONE'!=particlethickness and 'None'!=particlethickness:
        line += ', PARTICLE THICKNESS=' + particlethickness

    if 'none'!=perturbation and 'NONE'!=perturbation and 'None'!=perturbation:
        line += ', PERTURBATION=' + perturbation

    if 'none'!=rampinitialstress and 'NONE'!=rampinitialstress and 'None'!=rampinitialstress:
        line += ', RAMP INITIAL STRESS=' + rampinitialstress

    if 'none'!=secondorderaccuracy and 'NONE'!=secondorderaccuracy and 'None'!=secondorderaccuracy:
        line += ', SECOND ORDER ACCURACY=' + secondorderaccuracy

    if 'none'!=sphformulation and 'NONE'!=sphformulation and 'None'!=sphformulation:
        line += ', SPH FORMULATION=' + sphformulation

    if 'none'!=sphsmoothinglength and 'NONE'!=sphsmoothinglength and 'None'!=sphsmoothinglength:
        line += ', SPH SMOOTHING LENGTH=' + sphsmoothinglength

    if 'none'!=viscosity and 'NONE'!=viscosity and 'None'!=viscosity:
        line += ', VISCOSITY=' + viscosity

    if 'none'!=weightfactor and 'NONE'!=weightfactor and 'None'!=weightfactor:
        line += ', WEIGHT FACTOR=' + weightfactor
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsectionfile(filepath,name,surface,axes,frequency,update,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SECTION FILE';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=surface and 'NONE'!=surface and 'None'!=surface:
        line += ', SURFACE=' + surface

    if 'none'!=axes and 'NONE'!=axes and 'None'!=axes:
        line += ', AXES=' + axes

    if 'none'!=frequency and 'NONE'!=frequency and 'None'!=frequency:
        line += ', FREQUENCY=' + frequency

    if 'none'!=update and 'NONE'!=update and 'None'!=update:
        line += ', UPDATE=' + update
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsectionorigin(filepath,origin,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SECTION ORIGIN';

    if 'none'!=origin and 'NONE'!=origin and 'None'!=origin:
        line += ', ORIGIN=' + origin
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsectionpoints(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SECTION POINTS';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsectionprint(filepath,name,surface,axes,frequency,update,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SECTION PRINT';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=surface and 'NONE'!=surface and 'None'!=surface:
        line += ', SURFACE=' + surface

    if 'none'!=axes and 'NONE'!=axes and 'None'!=axes:
        line += ', AXES=' + axes

    if 'none'!=frequency and 'NONE'!=frequency and 'None'!=frequency:
        line += ', FREQUENCY=' + frequency

    if 'none'!=update and 'NONE'!=update and 'None'!=update:
        line += ', UPDATE=' + update
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQselectcyclicsymmetrymodes(filepath,even,nmin,nmax,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SELECT CYCLIC SYMMETRY MODES';

    if 'none'!=even and 'NONE'!=even and 'None'!=even:
        line += ', EVEN=' + even

    if 'none'!=nmin and 'NONE'!=nmin and 'None'!=nmin:
        line += ', NMIN=' + nmin

    if 'none'!=nmax and 'NONE'!=nmax and 'None'!=nmax:
        line += ', NMAX=' + nmax
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQselecteigenmodes(filepath,definition,generate,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SELECT EIGENMODES';

    if 'none'!=definition and 'NONE'!=definition and 'None'!=definition:
        line += ', DEFINITION=' + definition

    if 'none'!=generate and 'NONE'!=generate and 'None'!=generate:
        line += ', GENERATE=' + generate
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsfilm(filepath,amplitude,filmamplitude,op,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SFILM';

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=filmamplitude and 'NONE'!=filmamplitude and 'None'!=filmamplitude:
        line += ', FILM AMPLITUDE=' + filmamplitude

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsflow(filepath,amplitude,op,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SFLOW';

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQshearcenter(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SHEAR CENTER';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQshearfailure(filepath,dependencies,elementdeletion,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SHEAR FAILURE';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=elementdeletion and 'NONE'!=elementdeletion and 'None'!=elementdeletion:
        line += ', ELEMENT DELETION=' + elementdeletion

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQshearretention(filepath,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SHEAR RETENTION';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsheartestdata(filepath,shrinf,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SHEAR TEST DATA';

    if 'none'!=shrinf and 'NONE'!=shrinf and 'None'!=shrinf:
        line += ', SHRINF=' + shrinf
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQshellgeneralsection(filepath,elset,density,bendingonly,controls,layup,membraneonly,offset,orientation,poisson,smearalllayers,stackdirection,symmetric,thicknessmodulus,zero,composite,material,user,nodalthickness,shellthickness,iproperties,properties,unsymm,variables,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SHELL GENERAL SECTION';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=density and 'NONE'!=density and 'None'!=density:
        line += ', DENSITY=' + density

    if 'none'!=bendingonly and 'NONE'!=bendingonly and 'None'!=bendingonly:
        line += ', BENDING ONLY=' + bendingonly

    if 'none'!=controls and 'NONE'!=controls and 'None'!=controls:
        line += ', CONTROLS=' + controls

    if 'none'!=layup and 'NONE'!=layup and 'None'!=layup:
        line += ', LAYUP=' + layup

    if 'none'!=membraneonly and 'NONE'!=membraneonly and 'None'!=membraneonly:
        line += ', MEMBRANE ONLY=' + membraneonly

    if 'none'!=offset and 'NONE'!=offset and 'None'!=offset:
        line += ', OFFSET=' + offset

    if 'none'!=orientation and 'NONE'!=orientation and 'None'!=orientation:
        line += ', ORIENTATION=' + orientation

    if 'none'!=poisson and 'NONE'!=poisson and 'None'!=poisson:
        line += ', POISSON=' + poisson

    if 'none'!=smearalllayers and 'NONE'!=smearalllayers and 'None'!=smearalllayers:
        line += ', SMEAR ALL LAYERS=' + smearalllayers

    if 'none'!=stackdirection and 'NONE'!=stackdirection and 'None'!=stackdirection:
        line += ', STACK DIRECTION=' + stackdirection

    if 'none'!=symmetric and 'NONE'!=symmetric and 'None'!=symmetric:
        line += ', SYMMETRIC=' + symmetric

    if 'none'!=thicknessmodulus and 'NONE'!=thicknessmodulus and 'None'!=thicknessmodulus:
        line += ', THICKNESS MODULUS=' + thicknessmodulus

    if 'none'!=zero and 'NONE'!=zero and 'None'!=zero:
        line += ', ZERO=' + zero

    if 'none'!=composite and 'NONE'!=composite and 'None'!=composite:
        line += ', COMPOSITE=' + composite

    if 'none'!=material and 'NONE'!=material and 'None'!=material:
        line += ', MATERIAL=' + material

    if 'none'!=user and 'NONE'!=user and 'None'!=user:
        line += ', USER=' + user

    if 'none'!=nodalthickness and 'NONE'!=nodalthickness and 'None'!=nodalthickness:
        line += ', NODAL THICKNESS=' + nodalthickness

    if 'none'!=shellthickness and 'NONE'!=shellthickness and 'None'!=shellthickness:
        line += ', SHELL THICKNESS=' + shellthickness

    if 'none'!=iproperties and 'NONE'!=iproperties and 'None'!=iproperties:
        line += ', I PROPERTIES=' + iproperties

    if 'none'!=properties and 'NONE'!=properties and 'None'!=properties:
        line += ', PROPERTIES=' + properties

    if 'none'!=unsymm and 'NONE'!=unsymm and 'None'!=unsymm:
        line += ', UNSYMM=' + unsymm

    if 'none'!=variables and 'NONE'!=variables and 'None'!=variables:
        line += ', VARIABLES=' + variables

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQshellsection(filepath,elset,composite,material,controls,density,layup,nodalthickness,offset,orientation,poisson,sectionintegration,shellthickness,stackdirection,symmetric,temperature,thicknessmodulus,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SHELL SECTION';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=composite and 'NONE'!=composite and 'None'!=composite:
        line += ', COMPOSITE=' + composite

    if 'none'!=material and 'NONE'!=material and 'None'!=material:
        line += ', MATERIAL=' + material

    if 'none'!=controls and 'NONE'!=controls and 'None'!=controls:
        line += ', CONTROLS=' + controls

    if 'none'!=density and 'NONE'!=density and 'None'!=density:
        line += ', DENSITY=' + density

    if 'none'!=layup and 'NONE'!=layup and 'None'!=layup:
        line += ', LAYUP=' + layup

    if 'none'!=nodalthickness and 'NONE'!=nodalthickness and 'None'!=nodalthickness:
        line += ', NODAL THICKNESS=' + nodalthickness

    if 'none'!=offset and 'NONE'!=offset and 'None'!=offset:
        line += ', OFFSET=' + offset

    if 'none'!=orientation and 'NONE'!=orientation and 'None'!=orientation:
        line += ', ORIENTATION=' + orientation

    if 'none'!=poisson and 'NONE'!=poisson and 'None'!=poisson:
        line += ', POISSON=' + poisson

    if 'none'!=sectionintegration and 'NONE'!=sectionintegration and 'None'!=sectionintegration:
        line += ', SECTION INTEGRATION=' + sectionintegration

    if 'none'!=shellthickness and 'NONE'!=shellthickness and 'None'!=shellthickness:
        line += ', SHELL THICKNESS=' + shellthickness

    if 'none'!=stackdirection and 'NONE'!=stackdirection and 'None'!=stackdirection:
        line += ', STACK DIRECTION=' + stackdirection

    if 'none'!=symmetric and 'NONE'!=symmetric and 'None'!=symmetric:
        line += ', SYMMETRIC=' + symmetric

    if 'none'!=temperature and 'NONE'!=temperature and 'None'!=temperature:
        line += ', TEMPERATURE=' + temperature

    if 'none'!=thicknessmodulus and 'NONE'!=thicknessmodulus and 'None'!=thicknessmodulus:
        line += ', THICKNESS MODULUS=' + thicknessmodulus
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQshelltosolidcoupling(filepath,constraintname,influencedistance,positiontolerance,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SHELL TO SOLID COUPLING';

    if 'none'!=constraintname and 'NONE'!=constraintname and 'None'!=constraintname:
        line += ', CONSTRAINT NAME=' + constraintname

    if 'none'!=influencedistance and 'NONE'!=influencedistance and 'None'!=influencedistance:
        line += ', INFLUENCE DISTANCE=' + influencedistance

    if 'none'!=positiontolerance and 'NONE'!=positiontolerance and 'None'!=positiontolerance:
        line += ', POSITION TOLERANCE=' + positiontolerance
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsimpedance(filepath,property,nonreflecting,op,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SIMPEDANCE';

    if 'none'!=property and 'NONE'!=property and 'None'!=property:
        line += ', PROPERTY=' + property

    if 'none'!=nonreflecting and 'NONE'!=nonreflecting and 'None'!=nonreflecting:
        line += ', NONREFLECTING=' + nonreflecting

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsimplesheartestdata(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SIMPLE SHEAR TEST DATA';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQslideline(filepath,elset,type,extensionzone,generate,smooth,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SLIDE LINE';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=extensionzone and 'NONE'!=extensionzone and 'None'!=extensionzone:
        line += ', EXTENSION ZONE=' + extensionzone

    if 'none'!=generate and 'NONE'!=generate and 'None'!=generate:
        line += ', GENERATE=' + generate

    if 'none'!=smooth and 'NONE'!=smooth and 'None'!=smooth:
        line += ', SMOOTH=' + smooth
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsload(filepath,amplitude,op,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SLOAD';

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsofteningregularization(filepath,dependencies,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SOFTENING REGULARIZATION';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsoils(filepath,allsdtol,cetol,consolidation,continue,deltmx,end,creep,factor,heat,stabilize,utol,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SOILS';

    if 'none'!=allsdtol and 'NONE'!=allsdtol and 'None'!=allsdtol:
        line += ', ALLSDTOL=' + allsdtol

    if 'none'!=cetol and 'NONE'!=cetol and 'None'!=cetol:
        line += ', CETOL=' + cetol

    if 'none'!=consolidation and 'NONE'!=consolidation and 'None'!=consolidation:
        line += ', CONSOLIDATION=' + consolidation

    if 'none'!=continue and 'NONE'!=continue and 'None'!=continue:
        line += ', CONTINUE=' + continue

    if 'none'!=deltmx and 'NONE'!=deltmx and 'None'!=deltmx:
        line += ', DELTMX=' + deltmx

    if 'none'!=end and 'NONE'!=end and 'None'!=end:
        line += ', END=' + end

    if 'none'!=creep and 'NONE'!=creep and 'None'!=creep:
        line += ', CREEP=' + creep

    if 'none'!=factor and 'NONE'!=factor and 'None'!=factor:
        line += ', FACTOR=' + factor

    if 'none'!=heat and 'NONE'!=heat and 'None'!=heat:
        line += ', HEAT=' + heat

    if 'none'!=stabilize and 'NONE'!=stabilize and 'None'!=stabilize:
        line += ', STABILIZE=' + stabilize

    if 'none'!=utol and 'NONE'!=utol and 'None'!=utol:
        line += ', UTOL=' + utol
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsolidsection(filepath,composite,elset,material,refnode,orientation,controls,layup,order,stackdirection,symmetric,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SOLID SECTION';

    if 'none'!=composite and 'NONE'!=composite and 'None'!=composite:
        line += ', COMPOSITE=' + composite

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=material and 'NONE'!=material and 'None'!=material:
        line += ', MATERIAL=' + material

    if 'none'!=refnode and 'NONE'!=refnode and 'None'!=refnode:
        line += ', REF NODE=' + refnode

    if 'none'!=orientation and 'NONE'!=orientation and 'None'!=orientation:
        line += ', ORIENTATION=' + orientation

    if 'none'!=controls and 'NONE'!=controls and 'None'!=controls:
        line += ', CONTROLS=' + controls

    if 'none'!=layup and 'NONE'!=layup and 'None'!=layup:
        line += ', LAYUP=' + layup

    if 'none'!=order and 'NONE'!=order and 'None'!=order:
        line += ', ORDER=' + order

    if 'none'!=stackdirection and 'NONE'!=stackdirection and 'None'!=stackdirection:
        line += ', STACK DIRECTION=' + stackdirection

    if 'none'!=symmetric and 'NONE'!=symmetric and 'None'!=symmetric:
        line += ', SYMMETRIC=' + symmetric
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsolubility(filepath,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SOLUBILITY';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsolutiontechnique(filepath,type,reformkernel,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SOLUTION TECHNIQUE';

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=reformkernel and 'NONE'!=reformkernel and 'None'!=reformkernel:
        line += ', REFORM KERNEL=' + reformkernel
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsolvercontrols(filepath,constraintoptimization,reset,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SOLVER CONTROLS';

    if 'none'!=constraintoptimization and 'NONE'!=constraintoptimization and 'None'!=constraintoptimization:
        line += ', CONSTRAINT OPTIMIZATION=' + constraintoptimization

    if 'none'!=reset and 'NONE'!=reset and 'None'!=reset:
        line += ', RESET=' + reset
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsorption(filepath,law,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SORPTION';

    if 'none'!=law and 'NONE'!=law and 'None'!=law:
        line += ', LAW=' + law

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQspecificheat(filepath,dependencies,porefluid,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SPECIFIC HEAT';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=porefluid and 'NONE'!=porefluid and 'None'!=porefluid:
        line += ', PORE FLUID=' + porefluid

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQspectrum(filepath,name,g,input,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SPECTRUM';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=g and 'NONE'!=g and 'None'!=g:
        line += ', G=' + g

    if 'none'!=input and 'NONE'!=input and 'None'!=input:
        line += ', INPUT=' + input

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsphsurfacebehavior(filepath,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SPH SURFACE BEHAVIOR';

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQspring(filepath,elset,complexstiffness,dependencies,nonlinear,orientation,rtol,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SPRING';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=complexstiffness and 'NONE'!=complexstiffness and 'None'!=complexstiffness:
        line += ', COMPLEX STIFFNESS=' + complexstiffness

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=nonlinear and 'NONE'!=nonlinear and 'None'!=nonlinear:
        line += ', NONLINEAR=' + nonlinear

    if 'none'!=orientation and 'NONE'!=orientation and 'None'!=orientation:
        line += ', ORIENTATION=' + orientation

    if 'none'!=rtol and 'NONE'!=rtol and 'None'!=rtol:
        line += ', RTOL=' + rtol
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsradiate(filepath,amplitude,op,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SRADIATE';

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQstatic(filepath,adiabatic,allsdtol,continue,direct,factor,fullyplastic,longterm,riks,stabilize,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*STATIC';

    if 'none'!=adiabatic and 'NONE'!=adiabatic and 'None'!=adiabatic:
        line += ', ADIABATIC=' + adiabatic

    if 'none'!=allsdtol and 'NONE'!=allsdtol and 'None'!=allsdtol:
        line += ', ALLSDTOL=' + allsdtol

    if 'none'!=continue and 'NONE'!=continue and 'None'!=continue:
        line += ', CONTINUE=' + continue

    if 'none'!=direct and 'NONE'!=direct and 'None'!=direct:
        line += ', DIRECT=' + direct

    if 'none'!=factor and 'NONE'!=factor and 'None'!=factor:
        line += ', FACTOR=' + factor

    if 'none'!=fullyplastic and 'NONE'!=fullyplastic and 'None'!=fullyplastic:
        line += ', FULLY PLASTIC=' + fullyplastic

    if 'none'!=longterm and 'NONE'!=longterm and 'None'!=longterm:
        line += ', LONG TERM=' + longterm

    if 'none'!=riks and 'NONE'!=riks and 'None'!=riks:
        line += ', RIKS=' + riks

    if 'none'!=stabilize and 'NONE'!=stabilize and 'None'!=stabilize:
        line += ', STABILIZE=' + stabilize
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsteadystatecriteria(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*STEADY STATE CRITERIA';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsteadystatedetection(filepath,elset,sampling,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*STEADY STATE DETECTION';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=sampling and 'NONE'!=sampling and 'None'!=sampling:
        line += ', SAMPLING=' + sampling
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsteadystatedynamics(filepath,direct,subspaceprojection,dampingchange,frequencyscale,frictiondamping,interval,realonly,stiffnesschange,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*STEADY STATE DYNAMICS';

    if 'none'!=direct and 'NONE'!=direct and 'None'!=direct:
        line += ', DIRECT=' + direct

    if 'none'!=subspaceprojection and 'NONE'!=subspaceprojection and 'None'!=subspaceprojection:
        line += ', SUBSPACE PROJECTION=' + subspaceprojection

    if 'none'!=dampingchange and 'NONE'!=dampingchange and 'None'!=dampingchange:
        line += ', DAMPING CHANGE=' + dampingchange

    if 'none'!=frequencyscale and 'NONE'!=frequencyscale and 'None'!=frequencyscale:
        line += ', FREQUENCY SCALE=' + frequencyscale

    if 'none'!=frictiondamping and 'NONE'!=frictiondamping and 'None'!=frictiondamping:
        line += ', FRICTION DAMPING=' + frictiondamping

    if 'none'!=interval and 'NONE'!=interval and 'None'!=interval:
        line += ', INTERVAL=' + interval

    if 'none'!=realonly and 'NONE'!=realonly and 'None'!=realonly:
        line += ', REAL ONLY=' + realonly

    if 'none'!=stiffnesschange and 'NONE'!=stiffnesschange and 'None'!=stiffnesschange:
        line += ', STIFFNESS CHANGE=' + stiffnesschange
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsteadystatetransport(filepath,allsdtol,continue,direct,elset,factor,inertia,longterm,mullins,passbypass,stabilize,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*STEADY STATE TRANSPORT';

    if 'none'!=allsdtol and 'NONE'!=allsdtol and 'None'!=allsdtol:
        line += ', ALLSDTOL=' + allsdtol

    if 'none'!=continue and 'NONE'!=continue and 'None'!=continue:
        line += ', CONTINUE=' + continue

    if 'none'!=direct and 'NONE'!=direct and 'None'!=direct:
        line += ', DIRECT=' + direct

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=factor and 'NONE'!=factor and 'None'!=factor:
        line += ', FACTOR=' + factor

    if 'none'!=inertia and 'NONE'!=inertia and 'None'!=inertia:
        line += ', INERTIA=' + inertia

    if 'none'!=longterm and 'NONE'!=longterm and 'None'!=longterm:
        line += ', LONG TERM=' + longterm

    if 'none'!=mullins and 'NONE'!=mullins and 'None'!=mullins:
        line += ', MULLINS=' + mullins

    if 'none'!=passbypass and 'NONE'!=passbypass and 'None'!=passbypass:
        line += ', PASS BY PASS=' + passbypass

    if 'none'!=stabilize and 'NONE'!=stabilize and 'None'!=stabilize:
        line += ', STABILIZE=' + stabilize
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQstep(filepath,amplitude,convertsdi,dsa,extrapolation,inc,name,nlgeom,perturbation,solver,unsymm,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*STEP';

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=convertsdi and 'NONE'!=convertsdi and 'None'!=convertsdi:
        line += ', CONVERT SDI=' + convertsdi

    if 'none'!=dsa and 'NONE'!=dsa and 'None'!=dsa:
        line += ', DSA=' + dsa

    if 'none'!=extrapolation and 'NONE'!=extrapolation and 'None'!=extrapolation:
        line += ', EXTRAPOLATION=' + extrapolation

    if 'none'!=inc and 'NONE'!=inc and 'None'!=inc:
        line += ', INC=' + inc

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=nlgeom and 'NONE'!=nlgeom and 'None'!=nlgeom:
        line += ', NLGEOM=' + nlgeom

    if 'none'!=perturbation and 'NONE'!=perturbation and 'None'!=perturbation:
        line += ', PERTURBATION=' + perturbation

    if 'none'!=solver and 'NONE'!=solver and 'None'!=solver:
        line += ', SOLVER=' + solver

    if 'none'!=unsymm and 'NONE'!=unsymm and 'None'!=unsymm:
        line += ', UNSYMM=' + unsymm
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsubcycling(filepath,elset,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SUBCYCLING';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsubmodel(filepath,acoustictostructure,shelltosolid,shellthickness,absoluteexteriortolerance,exteriortolerance,globalelset,intersectiononly,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SUBMODEL';

    if 'none'!=acoustictostructure and 'NONE'!=acoustictostructure and 'None'!=acoustictostructure:
        line += ', ACOUSTIC TO STRUCTURE=' + acoustictostructure

    if 'none'!=shelltosolid and 'NONE'!=shelltosolid and 'None'!=shelltosolid:
        line += ', SHELL TO SOLID=' + shelltosolid

    if 'none'!=shellthickness and 'NONE'!=shellthickness and 'None'!=shellthickness:
        line += ', SHELL THICKNESS=' + shellthickness

    if 'none'!=absoluteexteriortolerance and 'NONE'!=absoluteexteriortolerance and 'None'!=absoluteexteriortolerance:
        line += ', ABSOLUTE EXTERIOR TOLERANCE=' + absoluteexteriortolerance

    if 'none'!=exteriortolerance and 'NONE'!=exteriortolerance and 'None'!=exteriortolerance:
        line += ', EXTERIOR TOLERANCE=' + exteriortolerance

    if 'none'!=globalelset and 'NONE'!=globalelset and 'None'!=globalelset:
        line += ', GLOBAL ELSET=' + globalelset

    if 'none'!=intersectiononly and 'NONE'!=intersectiononly and 'None'!=intersectiononly:
        line += ', INTERSECTION ONLY=' + intersectiononly

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsubstructurecopy(filepath,newtype,oldtype,newlibrary,oldlibrary,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SUBSTRUCTURE COPY';

    if 'none'!=newtype and 'NONE'!=newtype and 'None'!=newtype:
        line += ', NEW TYPE=' + newtype

    if 'none'!=oldtype and 'NONE'!=oldtype and 'None'!=oldtype:
        line += ', OLD TYPE=' + oldtype

    if 'none'!=newlibrary and 'NONE'!=newlibrary and 'None'!=newlibrary:
        line += ', NEW LIBRARY=' + newlibrary

    if 'none'!=oldlibrary and 'NONE'!=oldlibrary and 'None'!=oldlibrary:
        line += ', OLD LIBRARY=' + oldlibrary
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsubstructuredamping(filepath,alpha,beta,structural,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SUBSTRUCTURE DAMPING';

    if 'none'!=alpha and 'NONE'!=alpha and 'None'!=alpha:
        line += ', ALPHA=' + alpha

    if 'none'!=beta and 'NONE'!=beta and 'None'!=beta:
        line += ', BETA=' + beta

    if 'none'!=structural and 'NONE'!=structural and 'None'!=structural:
        line += ', STRUCTURAL=' + structural
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsubstructuredampingcontrols(filepath,structural,viscous,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SUBSTRUCTURE DAMPING CONTROLS';

    if 'none'!=structural and 'NONE'!=structural and 'None'!=structural:
        line += ', STRUCTURAL=' + structural

    if 'none'!=viscous and 'NONE'!=viscous and 'None'!=viscous:
        line += ', VISCOUS=' + viscous
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsubstructuredelete(filepath,type,library,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SUBSTRUCTURE DELETE';

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=library and 'NONE'!=library and 'None'!=library:
        line += ', LIBRARY=' + library
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsubstructuredirectory(filepath,library,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SUBSTRUCTURE DIRECTORY';

    if 'none'!=library and 'NONE'!=library and 'None'!=library:
        line += ', LIBRARY=' + library
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsubstructuregenerate(filepath,type,eigenproblem,elset,gravityload,library,massmatrix,nset,overwrite,propertyevaluation,recoverymatrix,structuraldampingmatrix,viscousdampingmatrix,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SUBSTRUCTURE GENERATE';

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=eigenproblem and 'NONE'!=eigenproblem and 'None'!=eigenproblem:
        line += ', EIGENPROBLEM=' + eigenproblem

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=gravityload and 'NONE'!=gravityload and 'None'!=gravityload:
        line += ', GRAVITY LOAD=' + gravityload

    if 'none'!=library and 'NONE'!=library and 'None'!=library:
        line += ', LIBRARY=' + library

    if 'none'!=massmatrix and 'NONE'!=massmatrix and 'None'!=massmatrix:
        line += ', MASS MATRIX=' + massmatrix

    if 'none'!=nset and 'NONE'!=nset and 'None'!=nset:
        line += ', NSET=' + nset

    if 'none'!=overwrite and 'NONE'!=overwrite and 'None'!=overwrite:
        line += ', OVERWRITE=' + overwrite

    if 'none'!=propertyevaluation and 'NONE'!=propertyevaluation and 'None'!=propertyevaluation:
        line += ', PROPERTY EVALUATION=' + propertyevaluation

    if 'none'!=recoverymatrix and 'NONE'!=recoverymatrix and 'None'!=recoverymatrix:
        line += ', RECOVERY MATRIX=' + recoverymatrix

    if 'none'!=structuraldampingmatrix and 'NONE'!=structuraldampingmatrix and 'None'!=structuraldampingmatrix:
        line += ', STRUCTURAL DAMPING MATRIX=' + structuraldampingmatrix

    if 'none'!=viscousdampingmatrix and 'NONE'!=viscousdampingmatrix and 'None'!=viscousdampingmatrix:
        line += ', VISCOUS DAMPING MATRIX=' + viscousdampingmatrix
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsubstructureloadcase(filepath,name,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SUBSTRUCTURE LOAD CASE';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsubstructurematrixoutput(filepath,filename,gravityload,mass,outputfile,recoverymatrix,sload,stiffness,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SUBSTRUCTURE MATRIX OUTPUT';

    if 'none'!=filename and 'NONE'!=filename and 'None'!=filename:
        line += ', FILE NAME=' + filename

    if 'none'!=gravityload and 'NONE'!=gravityload and 'None'!=gravityload:
        line += ', GRAVITY LOAD=' + gravityload

    if 'none'!=mass and 'NONE'!=mass and 'None'!=mass:
        line += ', MASS=' + mass

    if 'none'!=outputfile and 'NONE'!=outputfile and 'None'!=outputfile:
        line += ', OUTPUT FILE=' + outputfile

    if 'none'!=recoverymatrix and 'NONE'!=recoverymatrix and 'None'!=recoverymatrix:
        line += ', RECOVERY MATRIX=' + recoverymatrix

    if 'none'!=sload and 'NONE'!=sload and 'None'!=sload:
        line += ', SLOAD=' + sload

    if 'none'!=stiffness and 'NONE'!=stiffness and 'None'!=stiffness:
        line += ', STIFFNESS=' + stiffness
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsubstructuremodaldamping(filepath,structural,viscous,definition,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SUBSTRUCTURE MODAL DAMPING';

    if 'none'!=structural and 'NONE'!=structural and 'None'!=structural:
        line += ', STRUCTURAL=' + structural

    if 'none'!=viscous and 'NONE'!=viscous and 'None'!=viscous:
        line += ', VISCOUS=' + viscous

    if 'none'!=definition and 'NONE'!=definition and 'None'!=definition:
        line += ', DEFINITION=' + definition
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsubstructurepath(filepath,enterelement,leave,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SUBSTRUCTURE PATH';

    if 'none'!=enterelement and 'NONE'!=enterelement and 'None'!=enterelement:
        line += ', ENTER ELEMENT=' + enterelement

    if 'none'!=leave and 'NONE'!=leave and 'None'!=leave:
        line += ', LEAVE=' + leave
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsubstructureproperty(filepath,elset,positiontol,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SUBSTRUCTURE PROPERTY';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=positiontol and 'NONE'!=positiontol and 'None'!=positiontol:
        line += ', POSITION TOL=' + positiontol
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsurface(filepath,name,property,combine,crop,definition,filletradius,internal,regiontype,trim,type,maxratio,nooffset,nothick,scalethick,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SURFACE';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=property and 'NONE'!=property and 'None'!=property:
        line += ', PROPERTY=' + property

    if 'none'!=combine and 'NONE'!=combine and 'None'!=combine:
        line += ', COMBINE=' + combine

    if 'none'!=crop and 'NONE'!=crop and 'None'!=crop:
        line += ', CROP=' + crop

    if 'none'!=definition and 'NONE'!=definition and 'None'!=definition:
        line += ', DEFINITION=' + definition

    if 'none'!=filletradius and 'NONE'!=filletradius and 'None'!=filletradius:
        line += ', FILLET RADIUS=' + filletradius

    if 'none'!=internal and 'NONE'!=internal and 'None'!=internal:
        line += ', INTERNAL=' + internal

    if 'none'!=regiontype and 'NONE'!=regiontype and 'None'!=regiontype:
        line += ', REGION TYPE=' + regiontype

    if 'none'!=trim and 'NONE'!=trim and 'None'!=trim:
        line += ', TRIM=' + trim

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=maxratio and 'NONE'!=maxratio and 'None'!=maxratio:
        line += ', MAX RATIO=' + maxratio

    if 'none'!=nooffset and 'NONE'!=nooffset and 'None'!=nooffset:
        line += ', NO OFFSET=' + nooffset

    if 'none'!=nothick and 'NONE'!=nothick and 'None'!=nothick:
        line += ', NO THICK=' + nothick

    if 'none'!=scalethick and 'NONE'!=scalethick and 'None'!=scalethick:
        line += ', SCALE THICK=' + scalethick
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsurfacebehavior(filepath,augmentedlagrange,direct,penalty,noseparation,pressure-overclosure,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SURFACE BEHAVIOR';

    if 'none'!=augmentedlagrange and 'NONE'!=augmentedlagrange and 'None'!=augmentedlagrange:
        line += ', AUGMENTED LAGRANGE=' + augmentedlagrange

    if 'none'!=direct and 'NONE'!=direct and 'None'!=direct:
        line += ', DIRECT=' + direct

    if 'none'!=penalty and 'NONE'!=penalty and 'None'!=penalty:
        line += ', PENALTY=' + penalty

    if 'none'!=noseparation and 'NONE'!=noseparation and 'None'!=noseparation:
        line += ', NO SEPARATION=' + noseparation

    if 'none'!=pressure-overclosure and 'NONE'!=pressure-overclosure and 'None'!=pressure-overclosure:
        line += ', PRESSURE-OVERCLOSURE=' + pressure-overclosure
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsurfaceflaw(filepath,side,input,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SURFACE FLAW';

    if 'none'!=side and 'NONE'!=side and 'None'!=side:
        line += ', SIDE=' + side

    if 'none'!=input and 'NONE'!=input and 'None'!=input:
        line += ', INPUT=' + input
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsurfaceinteraction(filepath,name,depvar,padthickness,properties,trackingthickness,unsymm,user,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SURFACE INTERACTION';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=depvar and 'NONE'!=depvar and 'None'!=depvar:
        line += ', DEPVAR=' + depvar

    if 'none'!=padthickness and 'NONE'!=padthickness and 'None'!=padthickness:
        line += ', PAD THICKNESS=' + padthickness

    if 'none'!=properties and 'NONE'!=properties and 'None'!=properties:
        line += ', PROPERTIES=' + properties

    if 'none'!=trackingthickness and 'NONE'!=trackingthickness and 'None'!=trackingthickness:
        line += ', TRACKING THICKNESS=' + trackingthickness

    if 'none'!=unsymm and 'NONE'!=unsymm and 'None'!=unsymm:
        line += ', UNSYMM=' + unsymm

    if 'none'!=user and 'NONE'!=user and 'None'!=user:
        line += ', USER=' + user
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsurfaceoutput(filepath,surface,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SURFACE OUTPUT';

    if 'none'!=surface and 'NONE'!=surface and 'None'!=surface:
        line += ', SURFACE=' + surface
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsurfaceproperty(filepath,name,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SURFACE PROPERTY';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsurfacepropertyassignment(filepath,property,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SURFACE PROPERTY ASSIGNMENT';

    if 'none'!=property and 'NONE'!=property and 'None'!=property:
        line += ', PROPERTY=' + property
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsurfacesection(filepath,elset,aquavisualization,density,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SURFACE SECTION';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=aquavisualization and 'NONE'!=aquavisualization and 'None'!=aquavisualization:
        line += ', AQUAVISUALIZATION=' + aquavisualization

    if 'none'!=density and 'NONE'!=density and 'None'!=density:
        line += ', DENSITY=' + density
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsurfacesmoothing(filepath,name,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SURFACE SMOOTHING';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQswelling(filepath,dependencies,law,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SWELLING';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=law and 'NONE'!=law and 'None'!=law:
        line += ', LAW=' + law
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsymmetricmodelgeneration(filepath,periodic,reflect,revolve,elementoffset,filename,nodeoffset,tolerance,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SYMMETRIC MODEL GENERATION';

    if 'none'!=periodic and 'NONE'!=periodic and 'None'!=periodic:
        line += ', PERIODIC=' + periodic

    if 'none'!=reflect and 'NONE'!=reflect and 'None'!=reflect:
        line += ', REFLECT=' + reflect

    if 'none'!=revolve and 'NONE'!=revolve and 'None'!=revolve:
        line += ', REVOLVE=' + revolve

    if 'none'!=elementoffset and 'NONE'!=elementoffset and 'None'!=elementoffset:
        line += ', ELEMENT OFFSET=' + elementoffset

    if 'none'!=filename and 'NONE'!=filename and 'None'!=filename:
        line += ', FILE NAME=' + filename

    if 'none'!=nodeoffset and 'NONE'!=nodeoffset and 'None'!=nodeoffset:
        line += ', NODE OFFSET=' + nodeoffset

    if 'none'!=tolerance and 'NONE'!=tolerance and 'None'!=tolerance:
        line += ', TOLERANCE=' + tolerance
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsymmetricresultstransfer(filepath,step,inc,iteration,unbalancedstress,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SYMMETRIC RESULTS TRANSFER';

    if 'none'!=step and 'NONE'!=step and 'None'!=step:
        line += ', STEP=' + step

    if 'none'!=inc and 'NONE'!=inc and 'None'!=inc:
        line += ', INC=' + inc

    if 'none'!=iteration and 'NONE'!=iteration and 'None'!=iteration:
        line += ', ITERATION=' + iteration

    if 'none'!=unbalancedstress and 'NONE'!=unbalancedstress and 'None'!=unbalancedstress:
        line += ', UNBALANCED STRESS=' + unbalancedstress
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQsystem(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*SYSTEM';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQtemperature(filepath,amplitude,input,op,file,absoluteexteriortolerance,exteriortolerance,bstep,binc,estep,einc,btramp,drivingelsets,interpolate,midside,user,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*TEMPERATURE';

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=input and 'NONE'!=input and 'None'!=input:
        line += ', INPUT=' + input

    if 'none'!=op and 'NONE'!=op and 'None'!=op:
        line += ', OP=' + op

    if 'none'!=file and 'NONE'!=file and 'None'!=file:
        line += ', FILE=' + file

    if 'none'!=absoluteexteriortolerance and 'NONE'!=absoluteexteriortolerance and 'None'!=absoluteexteriortolerance:
        line += ', ABSOLUTE EXTERIOR TOLERANCE=' + absoluteexteriortolerance

    if 'none'!=exteriortolerance and 'NONE'!=exteriortolerance and 'None'!=exteriortolerance:
        line += ', EXTERIOR TOLERANCE=' + exteriortolerance

    if 'none'!=bstep and 'NONE'!=bstep and 'None'!=bstep:
        line += ', BSTEP=' + bstep

    if 'none'!=binc and 'NONE'!=binc and 'None'!=binc:
        line += ', BINC=' + binc

    if 'none'!=estep and 'NONE'!=estep and 'None'!=estep:
        line += ', ESTEP=' + estep

    if 'none'!=einc and 'NONE'!=einc and 'None'!=einc:
        line += ', EINC=' + einc

    if 'none'!=btramp and 'NONE'!=btramp and 'None'!=btramp:
        line += ', BTRAMP=' + btramp

    if 'none'!=drivingelsets and 'NONE'!=drivingelsets and 'None'!=drivingelsets:
        line += ', DRIVING ELSETS=' + drivingelsets

    if 'none'!=interpolate and 'NONE'!=interpolate and 'None'!=interpolate:
        line += ', INTERPOLATE=' + interpolate

    if 'none'!=midside and 'NONE'!=midside and 'None'!=midside:
        line += ', MIDSIDE=' + midside

    if 'none'!=user and 'NONE'!=user and 'None'!=user:
        line += ', USER=' + user
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQtensilefailure(filepath,dependencies,elementdeletion,pressure,shear,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*TENSILE FAILURE';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=elementdeletion and 'NONE'!=elementdeletion and 'None'!=elementdeletion:
        line += ', ELEMENT DELETION=' + elementdeletion

    if 'none'!=pressure and 'NONE'!=pressure and 'None'!=pressure:
        line += ', PRESSURE=' + pressure

    if 'none'!=shear and 'NONE'!=shear and 'None'!=shear:
        line += ', SHEAR=' + shear
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQtensioncutoff(filepath,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*TENSION CUTOFF';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQtensionstiffening(filepath,dependencies,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*TENSION STIFFENING';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQthermalexpansion(filepath,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*THERMAL EXPANSION';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQtie(filepath,name,positiontolerance,tiednset,adjust,constraintratio,cyclicsymmetry,norotation,nothickness,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*TIE';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=positiontolerance and 'NONE'!=positiontolerance and 'None'!=positiontolerance:
        line += ', POSITION TOLERANCE=' + positiontolerance

    if 'none'!=tiednset and 'NONE'!=tiednset and 'None'!=tiednset:
        line += ', TIED NSET=' + tiednset

    if 'none'!=adjust and 'NONE'!=adjust and 'None'!=adjust:
        line += ', ADJUST=' + adjust

    if 'none'!=constraintratio and 'NONE'!=constraintratio and 'None'!=constraintratio:
        line += ', CONSTRAINT RATIO=' + constraintratio

    if 'none'!=cyclicsymmetry and 'NONE'!=cyclicsymmetry and 'None'!=cyclicsymmetry:
        line += ', CYCLIC SYMMETRY=' + cyclicsymmetry

    if 'none'!=norotation and 'NONE'!=norotation and 'None'!=norotation:
        line += ', NO ROTATION=' + norotation

    if 'none'!=nothickness and 'NONE'!=nothickness and 'None'!=nothickness:
        line += ', NO THICKNESS=' + nothickness

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQtimepoints(filepath,name,generate,input,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*TIME POINTS';

    if 'none'!=name and 'NONE'!=name and 'None'!=name:
        line += ', NAME=' + name

    if 'none'!=generate and 'NONE'!=generate and 'None'!=generate:
        line += ', GENERATE=' + generate

    if 'none'!=input and 'NONE'!=input and 'None'!=input:
        line += ', INPUT=' + input
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQtorque(filepath,dependencies,elastic,linear,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*TORQUE';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=elastic and 'NONE'!=elastic and 'None'!=elastic:
        line += ', ELASTIC=' + elastic

    if 'none'!=linear and 'NONE'!=linear and 'None'!=linear:
        line += ', LINEAR=' + linear
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQtorqueprint(filepath,frequency,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*TORQUE PRINT';

    if 'none'!=frequency and 'NONE'!=frequency and 'None'!=frequency:
        line += ', FREQUENCY=' + frequency
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQtracerparticle(filepath,tracerset,particlebirthstages,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*TRACER PARTICLE';

    if 'none'!=tracerset and 'NONE'!=tracerset and 'None'!=tracerset:
        line += ', TRACER SET=' + tracerset

    if 'none'!=particlebirthstages and 'NONE'!=particlebirthstages and 'None'!=particlebirthstages:
        line += ', PARTICLE BIRTH STAGES=' + particlebirthstages
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQtransform(filepath,nset,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*TRANSFORM';

    if 'none'!=nset and 'NONE'!=nset and 'None'!=nset:
        line += ', NSET=' + nset

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQtransportequationsolver(filepath,convergence,diagnostics,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*TRANSPORT EQUATION SOLVER';

    if 'none'!=convergence and 'NONE'!=convergence and 'None'!=convergence:
        line += ', CONVERGENCE=' + convergence

    if 'none'!=diagnostics and 'NONE'!=diagnostics and 'None'!=diagnostics:
        line += ', DIAGNOSTICS=' + diagnostics

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQtransportvelocity(filepath,amplitude,user,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*TRANSPORT VELOCITY';

    if 'none'!=amplitude and 'NONE'!=amplitude and 'None'!=amplitude:
        line += ', AMPLITUDE=' + amplitude

    if 'none'!=user and 'NONE'!=user and 'None'!=user:
        line += ', USER=' + user
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQtransverseshearstiffness(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*TRANSVERSE SHEAR STIFFNESS';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQtriaxialtestdata(filepath,a,b,pt,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*TRIAXIAL TEST DATA';

    if 'none'!=a and 'NONE'!=a and 'None'!=a:
        line += ', A=' + a

    if 'none'!=b and 'NONE'!=b and 'None'!=b:
        line += ', B=' + b

    if 'none'!=pt and 'NONE'!=pt and 'None'!=pt:
        line += ', PT=' + pt
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQtrs(filepath,definition,properties,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*TRS';

    if 'none'!=definition and 'NONE'!=definition and 'None'!=definition:
        line += ', DEFINITION=' + definition

    if 'none'!=properties and 'NONE'!=properties and 'None'!=properties:
        line += ', PROPERTIES=' + properties
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQturbulencemodel(filepath,type,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*TURBULENCE MODEL';

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQuelproperty(filepath,elset,material,orientation,alpha,beta,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*UEL PROPERTY';

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=material and 'NONE'!=material and 'None'!=material:
        line += ', MATERIAL=' + material

    if 'none'!=orientation and 'NONE'!=orientation and 'None'!=orientation:
        line += ', ORIENTATION=' + orientation

    if 'none'!=alpha and 'NONE'!=alpha and 'None'!=alpha:
        line += ', ALPHA=' + alpha

    if 'none'!=beta and 'NONE'!=beta and 'None'!=beta:
        line += ', BETA=' + beta
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQundexchargeproperty(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*UNDEX CHARGE PROPERTY';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQuniaxial(filepath,component,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*UNIAXIAL';

    if 'none'!=component and 'NONE'!=component and 'None'!=component:
        line += ', COMPONENT=' + component
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQuniaxialtestdata(filepath,smooth,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*UNIAXIAL TEST DATA';

    if 'none'!=smooth and 'NONE'!=smooth and 'None'!=smooth:
        line += ', SMOOTH=' + smooth

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQunloadingdata(filepath,definition,ratedependent,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*UNLOADING DATA';

    if 'none'!=definition and 'NONE'!=definition and 'None'!=definition:
        line += ', DEFINITION=' + definition

    if 'none'!=ratedependent and 'NONE'!=ratedependent and 'None'!=ratedependent:
        line += ', RATE DEPENDENT=' + ratedependent
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQuserdefinedfield(filepath,properties,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*USER DEFINED FIELD';

    if 'none'!=properties and 'NONE'!=properties and 'None'!=properties:
        line += ', PROPERTIES=' + properties
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQuserelement(filepath,type,file,integration,tensor,oldelement,step,increment,linear,nodes,coordinates,unsymm,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*USER ELEMENT';

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=file and 'NONE'!=file and 'None'!=file:
        line += ', FILE=' + file

    if 'none'!=integration and 'NONE'!=integration and 'None'!=integration:
        line += ', INTEGRATION=' + integration

    if 'none'!=tensor and 'NONE'!=tensor and 'None'!=tensor:
        line += ', TENSOR=' + tensor

    if 'none'!=oldelement and 'NONE'!=oldelement and 'None'!=oldelement:
        line += ', OLD ELEMENT=' + oldelement

    if 'none'!=step and 'NONE'!=step and 'None'!=step:
        line += ', STEP=' + step

    if 'none'!=increment and 'NONE'!=increment and 'None'!=increment:
        line += ', INCREMENT=' + increment

    if 'none'!=linear and 'NONE'!=linear and 'None'!=linear:
        line += ', LINEAR=' + linear

    if 'none'!=nodes and 'NONE'!=nodes and 'None'!=nodes:
        line += ', NODES=' + nodes

    if 'none'!=coordinates and 'NONE'!=coordinates and 'None'!=coordinates:
        line += ', COORDINATES=' + coordinates

    if 'none'!=unsymm and 'NONE'!=unsymm and 'None'!=unsymm:
        line += ', UNSYMM=' + unsymm
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQusermaterial(filepath,constants,hybridformulation,type,unsymm,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*USER MATERIAL';

    if 'none'!=constants and 'NONE'!=constants and 'None'!=constants:
        line += ', CONSTANTS=' + constants

    if 'none'!=hybridformulation and 'NONE'!=hybridformulation and 'None'!=hybridformulation:
        line += ', HYBRID FORMULATION=' + hybridformulation

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=unsymm and 'NONE'!=unsymm and 'None'!=unsymm:
        line += ', UNSYMM=' + unsymm
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQuseroutputvariables(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*USER OUTPUT VARIABLES';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQvariablemassscaling(filepath,dt,elset,type,frequency,numberinterval,crosssectionnodes,extrudedlength,feedrate,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*VARIABLE MASS SCALING';

    if 'none'!=dt and 'NONE'!=dt and 'None'!=dt:
        line += ', DT=' + dt

    if 'none'!=elset and 'NONE'!=elset and 'None'!=elset:
        line += ', ELSET=' + elset

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=frequency and 'NONE'!=frequency and 'None'!=frequency:
        line += ', FREQUENCY=' + frequency

    if 'none'!=numberinterval and 'NONE'!=numberinterval and 'None'!=numberinterval:
        line += ', NUMBER INTERVAL=' + numberinterval

    if 'none'!=crosssectionnodes and 'NONE'!=crosssectionnodes and 'None'!=crosssectionnodes:
        line += ', CROSS SECTION NODES=' + crosssectionnodes

    if 'none'!=extrudedlength and 'NONE'!=extrudedlength and 'None'!=extrudedlength:
        line += ', EXTRUDED LENGTH=' + extrudedlength

    if 'none'!=feedrate and 'NONE'!=feedrate and 'None'!=feedrate:
        line += ', FEED RATE=' + feedrate
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQviewfactoroutput(filepath,cavity,frequency,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*VIEW FACTOR OUTPUT';

    if 'none'!=cavity and 'NONE'!=cavity and 'None'!=cavity:
        line += ', CAVITY=' + cavity

    if 'none'!=frequency and 'NONE'!=frequency and 'None'!=frequency:
        line += ', FREQUENCY=' + frequency
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQvisco(filepath,allsdtol,cetol,continue,creep,factor,stabilize,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*VISCO';

    if 'none'!=allsdtol and 'NONE'!=allsdtol and 'None'!=allsdtol:
        line += ', ALLSDTOL=' + allsdtol

    if 'none'!=cetol and 'NONE'!=cetol and 'None'!=cetol:
        line += ', CETOL=' + cetol

    if 'none'!=continue and 'NONE'!=continue and 'None'!=continue:
        line += ', CONTINUE=' + continue

    if 'none'!=creep and 'NONE'!=creep and 'None'!=creep:
        line += ', CREEP=' + creep

    if 'none'!=factor and 'NONE'!=factor and 'None'!=factor:
        line += ', FACTOR=' + factor

    if 'none'!=stabilize and 'NONE'!=stabilize and 'None'!=stabilize:
        line += ', STABILIZE=' + stabilize
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQviscoelastic(filepath,frequency,nonlinear,time,law,networkid,sratio,dependencies,preload,properties,type,errtol,nmax,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*VISCOELASTIC';

    if 'none'!=frequency and 'NONE'!=frequency and 'None'!=frequency:
        line += ', FREQUENCY=' + frequency

    if 'none'!=nonlinear and 'NONE'!=nonlinear and 'None'!=nonlinear:
        line += ', NONLINEAR=' + nonlinear

    if 'none'!=time and 'NONE'!=time and 'None'!=time:
        line += ', TIME=' + time

    if 'none'!=law and 'NONE'!=law and 'None'!=law:
        line += ', LAW=' + law

    if 'none'!=networkid and 'NONE'!=networkid and 'None'!=networkid:
        line += ', NETWORKID=' + networkid

    if 'none'!=sratio and 'NONE'!=sratio and 'None'!=sratio:
        line += ', SRATIO=' + sratio

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=preload and 'NONE'!=preload and 'None'!=preload:
        line += ', PRELOAD=' + preload

    if 'none'!=properties and 'NONE'!=properties and 'None'!=properties:
        line += ', PROPERTIES=' + properties

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=errtol and 'NONE'!=errtol and 'None'!=errtol:
        line += ', ERRTOL=' + errtol

    if 'none'!=nmax and 'NONE'!=nmax and 'None'!=nmax:
        line += ', NMAX=' + nmax
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQviscosity(filepath,definition,dependencies,properties,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*VISCOSITY';

    if 'none'!=definition and 'NONE'!=definition and 'None'!=definition:
        line += ', DEFINITION=' + definition

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=properties and 'NONE'!=properties and 'None'!=properties:
        line += ', PROPERTIES=' + properties
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQviscous(filepath,dependencies,law,time,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*VISCOUS';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies

    if 'none'!=law and 'NONE'!=law and 'None'!=law:
        line += ', LAW=' + law

    if 'none'!=time and 'NONE'!=time and 'None'!=time:
        line += ', TIME=' + time
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQvoidnucleation(filepath,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*VOID NUCLEATION';

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQvolumetrictestdata(filepath,smooth,dependencies,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*VOLUMETRIC TEST DATA';

    if 'none'!=smooth and 'NONE'!=smooth and 'None'!=smooth:
        line += ', SMOOTH=' + smooth

    if 'none'!=dependencies and 'NONE'!=dependencies and 'None'!=dependencies:
        line += ', DEPENDENCIES=' + dependencies
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQwave(filepath,input,type,waveperiod,datafile,minimum,quadratic,stochastic,properties,depvar,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*WAVE';

    if 'none'!=input and 'NONE'!=input and 'None'!=input:
        line += ', INPUT=' + input

    if 'none'!=type and 'NONE'!=type and 'None'!=type:
        line += ', TYPE=' + type

    if 'none'!=waveperiod and 'NONE'!=waveperiod and 'None'!=waveperiod:
        line += ', WAVE PERIOD=' + waveperiod

    if 'none'!=datafile and 'NONE'!=datafile and 'None'!=datafile:
        line += ', DATA FILE=' + datafile

    if 'none'!=minimum and 'NONE'!=minimum and 'None'!=minimum:
        line += ', MINIMUM=' + minimum

    if 'none'!=quadratic and 'NONE'!=quadratic and 'None'!=quadratic:
        line += ', QUADRATIC=' + quadratic

    if 'none'!=stochastic and 'NONE'!=stochastic and 'None'!=stochastic:
        line += ', STOCHASTIC=' + stochastic

    if 'none'!=properties and 'NONE'!=properties and 'None'!=properties:
        line += ', PROPERTIES=' + properties

    if 'none'!=depvar and 'NONE'!=depvar and 'None'!=depvar:
        line += ', DEPVAR=' + depvar
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')


def writeABQwind(filepath,data,comment):
with open(filepath,'a') as abq:
        abq.write('**' + '\n')
    line = '*WIND';
    abq.write(line + '\n')
    abq.write('** ' + str(comment) + '\n')
    for item in data:
        abq.write(str(item) + '\n')

