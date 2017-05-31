/*
* =====================================================================================
* 
* Copyright (c) 2016 Université de Lorraine & Luleå tekniska universitet
* Author: Luca Di Stasio <luca.distasio@gmail.com>
*                        <luca.distasio@ingpec.eu>
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
* =====================================================================================
*/

#ifndef INTERP_H
#define INTERP_H

#include <cmath>
#include <complex>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <omp.h>
#include <random>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <typeinfo>
#include <type_traits> // C++0x
//#include <tr1/type_traits> // C++03, use std::tr1
#include <vector>

using namespace std;

//============================================================================//
//============================================================================//
/*
    A class providing tools for the construction of ABAQUS input files
*/
//============================================================================//
//============================================================================//


//===================================================
//==================  HEADER  =======================
//===================================================
class writeABQinputFile {
//===================================================
//                  Variables
//===================================================
private:
    string filepath;                            // Absolute path of ABAQUS input file
//===================================================
//                      Methods
//===================================================
public:

  // Constructor (default)
  writeABQinputFile();

  //Destructor
  ~writeABQinputFile();

  // Constructor (init input file path)
  writeABQinputFile(string);

  void writeABQacousticcontribution(,string,,string,,string,,string,vector<string>,string);

  void writeABQacousticflowvelocity(,string,,string,,string,vector<string>,string);

  void writeABQacousticmedium(,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQacousticwaveformulation(,string,vector<string>,string);

  void writeABQadaptivemesh(,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQadaptivemeshconstraint(,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQadaptivemeshcontrols(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQadaptivemeshrefinement(,string,,string,,string,,string,vector<string>,string);

  void writeABQadjust(,string,,string,,string,vector<string>,string);

  void writeABQamplitude(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQanisotropichyperelastic(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQanneal(,string,vector<string>,string);

  void writeABQannealtemperature(,string,vector<string>,string);

  void writeABQaqua(,string,vector<string>,string);

  void writeABQassembly(,string,vector<string>,string);

  void writeABQasymmetric-axisymmetric(,string,,string,vector<string>,string);

  void writeABQaxial(,string,,string,,string,vector<string>,string);

  void writeABQbasemotion(,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQbaselinecorrection(,vector<string>,string);

  void writeABQbeamaddedinertia(,string,,string,vector<string>,string);

  void writeABQbeamfluidinertia(,string,,string,vector<string>,string);

  void writeABQbeamgeneralsection(,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQbeamsection(,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQbeamsectiongenerate(,vector<string>,string);

  void writeABQbeamsectionoffset(,vector<string>,string);

  void writeABQbiaxialtestdata(,string,,string,vector<string>,string);

  void writeABQblockage(,vector<string>,string);

  void writeABQbond(,vector<string>,string);

  void writeABQboundary(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQbrittlecracking(,string,,string,vector<string>,string);

  void writeABQbrittlefailure(,string,,string,vector<string>,string);

  void writeABQbrittleshear(,string,,string,vector<string>,string);

  void writeABQbuckle(,string,vector<string>,string);

  void writeABQbucklingenvelope(,vector<string>,string);

  void writeABQbucklinglength(,vector<string>,string);

  void writeABQbucklingreductionfactors(,string,,string,vector<string>,string);

  void writeABQbulkviscosity(,vector<string>,string);

  void writeABQcaddedmass(,vector<string>,string);

  void writeABQcapcreep(,string,,string,,string,,string,vector<string>,string);

  void writeABQcaphardening(,string,,string,vector<string>,string);

  void writeABQcapplasticity(,string,vector<string>,string);

  void writeABQcapacity(,string,,string,vector<string>,string);

  void writeABQcastironcompressionhardening(,string,vector<string>,string);

  void writeABQcastironplasticity(,string,vector<string>,string);

  void writeABQcastirontensionhardening(,string,vector<string>,string);

  void writeABQcavitydefinition(,string,,string,,string,,string,vector<string>,string);

  void writeABQcecharge(,string,,string,,string,,string,vector<string>,string);

  void writeABQcecurrent(,string,,string,vector<string>,string);

  void writeABQcentroid(,vector<string>,string);

  void writeABQcfd(,string,,string,,string,,string,vector<string>,string);

  void writeABQcfilm(,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQcflow(,string,,string,,string,vector<string>,string);

  void writeABQcflux(,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQchangefriction(,string,,string,,string,,string,vector<string>,string);

  void writeABQcharacteristiclength(,string,,string,,string,vector<string>,string);

  void writeABQclayhardening(,string,,string,,string,vector<string>,string);

  void writeABQclayplasticity(,string,,string,,string,vector<string>,string);

  void writeABQclearance(,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQcload(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQcohesivebehavior(,string,,string,,string,,string,vector<string>,string);

  void writeABQcohesivesection(,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQcombinedtestdata(,string,,string,vector<string>,string);

  void writeABQcomplexfrequency(,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQcompositemodaldamping(,string,,string,vector<string>,string);

  void writeABQconcrete(,string,vector<string>,string);

  void writeABQconcretecompressiondamage(,string,,string,vector<string>,string);

  void writeABQconcretecompressionhardening(,string,vector<string>,string);

  void writeABQconcretedamagedplasticity(,string,vector<string>,string);

  void writeABQconcretetensiondamage(,string,,string,,string,vector<string>,string);

  void writeABQconcretetensionstiffening(,string,,string,vector<string>,string);

  void writeABQconductivity(,string,,string,,string,vector<string>,string);

  void writeABQconnectorbehavior(,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQconnectorconstitutivereference(,vector<string>,string);

  void writeABQconnectordamageevolution(,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQconnectordamageinitiation(,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQconnectordamping(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQconnectorderivedcomponent(,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQconnectorelasticity(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQconnectorfailure(,string,,string,vector<string>,string);

  void writeABQconnectorfriction(,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQconnectorhardening(,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQconnectorload(,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQconnectorlock(,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQconnectormotion(,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQconnectorplasticity(,string,vector<string>,string);

  void writeABQconnectorpotential(,string,,string,vector<string>,string);

  void writeABQconnectorsection(,string,,string,,string,,string,vector<string>,string);

  void writeABQconnectorstop(,string,vector<string>,string);

  void writeABQconnectoruniaxialbehavior(,string,vector<string>,string);

  void writeABQconstraintcontrols(,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQcontact(,string,vector<string>,string);

  void writeABQcontactclearance(,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQcontactclearanceassignment(,vector<string>,string);

  void writeABQcontactcontrols(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQcontactcontrolsassignment(,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQcontactdamping(,string,,string,vector<string>,string);

  void writeABQcontactexclusions(,vector<string>,string);

  void writeABQcontactfile(,string,,string,,string,,string,vector<string>,string);

  void writeABQcontactformulation(,string,,string,vector<string>,string);

  void writeABQcontactinclusions(,string,vector<string>,string);

  void writeABQcontactinitializationassignment(,vector<string>,string);

  void writeABQcontactinitializationdata(,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQcontactinterference(,string,,string,,string,,string,vector<string>,string);

  void writeABQcontactoutput(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQcontactpair(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQcontactpermeability(,string,,string,,string,vector<string>,string);

  void writeABQcontactprint(,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQcontactpropertyassignment(,vector<string>,string);

  void writeABQcontactresponse(,string,,string,,string,vector<string>,string);

  void writeABQcontactstabilization(,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQcontourintegral(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQcontrols(,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQconwepchargeproperty(,vector<string>,string);

  void writeABQcorrelation(,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQco-simulation(,string,,string,,string,vector<string>,string);

  void writeABQco-simulationcontrols(,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQco-simulationregion(,string,,string,,string,vector<string>,string);

  void writeABQcoupledtemperature-displacement(,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQcoupledthermal-electrical(,string,,string,,string,,string,vector<string>,string);

  void writeABQcoupling(,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQcradiate(,string,,string,,string,vector<string>,string);

  void writeABQcreep(,string,,string,,string,vector<string>,string);

  void writeABQcreepstrainratecontrol(,string,,string,,string,,string,vector<string>,string);

  void writeABQcrushablefoam(,string,,string,vector<string>,string);

  void writeABQcrushablefoamhardening(,string,vector<string>,string);

  void writeABQcycledplastic(,vector<string>,string);

  void writeABQcyclic(,string,,string,vector<string>,string);

  void writeABQcyclichardening(,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQcyclicsymmetrymodel(,string,vector<string>,string);

  void writeABQdaddedmass(,vector<string>,string);

  void writeABQdempotential(,string,,string,vector<string>,string);

  void writeABQdamageevolution(,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQdamageinitiation(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQdamagestabilization(,vector<string>,string);

  void writeABQdamping(,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQdampingcontrols(,string,,string,,string,vector<string>,string);

  void writeABQdashpot(,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQdebond(,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQdecharge(,string,,string,,string,,string,vector<string>,string);

  void writeABQdecurrent(,string,,string,,string,,string,vector<string>,string);

  void writeABQdeformationplasticity(,vector<string>,string);

  void writeABQdensity(,string,,string,vector<string>,string);

  void writeABQdepvar(,string,,string,vector<string>,string);

  void writeABQdesigngradient(,string,,string,vector<string>,string);

  void writeABQdesignparameter(,vector<string>,string);

  void writeABQdesignresponse(,string,,string,vector<string>,string);

  void writeABQdetonationpoint(,vector<string>,string);

  void writeABQdflow(,string,,string,vector<string>,string);

  void writeABQdflux(,string,,string,vector<string>,string);

  void writeABQdiagnostics(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQdielectric(,string,,string,vector<string>,string);

  void writeABQdiffusivity(,string,,string,,string,vector<string>,string);

  void writeABQdirectcyclic(,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQdiscreteelasticity(,vector<string>,string);

  void writeABQdiscretesection(,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQdisplaybody(,string,vector<string>,string);

  void writeABQdistributing(,string,,string,vector<string>,string);

  void writeABQdistributingcoupling(,string,vector<string>,string);

  void writeABQdistribution(,string,,string,,string,,string,vector<string>,string);

  void writeABQdistributiontable(,string,vector<string>,string);

  void writeABQdload(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQdomaindecomposition(,string,vector<string>,string);

  void writeABQdragchain(,string,vector<string>,string);

  void writeABQdruckerprager(,string,,string,,string,,string,vector<string>,string);

  void writeABQdruckerpragercreep(,string,,string,,string,vector<string>,string);

  void writeABQdruckerpragerhardening(,string,,string,,string,vector<string>,string);

  void writeABQdsacontrols(,string,,string,,string,,string,vector<string>,string);

  void writeABQdsecharge(,string,,string,,string,,string,vector<string>,string);

  void writeABQdsecurrent(,string,,string,,string,,string,vector<string>,string);

  void writeABQdsflow(,string,,string,vector<string>,string);

  void writeABQdsflux(,string,,string,vector<string>,string);

  void writeABQdsload(,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQdynamic(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQdynamictemperature-displacement(,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQelfile(,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQelprint(,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQelastic(,string,,string,,string,,string,vector<string>,string);

  void writeABQelcopy(,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQelectricalconductivity(,string,,string,,string,vector<string>,string);

  void writeABQelectromagnetic(,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQelement(,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQelementmatrixoutput(,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQelementoperatoroutput(,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQelementoutput(,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQelementresponse(,string,vector<string>,string);

  void writeABQelgen(,string,,string,vector<string>,string);

  void writeABQelset(,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQembeddedelement(,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQemissivity(,string,vector<string>,string);

  void writeABQendassembly(,vector<string>,string);

  void writeABQendinstance(,vector<string>,string);

  void writeABQendloadcase(,vector<string>,string);

  void writeABQendpart(,vector<string>,string);

  void writeABQendstep(,vector<string>,string);

  void writeABQenergyequationsolver(,string,,string,,string,vector<string>,string);

  void writeABQenergyfile(,string,,string,vector<string>,string);

  void writeABQenergyoutput(,string,,string,,string,,string,vector<string>,string);

  void writeABQenergyprint(,string,,string,vector<string>,string);

  void writeABQenrichment(,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQenrichmentactivation(,string,,string,,string,vector<string>,string);

  void writeABQeos(,string,,string,,string,vector<string>,string);

  void writeABQeoscompaction(,vector<string>,string);

  void writeABQepjoint(,string,,string,,string,vector<string>,string);

  void writeABQequation(,string,vector<string>,string);

  void writeABQeulerianboundary(,string,,string,,string,vector<string>,string);

  void writeABQeulerianmeshmotion(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQeuleriansection(,string,,string,,string,,string,vector<string>,string);

  void writeABQexpansion(,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQextremeelementvalue(,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQextremenodevalue(,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQextremevalue(,string,vector<string>,string);

  void writeABQfabric(,string,,string,,string,vector<string>,string);

  void writeABQfailstrain(,string,vector<string>,string);

  void writeABQfailstress(,string,vector<string>,string);

  void writeABQfailureratios(,string,vector<string>,string);

  void writeABQfastener(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQfastenerproperty(,string,vector<string>,string);

  void writeABQfield(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQfileformat(,string,,string,vector<string>,string);

  void writeABQfileoutput(,string,,string,vector<string>,string);

  void writeABQfilm(,string,,string,,string,,string,vector<string>,string);

  void writeABQfilmproperty(,string,,string,vector<string>,string);

  void writeABQfilter(,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQfixedmassscaling(,string,,string,,string,,string,vector<string>,string);

  void writeABQflexiblebody(,string,vector<string>,string);

  void writeABQflow(,string,,string,vector<string>,string);

  void writeABQfluidbehavior(,string,,string,vector<string>,string);

  void writeABQfluidboundary(,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQfluidbulkmodulus(,string,vector<string>,string);

  void writeABQfluidcavity(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQfluiddensity(,vector<string>,string);

  void writeABQfluidexchange(,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQfluidexchangeactivation(,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQfluidexchangeproperty(,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQfluidexpansion(,string,,string,vector<string>,string);

  void writeABQfluidflux(,string,,string,vector<string>,string);

  void writeABQfluidinflator(,string,,string,vector<string>,string);

  void writeABQfluidinflatoractivation(,string,,string,,string,vector<string>,string);

  void writeABQfluidinflatormixture(,string,,string,vector<string>,string);

  void writeABQfluidinflatorproperty(,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQfluidleakoff(,string,,string,vector<string>,string);

  void writeABQfluidpipeconnectorloss(,string,,string,,string,vector<string>,string);

  void writeABQfluidpipeconnectorsection(,string,,string,vector<string>,string);

  void writeABQfluidpipeflowloss(,string,,string,vector<string>,string);

  void writeABQfluidpipesection(,string,,string,vector<string>,string);

  void writeABQfluidsection(,string,,string,vector<string>,string);

  void writeABQfoundation(,vector<string>,string);

  void writeABQfracturecriterion(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQframesection(,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQfrequency(,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQfriction(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQgap(,string,vector<string>,string);

  void writeABQgapconductance(,string,,string,,string,vector<string>,string);

  void writeABQgapelectricalconductance(,string,,string,,string,vector<string>,string);

  void writeABQgapflow(,string,,string,,string,vector<string>,string);

  void writeABQgapheatgeneration(,vector<string>,string);

  void writeABQgapradiation(,vector<string>,string);

  void writeABQgasspecificheat(,string,vector<string>,string);

  void writeABQgasketbehavior(,string,vector<string>,string);

  void writeABQgasketcontactarea(,string,vector<string>,string);

  void writeABQgasketelasticity(,string,,string,,string,vector<string>,string);

  void writeABQgasketsection(,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQgasketthicknessbehavior(,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQgel(,vector<string>,string);

  void writeABQgeostatic(,string,,string,vector<string>,string);

  void writeABQglobaldamping(,string,,string,,string,,string,vector<string>,string);

  void writeABQheading(,vector<string>,string);

  void writeABQheatgeneration(,vector<string>,string);

  void writeABQheattransfer(,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQheatcap(,string,,string,vector<string>,string);

  void writeABQhourglassstiffness(,vector<string>,string);

  void writeABQhyperelastic(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQhyperfoam(,string,,string,,string,,string,vector<string>,string);

  void writeABQhypoelastic(,string,vector<string>,string);

  void writeABQhysteresis(,vector<string>,string);

  void writeABQimpedance(,string,,string,,string,vector<string>,string);

  void writeABQimpedanceproperty(,string,,string,,string,vector<string>,string);

  void writeABQimperfection(,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQimport(,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQimportcontrols(,string,vector<string>,string);

  void writeABQimportelset(,string,vector<string>,string);

  void writeABQimportnset(,string,vector<string>,string);

  void writeABQincidentwave(,string,,string,,string,vector<string>,string);

  void writeABQincidentwavefluidproperty(,vector<string>,string);

  void writeABQincidentwaveinteraction(,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQincidentwaveinteractionproperty(,string,,string,vector<string>,string);

  void writeABQincidentwaveproperty(,string,,string,vector<string>,string);

  void writeABQincidentwavereflection(,vector<string>,string);

  void writeABQinclude(,string,,string,vector<string>,string);

  void writeABQincrementationoutput(,string,vector<string>,string);

  void writeABQinelasticheatfraction(,vector<string>,string);

  void writeABQinertiarelief(,string,,string,,string,vector<string>,string);

  void writeABQinitialconditions(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQinstance(,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQintegratedoutput(,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQintegratedoutputsection(,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQinterface(,string,,string,vector<string>,string);

  void writeABQits(,string,vector<string>,string);

  void writeABQjoint(,string,,string,vector<string>,string);

  void writeABQjointelasticity(,string,,string,,string,vector<string>,string);

  void writeABQjointplasticity(,string,,string,vector<string>,string);

  void writeABQjointedmaterial(,string,,string,,string,,string,vector<string>,string);

  void writeABQjouleheatfraction(,vector<string>,string);

  void writeABQkappa(,string,,string,vector<string>,string);

  void writeABQkinematic(,vector<string>,string);

  void writeABQkinematiccoupling(,string,,string,vector<string>,string);

  void writeABQlatentheat(,string,vector<string>,string);

  void writeABQloadcase(,string,vector<string>,string);

  void writeABQloadingdata(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQlowdensityfoam(,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQmagneticpermeability(,string,,string,,string,,string,vector<string>,string);

  void writeABQmagnetostatic(,string,,string,vector<string>,string);

  void writeABQmapsolution(,string,,string,,string,vector<string>,string);

  void writeABQmass(,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQmassadjust(,string,vector<string>,string);

  void writeABQmassdiffusion(,string,,string,,string,vector<string>,string);

  void writeABQmassflowrate(,string,,string,,string,,string,vector<string>,string);

  void writeABQmaterial(,string,,string,,string,,string,vector<string>,string);

  void writeABQmatrix(,string,,string,vector<string>,string);

  void writeABQmatrixassemble(,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQmatrixcheck(,string,vector<string>,string);

  void writeABQmatrixgenerate(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQmatrixinput(,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQmatrixoutput(,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQmediatransport(,vector<string>,string);

  void writeABQmembranesection(,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQmodaldamping(,string,,string,,string,,string,vector<string>,string);

  void writeABQmodaldynamic(,string,vector<string>,string);

  void writeABQmodalfile(,string,vector<string>,string);

  void writeABQmodaloutput(,string,vector<string>,string);

  void writeABQmodalprint(,string,vector<string>,string);

  void writeABQmodelchange(,string,,string,,string,,string,vector<string>,string);

  void writeABQmohrcoulomb(,string,,string,,string,vector<string>,string);

  void writeABQmohrcoulombhardening(,string,vector<string>,string);

  void writeABQmoistureswelling(,vector<string>,string);

  void writeABQmolecularweight(,vector<string>,string);

  void writeABQmomentumequationsolver(,string,,string,,string,vector<string>,string);

  void writeABQmonitor(,string,,string,,string,vector<string>,string);

  void writeABQmotion(,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQmpc(,string,,string,,string,vector<string>,string);

  void writeABQmullinseffect(,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQm1(,string,,string,,string,vector<string>,string);

  void writeABQm2(,string,,string,,string,vector<string>,string);

  void writeABQncopy(,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQnetworkstiffnessratio(,string,,string,vector<string>,string);

  void writeABQnfill(,string,,string,,string,,string,vector<string>,string);

  void writeABQngen(,string,,string,,string,vector<string>,string);

  void writeABQnmap(,string,,string,,string,vector<string>,string);

  void writeABQnocompression(,vector<string>,string);

  void writeABQnotension(,vector<string>,string);

  void writeABQnodalenergyrate(,string,,string,vector<string>,string);

  void writeABQnodalthickness(,string,,string,vector<string>,string);

  void writeABQnode(,string,,string,,string,vector<string>,string);

  void writeABQnodefile(,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQnodeoutput(,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQnodeprint(,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQnoderesponse(,string,vector<string>,string);

  void writeABQnonlinearbh(,string,,string,vector<string>,string);

  void writeABQnonstructuralmass(,string,,string,,string,vector<string>,string);

  void writeABQnormal(,string,vector<string>,string);

  void writeABQnset(,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQorientation(,string,,string,,string,,string,vector<string>,string);

  void writeABQornl(,string,,string,,string,,string,vector<string>,string);

  void writeABQoutput(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQparameter(,string,,string,,string,vector<string>,string);

  void writeABQparameterdependence(,string,,string,vector<string>,string);

  void writeABQparametershapevariation(,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQpart(,string,vector<string>,string);

  void writeABQparticlegenerator(,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQparticlegeneratorflow(,string,vector<string>,string);

  void writeABQparticlegeneratorinlet(,string,vector<string>,string);

  void writeABQparticlegeneratormixture(,vector<string>,string);

  void writeABQperfectlymatchedlayer(,string,,string,,string,vector<string>,string);

  void writeABQperiodic(,string,,string,vector<string>,string);

  void writeABQperiodicmedia(,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQpermanentmagnetization(,string,vector<string>,string);

  void writeABQpermeability(,string,,string,,string,vector<string>,string);

  void writeABQphysicalconstants(,string,,string,,string,,string,vector<string>,string);

  void writeABQpiezoelectric(,string,,string,vector<string>,string);

  void writeABQpipe-soilinteraction(,string,,string,vector<string>,string);

  void writeABQpipe-soilstiffness(,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQplanartestdata(,string,,string,vector<string>,string);

  void writeABQplastic(,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQplasticaxial(,vector<string>,string);

  void writeABQplasticm1(,vector<string>,string);

  void writeABQplasticm2(,vector<string>,string);

  void writeABQplastictorque(,vector<string>,string);

  void writeABQpmlcoefficient(,string,vector<string>,string);

  void writeABQporousbulkmoduli(,vector<string>,string);

  void writeABQporouselastic(,string,,string,vector<string>,string);

  void writeABQporousfailurecriteria(,vector<string>,string);

  void writeABQporousmetalplasticity(,string,,string,vector<string>,string);

  void writeABQpostoutput(,string,,string,,string,vector<string>,string);

  void writeABQpotential(,string,vector<string>,string);

  void writeABQpreprint(,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQpressureequationsolver(,string,,string,,string,vector<string>,string);

  void writeABQpressurepenetration(,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQpressurestress(,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQprestresshold(,vector<string>,string);

  void writeABQpre-tensionsection(,string,,string,,string,vector<string>,string);

  void writeABQprint(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQprobabilitydensityfunction(,string,,string,vector<string>,string);

  void writeABQpsd-definition(,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQradiate(,string,,string,,string,vector<string>,string);

  void writeABQradiationfile(,string,,string,,string,,string,vector<string>,string);

  void writeABQradiationoutput(,string,,string,,string,,string,vector<string>,string);

  void writeABQradiationprint(,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQradiationsymmetry(,string,vector<string>,string);

  void writeABQradiationviewfactor(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQrandomresponse(,vector<string>,string);

  void writeABQratedependent(,string,,string,vector<string>,string);

  void writeABQratios(,string,vector<string>,string);

  void writeABQreactionrate(,vector<string>,string);

  void writeABQrebar(,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQrebarlayer(,string,,string,vector<string>,string);

  void writeABQreflection(,string,vector<string>,string);

  void writeABQrelease(,string,vector<string>,string);

  void writeABQresponsespectrum(,string,,string,vector<string>,string);

  void writeABQrestart(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQretainednodaldofs(,string,vector<string>,string);

  void writeABQrigidbody(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQrigidsurface(,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQrotaryinertia(,string,,string,,string,,string,vector<string>,string);

  void writeABQsectioncontrols(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQsectionfile(,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQsectionorigin(,string,vector<string>,string);

  void writeABQsectionpoints(,vector<string>,string);

  void writeABQsectionprint(,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQselectcyclicsymmetrymodes(,string,,string,,string,vector<string>,string);

  void writeABQselecteigenmodes(,string,,string,vector<string>,string);

  void writeABQsfilm(,string,,string,,string,vector<string>,string);

  void writeABQsflow(,string,,string,vector<string>,string);

  void writeABQshearcenter(,vector<string>,string);

  void writeABQshearfailure(,string,,string,,string,vector<string>,string);

  void writeABQshearretention(,string,vector<string>,string);

  void writeABQsheartestdata(,string,vector<string>,string);

  void writeABQshellgeneralsection(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQshellsection(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQshelltosolidcoupling(,string,,string,,string,vector<string>,string);

  void writeABQsimpedance(,string,,string,,string,vector<string>,string);

  void writeABQsimplesheartestdata(,vector<string>,string);

  void writeABQslideline(,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQsload(,string,,string,vector<string>,string);

  void writeABQsofteningregularization(,string,,string,vector<string>,string);

  void writeABQsoils(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQsolidsection(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQsolubility(,string,vector<string>,string);

  void writeABQsolutiontechnique(,string,,string,vector<string>,string);

  void writeABQsolvercontrols(,string,,string,vector<string>,string);

  void writeABQsorption(,string,,string,vector<string>,string);

  void writeABQspecificheat(,string,,string,,string,vector<string>,string);

  void writeABQspectrum(,string,,string,,string,,string,vector<string>,string);

  void writeABQsphsurfacebehavior(,string,vector<string>,string);

  void writeABQspring(,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQsradiate(,string,,string,vector<string>,string);

  void writeABQstatic(,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQsteadystatecriteria(,vector<string>,string);

  void writeABQsteadystatedetection(,string,,string,vector<string>,string);

  void writeABQsteadystatedynamics(,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQsteadystatetransport(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQstep(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQsubcycling(,string,vector<string>,string);

  void writeABQsubmodel(,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQsubstructurecopy(,string,,string,,string,,string,vector<string>,string);

  void writeABQsubstructuredamping(,string,,string,,string,vector<string>,string);

  void writeABQsubstructuredampingcontrols(,string,,string,vector<string>,string);

  void writeABQsubstructuredelete(,string,,string,vector<string>,string);

  void writeABQsubstructuredirectory(,string,vector<string>,string);

  void writeABQsubstructuregenerate(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQsubstructureloadcase(,string,vector<string>,string);

  void writeABQsubstructurematrixoutput(,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQsubstructuremodaldamping(,string,,string,,string,vector<string>,string);

  void writeABQsubstructurepath(,string,,string,vector<string>,string);

  void writeABQsubstructureproperty(,string,,string,vector<string>,string);

  void writeABQsurface(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQsurfacebehavior(,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQsurfaceflaw(,string,,string,vector<string>,string);

  void writeABQsurfaceinteraction(,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQsurfaceoutput(,string,vector<string>,string);

  void writeABQsurfaceproperty(,string,vector<string>,string);

  void writeABQsurfacepropertyassignment(,string,vector<string>,string);

  void writeABQsurfacesection(,string,,string,,string,vector<string>,string);

  void writeABQsurfacesmoothing(,string,vector<string>,string);

  void writeABQswelling(,string,,string,vector<string>,string);

  void writeABQsymmetricmodelgeneration(,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQsymmetricresultstransfer(,string,,string,,string,,string,vector<string>,string);

  void writeABQsystem(,vector<string>,string);

  void writeABQtemperature(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQtensilefailure(,string,,string,,string,,string,vector<string>,string);

  void writeABQtensioncutoff(,string,vector<string>,string);

  void writeABQtensionstiffening(,string,,string,vector<string>,string);

  void writeABQthermalexpansion(,string,vector<string>,string);

  void writeABQtie(,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQtimepoints(,string,,string,,string,vector<string>,string);

  void writeABQtorque(,string,,string,,string,vector<string>,string);

  void writeABQtorqueprint(,string,vector<string>,string);

  void writeABQtracerparticle(,string,,string,vector<string>,string);

  void writeABQtransform(,string,,string,vector<string>,string);

  void writeABQtransportequationsolver(,string,,string,,string,vector<string>,string);

  void writeABQtransportvelocity(,string,,string,vector<string>,string);

  void writeABQtransverseshearstiffness(,vector<string>,string);

  void writeABQtriaxialtestdata(,string,,string,,string,vector<string>,string);

  void writeABQtrs(,string,,string,vector<string>,string);

  void writeABQturbulencemodel(,string,vector<string>,string);

  void writeABQuelproperty(,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQundexchargeproperty(,vector<string>,string);

  void writeABQuniaxial(,string,vector<string>,string);

  void writeABQuniaxialtestdata(,string,,string,vector<string>,string);

  void writeABQunloadingdata(,string,,string,vector<string>,string);

  void writeABQuserdefinedfield(,string,vector<string>,string);

  void writeABQuserelement(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQusermaterial(,string,,string,,string,,string,vector<string>,string);

  void writeABQuseroutputvariables(,vector<string>,string);

  void writeABQvariablemassscaling(,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQviewfactoroutput(,string,,string,vector<string>,string);

  void writeABQvisco(,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQviscoelastic(,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQviscosity(,string,,string,,string,vector<string>,string);

  void writeABQviscous(,string,,string,,string,vector<string>,string);

  void writeABQvoidnucleation(,string,vector<string>,string);

  void writeABQvolumetrictestdata(,string,,string,vector<string>,string);

  void writeABQwave(,string,,string,,string,,string,,string,,string,,string,,string,,string,vector<string>,string);

  void writeABQwind(,vector<string>,string);
}

