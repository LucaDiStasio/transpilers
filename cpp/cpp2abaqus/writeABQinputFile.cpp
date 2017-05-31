#include "writeABQinputFile.h"

//=====================  BODY  ==========================

writeABQinputFile::writeABQinputFile(){}

writeABQinputFile::writeABQinputFile(string abqInputFile){
    filepath = abqInputFile;
    ofstream abq;
    abq.open(filepath, ios::out);
    abq.close();
}

writeABQinputFile::~writeABQinputFile(){}

void writeABQinputFile::writeABQacousticcontribution(,string acousticnodes,,string name,,string type,,string structuralnodes,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*ACOUSTIC CONTRIBUTION";
    if("none"!=acousticnodes && "NONE"!=acousticnodes && "None"!=acousticnodes){
        line += ", ACOUSTIC NODES=" + acousticnodes;
    }
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=structuralnodes && "NONE"!=structuralnodes && "None"!=structuralnodes){
        line += ", STRUCTURAL NODES=" + structuralnodes;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQacousticflowvelocity(,string rotation,,string translation,,string amplitude,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*ACOUSTIC FLOW VELOCITY";
    if("none"!=rotation && "NONE"!=rotation && "None"!=rotation){
        line += ", ROTATION=" + rotation;
    }
    if("none"!=translation && "NONE"!=translation && "None"!=translation){
        line += ", TRANSLATION=" + translation;
    }
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQacousticmedium(,string bulkmodulus,,string cavitationlimit,,string complexbulkmodulus,,string complexdensity,,string porousmodel,,string volumetricdrag,,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*ACOUSTIC MEDIUM";
    if("none"!=bulkmodulus && "NONE"!=bulkmodulus && "None"!=bulkmodulus){
        line += ", BULK MODULUS=" + bulkmodulus;
    }
    if("none"!=cavitationlimit && "NONE"!=cavitationlimit && "None"!=cavitationlimit){
        line += ", CAVITATION LIMIT=" + cavitationlimit;
    }
    if("none"!=complexbulkmodulus && "NONE"!=complexbulkmodulus && "None"!=complexbulkmodulus){
        line += ", COMPLEX BULK MODULUS=" + complexbulkmodulus;
    }
    if("none"!=complexdensity && "NONE"!=complexdensity && "None"!=complexdensity){
        line += ", COMPLEX DENSITY=" + complexdensity;
    }
    if("none"!=porousmodel && "NONE"!=porousmodel && "None"!=porousmodel){
        line += ", POROUS MODEL=" + porousmodel;
    }
    if("none"!=volumetricdrag && "NONE"!=volumetricdrag && "None"!=volumetricdrag){
        line += ", VOLUMETRIC DRAG=" + volumetricdrag;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQacousticwaveformulation(,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*ACOUSTIC WAVE FORMULATION";
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQadaptivemesh(,string elset,,string op,,string controls,,string frequency,,string initialmeshsweeps,,string meshsweeps,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*ADAPTIVE MESH";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    if("none"!=controls && "NONE"!=controls && "None"!=controls){
        line += ", CONTROLS=" + controls;
    }
    if("none"!=frequency && "NONE"!=frequency && "None"!=frequency){
        line += ", FREQUENCY=" + frequency;
    }
    if("none"!=initialmeshsweeps && "NONE"!=initialmeshsweeps && "None"!=initialmeshsweeps){
        line += ", INITIAL MESH SWEEPS=" + initialmeshsweeps;
    }
    if("none"!=meshsweeps && "NONE"!=meshsweeps && "None"!=meshsweeps){
        line += ", MESH SWEEPS=" + meshsweeps;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQadaptivemeshconstraint(,string amplitude,,string constrainttype,,string op,,string type,,string user,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*ADAPTIVE MESH CONSTRAINT";
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=constrainttype && "NONE"!=constrainttype && "None"!=constrainttype){
        line += ", CONSTRAINT TYPE=" + constrainttype;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=user && "NONE"!=user && "None"!=user){
        line += ", USER=" + user;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQadaptivemeshcontrols(,string name,,string advection,,string curvaturerefinement,,string geometricenhancement,,string initialfeatureangle,,string meshconstraintangle,,string meshingpredictor,,string momentumadvection,,string reset,,string smoothingobjective,,string transitionfeatureangle,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*ADAPTIVE MESH CONTROLS";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=advection && "NONE"!=advection && "None"!=advection){
        line += ", ADVECTION=" + advection;
    }
    if("none"!=curvaturerefinement && "NONE"!=curvaturerefinement && "None"!=curvaturerefinement){
        line += ", CURVATURE REFINEMENT=" + curvaturerefinement;
    }
    if("none"!=geometricenhancement && "NONE"!=geometricenhancement && "None"!=geometricenhancement){
        line += ", GEOMETRIC ENHANCEMENT=" + geometricenhancement;
    }
    if("none"!=initialfeatureangle && "NONE"!=initialfeatureangle && "None"!=initialfeatureangle){
        line += ", INITIAL FEATURE ANGLE=" + initialfeatureangle;
    }
    if("none"!=meshconstraintangle && "NONE"!=meshconstraintangle && "None"!=meshconstraintangle){
        line += ", MESH CONSTRAINT ANGLE=" + meshconstraintangle;
    }
    if("none"!=meshingpredictor && "NONE"!=meshingpredictor && "None"!=meshingpredictor){
        line += ", MESHING PREDICTOR=" + meshingpredictor;
    }
    if("none"!=momentumadvection && "NONE"!=momentumadvection && "None"!=momentumadvection){
        line += ", MOMENTUM ADVECTION=" + momentumadvection;
    }
    if("none"!=reset && "NONE"!=reset && "None"!=reset){
        line += ", RESET=" + reset;
    }
    if("none"!=smoothingobjective && "NONE"!=smoothingobjective && "None"!=smoothingobjective){
        line += ", SMOOTHING OBJECTIVE=" + smoothingobjective;
    }
    if("none"!=transitionfeatureangle && "NONE"!=transitionfeatureangle && "None"!=transitionfeatureangle){
        line += ", TRANSITION FEATURE ANGLE=" + transitionfeatureangle;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQadaptivemeshrefinement(,string elset,,string level,,string coarsening,,string ratio,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*ADAPTIVE MESH REFINEMENT";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=level && "NONE"!=level && "None"!=level){
        line += ", LEVEL=" + level;
    }
    if("none"!=coarsening && "NONE"!=coarsening && "None"!=coarsening){
        line += ", COARSENING=" + coarsening;
    }
    if("none"!=ratio && "NONE"!=ratio && "None"!=ratio){
        line += ", RATIO=" + ratio;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQadjust(,string nodeset,,string surface,,string orientation,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*ADJUST";
    if("none"!=nodeset && "NONE"!=nodeset && "None"!=nodeset){
        line += ", NODE SET=" + nodeset;
    }
    if("none"!=surface && "NONE"!=surface && "None"!=surface){
        line += ", SURFACE=" + surface;
    }
    if("none"!=orientation && "NONE"!=orientation && "None"!=orientation){
        line += ", ORIENTATION=" + orientation;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQamplitude(,string name,,string definition,,string input,,string scalex,,string scaley,,string shiftx,,string shifty,,string time,,string value,,string fixedinterval,,string begin,,string smooth,,string properties,,string variables,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*AMPLITUDE";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=definition && "NONE"!=definition && "None"!=definition){
        line += ", DEFINITION=" + definition;
    }
    if("none"!=input && "NONE"!=input && "None"!=input){
        line += ", INPUT=" + input;
    }
    if("none"!=scalex && "NONE"!=scalex && "None"!=scalex){
        line += ", SCALEX=" + scalex;
    }
    if("none"!=scaley && "NONE"!=scaley && "None"!=scaley){
        line += ", SCALEY=" + scaley;
    }
    if("none"!=shiftx && "NONE"!=shiftx && "None"!=shiftx){
        line += ", SHIFTX=" + shiftx;
    }
    if("none"!=shifty && "NONE"!=shifty && "None"!=shifty){
        line += ", SHIFTY=" + shifty;
    }
    if("none"!=time && "NONE"!=time && "None"!=time){
        line += ", TIME=" + time;
    }
    if("none"!=value && "NONE"!=value && "None"!=value){
        line += ", VALUE=" + value;
    }
    if("none"!=fixedinterval && "NONE"!=fixedinterval && "None"!=fixedinterval){
        line += ", FIXED INTERVAL=" + fixedinterval;
    }
    if("none"!=begin && "NONE"!=begin && "None"!=begin){
        line += ", BEGIN=" + begin;
    }
    if("none"!=smooth && "NONE"!=smooth && "None"!=smooth){
        line += ", SMOOTH=" + smooth;
    }
    if("none"!=properties && "NONE"!=properties && "None"!=properties){
        line += ", PROPERTIES=" + properties;
    }
    if("none"!=variables && "NONE"!=variables && "None"!=variables){
        line += ", VARIABLES=" + variables;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQanisotropichyperelastic(,string fung-anisotropic,,string fung-orthotropic,,string holzapfel,,string user,,string formulation,,string type,,string dependencies,,string localdirections,,string moduli,,string properties,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*ANISOTROPIC HYPERELASTIC";
    if("none"!=fung-anisotropic && "NONE"!=fung-anisotropic && "None"!=fung-anisotropic){
        line += ", FUNG-ANISOTROPIC=" + fung-anisotropic;
    }
    if("none"!=fung-orthotropic && "NONE"!=fung-orthotropic && "None"!=fung-orthotropic){
        line += ", FUNG-ORTHOTROPIC=" + fung-orthotropic;
    }
    if("none"!=holzapfel && "NONE"!=holzapfel && "None"!=holzapfel){
        line += ", HOLZAPFEL=" + holzapfel;
    }
    if("none"!=user && "NONE"!=user && "None"!=user){
        line += ", USER=" + user;
    }
    if("none"!=formulation && "NONE"!=formulation && "None"!=formulation){
        line += ", FORMULATION=" + formulation;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=localdirections && "NONE"!=localdirections && "None"!=localdirections){
        line += ", LOCAL DIRECTIONS=" + localdirections;
    }
    if("none"!=moduli && "NONE"!=moduli && "None"!=moduli){
        line += ", MODULI=" + moduli;
    }
    if("none"!=properties && "NONE"!=properties && "None"!=properties){
        line += ", PROPERTIES=" + properties;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQanneal(,string temperature,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*ANNEAL";
    if("none"!=temperature && "NONE"!=temperature && "None"!=temperature){
        line += ", TEMPERATURE=" + temperature;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQannealtemperature(,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*ANNEAL TEMPERATURE";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQaqua(,string input,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*AQUA";
    if("none"!=input && "NONE"!=input && "None"!=input){
        line += ", INPUT=" + input;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQassembly(,string name,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*ASSEMBLY";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQasymmetric-axisymmetric(,string angle,,string mode,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*ASYMMETRIC-AXISYMMETRIC";
    if("none"!=angle && "NONE"!=angle && "None"!=angle){
        line += ", ANGLE=" + angle;
    }
    if("none"!=mode && "NONE"!=mode && "None"!=mode){
        line += ", MODE=" + mode;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQaxial(,string dependencies,,string elastic,,string linear,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*AXIAL";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=elastic && "NONE"!=elastic && "None"!=elastic){
        line += ", ELASTIC=" + elastic;
    }
    if("none"!=linear && "NONE"!=linear && "None"!=linear){
        line += ", LINEAR=" + linear;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQbasemotion(,string dof,,string amplitude,,string basename,,string loadcase,,string scale,,string type,,string imaginary,,string real,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*BASE MOTION";
    if("none"!=dof && "NONE"!=dof && "None"!=dof){
        line += ", DOF=" + dof;
    }
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=basename && "NONE"!=basename && "None"!=basename){
        line += ", BASE NAME=" + basename;
    }
    if("none"!=loadcase && "NONE"!=loadcase && "None"!=loadcase){
        line += ", LOAD CASE=" + loadcase;
    }
    if("none"!=scale && "NONE"!=scale && "None"!=scale){
        line += ", SCALE=" + scale;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=imaginary && "NONE"!=imaginary && "None"!=imaginary){
        line += ", IMAGINARY=" + imaginary;
    }
    if("none"!=real && "NONE"!=real && "None"!=real){
        line += ", REAL=" + real;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQbaselinecorrection(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*BASELINE CORRECTION";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQbeamaddedinertia(,string alpha,,string composite,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*BEAM ADDED INERTIA";
    if("none"!=alpha && "NONE"!=alpha && "None"!=alpha){
        line += ", ALPHA=" + alpha;
    }
    if("none"!=composite && "NONE"!=composite && "None"!=composite){
        line += ", COMPOSITE=" + composite;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQbeamfluidinertia(,string full,,string half,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*BEAM FLUID INERTIA";
    if("none"!=full && "NONE"!=full && "None"!=full){
        line += ", FULL=" + full;
    }
    if("none"!=half && "NONE"!=half && "None"!=half){
        line += ", HALF=" + half;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQbeamgeneralsection(,string elset,,string density,,string dependencies,,string lumped,,string poisson,,string rotaryinertia,,string section,,string taper,,string zero,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*BEAM GENERAL SECTION";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=density && "NONE"!=density && "None"!=density){
        line += ", DENSITY=" + density;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=lumped && "NONE"!=lumped && "None"!=lumped){
        line += ", LUMPED=" + lumped;
    }
    if("none"!=poisson && "NONE"!=poisson && "None"!=poisson){
        line += ", POISSON=" + poisson;
    }
    if("none"!=rotaryinertia && "NONE"!=rotaryinertia && "None"!=rotaryinertia){
        line += ", ROTARY INERTIA=" + rotaryinertia;
    }
    if("none"!=section && "NONE"!=section && "None"!=section){
        line += ", SECTION=" + section;
    }
    if("none"!=taper && "NONE"!=taper && "None"!=taper){
        line += ", TAPER=" + taper;
    }
    if("none"!=zero && "NONE"!=zero && "None"!=zero){
        line += ", ZERO=" + zero;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQbeamsection(,string elset,,string material,,string section,,string lumped,,string poisson,,string rotaryinertia,,string temperature,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*BEAM SECTION";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=material && "NONE"!=material && "None"!=material){
        line += ", MATERIAL=" + material;
    }
    if("none"!=section && "NONE"!=section && "None"!=section){
        line += ", SECTION=" + section;
    }
    if("none"!=lumped && "NONE"!=lumped && "None"!=lumped){
        line += ", LUMPED=" + lumped;
    }
    if("none"!=poisson && "NONE"!=poisson && "None"!=poisson){
        line += ", POISSON=" + poisson;
    }
    if("none"!=rotaryinertia && "NONE"!=rotaryinertia && "None"!=rotaryinertia){
        line += ", ROTARY INERTIA=" + rotaryinertia;
    }
    if("none"!=temperature && "NONE"!=temperature && "None"!=temperature){
        line += ", TEMPERATURE=" + temperature;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQbeamsectiongenerate(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*BEAM SECTION GENERATE";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQbeamsectionoffset(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*BEAM SECTION OFFSET";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQbiaxialtestdata(,string smooth,,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*BIAXIAL TEST DATA";
    if("none"!=smooth && "NONE"!=smooth && "None"!=smooth){
        line += ", SMOOTH=" + smooth;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQblockage(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*BLOCKAGE";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQbond(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*BOND";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQboundary(,string amplitude,,string blocking,,string fixed,,string loadcase,,string name,,string op,,string phantom,,string regiontype,,string type,,string user,,string imaginary,,string real,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*BOUNDARY";
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=blocking && "NONE"!=blocking && "None"!=blocking){
        line += ", BLOCKING=" + blocking;
    }
    if("none"!=fixed && "NONE"!=fixed && "None"!=fixed){
        line += ", FIXED=" + fixed;
    }
    if("none"!=loadcase && "NONE"!=loadcase && "None"!=loadcase){
        line += ", LOAD CASE=" + loadcase;
    }
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    if("none"!=phantom && "NONE"!=phantom && "None"!=phantom){
        line += ", PHANTOM=" + phantom;
    }
    if("none"!=regiontype && "NONE"!=regiontype && "None"!=regiontype){
        line += ", REGION TYPE=" + regiontype;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=user && "NONE"!=user && "None"!=user){
        line += ", USER=" + user;
    }
    if("none"!=imaginary && "NONE"!=imaginary && "None"!=imaginary){
        line += ", IMAGINARY=" + imaginary;
    }
    if("none"!=real && "NONE"!=real && "None"!=real){
        line += ", REAL=" + real;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQbrittlecracking(,string dependencies,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*BRITTLE CRACKING";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQbrittlefailure(,string cracks,,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*BRITTLE FAILURE";
    if("none"!=cracks && "NONE"!=cracks && "None"!=cracks){
        line += ", CRACKS=" + cracks;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQbrittleshear(,string dependencies,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*BRITTLE SHEAR";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQbuckle(,string eigensolver,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*BUCKLE";
    if("none"!=eigensolver && "NONE"!=eigensolver && "None"!=eigensolver){
        line += ", EIGENSOLVER=" + eigensolver;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQbucklingenvelope(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*BUCKLING ENVELOPE";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQbucklinglength(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*BUCKLING LENGTH";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQbucklingreductionfactors(,string axis1,,string axis2,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*BUCKLING REDUCTION FACTORS";
    if("none"!=axis1 && "NONE"!=axis1 && "None"!=axis1){
        line += ", AXIS1=" + axis1;
    }
    if("none"!=axis2 && "NONE"!=axis2 && "None"!=axis2){
        line += ", AXIS2=" + axis2;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQbulkviscosity(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*BULK VISCOSITY";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcaddedmass(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*C ADDED MASS";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcapcreep(,string dependencies,,string law,,string mechanism,,string time,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CAP CREEP";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=law && "NONE"!=law && "None"!=law){
        line += ", LAW=" + law;
    }
    if("none"!=mechanism && "NONE"!=mechanism && "None"!=mechanism){
        line += ", MECHANISM=" + mechanism;
    }
    if("none"!=time && "NONE"!=time && "None"!=time){
        line += ", TIME=" + time;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcaphardening(,string dependencies,,string scalestress,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CAP HARDENING";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=scalestress && "NONE"!=scalestress && "None"!=scalestress){
        line += ", SCALESTRESS=" + scalestress;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcapplasticity(,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CAP PLASTICITY";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcapacity(,string type,,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CAPACITY";
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcastironcompressionhardening(,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CAST IRON COMPRESSION HARDENING";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcastironplasticity(,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CAST IRON PLASTICITY";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcastirontensionhardening(,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CAST IRON TENSION HARDENING";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcavitydefinition(,string name,,string ambienttemp,,string paralleldecomposition,,string setproperty,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CAVITY DEFINITION";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=ambienttemp && "NONE"!=ambienttemp && "None"!=ambienttemp){
        line += ", AMBIENT TEMP=" + ambienttemp;
    }
    if("none"!=paralleldecomposition && "NONE"!=paralleldecomposition && "None"!=paralleldecomposition){
        line += ", PARALLEL DECOMPOSITION=" + paralleldecomposition;
    }
    if("none"!=setproperty && "NONE"!=setproperty && "None"!=setproperty){
        line += ", SET PROPERTY=" + setproperty;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcecharge(,string amplitude,,string op,,string imaginary,,string real,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CECHARGE";
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    if("none"!=imaginary && "NONE"!=imaginary && "None"!=imaginary){
        line += ", IMAGINARY=" + imaginary;
    }
    if("none"!=real && "NONE"!=real && "None"!=real){
        line += ", REAL=" + real;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcecurrent(,string amplitude,,string op,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CECURRENT";
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcentroid(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CENTROID";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcfd(,string incompressiblenavierstokes,,string energyequation,,string incrementation,,string steadystate,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CFD";
    if("none"!=incompressiblenavierstokes && "NONE"!=incompressiblenavierstokes && "None"!=incompressiblenavierstokes){
        line += ", INCOMPRESSIBLE NAVIER STOKES=" + incompressiblenavierstokes;
    }
    if("none"!=energyequation && "NONE"!=energyequation && "None"!=energyequation){
        line += ", ENERGY EQUATION=" + energyequation;
    }
    if("none"!=incrementation && "NONE"!=incrementation && "None"!=incrementation){
        line += ", INCREMENTATION=" + incrementation;
    }
    if("none"!=steadystate && "NONE"!=steadystate && "None"!=steadystate){
        line += ", STEADY STATE=" + steadystate;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcfilm(,string amplitude,,string filmamplitude,,string op,,string regiontype,,string user,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CFILM";
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=filmamplitude && "NONE"!=filmamplitude && "None"!=filmamplitude){
        line += ", FILM AMPLITUDE=" + filmamplitude;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    if("none"!=regiontype && "NONE"!=regiontype && "None"!=regiontype){
        line += ", REGION TYPE=" + regiontype;
    }
    if("none"!=user && "NONE"!=user && "None"!=user){
        line += ", USER=" + user;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcflow(,string amplitude,,string op,,string phantom,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CFLOW";
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    if("none"!=phantom && "NONE"!=phantom && "None"!=phantom){
        line += ", PHANTOM=" + phantom;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcflux(,string file,,string amplitude,,string inc,,string op,,string regiontype,,string step,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CFLUX";
    if("none"!=file && "NONE"!=file && "None"!=file){
        line += ", FILE=" + file;
    }
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=inc && "NONE"!=inc && "None"!=inc){
        line += ", INC=" + inc;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    if("none"!=regiontype && "NONE"!=regiontype && "None"!=regiontype){
        line += ", REGION TYPE=" + regiontype;
    }
    if("none"!=step && "NONE"!=step && "None"!=step){
        line += ", STEP=" + step;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQchangefriction(,string elset,,string interaction,,string amplitude,,string reset,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CHANGE FRICTION";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=interaction && "NONE"!=interaction && "None"!=interaction){
        line += ", INTERACTION=" + interaction;
    }
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=reset && "NONE"!=reset && "None"!=reset){
        line += ", RESET=" + reset;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcharacteristiclength(,string definition,,string components,,string properties,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CHARACTERISTIC LENGTH";
    if("none"!=definition && "NONE"!=definition && "None"!=definition){
        line += ", DEFINITION=" + definition;
    }
    if("none"!=components && "NONE"!=components && "None"!=components){
        line += ", COMPONENTS=" + components;
    }
    if("none"!=properties && "NONE"!=properties && "None"!=properties){
        line += ", PROPERTIES=" + properties;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQclayhardening(,string dependencies,,string sr,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CLAY HARDENING";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=sr && "NONE"!=sr && "None"!=sr){
        line += ", SR=" + sr;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQclayplasticity(,string dependencies,,string hardening,,string intercept,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CLAY PLASTICITY";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=hardening && "NONE"!=hardening && "None"!=hardening){
        line += ", HARDENING=" + hardening;
    }
    if("none"!=intercept && "NONE"!=intercept && "None"!=intercept){
        line += ", INTERCEPT=" + intercept;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQclearance(,string cpset,,string master,,string slave,,string tabular,,string value,,string bolt,,string input,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CLEARANCE";
    if("none"!=cpset && "NONE"!=cpset && "None"!=cpset){
        line += ", CPSET=" + cpset;
    }
    if("none"!=master && "NONE"!=master && "None"!=master){
        line += ", MASTER=" + master;
    }
    if("none"!=slave && "NONE"!=slave && "None"!=slave){
        line += ", SLAVE=" + slave;
    }
    if("none"!=tabular && "NONE"!=tabular && "None"!=tabular){
        line += ", TABULAR=" + tabular;
    }
    if("none"!=value && "NONE"!=value && "None"!=value){
        line += ", VALUE=" + value;
    }
    if("none"!=bolt && "NONE"!=bolt && "None"!=bolt){
        line += ", BOLT=" + bolt;
    }
    if("none"!=input && "NONE"!=input && "None"!=input){
        line += ", INPUT=" + input;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcload(,string file,,string cyclicmode,,string amplitude,,string follower,,string inc,,string loadcase,,string op,,string regiontype,,string step,,string imaginary,,string real,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CLOAD";
    if("none"!=file && "NONE"!=file && "None"!=file){
        line += ", FILE=" + file;
    }
    if("none"!=cyclicmode && "NONE"!=cyclicmode && "None"!=cyclicmode){
        line += ", CYCLIC MODE=" + cyclicmode;
    }
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=follower && "NONE"!=follower && "None"!=follower){
        line += ", FOLLOWER=" + follower;
    }
    if("none"!=inc && "NONE"!=inc && "None"!=inc){
        line += ", INC=" + inc;
    }
    if("none"!=loadcase && "NONE"!=loadcase && "None"!=loadcase){
        line += ", LOAD CASE=" + loadcase;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    if("none"!=regiontype && "NONE"!=regiontype && "None"!=regiontype){
        line += ", REGION TYPE=" + regiontype;
    }
    if("none"!=step && "NONE"!=step && "None"!=step){
        line += ", STEP=" + step;
    }
    if("none"!=imaginary && "NONE"!=imaginary && "None"!=imaginary){
        line += ", IMAGINARY=" + imaginary;
    }
    if("none"!=real && "NONE"!=real && "None"!=real){
        line += ", REAL=" + real;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcohesivebehavior(,string dependencies,,string eligibility,,string repeatedcontacts,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*COHESIVE BEHAVIOR";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=eligibility && "NONE"!=eligibility && "None"!=eligibility){
        line += ", ELIGIBILITY=" + eligibility;
    }
    if("none"!=repeatedcontacts && "NONE"!=repeatedcontacts && "None"!=repeatedcontacts){
        line += ", REPEATED CONTACTS=" + repeatedcontacts;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcohesivesection(,string elset,,string material,,string response,,string controls,,string orientation,,string stackdirection,,string thickness,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*COHESIVE SECTION";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=material && "NONE"!=material && "None"!=material){
        line += ", MATERIAL=" + material;
    }
    if("none"!=response && "NONE"!=response && "None"!=response){
        line += ", RESPONSE=" + response;
    }
    if("none"!=controls && "NONE"!=controls && "None"!=controls){
        line += ", CONTROLS=" + controls;
    }
    if("none"!=orientation && "NONE"!=orientation && "None"!=orientation){
        line += ", ORIENTATION=" + orientation;
    }
    if("none"!=stackdirection && "NONE"!=stackdirection && "None"!=stackdirection){
        line += ", STACK DIRECTION=" + stackdirection;
    }
    if("none"!=thickness && "NONE"!=thickness && "None"!=thickness){
        line += ", THICKNESS=" + thickness;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcombinedtestdata(,string shrinf,,string volinf,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*COMBINED TEST DATA";
    if("none"!=shrinf && "NONE"!=shrinf && "None"!=shrinf){
        line += ", SHRINF=" + shrinf;
    }
    if("none"!=volinf && "NONE"!=volinf && "None"!=volinf){
        line += ", VOLINF=" + volinf;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcomplexfrequency(,string frictiondamping,,string normalization,,string propertyevaluation,,string unstablemodesonly,,string lefteigenvectors,,string righteigenvectors,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*COMPLEX FREQUENCY";
    if("none"!=frictiondamping && "NONE"!=frictiondamping && "None"!=frictiondamping){
        line += ", FRICTION DAMPING=" + frictiondamping;
    }
    if("none"!=normalization && "NONE"!=normalization && "None"!=normalization){
        line += ", NORMALIZATION=" + normalization;
    }
    if("none"!=propertyevaluation && "NONE"!=propertyevaluation && "None"!=propertyevaluation){
        line += ", PROPERTY EVALUATION=" + propertyevaluation;
    }
    if("none"!=unstablemodesonly && "NONE"!=unstablemodesonly && "None"!=unstablemodesonly){
        line += ", UNSTABLE MODES ONLY=" + unstablemodesonly;
    }
    if("none"!=lefteigenvectors && "NONE"!=lefteigenvectors && "None"!=lefteigenvectors){
        line += ", LEFT EIGENVECTORS=" + lefteigenvectors;
    }
    if("none"!=righteigenvectors && "NONE"!=righteigenvectors && "None"!=righteigenvectors){
        line += ", RIGHT EIGENVECTORS=" + righteigenvectors;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcompositemodaldamping(,string massmatrixinput,,string stiffnessmatrixinput,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*COMPOSITE MODAL DAMPING";
    if("none"!=massmatrixinput && "NONE"!=massmatrixinput && "None"!=massmatrixinput){
        line += ", MASS MATRIX INPUT=" + massmatrixinput;
    }
    if("none"!=stiffnessmatrixinput && "NONE"!=stiffnessmatrixinput && "None"!=stiffnessmatrixinput){
        line += ", STIFFNESS MATRIX INPUT=" + stiffnessmatrixinput;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQconcrete(,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONCRETE";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQconcretecompressiondamage(,string dependencies,,string tensionrecovery,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONCRETE COMPRESSION DAMAGE";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=tensionrecovery && "NONE"!=tensionrecovery && "None"!=tensionrecovery){
        line += ", TENSION RECOVERY=" + tensionrecovery;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQconcretecompressionhardening(,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONCRETE COMPRESSION HARDENING";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQconcretedamagedplasticity(,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONCRETE DAMAGED PLASTICITY";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQconcretetensiondamage(,string compressionrecovery,,string dependencies,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONCRETE TENSION DAMAGE";
    if("none"!=compressionrecovery && "NONE"!=compressionrecovery && "None"!=compressionrecovery){
        line += ", COMPRESSION RECOVERY=" + compressionrecovery;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQconcretetensionstiffening(,string dependencies,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONCRETE TENSION STIFFENING";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQconductivity(,string dependencies,,string porefluid,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONDUCTIVITY";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=porefluid && "NONE"!=porefluid && "None"!=porefluid){
        line += ", PORE FLUID=" + porefluid;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQconnectorbehavior(,string name,,string extrapolation,,string integration,,string regularize,,string rtol,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONNECTOR BEHAVIOR";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=extrapolation && "NONE"!=extrapolation && "None"!=extrapolation){
        line += ", EXTRAPOLATION=" + extrapolation;
    }
    if("none"!=integration && "NONE"!=integration && "None"!=integration){
        line += ", INTEGRATION=" + integration;
    }
    if("none"!=regularize && "NONE"!=regularize && "None"!=regularize){
        line += ", REGULARIZE=" + regularize;
    }
    if("none"!=rtol && "NONE"!=rtol && "None"!=rtol){
        line += ", RTOL=" + rtol;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQconnectorconstitutivereference(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONNECTOR CONSTITUTIVE REFERENCE";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQconnectordamageevolution(,string type,,string affectedcomponents,,string degradation,,string dependencies,,string extrapolation,,string regularize,,string rtol,,string softening,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONNECTOR DAMAGE EVOLUTION";
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=affectedcomponents && "NONE"!=affectedcomponents && "None"!=affectedcomponents){
        line += ", AFFECTED COMPONENTS=" + affectedcomponents;
    }
    if("none"!=degradation && "NONE"!=degradation && "None"!=degradation){
        line += ", DEGRADATION=" + degradation;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=extrapolation && "NONE"!=extrapolation && "None"!=extrapolation){
        line += ", EXTRAPOLATION=" + extrapolation;
    }
    if("none"!=regularize && "NONE"!=regularize && "None"!=regularize){
        line += ", REGULARIZE=" + regularize;
    }
    if("none"!=rtol && "NONE"!=rtol && "None"!=rtol){
        line += ", RTOL=" + rtol;
    }
    if("none"!=softening && "NONE"!=softening && "None"!=softening){
        line += ", SOFTENING=" + softening;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQconnectordamageinitiation(,string component,,string criterion,,string dependencies,,string extrapolation,,string ratefilterfactor,,string rateinterpolation,,string regularize,,string rtol,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONNECTOR DAMAGE INITIATION";
    if("none"!=component && "NONE"!=component && "None"!=component){
        line += ", COMPONENT=" + component;
    }
    if("none"!=criterion && "NONE"!=criterion && "None"!=criterion){
        line += ", CRITERION=" + criterion;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=extrapolation && "NONE"!=extrapolation && "None"!=extrapolation){
        line += ", EXTRAPOLATION=" + extrapolation;
    }
    if("none"!=ratefilterfactor && "NONE"!=ratefilterfactor && "None"!=ratefilterfactor){
        line += ", RATE FILTER FACTOR=" + ratefilterfactor;
    }
    if("none"!=rateinterpolation && "NONE"!=rateinterpolation && "None"!=rateinterpolation){
        line += ", RATE INTERPOLATION=" + rateinterpolation;
    }
    if("none"!=regularize && "NONE"!=regularize && "None"!=regularize){
        line += ", REGULARIZE=" + regularize;
    }
    if("none"!=rtol && "NONE"!=rtol && "None"!=rtol){
        line += ", RTOL=" + rtol;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQconnectordamping(,string component,,string type,,string dependencies,,string extrapolation,,string frequencydependence,,string independentcomponents,,string nonlinear,,string regularize,,string rtol,,string unsymm,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONNECTOR DAMPING";
    if("none"!=component && "NONE"!=component && "None"!=component){
        line += ", COMPONENT=" + component;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=extrapolation && "NONE"!=extrapolation && "None"!=extrapolation){
        line += ", EXTRAPOLATION=" + extrapolation;
    }
    if("none"!=frequencydependence && "NONE"!=frequencydependence && "None"!=frequencydependence){
        line += ", FREQUENCY DEPENDENCE=" + frequencydependence;
    }
    if("none"!=independentcomponents && "NONE"!=independentcomponents && "None"!=independentcomponents){
        line += ", INDEPENDENT COMPONENTS=" + independentcomponents;
    }
    if("none"!=nonlinear && "NONE"!=nonlinear && "None"!=nonlinear){
        line += ", NONLINEAR=" + nonlinear;
    }
    if("none"!=regularize && "NONE"!=regularize && "None"!=regularize){
        line += ", REGULARIZE=" + regularize;
    }
    if("none"!=rtol && "NONE"!=rtol && "None"!=rtol){
        line += ", RTOL=" + rtol;
    }
    if("none"!=unsymm && "NONE"!=unsymm && "None"!=unsymm){
        line += ", UNSYMM=" + unsymm;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQconnectorderivedcomponent(,string name,,string dependencies,,string extrapolation,,string independentcomponents,,string operator,,string regularize,,string rtol,,string sign,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONNECTOR DERIVED COMPONENT";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=extrapolation && "NONE"!=extrapolation && "None"!=extrapolation){
        line += ", EXTRAPOLATION=" + extrapolation;
    }
    if("none"!=independentcomponents && "NONE"!=independentcomponents && "None"!=independentcomponents){
        line += ", INDEPENDENT COMPONENTS=" + independentcomponents;
    }
    if("none"!=operator && "NONE"!=operator && "None"!=operator){
        line += ", OPERATOR=" + operator;
    }
    if("none"!=regularize && "NONE"!=regularize && "None"!=regularize){
        line += ", REGULARIZE=" + regularize;
    }
    if("none"!=rtol && "NONE"!=rtol && "None"!=rtol){
        line += ", RTOL=" + rtol;
    }
    if("none"!=sign && "NONE"!=sign && "None"!=sign){
        line += ", SIGN=" + sign;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQconnectorelasticity(,string component,,string dependencies,,string extrapolation,,string frequencydependence,,string independentcomponents,,string nonlinear,,string regularize,,string rtol,,string rigid,,string unsymm,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONNECTOR ELASTICITY";
    if("none"!=component && "NONE"!=component && "None"!=component){
        line += ", COMPONENT=" + component;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=extrapolation && "NONE"!=extrapolation && "None"!=extrapolation){
        line += ", EXTRAPOLATION=" + extrapolation;
    }
    if("none"!=frequencydependence && "NONE"!=frequencydependence && "None"!=frequencydependence){
        line += ", FREQUENCY DEPENDENCE=" + frequencydependence;
    }
    if("none"!=independentcomponents && "NONE"!=independentcomponents && "None"!=independentcomponents){
        line += ", INDEPENDENT COMPONENTS=" + independentcomponents;
    }
    if("none"!=nonlinear && "NONE"!=nonlinear && "None"!=nonlinear){
        line += ", NONLINEAR=" + nonlinear;
    }
    if("none"!=regularize && "NONE"!=regularize && "None"!=regularize){
        line += ", REGULARIZE=" + regularize;
    }
    if("none"!=rtol && "NONE"!=rtol && "None"!=rtol){
        line += ", RTOL=" + rtol;
    }
    if("none"!=rigid && "NONE"!=rigid && "None"!=rigid){
        line += ", RIGID=" + rigid;
    }
    if("none"!=unsymm && "NONE"!=unsymm && "None"!=unsymm){
        line += ", UNSYMM=" + unsymm;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQconnectorfailure(,string component,,string release,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONNECTOR FAILURE";
    if("none"!=component && "NONE"!=component && "None"!=component){
        line += ", COMPONENT=" + component;
    }
    if("none"!=release && "NONE"!=release && "None"!=release){
        line += ", RELEASE=" + release;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQconnectorfriction(,string predefined,,string stickstiffness,,string component,,string contactforce,,string dependencies,,string extrapolation,,string independentcomponents,,string regularize,,string rtol,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONNECTOR FRICTION";
    if("none"!=predefined && "NONE"!=predefined && "None"!=predefined){
        line += ", PREDEFINED=" + predefined;
    }
    if("none"!=stickstiffness && "NONE"!=stickstiffness && "None"!=stickstiffness){
        line += ", STICK STIFFNESS=" + stickstiffness;
    }
    if("none"!=component && "NONE"!=component && "None"!=component){
        line += ", COMPONENT=" + component;
    }
    if("none"!=contactforce && "NONE"!=contactforce && "None"!=contactforce){
        line += ", CONTACT FORCE=" + contactforce;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=extrapolation && "NONE"!=extrapolation && "None"!=extrapolation){
        line += ", EXTRAPOLATION=" + extrapolation;
    }
    if("none"!=independentcomponents && "NONE"!=independentcomponents && "None"!=independentcomponents){
        line += ", INDEPENDENT COMPONENTS=" + independentcomponents;
    }
    if("none"!=regularize && "NONE"!=regularize && "None"!=regularize){
        line += ", REGULARIZE=" + regularize;
    }
    if("none"!=rtol && "NONE"!=rtol && "None"!=rtol){
        line += ", RTOL=" + rtol;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQconnectorhardening(,string definition,,string dependencies,,string extrapolation,,string ratefilterfactor,,string rateinterpolation,,string regularize,,string rtol,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONNECTOR HARDENING";
    if("none"!=definition && "NONE"!=definition && "None"!=definition){
        line += ", DEFINITION=" + definition;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=extrapolation && "NONE"!=extrapolation && "None"!=extrapolation){
        line += ", EXTRAPOLATION=" + extrapolation;
    }
    if("none"!=ratefilterfactor && "NONE"!=ratefilterfactor && "None"!=ratefilterfactor){
        line += ", RATE FILTER FACTOR=" + ratefilterfactor;
    }
    if("none"!=rateinterpolation && "NONE"!=rateinterpolation && "None"!=rateinterpolation){
        line += ", RATE INTERPOLATION=" + rateinterpolation;
    }
    if("none"!=regularize && "NONE"!=regularize && "None"!=regularize){
        line += ", REGULARIZE=" + regularize;
    }
    if("none"!=rtol && "NONE"!=rtol && "None"!=rtol){
        line += ", RTOL=" + rtol;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQconnectorload(,string amplitude,,string loadcase,,string op,,string imaginary,,string real,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONNECTOR LOAD";
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=loadcase && "NONE"!=loadcase && "None"!=loadcase){
        line += ", LOAD CASE=" + loadcase;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    if("none"!=imaginary && "NONE"!=imaginary && "None"!=imaginary){
        line += ", IMAGINARY=" + imaginary;
    }
    if("none"!=real && "NONE"!=real && "None"!=real){
        line += ", REAL=" + real;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQconnectorlock(,string component,,string dependencies,,string extrapolation,,string lock,,string regularize,,string rtol,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONNECTOR LOCK";
    if("none"!=component && "NONE"!=component && "None"!=component){
        line += ", COMPONENT=" + component;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=extrapolation && "NONE"!=extrapolation && "None"!=extrapolation){
        line += ", EXTRAPOLATION=" + extrapolation;
    }
    if("none"!=lock && "NONE"!=lock && "None"!=lock){
        line += ", LOCK=" + lock;
    }
    if("none"!=regularize && "NONE"!=regularize && "None"!=regularize){
        line += ", REGULARIZE=" + regularize;
    }
    if("none"!=rtol && "NONE"!=rtol && "None"!=rtol){
        line += ", RTOL=" + rtol;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQconnectormotion(,string amplitude,,string loadcase,,string op,,string fixed,,string type,,string user,,string imaginary,,string real,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONNECTOR MOTION";
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=loadcase && "NONE"!=loadcase && "None"!=loadcase){
        line += ", LOAD CASE=" + loadcase;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    if("none"!=fixed && "NONE"!=fixed && "None"!=fixed){
        line += ", FIXED=" + fixed;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=user && "NONE"!=user && "None"!=user){
        line += ", USER=" + user;
    }
    if("none"!=imaginary && "NONE"!=imaginary && "None"!=imaginary){
        line += ", IMAGINARY=" + imaginary;
    }
    if("none"!=real && "NONE"!=real && "None"!=real){
        line += ", REAL=" + real;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQconnectorplasticity(,string component,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONNECTOR PLASTICITY";
    if("none"!=component && "NONE"!=component && "None"!=component){
        line += ", COMPONENT=" + component;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQconnectorpotential(,string exponent,,string operator,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONNECTOR POTENTIAL";
    if("none"!=exponent && "NONE"!=exponent && "None"!=exponent){
        line += ", EXPONENT=" + exponent;
    }
    if("none"!=operator && "NONE"!=operator && "None"!=operator){
        line += ", OPERATOR=" + operator;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQconnectorsection(,string elset,,string behavior,,string controls,,string elimination,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONNECTOR SECTION";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=behavior && "NONE"!=behavior && "None"!=behavior){
        line += ", BEHAVIOR=" + behavior;
    }
    if("none"!=controls && "NONE"!=controls && "None"!=controls){
        line += ", CONTROLS=" + controls;
    }
    if("none"!=elimination && "NONE"!=elimination && "None"!=elimination){
        line += ", ELIMINATION=" + elimination;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQconnectorstop(,string component,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONNECTOR STOP";
    if("none"!=component && "NONE"!=component && "None"!=component){
        line += ", COMPONENT=" + component;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQconnectoruniaxialbehavior(,string component,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONNECTOR UNIAXIAL BEHAVIOR";
    if("none"!=component && "NONE"!=component && "None"!=component){
        line += ", COMPONENT=" + component;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQconstraintcontrols(,string deleteslave,,string nochanges,,string nochecks,,string print,,string checkfrequency,,string terminateanalysis,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONSTRAINT CONTROLS";
    if("none"!=deleteslave && "NONE"!=deleteslave && "None"!=deleteslave){
        line += ", DELETE SLAVE=" + deleteslave;
    }
    if("none"!=nochanges && "NONE"!=nochanges && "None"!=nochanges){
        line += ", NO CHANGES=" + nochanges;
    }
    if("none"!=nochecks && "NONE"!=nochecks && "None"!=nochecks){
        line += ", NO CHECKS=" + nochecks;
    }
    if("none"!=print && "NONE"!=print && "None"!=print){
        line += ", PRINT=" + print;
    }
    if("none"!=checkfrequency && "NONE"!=checkfrequency && "None"!=checkfrequency){
        line += ", CHECK FREQUENCY=" + checkfrequency;
    }
    if("none"!=terminateanalysis && "NONE"!=terminateanalysis && "None"!=terminateanalysis){
        line += ", TERMINATE ANALYSIS=" + terminateanalysis;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcontact(,string op,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONTACT";
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcontactclearance(,string name,,string adjust,,string clearance,,string searchabove,,string searchbelow,,string searchnset,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONTACT CLEARANCE";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=adjust && "NONE"!=adjust && "None"!=adjust){
        line += ", ADJUST=" + adjust;
    }
    if("none"!=clearance && "NONE"!=clearance && "None"!=clearance){
        line += ", CLEARANCE=" + clearance;
    }
    if("none"!=searchabove && "NONE"!=searchabove && "None"!=searchabove){
        line += ", SEARCH ABOVE=" + searchabove;
    }
    if("none"!=searchbelow && "NONE"!=searchbelow && "None"!=searchbelow){
        line += ", SEARCH BELOW=" + searchbelow;
    }
    if("none"!=searchnset && "NONE"!=searchnset && "None"!=searchnset){
        line += ", SEARCH NSET=" + searchnset;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcontactclearanceassignment(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONTACT CLEARANCE ASSIGNMENT";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcontactcontrols(,string absolutepenetrationtolerance,,string relativepenetrationtolerance,,string master,,string perturbationtangentscalefactor,,string pressuredependentperturbation,,string reset,,string slave,,string stabilize,,string stiffnessscalefactor,,string tangentfraction,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONTACT CONTROLS";
    if("none"!=absolutepenetrationtolerance && "NONE"!=absolutepenetrationtolerance && "None"!=absolutepenetrationtolerance){
        line += ", ABSOLUTE PENETRATION TOLERANCE=" + absolutepenetrationtolerance;
    }
    if("none"!=relativepenetrationtolerance && "NONE"!=relativepenetrationtolerance && "None"!=relativepenetrationtolerance){
        line += ", RELATIVE PENETRATION TOLERANCE=" + relativepenetrationtolerance;
    }
    if("none"!=master && "NONE"!=master && "None"!=master){
        line += ", MASTER=" + master;
    }
    if("none"!=perturbationtangentscalefactor && "NONE"!=perturbationtangentscalefactor && "None"!=perturbationtangentscalefactor){
        line += ", PERTURBATION TANGENT SCALE FACTOR=" + perturbationtangentscalefactor;
    }
    if("none"!=pressuredependentperturbation && "NONE"!=pressuredependentperturbation && "None"!=pressuredependentperturbation){
        line += ", PRESSURE DEPENDENT PERTURBATION=" + pressuredependentperturbation;
    }
    if("none"!=reset && "NONE"!=reset && "None"!=reset){
        line += ", RESET=" + reset;
    }
    if("none"!=slave && "NONE"!=slave && "None"!=slave){
        line += ", SLAVE=" + slave;
    }
    if("none"!=stabilize && "NONE"!=stabilize && "None"!=stabilize){
        line += ", STABILIZE=" + stabilize;
    }
    if("none"!=stiffnessscalefactor && "NONE"!=stiffnessscalefactor && "None"!=stiffnessscalefactor){
        line += ", STIFFNESS SCALE FACTOR=" + stiffnessscalefactor;
    }
    if("none"!=tangentfraction && "NONE"!=tangentfraction && "None"!=tangentfraction){
        line += ", TANGENT FRACTION=" + tangentfraction;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcontactcontrolsassignment(,string automaticoverclosureresolution,,string contactthicknessreduction,,string nodalerosion,,string rotationalterms,,string type,,string seeding,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONTACT CONTROLS ASSIGNMENT";
    if("none"!=automaticoverclosureresolution && "NONE"!=automaticoverclosureresolution && "None"!=automaticoverclosureresolution){
        line += ", AUTOMATIC OVERCLOSURE RESOLUTION=" + automaticoverclosureresolution;
    }
    if("none"!=contactthicknessreduction && "NONE"!=contactthicknessreduction && "None"!=contactthicknessreduction){
        line += ", CONTACT THICKNESS REDUCTION=" + contactthicknessreduction;
    }
    if("none"!=nodalerosion && "NONE"!=nodalerosion && "None"!=nodalerosion){
        line += ", NODAL EROSION=" + nodalerosion;
    }
    if("none"!=rotationalterms && "NONE"!=rotationalterms && "None"!=rotationalterms){
        line += ", ROTATIONAL TERMS=" + rotationalterms;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=seeding && "NONE"!=seeding && "None"!=seeding){
        line += ", SEEDING=" + seeding;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcontactdamping(,string definition,,string tangentfraction,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONTACT DAMPING";
    if("none"!=definition && "NONE"!=definition && "None"!=definition){
        line += ", DEFINITION=" + definition;
    }
    if("none"!=tangentfraction && "NONE"!=tangentfraction && "None"!=tangentfraction){
        line += ", TANGENT FRACTION=" + tangentfraction;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcontactexclusions(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONTACT EXCLUSIONS";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcontactfile(,string frequency,,string master,,string nset,,string slave,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONTACT FILE";
    if("none"!=frequency && "NONE"!=frequency && "None"!=frequency){
        line += ", FREQUENCY=" + frequency;
    }
    if("none"!=master && "NONE"!=master && "None"!=master){
        line += ", MASTER=" + master;
    }
    if("none"!=nset && "NONE"!=nset && "None"!=nset){
        line += ", NSET=" + nset;
    }
    if("none"!=slave && "NONE"!=slave && "None"!=slave){
        line += ", SLAVE=" + slave;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcontactformulation(,string type,,string formulation,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONTACT FORMULATION";
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=formulation && "NONE"!=formulation && "None"!=formulation){
        line += ", FORMULATION=" + formulation;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcontactinclusions(,string allexterior,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONTACT INCLUSIONS";
    if("none"!=allexterior && "NONE"!=allexterior && "None"!=allexterior){
        line += ", ALL EXTERIOR=" + allexterior;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcontactinitializationassignment(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONTACT INITIALIZATION ASSIGNMENT";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcontactinitializationdata(,string name,,string initialclearance,,string interferencefit,,string minimumdistance,,string searchabove,,string searchbelow,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONTACT INITIALIZATION DATA";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=initialclearance && "NONE"!=initialclearance && "None"!=initialclearance){
        line += ", INITIAL CLEARANCE=" + initialclearance;
    }
    if("none"!=interferencefit && "NONE"!=interferencefit && "None"!=interferencefit){
        line += ", INTERFERENCE FIT=" + interferencefit;
    }
    if("none"!=minimumdistance && "NONE"!=minimumdistance && "None"!=minimumdistance){
        line += ", MINIMUM DISTANCE=" + minimumdistance;
    }
    if("none"!=searchabove && "NONE"!=searchabove && "None"!=searchabove){
        line += ", SEARCH ABOVE=" + searchabove;
    }
    if("none"!=searchbelow && "NONE"!=searchbelow && "None"!=searchbelow){
        line += ", SEARCH BELOW=" + searchbelow;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcontactinterference(,string amplitude,,string op,,string shrink,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONTACT INTERFERENCE";
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    if("none"!=shrink && "NONE"!=shrink && "None"!=shrink){
        line += ", SHRINK=" + shrink;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcontactoutput(,string cpset,,string nset,,string surface,,string secondsurface,,string cpset,,string generalcontact,,string surface,,string secondsurface,,string variable,,string master,,string nset,,string slave,,string surface,,string variable,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONTACT OUTPUT";
    if("none"!=cpset && "NONE"!=cpset && "None"!=cpset){
        line += ", CPSET=" + cpset;
    }
    if("none"!=nset && "NONE"!=nset && "None"!=nset){
        line += ", NSET=" + nset;
    }
    if("none"!=surface && "NONE"!=surface && "None"!=surface){
        line += ", SURFACE=" + surface;
    }
    if("none"!=secondsurface && "NONE"!=secondsurface && "None"!=secondsurface){
        line += ", SECOND SURFACE=" + secondsurface;
    }
    if("none"!=cpset && "NONE"!=cpset && "None"!=cpset){
        line += ", CPSET=" + cpset;
    }
    if("none"!=generalcontact && "NONE"!=generalcontact && "None"!=generalcontact){
        line += ", GENERAL CONTACT=" + generalcontact;
    }
    if("none"!=surface && "NONE"!=surface && "None"!=surface){
        line += ", SURFACE=" + surface;
    }
    if("none"!=secondsurface && "NONE"!=secondsurface && "None"!=secondsurface){
        line += ", SECOND SURFACE=" + secondsurface;
    }
    if("none"!=variable && "NONE"!=variable && "None"!=variable){
        line += ", VARIABLE=" + variable;
    }
    if("none"!=master && "NONE"!=master && "None"!=master){
        line += ", MASTER=" + master;
    }
    if("none"!=nset && "NONE"!=nset && "None"!=nset){
        line += ", NSET=" + nset;
    }
    if("none"!=slave && "NONE"!=slave && "None"!=slave){
        line += ", SLAVE=" + slave;
    }
    if("none"!=surface && "NONE"!=surface && "None"!=surface){
        line += ", SURFACE=" + surface;
    }
    if("none"!=variable && "NONE"!=variable && "None"!=variable){
        line += ", VARIABLE=" + variable;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcontactpair(,string interaction,,string adjust,,string extensionzone,,string geometriccorrection,,string hcrit,,string midfacenodes,,string minimumdistance,,string nothickness,,string smallsliding,,string smooth,,string slidingtransition,,string supplementaryconstraints,,string tied,,string tracking,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONTACT PAIR";
    if("none"!=interaction && "NONE"!=interaction && "None"!=interaction){
        line += ", INTERACTION=" + interaction;
    }
    if("none"!=adjust && "NONE"!=adjust && "None"!=adjust){
        line += ", ADJUST=" + adjust;
    }
    if("none"!=extensionzone && "NONE"!=extensionzone && "None"!=extensionzone){
        line += ", EXTENSION ZONE=" + extensionzone;
    }
    if("none"!=geometriccorrection && "NONE"!=geometriccorrection && "None"!=geometriccorrection){
        line += ", GEOMETRIC CORRECTION=" + geometriccorrection;
    }
    if("none"!=hcrit && "NONE"!=hcrit && "None"!=hcrit){
        line += ", HCRIT=" + hcrit;
    }
    if("none"!=midfacenodes && "NONE"!=midfacenodes && "None"!=midfacenodes){
        line += ", MIDFACE NODES=" + midfacenodes;
    }
    if("none"!=minimumdistance && "NONE"!=minimumdistance && "None"!=minimumdistance){
        line += ", MINIMUM DISTANCE=" + minimumdistance;
    }
    if("none"!=nothickness && "NONE"!=nothickness && "None"!=nothickness){
        line += ", NO THICKNESS=" + nothickness;
    }
    if("none"!=smallsliding && "NONE"!=smallsliding && "None"!=smallsliding){
        line += ", SMALL SLIDING=" + smallsliding;
    }
    if("none"!=smooth && "NONE"!=smooth && "None"!=smooth){
        line += ", SMOOTH=" + smooth;
    }
    if("none"!=slidingtransition && "NONE"!=slidingtransition && "None"!=slidingtransition){
        line += ", SLIDING TRANSITION=" + slidingtransition;
    }
    if("none"!=supplementaryconstraints && "NONE"!=supplementaryconstraints && "None"!=supplementaryconstraints){
        line += ", SUPPLEMENTARY CONSTRAINTS=" + supplementaryconstraints;
    }
    if("none"!=tied && "NONE"!=tied && "None"!=tied){
        line += ", TIED=" + tied;
    }
    if("none"!=tracking && "NONE"!=tracking && "None"!=tracking){
        line += ", TRACKING=" + tracking;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcontactpermeability(,string cutoffflowacross,,string cutoffgapfill,,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONTACT PERMEABILITY";
    if("none"!=cutoffflowacross && "NONE"!=cutoffflowacross && "None"!=cutoffflowacross){
        line += ", CUTOFF FLOW ACROSS=" + cutoffflowacross;
    }
    if("none"!=cutoffgapfill && "NONE"!=cutoffgapfill && "None"!=cutoffgapfill){
        line += ", CUTOFF GAP FILL=" + cutoffgapfill;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcontactprint(,string frequency,,string master,,string nset,,string slave,,string summary,,string totals,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONTACT PRINT";
    if("none"!=frequency && "NONE"!=frequency && "None"!=frequency){
        line += ", FREQUENCY=" + frequency;
    }
    if("none"!=master && "NONE"!=master && "None"!=master){
        line += ", MASTER=" + master;
    }
    if("none"!=nset && "NONE"!=nset && "None"!=nset){
        line += ", NSET=" + nset;
    }
    if("none"!=slave && "NONE"!=slave && "None"!=slave){
        line += ", SLAVE=" + slave;
    }
    if("none"!=summary && "NONE"!=summary && "None"!=summary){
        line += ", SUMMARY=" + summary;
    }
    if("none"!=totals && "NONE"!=totals && "None"!=totals){
        line += ", TOTALS=" + totals;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcontactpropertyassignment(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONTACT PROPERTY ASSIGNMENT";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcontactresponse(,string master,,string nset,,string slave,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONTACT RESPONSE";
    if("none"!=master && "NONE"!=master && "None"!=master){
        line += ", MASTER=" + master;
    }
    if("none"!=nset && "NONE"!=nset && "None"!=nset){
        line += ", NSET=" + nset;
    }
    if("none"!=slave && "NONE"!=slave && "None"!=slave){
        line += ", SLAVE=" + slave;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcontactstabilization(,string amplitude,,string range,,string reductionperincrement,,string reset,,string scalefactor,,string tangentfraction,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONTACT STABILIZATION";
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=range && "NONE"!=range && "None"!=range){
        line += ", RANGE=" + range;
    }
    if("none"!=reductionperincrement && "NONE"!=reductionperincrement && "None"!=reductionperincrement){
        line += ", REDUCTION PER INCREMENT=" + reductionperincrement;
    }
    if("none"!=reset && "NONE"!=reset && "None"!=reset){
        line += ", RESET=" + reset;
    }
    if("none"!=scalefactor && "NONE"!=scalefactor && "None"!=scalefactor){
        line += ", SCALE FACTOR=" + scalefactor;
    }
    if("none"!=tangentfraction && "NONE"!=tangentfraction && "None"!=tangentfraction){
        line += ", TANGENT FRACTION=" + tangentfraction;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcontourintegral(,string contours,,string crackname,,string cracktipnodes,,string direction,,string frequency,,string normal,,string output,,string residualstressstep,,string symm,,string type,,string xfem,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONTOUR INTEGRAL";
    if("none"!=contours && "NONE"!=contours && "None"!=contours){
        line += ", CONTOURS=" + contours;
    }
    if("none"!=crackname && "NONE"!=crackname && "None"!=crackname){
        line += ", CRACK NAME=" + crackname;
    }
    if("none"!=cracktipnodes && "NONE"!=cracktipnodes && "None"!=cracktipnodes){
        line += ", CRACK TIP NODES=" + cracktipnodes;
    }
    if("none"!=direction && "NONE"!=direction && "None"!=direction){
        line += ", DIRECTION=" + direction;
    }
    if("none"!=frequency && "NONE"!=frequency && "None"!=frequency){
        line += ", FREQUENCY=" + frequency;
    }
    if("none"!=normal && "NONE"!=normal && "None"!=normal){
        line += ", NORMAL=" + normal;
    }
    if("none"!=output && "NONE"!=output && "None"!=output){
        line += ", OUTPUT=" + output;
    }
    if("none"!=residualstressstep && "NONE"!=residualstressstep && "None"!=residualstressstep){
        line += ", RESIDUAL STRESS STEP=" + residualstressstep;
    }
    if("none"!=symm && "NONE"!=symm && "None"!=symm){
        line += ", SYMM=" + symm;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=xfem && "NONE"!=xfem && "None"!=xfem){
        line += ", XFEM=" + xfem;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcontrols(,string analysis,,string parameters,,string reset,,string type,,string distortioncontrol,,string field,,string meshsmoothing,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONTROLS";
    if("none"!=analysis && "NONE"!=analysis && "None"!=analysis){
        line += ", ANALYSIS=" + analysis;
    }
    if("none"!=parameters && "NONE"!=parameters && "None"!=parameters){
        line += ", PARAMETERS=" + parameters;
    }
    if("none"!=reset && "NONE"!=reset && "None"!=reset){
        line += ", RESET=" + reset;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=distortioncontrol && "NONE"!=distortioncontrol && "None"!=distortioncontrol){
        line += ", DISTORTION CONTROL=" + distortioncontrol;
    }
    if("none"!=field && "NONE"!=field && "None"!=field){
        line += ", FIELD=" + field;
    }
    if("none"!=meshsmoothing && "NONE"!=meshsmoothing && "None"!=meshsmoothing){
        line += ", MESH SMOOTHING=" + meshsmoothing;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQconwepchargeproperty(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CONWEP CHARGE PROPERTY";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcorrelation(,string psd,,string complex,,string input,,string type,,string user,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CORRELATION";
    if("none"!=psd && "NONE"!=psd && "None"!=psd){
        line += ", PSD=" + psd;
    }
    if("none"!=complex && "NONE"!=complex && "None"!=complex){
        line += ", COMPLEX=" + complex;
    }
    if("none"!=input && "NONE"!=input && "None"!=input){
        line += ", INPUT=" + input;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=user && "NONE"!=user && "None"!=user){
        line += ", USER=" + user;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQco-simulation(,string name,,string program,,string controls,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CO-SIMULATION";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=program && "NONE"!=program && "None"!=program){
        line += ", PROGRAM=" + program;
    }
    if("none"!=controls && "NONE"!=controls && "None"!=controls){
        line += ", CONTROLS=" + controls;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQco-simulationcontrols(,string name,,string factorizationfrequency,,string timeincrementation,,string name,,string stepsize,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CO-SIMULATION CONTROLS";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=factorizationfrequency && "NONE"!=factorizationfrequency && "None"!=factorizationfrequency){
        line += ", FACTORIZATION FREQUENCY=" + factorizationfrequency;
    }
    if("none"!=timeincrementation && "NONE"!=timeincrementation && "None"!=timeincrementation){
        line += ", TIME INCREMENTATION=" + timeincrementation;
    }
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=stepsize && "NONE"!=stepsize && "None"!=stepsize){
        line += ", STEP SIZE=" + stepsize;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQco-simulationregion(,string export,,string import,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CO-SIMULATION REGION";
    if("none"!=export && "NONE"!=export && "None"!=export){
        line += ", EXPORT=" + export;
    }
    if("none"!=import && "NONE"!=import && "None"!=import){
        line += ", IMPORT=" + import;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcoupledtemperature-displacement(,string allsdtol,,string continue,,string creep,,string electrical,,string factor,,string stabilize,,string steadystate,,string cetol,,string deltmx,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*COUPLED TEMPERATURE-DISPLACEMENT";
    if("none"!=allsdtol && "NONE"!=allsdtol && "None"!=allsdtol){
        line += ", ALLSDTOL=" + allsdtol;
    }
    if("none"!=continue && "NONE"!=continue && "None"!=continue){
        line += ", CONTINUE=" + continue;
    }
    if("none"!=creep && "NONE"!=creep && "None"!=creep){
        line += ", CREEP=" + creep;
    }
    if("none"!=electrical && "NONE"!=electrical && "None"!=electrical){
        line += ", ELECTRICAL=" + electrical;
    }
    if("none"!=factor && "NONE"!=factor && "None"!=factor){
        line += ", FACTOR=" + factor;
    }
    if("none"!=stabilize && "NONE"!=stabilize && "None"!=stabilize){
        line += ", STABILIZE=" + stabilize;
    }
    if("none"!=steadystate && "NONE"!=steadystate && "None"!=steadystate){
        line += ", STEADY STATE=" + steadystate;
    }
    if("none"!=cetol && "NONE"!=cetol && "None"!=cetol){
        line += ", CETOL=" + cetol;
    }
    if("none"!=deltmx && "NONE"!=deltmx && "None"!=deltmx){
        line += ", DELTMX=" + deltmx;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcoupledthermal-electrical(,string deltmx,,string end,,string mxdem,,string steadystate,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*COUPLED THERMAL-ELECTRICAL";
    if("none"!=deltmx && "NONE"!=deltmx && "None"!=deltmx){
        line += ", DELTMX=" + deltmx;
    }
    if("none"!=end && "NONE"!=end && "None"!=end){
        line += ", END=" + end;
    }
    if("none"!=mxdem && "NONE"!=mxdem && "None"!=mxdem){
        line += ", MXDEM=" + mxdem;
    }
    if("none"!=steadystate && "NONE"!=steadystate && "None"!=steadystate){
        line += ", STEADY STATE=" + steadystate;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcoupling(,string constraintname,,string refnode,,string surface,,string influenceradius,,string orientation,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*COUPLING";
    if("none"!=constraintname && "NONE"!=constraintname && "None"!=constraintname){
        line += ", CONSTRAINT NAME=" + constraintname;
    }
    if("none"!=refnode && "NONE"!=refnode && "None"!=refnode){
        line += ", REF NODE=" + refnode;
    }
    if("none"!=surface && "NONE"!=surface && "None"!=surface){
        line += ", SURFACE=" + surface;
    }
    if("none"!=influenceradius && "NONE"!=influenceradius && "None"!=influenceradius){
        line += ", INFLUENCE RADIUS=" + influenceradius;
    }
    if("none"!=orientation && "NONE"!=orientation && "None"!=orientation){
        line += ", ORIENTATION=" + orientation;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcradiate(,string amplitude,,string op,,string regiontype,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CRADIATE";
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    if("none"!=regiontype && "NONE"!=regiontype && "None"!=regiontype){
        line += ", REGION TYPE=" + regiontype;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcreep(,string dependencies,,string law,,string time,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CREEP";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=law && "NONE"!=law && "None"!=law){
        line += ", LAW=" + law;
    }
    if("none"!=time && "NONE"!=time && "None"!=time){
        line += ", TIME=" + time;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcreepstrainratecontrol(,string amplitude,,string elset,,string dependencies,,string op,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CREEP STRAIN RATE CONTROL";
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcrushablefoam(,string dependencies,,string hardening,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CRUSHABLE FOAM";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=hardening && "NONE"!=hardening && "None"!=hardening){
        line += ", HARDENING=" + hardening;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcrushablefoamhardening(,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CRUSHABLE FOAM HARDENING";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcycledplastic(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CYCLED PLASTIC";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcyclic(,string nc,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CYCLIC";
    if("none"!=nc && "NONE"!=nc && "None"!=nc){
        line += ", NC=" + nc;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcyclichardening(,string dependencies,,string parameters,,string user,,string properties,,string rate,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CYCLIC HARDENING";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=parameters && "NONE"!=parameters && "None"!=parameters){
        line += ", PARAMETERS=" + parameters;
    }
    if("none"!=user && "NONE"!=user && "None"!=user){
        line += ", USER=" + user;
    }
    if("none"!=properties && "NONE"!=properties && "None"!=properties){
        line += ", PROPERTIES=" + properties;
    }
    if("none"!=rate && "NONE"!=rate && "None"!=rate){
        line += ", RATE=" + rate;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQcyclicsymmetrymodel(,string n,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*CYCLIC SYMMETRY MODEL";
    if("none"!=n && "NONE"!=n && "None"!=n){
        line += ", N=" + n;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdaddedmass(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*D ADDED MASS";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdempotential(,string amplitude,,string op,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*D EM POTENTIAL";
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdamageevolution(,string type,,string degradation,,string dependencies,,string failureindex,,string mixedmodebehavior,,string modemixratio,,string power,,string softening,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DAMAGE EVOLUTION";
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=degradation && "NONE"!=degradation && "None"!=degradation){
        line += ", DEGRADATION=" + degradation;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=failureindex && "NONE"!=failureindex && "None"!=failureindex){
        line += ", FAILURE INDEX=" + failureindex;
    }
    if("none"!=mixedmodebehavior && "NONE"!=mixedmodebehavior && "None"!=mixedmodebehavior){
        line += ", MIXED MODE BEHAVIOR=" + mixedmodebehavior;
    }
    if("none"!=modemixratio && "NONE"!=modemixratio && "None"!=modemixratio){
        line += ", MODE MIX RATIO=" + modemixratio;
    }
    if("none"!=power && "NONE"!=power && "None"!=power){
        line += ", POWER=" + power;
    }
    if("none"!=softening && "NONE"!=softening && "None"!=softening){
        line += ", SOFTENING=" + softening;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdamageinitiation(,string criterion,,string alpha,,string definition,,string dependencies,,string failuremechanisms,,string feq,,string fnn,,string fnt,,string frequency,,string ks,,string lodedependent,,string normaldirection,,string numberimperfections,,string omega,,string peinc,,string position,,string properties,,string rcrackdirection,,string smoothing,,string tolerance,,string weightingmethod,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DAMAGE INITIATION";
    if("none"!=criterion && "NONE"!=criterion && "None"!=criterion){
        line += ", CRITERION=" + criterion;
    }
    if("none"!=alpha && "NONE"!=alpha && "None"!=alpha){
        line += ", ALPHA=" + alpha;
    }
    if("none"!=definition && "NONE"!=definition && "None"!=definition){
        line += ", DEFINITION=" + definition;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=failuremechanisms && "NONE"!=failuremechanisms && "None"!=failuremechanisms){
        line += ", FAILURE MECHANISMS=" + failuremechanisms;
    }
    if("none"!=feq && "NONE"!=feq && "None"!=feq){
        line += ", FEQ=" + feq;
    }
    if("none"!=fnn && "NONE"!=fnn && "None"!=fnn){
        line += ", FNN=" + fnn;
    }
    if("none"!=fnt && "NONE"!=fnt && "None"!=fnt){
        line += ", FNT=" + fnt;
    }
    if("none"!=frequency && "NONE"!=frequency && "None"!=frequency){
        line += ", FREQUENCY=" + frequency;
    }
    if("none"!=ks && "NONE"!=ks && "None"!=ks){
        line += ", KS=" + ks;
    }
    if("none"!=lodedependent && "NONE"!=lodedependent && "None"!=lodedependent){
        line += ", LODE DEPENDENT=" + lodedependent;
    }
    if("none"!=normaldirection && "NONE"!=normaldirection && "None"!=normaldirection){
        line += ", NORMAL DIRECTION=" + normaldirection;
    }
    if("none"!=numberimperfections && "NONE"!=numberimperfections && "None"!=numberimperfections){
        line += ", NUMBER IMPERFECTIONS=" + numberimperfections;
    }
    if("none"!=omega && "NONE"!=omega && "None"!=omega){
        line += ", OMEGA=" + omega;
    }
    if("none"!=peinc && "NONE"!=peinc && "None"!=peinc){
        line += ", PEINC=" + peinc;
    }
    if("none"!=position && "NONE"!=position && "None"!=position){
        line += ", POSITION=" + position;
    }
    if("none"!=properties && "NONE"!=properties && "None"!=properties){
        line += ", PROPERTIES=" + properties;
    }
    if("none"!=rcrackdirection && "NONE"!=rcrackdirection && "None"!=rcrackdirection){
        line += ", R CRACK DIRECTION=" + rcrackdirection;
    }
    if("none"!=smoothing && "NONE"!=smoothing && "None"!=smoothing){
        line += ", SMOOTHING=" + smoothing;
    }
    if("none"!=tolerance && "NONE"!=tolerance && "None"!=tolerance){
        line += ", TOLERANCE=" + tolerance;
    }
    if("none"!=weightingmethod && "NONE"!=weightingmethod && "None"!=weightingmethod){
        line += ", WEIGHTING METHOD=" + weightingmethod;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdamagestabilization(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DAMAGE STABILIZATION";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdamping(,string alpha,,string beta,,string composite,,string dependencies,,string structural,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DAMPING";
    if("none"!=alpha && "NONE"!=alpha && "None"!=alpha){
        line += ", ALPHA=" + alpha;
    }
    if("none"!=beta && "NONE"!=beta && "None"!=beta){
        line += ", BETA=" + beta;
    }
    if("none"!=composite && "NONE"!=composite && "None"!=composite){
        line += ", COMPOSITE=" + composite;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=structural && "NONE"!=structural && "None"!=structural){
        line += ", STRUCTURAL=" + structural;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdampingcontrols(,string lowfrequencycutoff,,string structural,,string viscous,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DAMPING CONTROLS";
    if("none"!=lowfrequencycutoff && "NONE"!=lowfrequencycutoff && "None"!=lowfrequencycutoff){
        line += ", LOW FREQUENCY CUTOFF=" + lowfrequencycutoff;
    }
    if("none"!=structural && "NONE"!=structural && "None"!=structural){
        line += ", STRUCTURAL=" + structural;
    }
    if("none"!=viscous && "NONE"!=viscous && "None"!=viscous){
        line += ", VISCOUS=" + viscous;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdashpot(,string elset,,string dependencies,,string nonlinear,,string orientation,,string rtol,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DASHPOT";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=nonlinear && "NONE"!=nonlinear && "None"!=nonlinear){
        line += ", NONLINEAR=" + nonlinear;
    }
    if("none"!=orientation && "NONE"!=orientation && "None"!=orientation){
        line += ", ORIENTATION=" + orientation;
    }
    if("none"!=rtol && "NONE"!=rtol && "None"!=rtol){
        line += ", RTOL=" + rtol;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdebond(,string master,,string slave,,string debondingforce,,string frequency,,string output,,string timeincrement,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DEBOND";
    if("none"!=master && "NONE"!=master && "None"!=master){
        line += ", MASTER=" + master;
    }
    if("none"!=slave && "NONE"!=slave && "None"!=slave){
        line += ", SLAVE=" + slave;
    }
    if("none"!=debondingforce && "NONE"!=debondingforce && "None"!=debondingforce){
        line += ", DEBONDING FORCE=" + debondingforce;
    }
    if("none"!=frequency && "NONE"!=frequency && "None"!=frequency){
        line += ", FREQUENCY=" + frequency;
    }
    if("none"!=output && "NONE"!=output && "None"!=output){
        line += ", OUTPUT=" + output;
    }
    if("none"!=timeincrement && "NONE"!=timeincrement && "None"!=timeincrement){
        line += ", TIME INCREMENT=" + timeincrement;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdecharge(,string amplitude,,string op,,string imaginary,,string real,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DECHARGE";
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    if("none"!=imaginary && "NONE"!=imaginary && "None"!=imaginary){
        line += ", IMAGINARY=" + imaginary;
    }
    if("none"!=real && "NONE"!=real && "None"!=real){
        line += ", REAL=" + real;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdecurrent(,string amplitude,,string op,,string imaginary,,string real,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DECURRENT";
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    if("none"!=imaginary && "NONE"!=imaginary && "None"!=imaginary){
        line += ", IMAGINARY=" + imaginary;
    }
    if("none"!=real && "NONE"!=real && "None"!=real){
        line += ", REAL=" + real;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdeformationplasticity(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DEFORMATION PLASTICITY";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdensity(,string dependencies,,string porefluid,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DENSITY";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=porefluid && "NONE"!=porefluid && "None"!=porefluid){
        line += ", PORE FLUID=" + porefluid;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdepvar(,string convert,,string delete,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DEPVAR";
    if("none"!=convert && "NONE"!=convert && "None"!=convert){
        line += ", CONVERT=" + convert;
    }
    if("none"!=delete && "NONE"!=delete && "None"!=delete){
        line += ", DELETE=" + delete;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdesigngradient(,string dependent,,string independent,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DESIGN GRADIENT";
    if("none"!=dependent && "NONE"!=dependent && "None"!=dependent){
        line += ", DEPENDENT=" + dependent;
    }
    if("none"!=independent && "NONE"!=independent && "None"!=independent){
        line += ", INDEPENDENT=" + independent;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdesignparameter(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DESIGN PARAMETER";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdesignresponse(,string frequency,,string modelist,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DESIGN RESPONSE";
    if("none"!=frequency && "NONE"!=frequency && "None"!=frequency){
        line += ", FREQUENCY=" + frequency;
    }
    if("none"!=modelist && "NONE"!=modelist && "None"!=modelist){
        line += ", MODE LIST=" + modelist;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdetonationpoint(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DETONATION POINT";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdflow(,string amplitude,,string op,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DFLOW";
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdflux(,string amplitude,,string op,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DFLUX";
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdiagnostics(,string adaptivemesh,,string contactinitialoverclosure,,string criticalelements,,string cutoffratio,,string deeppenetrationfactor,,string deformationspeedcheck,,string detectcrossedsurfaces,,string plasticity,,string warningratio,,string warpedsurface,,string nonhybridincompressible,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DIAGNOSTICS";
    if("none"!=adaptivemesh && "NONE"!=adaptivemesh && "None"!=adaptivemesh){
        line += ", ADAPTIVE MESH=" + adaptivemesh;
    }
    if("none"!=contactinitialoverclosure && "NONE"!=contactinitialoverclosure && "None"!=contactinitialoverclosure){
        line += ", CONTACT INITIAL OVERCLOSURE=" + contactinitialoverclosure;
    }
    if("none"!=criticalelements && "NONE"!=criticalelements && "None"!=criticalelements){
        line += ", CRITICAL ELEMENTS=" + criticalelements;
    }
    if("none"!=cutoffratio && "NONE"!=cutoffratio && "None"!=cutoffratio){
        line += ", CUTOFF RATIO=" + cutoffratio;
    }
    if("none"!=deeppenetrationfactor && "NONE"!=deeppenetrationfactor && "None"!=deeppenetrationfactor){
        line += ", DEEP PENETRATION FACTOR=" + deeppenetrationfactor;
    }
    if("none"!=deformationspeedcheck && "NONE"!=deformationspeedcheck && "None"!=deformationspeedcheck){
        line += ", DEFORMATION SPEED CHECK=" + deformationspeedcheck;
    }
    if("none"!=detectcrossedsurfaces && "NONE"!=detectcrossedsurfaces && "None"!=detectcrossedsurfaces){
        line += ", DETECT CROSSED SURFACES=" + detectcrossedsurfaces;
    }
    if("none"!=plasticity && "NONE"!=plasticity && "None"!=plasticity){
        line += ", PLASTICITY=" + plasticity;
    }
    if("none"!=warningratio && "NONE"!=warningratio && "None"!=warningratio){
        line += ", WARNING RATIO=" + warningratio;
    }
    if("none"!=warpedsurface && "NONE"!=warpedsurface && "None"!=warpedsurface){
        line += ", WARPED SURFACE=" + warpedsurface;
    }
    if("none"!=nonhybridincompressible && "NONE"!=nonhybridincompressible && "None"!=nonhybridincompressible){
        line += ", NONHYBRID INCOMPRESSIBLE=" + nonhybridincompressible;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdielectric(,string dependencies,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DIELECTRIC";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdiffusivity(,string dependencies,,string law,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DIFFUSIVITY";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=law && "NONE"!=law && "None"!=law){
        line += ", LAW=" + law;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdirectcyclic(,string cetol,,string continue,,string deltmx,,string fatigue,,string timepoints,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DIRECT CYCLIC";
    if("none"!=cetol && "NONE"!=cetol && "None"!=cetol){
        line += ", CETOL=" + cetol;
    }
    if("none"!=continue && "NONE"!=continue && "None"!=continue){
        line += ", CONTINUE=" + continue;
    }
    if("none"!=deltmx && "NONE"!=deltmx && "None"!=deltmx){
        line += ", DELTMX=" + deltmx;
    }
    if("none"!=fatigue && "NONE"!=fatigue && "None"!=fatigue){
        line += ", FATIGUE=" + fatigue;
    }
    if("none"!=timepoints && "NONE"!=timepoints && "None"!=timepoints){
        line += ", TIME POINTS=" + timepoints;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdiscreteelasticity(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DISCRETE ELASTICITY";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdiscretesection(,string elset,,string density,,string shape,,string alpha,,string controls,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DISCRETE SECTION";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=density && "NONE"!=density && "None"!=density){
        line += ", DENSITY=" + density;
    }
    if("none"!=shape && "NONE"!=shape && "None"!=shape){
        line += ", SHAPE=" + shape;
    }
    if("none"!=alpha && "NONE"!=alpha && "None"!=alpha){
        line += ", ALPHA=" + alpha;
    }
    if("none"!=controls && "NONE"!=controls && "None"!=controls){
        line += ", CONTROLS=" + controls;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdisplaybody(,string instance,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DISPLAY BODY";
    if("none"!=instance && "NONE"!=instance && "None"!=instance){
        line += ", INSTANCE=" + instance;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdistributing(,string coupling,,string weightingmethod,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DISTRIBUTING";
    if("none"!=coupling && "NONE"!=coupling && "None"!=coupling){
        line += ", COUPLING=" + coupling;
    }
    if("none"!=weightingmethod && "NONE"!=weightingmethod && "None"!=weightingmethod){
        line += ", WEIGHTING METHOD=" + weightingmethod;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdistributingcoupling(,string elset,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DISTRIBUTING COUPLING";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdistribution(,string location,,string name,,string table,,string input,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DISTRIBUTION";
    if("none"!=location && "NONE"!=location && "None"!=location){
        line += ", LOCATION=" + location;
    }
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=table && "NONE"!=table && "None"!=table){
        line += ", TABLE=" + table;
    }
    if("none"!=input && "NONE"!=input && "None"!=input){
        line += ", INPUT=" + input;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdistributiontable(,string name,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DISTRIBUTION TABLE";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdload(,string cyclicmode,,string amplitude,,string constantresultant,,string follower,,string op,,string orientation,,string refnode,,string regiontype,,string imaginary,,string real,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DLOAD";
    if("none"!=cyclicmode && "NONE"!=cyclicmode && "None"!=cyclicmode){
        line += ", CYCLIC MODE=" + cyclicmode;
    }
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=constantresultant && "NONE"!=constantresultant && "None"!=constantresultant){
        line += ", CONSTANT RESULTANT=" + constantresultant;
    }
    if("none"!=follower && "NONE"!=follower && "None"!=follower){
        line += ", FOLLOWER=" + follower;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    if("none"!=orientation && "NONE"!=orientation && "None"!=orientation){
        line += ", ORIENTATION=" + orientation;
    }
    if("none"!=refnode && "NONE"!=refnode && "None"!=refnode){
        line += ", REF NODE=" + refnode;
    }
    if("none"!=regiontype && "NONE"!=regiontype && "None"!=regiontype){
        line += ", REGION TYPE=" + regiontype;
    }
    if("none"!=imaginary && "NONE"!=imaginary && "None"!=imaginary){
        line += ", IMAGINARY=" + imaginary;
    }
    if("none"!=real && "NONE"!=real && "None"!=real){
        line += ", REAL=" + real;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdomaindecomposition(,string elset,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DOMAIN DECOMPOSITION";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdragchain(,string elset,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DRAG CHAIN";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdruckerprager(,string dependencies,,string eccentricity,,string shearcriterion,,string testdata,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DRUCKER PRAGER";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=eccentricity && "NONE"!=eccentricity && "None"!=eccentricity){
        line += ", ECCENTRICITY=" + eccentricity;
    }
    if("none"!=shearcriterion && "NONE"!=shearcriterion && "None"!=shearcriterion){
        line += ", SHEAR CRITERION=" + shearcriterion;
    }
    if("none"!=testdata && "NONE"!=testdata && "None"!=testdata){
        line += ", TEST DATA=" + testdata;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdruckerpragercreep(,string dependencies,,string law,,string time,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DRUCKER PRAGER CREEP";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=law && "NONE"!=law && "None"!=law){
        line += ", LAW=" + law;
    }
    if("none"!=time && "NONE"!=time && "None"!=time){
        line += ", TIME=" + time;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdruckerpragerhardening(,string dependencies,,string rate,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DRUCKER PRAGER HARDENING";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=rate && "NONE"!=rate && "None"!=rate){
        line += ", RATE=" + rate;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdsacontrols(,string formulation,,string reset,,string sizingfrequency,,string tolerance,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DSA CONTROLS";
    if("none"!=formulation && "NONE"!=formulation && "None"!=formulation){
        line += ", FORMULATION=" + formulation;
    }
    if("none"!=reset && "NONE"!=reset && "None"!=reset){
        line += ", RESET=" + reset;
    }
    if("none"!=sizingfrequency && "NONE"!=sizingfrequency && "None"!=sizingfrequency){
        line += ", SIZING FREQUENCY=" + sizingfrequency;
    }
    if("none"!=tolerance && "NONE"!=tolerance && "None"!=tolerance){
        line += ", TOLERANCE=" + tolerance;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdsecharge(,string amplitude,,string op,,string imaginary,,string real,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DSECHARGE";
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    if("none"!=imaginary && "NONE"!=imaginary && "None"!=imaginary){
        line += ", IMAGINARY=" + imaginary;
    }
    if("none"!=real && "NONE"!=real && "None"!=real){
        line += ", REAL=" + real;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdsecurrent(,string amplitude,,string op,,string imaginary,,string real,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DSECURRENT";
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    if("none"!=imaginary && "NONE"!=imaginary && "None"!=imaginary){
        line += ", IMAGINARY=" + imaginary;
    }
    if("none"!=real && "NONE"!=real && "None"!=real){
        line += ", REAL=" + real;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdsflow(,string amplitude,,string op,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DSFLOW";
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdsflux(,string amplitude,,string op,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DSFLUX";
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdsload(,string cyclicmode,,string amplitude,,string constantresultant,,string follower,,string op,,string orientation,,string refnode,,string imaginary,,string real,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DSLOAD";
    if("none"!=cyclicmode && "NONE"!=cyclicmode && "None"!=cyclicmode){
        line += ", CYCLIC MODE=" + cyclicmode;
    }
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=constantresultant && "NONE"!=constantresultant && "None"!=constantresultant){
        line += ", CONSTANT RESULTANT=" + constantresultant;
    }
    if("none"!=follower && "NONE"!=follower && "None"!=follower){
        line += ", FOLLOWER=" + follower;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    if("none"!=orientation && "NONE"!=orientation && "None"!=orientation){
        line += ", ORIENTATION=" + orientation;
    }
    if("none"!=refnode && "NONE"!=refnode && "None"!=refnode){
        line += ", REF NODE=" + refnode;
    }
    if("none"!=imaginary && "NONE"!=imaginary && "None"!=imaginary){
        line += ", IMAGINARY=" + imaginary;
    }
    if("none"!=real && "NONE"!=real && "None"!=real){
        line += ", REAL=" + real;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdynamic(,string subspace,,string adiabatic,,string alpha,,string application,,string beta,,string direct,,string gamma,,string haftol,,string halfincscalefactor,,string impact,,string incrementation,,string initial,,string nohaf,,string singularmass,,string timeintegrator,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DYNAMIC";
    if("none"!=subspace && "NONE"!=subspace && "None"!=subspace){
        line += ", SUBSPACE=" + subspace;
    }
    if("none"!=adiabatic && "NONE"!=adiabatic && "None"!=adiabatic){
        line += ", ADIABATIC=" + adiabatic;
    }
    if("none"!=alpha && "NONE"!=alpha && "None"!=alpha){
        line += ", ALPHA=" + alpha;
    }
    if("none"!=application && "NONE"!=application && "None"!=application){
        line += ", APPLICATION=" + application;
    }
    if("none"!=beta && "NONE"!=beta && "None"!=beta){
        line += ", BETA=" + beta;
    }
    if("none"!=direct && "NONE"!=direct && "None"!=direct){
        line += ", DIRECT=" + direct;
    }
    if("none"!=gamma && "NONE"!=gamma && "None"!=gamma){
        line += ", GAMMA=" + gamma;
    }
    if("none"!=haftol && "NONE"!=haftol && "None"!=haftol){
        line += ", HAFTOL=" + haftol;
    }
    if("none"!=halfincscalefactor && "NONE"!=halfincscalefactor && "None"!=halfincscalefactor){
        line += ", HALFINC SCALE FACTOR=" + halfincscalefactor;
    }
    if("none"!=impact && "NONE"!=impact && "None"!=impact){
        line += ", IMPACT=" + impact;
    }
    if("none"!=incrementation && "NONE"!=incrementation && "None"!=incrementation){
        line += ", INCREMENTATION=" + incrementation;
    }
    if("none"!=initial && "NONE"!=initial && "None"!=initial){
        line += ", INITIAL=" + initial;
    }
    if("none"!=nohaf && "NONE"!=nohaf && "None"!=nohaf){
        line += ", NOHAF=" + nohaf;
    }
    if("none"!=singularmass && "NONE"!=singularmass && "None"!=singularmass){
        line += ", SINGULAR MASS=" + singularmass;
    }
    if("none"!=timeintegrator && "NONE"!=timeintegrator && "None"!=timeintegrator){
        line += ", TIME INTEGRATOR=" + timeintegrator;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQdynamictemperature-displacement(,string explicit,,string directusercontrol,,string elementbyelement,,string fixedtimeincrementation,,string improveddtmethod,,string scalefactor,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*DYNAMIC TEMPERATURE-DISPLACEMENT";
    if("none"!=explicit && "NONE"!=explicit && "None"!=explicit){
        line += ", EXPLICIT=" + explicit;
    }
    if("none"!=directusercontrol && "NONE"!=directusercontrol && "None"!=directusercontrol){
        line += ", DIRECT USER CONTROL=" + directusercontrol;
    }
    if("none"!=elementbyelement && "NONE"!=elementbyelement && "None"!=elementbyelement){
        line += ", ELEMENT BY ELEMENT=" + elementbyelement;
    }
    if("none"!=fixedtimeincrementation && "NONE"!=fixedtimeincrementation && "None"!=fixedtimeincrementation){
        line += ", FIXED TIME INCREMENTATION=" + fixedtimeincrementation;
    }
    if("none"!=improveddtmethod && "NONE"!=improveddtmethod && "None"!=improveddtmethod){
        line += ", IMPROVED DT METHOD=" + improveddtmethod;
    }
    if("none"!=scalefactor && "NONE"!=scalefactor && "None"!=scalefactor){
        line += ", SCALE FACTOR=" + scalefactor;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQelfile(,string directions,,string elset,,string frequency,,string lastmode,,string mode,,string position,,string rebar,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*EL FILE";
    if("none"!=directions && "NONE"!=directions && "None"!=directions){
        line += ", DIRECTIONS=" + directions;
    }
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=frequency && "NONE"!=frequency && "None"!=frequency){
        line += ", FREQUENCY=" + frequency;
    }
    if("none"!=lastmode && "NONE"!=lastmode && "None"!=lastmode){
        line += ", LAST MODE=" + lastmode;
    }
    if("none"!=mode && "NONE"!=mode && "None"!=mode){
        line += ", MODE=" + mode;
    }
    if("none"!=position && "NONE"!=position && "None"!=position){
        line += ", POSITION=" + position;
    }
    if("none"!=rebar && "NONE"!=rebar && "None"!=rebar){
        line += ", REBAR=" + rebar;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQelprint(,string elset,,string frequency,,string lastmode,,string mode,,string position,,string rebar,,string summary,,string totals,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*EL PRINT";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=frequency && "NONE"!=frequency && "None"!=frequency){
        line += ", FREQUENCY=" + frequency;
    }
    if("none"!=lastmode && "NONE"!=lastmode && "None"!=lastmode){
        line += ", LAST MODE=" + lastmode;
    }
    if("none"!=mode && "NONE"!=mode && "None"!=mode){
        line += ", MODE=" + mode;
    }
    if("none"!=position && "NONE"!=position && "None"!=position){
        line += ", POSITION=" + position;
    }
    if("none"!=rebar && "NONE"!=rebar && "None"!=rebar){
        line += ", REBAR=" + rebar;
    }
    if("none"!=summary && "NONE"!=summary && "None"!=summary){
        line += ", SUMMARY=" + summary;
    }
    if("none"!=totals && "NONE"!=totals && "None"!=totals){
        line += ", TOTALS=" + totals;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQelastic(,string compressionfactor,,string dependencies,,string moduli,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*ELASTIC";
    if("none"!=compressionfactor && "NONE"!=compressionfactor && "None"!=compressionfactor){
        line += ", COMPRESSION FACTOR=" + compressionfactor;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=moduli && "NONE"!=moduli && "None"!=moduli){
        line += ", MODULI=" + moduli;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQelcopy(,string elementshift,,string oldset,,string shiftnodes,,string newset,,string reflect,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*ELCOPY";
    if("none"!=elementshift && "NONE"!=elementshift && "None"!=elementshift){
        line += ", ELEMENT SHIFT=" + elementshift;
    }
    if("none"!=oldset && "NONE"!=oldset && "None"!=oldset){
        line += ", OLD SET=" + oldset;
    }
    if("none"!=shiftnodes && "NONE"!=shiftnodes && "None"!=shiftnodes){
        line += ", SHIFT NODES=" + shiftnodes;
    }
    if("none"!=newset && "NONE"!=newset && "None"!=newset){
        line += ", NEW SET=" + newset;
    }
    if("none"!=reflect && "NONE"!=reflect && "None"!=reflect){
        line += ", REFLECT=" + reflect;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQelectricalconductivity(,string dependencies,,string frequency,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*ELECTRICAL CONDUCTIVITY";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=frequency && "NONE"!=frequency && "None"!=frequency){
        line += ", FREQUENCY=" + frequency;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQelectromagnetic(,string lowfrequency,,string timeharmonic,,string transient,,string direct,,string stabilization,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*ELECTROMAGNETIC";
    if("none"!=lowfrequency && "NONE"!=lowfrequency && "None"!=lowfrequency){
        line += ", LOW FREQUENCY=" + lowfrequency;
    }
    if("none"!=timeharmonic && "NONE"!=timeharmonic && "None"!=timeharmonic){
        line += ", TIME HARMONIC=" + timeharmonic;
    }
    if("none"!=transient && "NONE"!=transient && "None"!=transient){
        line += ", TRANSIENT=" + transient;
    }
    if("none"!=direct && "NONE"!=direct && "None"!=direct){
        line += ", DIRECT=" + direct;
    }
    if("none"!=stabilization && "NONE"!=stabilization && "None"!=stabilization){
        line += ", STABILIZATION=" + stabilization;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQelement(,string type,,string elset,,string file,,string input,,string offset,,string solidelementnumbering,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*ELEMENT";
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=file && "NONE"!=file && "None"!=file){
        line += ", FILE=" + file;
    }
    if("none"!=input && "NONE"!=input && "None"!=input){
        line += ", INPUT=" + input;
    }
    if("none"!=offset && "NONE"!=offset && "None"!=offset){
        line += ", OFFSET=" + offset;
    }
    if("none"!=solidelementnumbering && "NONE"!=solidelementnumbering && "None"!=solidelementnumbering){
        line += ", SOLID ELEMENT NUMBERING=" + solidelementnumbering;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQelementmatrixoutput(,string elset,,string dload,,string filename,,string frequency,,string mass,,string outputfile,,string stiffness,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*ELEMENT MATRIX OUTPUT";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=dload && "NONE"!=dload && "None"!=dload){
        line += ", DLOAD=" + dload;
    }
    if("none"!=filename && "NONE"!=filename && "None"!=filename){
        line += ", FILE NAME=" + filename;
    }
    if("none"!=frequency && "NONE"!=frequency && "None"!=frequency){
        line += ", FREQUENCY=" + frequency;
    }
    if("none"!=mass && "NONE"!=mass && "None"!=mass){
        line += ", MASS=" + mass;
    }
    if("none"!=outputfile && "NONE"!=outputfile && "None"!=outputfile){
        line += ", OUTPUT FILE=" + outputfile;
    }
    if("none"!=stiffness && "NONE"!=stiffness && "None"!=stiffness){
        line += ", STIFFNESS=" + stiffness;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQelementoperatoroutput(,string assemble,,string damping,,string elset,,string frequency,,string load,,string loadtype,,string stiffness,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*ELEMENT OPERATOR OUTPUT";
    if("none"!=assemble && "NONE"!=assemble && "None"!=assemble){
        line += ", ASSEMBLE=" + assemble;
    }
    if("none"!=damping && "NONE"!=damping && "None"!=damping){
        line += ", DAMPING=" + damping;
    }
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=frequency && "NONE"!=frequency && "None"!=frequency){
        line += ", FREQUENCY=" + frequency;
    }
    if("none"!=load && "NONE"!=load && "None"!=load){
        line += ", LOAD=" + load;
    }
    if("none"!=loadtype && "NONE"!=loadtype && "None"!=loadtype){
        line += ", LOADTYPE=" + loadtype;
    }
    if("none"!=stiffness && "NONE"!=stiffness && "None"!=stiffness){
        line += ", STIFFNESS=" + stiffness;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQelementoutput(,string elset,,string tracerset,,string allsectionpts,,string directions,,string elset,,string exterior,,string position,,string rebar,,string variable,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*ELEMENT OUTPUT";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=tracerset && "NONE"!=tracerset && "None"!=tracerset){
        line += ", TRACER SET=" + tracerset;
    }
    if("none"!=allsectionpts && "NONE"!=allsectionpts && "None"!=allsectionpts){
        line += ", ALLSECTIONPTS=" + allsectionpts;
    }
    if("none"!=directions && "NONE"!=directions && "None"!=directions){
        line += ", DIRECTIONS=" + directions;
    }
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=exterior && "NONE"!=exterior && "None"!=exterior){
        line += ", EXTERIOR=" + exterior;
    }
    if("none"!=position && "NONE"!=position && "None"!=position){
        line += ", POSITION=" + position;
    }
    if("none"!=rebar && "NONE"!=rebar && "None"!=rebar){
        line += ", REBAR=" + rebar;
    }
    if("none"!=variable && "NONE"!=variable && "None"!=variable){
        line += ", VARIABLE=" + variable;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQelementresponse(,string elset,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*ELEMENT RESPONSE";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQelgen(,string allnodes,,string elset,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*ELGEN";
    if("none"!=allnodes && "NONE"!=allnodes && "None"!=allnodes){
        line += ", ALL NODES=" + allnodes;
    }
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQelset(,string elset,,string generate,,string instance,,string internal,,string unsorted,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*ELSET";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=generate && "NONE"!=generate && "None"!=generate){
        line += ", GENERATE=" + generate;
    }
    if("none"!=instance && "NONE"!=instance && "None"!=instance){
        line += ", INSTANCE=" + instance;
    }
    if("none"!=internal && "NONE"!=internal && "None"!=internal){
        line += ", INTERNAL=" + internal;
    }
    if("none"!=unsorted && "NONE"!=unsorted && "None"!=unsorted){
        line += ", UNSORTED=" + unsorted;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQembeddedelement(,string absoluteexteriortolerance,,string embednodes,,string exteriortolerance,,string hostelset,,string partialembed,,string roundofftolerance,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*EMBEDDED ELEMENT";
    if("none"!=absoluteexteriortolerance && "NONE"!=absoluteexteriortolerance && "None"!=absoluteexteriortolerance){
        line += ", ABSOLUTE EXTERIOR TOLERANCE=" + absoluteexteriortolerance;
    }
    if("none"!=embednodes && "NONE"!=embednodes && "None"!=embednodes){
        line += ", EMBED NODES=" + embednodes;
    }
    if("none"!=exteriortolerance && "NONE"!=exteriortolerance && "None"!=exteriortolerance){
        line += ", EXTERIOR TOLERANCE=" + exteriortolerance;
    }
    if("none"!=hostelset && "NONE"!=hostelset && "None"!=hostelset){
        line += ", HOST ELSET=" + hostelset;
    }
    if("none"!=partialembed && "NONE"!=partialembed && "None"!=partialembed){
        line += ", PARTIAL EMBED=" + partialembed;
    }
    if("none"!=roundofftolerance && "NONE"!=roundofftolerance && "None"!=roundofftolerance){
        line += ", ROUNDOFF TOLERANCE=" + roundofftolerance;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQemissivity(,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*EMISSIVITY";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQendassembly(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*END ASSEMBLY";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQendinstance(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*END INSTANCE";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQendloadcase(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*END LOAD CASE";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQendpart(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*END PART";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQendstep(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*END STEP";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQenergyequationsolver(,string convergence,,string diagnostics,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*ENERGY EQUATION SOLVER";
    if("none"!=convergence && "NONE"!=convergence && "None"!=convergence){
        line += ", CONVERGENCE=" + convergence;
    }
    if("none"!=diagnostics && "NONE"!=diagnostics && "None"!=diagnostics){
        line += ", DIAGNOSTICS=" + diagnostics;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQenergyfile(,string elset,,string frequency,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*ENERGY FILE";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=frequency && "NONE"!=frequency && "None"!=frequency){
        line += ", FREQUENCY=" + frequency;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQenergyoutput(,string elset,,string variable,,string perelementset,,string persection,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*ENERGY OUTPUT";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=variable && "NONE"!=variable && "None"!=variable){
        line += ", VARIABLE=" + variable;
    }
    if("none"!=perelementset && "NONE"!=perelementset && "None"!=perelementset){
        line += ", PER ELEMENT SET=" + perelementset;
    }
    if("none"!=persection && "NONE"!=persection && "None"!=persection){
        line += ", PER SECTION=" + persection;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQenergyprint(,string elset,,string frequency,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*ENERGY PRINT";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=frequency && "NONE"!=frequency && "None"!=frequency){
        line += ", FREQUENCY=" + frequency;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQenrichment(,string elset,,string name,,string enrichmentradius,,string interaction,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*ENRICHMENT";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=enrichmentradius && "NONE"!=enrichmentradius && "None"!=enrichmentradius){
        line += ", ENRICHMENT RADIUS=" + enrichmentradius;
    }
    if("none"!=interaction && "NONE"!=interaction && "None"!=interaction){
        line += ", INTERACTION=" + interaction;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQenrichmentactivation(,string name,,string activate,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*ENRICHMENT ACTIVATION";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=activate && "NONE"!=activate && "None"!=activate){
        line += ", ACTIVATE=" + activate;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQeos(,string type,,string detonationenergy,,string properties,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*EOS";
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=detonationenergy && "NONE"!=detonationenergy && "None"!=detonationenergy){
        line += ", DETONATION ENERGY=" + detonationenergy;
    }
    if("none"!=properties && "NONE"!=properties && "None"!=properties){
        line += ", PROPERTIES=" + properties;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQeoscompaction(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*EOS COMPACTION";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQepjoint(,string elset,,string orientation,,string section,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*EPJOINT";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=orientation && "NONE"!=orientation && "None"!=orientation){
        line += ", ORIENTATION=" + orientation;
    }
    if("none"!=section && "NONE"!=section && "None"!=section){
        line += ", SECTION=" + section;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQequation(,string input,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*EQUATION";
    if("none"!=input && "NONE"!=input && "None"!=input){
        line += ", INPUT=" + input;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQeulerianboundary(,string inflow,,string op,,string outflow,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*EULERIAN BOUNDARY";
    if("none"!=inflow && "NONE"!=inflow && "None"!=inflow){
        line += ", INFLOW=" + inflow;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    if("none"!=outflow && "NONE"!=outflow && "None"!=outflow){
        line += ", OUTFLOW=" + outflow;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQeulerianmeshmotion(,string elset,,string surface,,string aspectratiomax,,string buffer,,string center,,string contract,,string op,,string orientation,,string vmaxfactor,,string volfracmin,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*EULERIAN MESH MOTION";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=surface && "NONE"!=surface && "None"!=surface){
        line += ", SURFACE=" + surface;
    }
    if("none"!=aspectratiomax && "NONE"!=aspectratiomax && "None"!=aspectratiomax){
        line += ", ASPECT RATIO MAX=" + aspectratiomax;
    }
    if("none"!=buffer && "NONE"!=buffer && "None"!=buffer){
        line += ", BUFFER=" + buffer;
    }
    if("none"!=center && "NONE"!=center && "None"!=center){
        line += ", CENTER=" + center;
    }
    if("none"!=contract && "NONE"!=contract && "None"!=contract){
        line += ", CONTRACT=" + contract;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    if("none"!=orientation && "NONE"!=orientation && "None"!=orientation){
        line += ", ORIENTATION=" + orientation;
    }
    if("none"!=vmaxfactor && "NONE"!=vmaxfactor && "None"!=vmaxfactor){
        line += ", VMAX FACTOR=" + vmaxfactor;
    }
    if("none"!=volfracmin && "NONE"!=volfracmin && "None"!=volfracmin){
        line += ", VOLFRAC MIN=" + volfracmin;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQeuleriansection(,string elset,,string advection,,string controls,,string fluxlimitratio,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*EULERIAN SECTION";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=advection && "NONE"!=advection && "None"!=advection){
        line += ", ADVECTION=" + advection;
    }
    if("none"!=controls && "NONE"!=controls && "None"!=controls){
        line += ", CONTROLS=" + controls;
    }
    if("none"!=fluxlimitratio && "NONE"!=fluxlimitratio && "None"!=fluxlimitratio){
        line += ", FLUX LIMIT RATIO=" + fluxlimitratio;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQexpansion(,string dependencies,,string field,,string porefluid,,string type,,string user,,string zero,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*EXPANSION";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=field && "NONE"!=field && "None"!=field){
        line += ", FIELD=" + field;
    }
    if("none"!=porefluid && "NONE"!=porefluid && "None"!=porefluid){
        line += ", PORE FLUID=" + porefluid;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=user && "NONE"!=user && "None"!=user){
        line += ", USER=" + user;
    }
    if("none"!=zero && "NONE"!=zero && "None"!=zero){
        line += ", ZERO=" + zero;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQextremeelementvalue(,string elset,,string abs,,string max,,string min,,string output,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*EXTREME ELEMENT VALUE";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=abs && "NONE"!=abs && "None"!=abs){
        line += ", ABS=" + abs;
    }
    if("none"!=max && "NONE"!=max && "None"!=max){
        line += ", MAX=" + max;
    }
    if("none"!=min && "NONE"!=min && "None"!=min){
        line += ", MIN=" + min;
    }
    if("none"!=output && "NONE"!=output && "None"!=output){
        line += ", OUTPUT=" + output;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQextremenodevalue(,string nset,,string abs,,string max,,string min,,string output,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*EXTREME NODE VALUE";
    if("none"!=nset && "NONE"!=nset && "None"!=nset){
        line += ", NSET=" + nset;
    }
    if("none"!=abs && "NONE"!=abs && "None"!=abs){
        line += ", ABS=" + abs;
    }
    if("none"!=max && "NONE"!=max && "None"!=max){
        line += ", MAX=" + max;
    }
    if("none"!=min && "NONE"!=min && "None"!=min){
        line += ", MIN=" + min;
    }
    if("none"!=output && "NONE"!=output && "None"!=output){
        line += ", OUTPUT=" + output;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQextremevalue(,string halt,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*EXTREME VALUE";
    if("none"!=halt && "NONE"!=halt && "None"!=halt){
        line += ", HALT=" + halt;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQfabric(,string properties,,string stressfreeinitialslack,,string user,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FABRIC";
    if("none"!=properties && "NONE"!=properties && "None"!=properties){
        line += ", PROPERTIES=" + properties;
    }
    if("none"!=stressfreeinitialslack && "NONE"!=stressfreeinitialslack && "None"!=stressfreeinitialslack){
        line += ", STRESS FREE INITIAL SLACK=" + stressfreeinitialslack;
    }
    if("none"!=user && "NONE"!=user && "None"!=user){
        line += ", USER=" + user;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQfailstrain(,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FAIL STRAIN";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQfailstress(,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FAIL STRESS";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQfailureratios(,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FAILURE RATIOS";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQfastener(,string interactionname,,string property,,string elset,,string referencenodeset,,string adjustorientation,,string attachmentmethod,,string coupling,,string numberoflayers,,string orientation,,string radiusofinfluence,,string searchradius,,string unsorted,,string weightingmethod,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FASTENER";
    if("none"!=interactionname && "NONE"!=interactionname && "None"!=interactionname){
        line += ", INTERACTION NAME=" + interactionname;
    }
    if("none"!=property && "NONE"!=property && "None"!=property){
        line += ", PROPERTY=" + property;
    }
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=referencenodeset && "NONE"!=referencenodeset && "None"!=referencenodeset){
        line += ", REFERENCE NODE SET=" + referencenodeset;
    }
    if("none"!=adjustorientation && "NONE"!=adjustorientation && "None"!=adjustorientation){
        line += ", ADJUST ORIENTATION=" + adjustorientation;
    }
    if("none"!=attachmentmethod && "NONE"!=attachmentmethod && "None"!=attachmentmethod){
        line += ", ATTACHMENT METHOD=" + attachmentmethod;
    }
    if("none"!=coupling && "NONE"!=coupling && "None"!=coupling){
        line += ", COUPLING=" + coupling;
    }
    if("none"!=numberoflayers && "NONE"!=numberoflayers && "None"!=numberoflayers){
        line += ", NUMBER OF LAYERS=" + numberoflayers;
    }
    if("none"!=orientation && "NONE"!=orientation && "None"!=orientation){
        line += ", ORIENTATION=" + orientation;
    }
    if("none"!=radiusofinfluence && "NONE"!=radiusofinfluence && "None"!=radiusofinfluence){
        line += ", RADIUS OF INFLUENCE=" + radiusofinfluence;
    }
    if("none"!=searchradius && "NONE"!=searchradius && "None"!=searchradius){
        line += ", SEARCH RADIUS=" + searchradius;
    }
    if("none"!=unsorted && "NONE"!=unsorted && "None"!=unsorted){
        line += ", UNSORTED=" + unsorted;
    }
    if("none"!=weightingmethod && "NONE"!=weightingmethod && "None"!=weightingmethod){
        line += ", WEIGHTING METHOD=" + weightingmethod;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQfastenerproperty(,string name,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FASTENER PROPERTY";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQfield(,string variable,,string amplitude,,string input,,string op,,string file,,string bstep,,string binc,,string estep,,string einc,,string outputvariable,,string interpolate,,string user,,string number,,string blocking,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FIELD";
    if("none"!=variable && "NONE"!=variable && "None"!=variable){
        line += ", VARIABLE=" + variable;
    }
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=input && "NONE"!=input && "None"!=input){
        line += ", INPUT=" + input;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    if("none"!=file && "NONE"!=file && "None"!=file){
        line += ", FILE=" + file;
    }
    if("none"!=bstep && "NONE"!=bstep && "None"!=bstep){
        line += ", BSTEP=" + bstep;
    }
    if("none"!=binc && "NONE"!=binc && "None"!=binc){
        line += ", BINC=" + binc;
    }
    if("none"!=estep && "NONE"!=estep && "None"!=estep){
        line += ", ESTEP=" + estep;
    }
    if("none"!=einc && "NONE"!=einc && "None"!=einc){
        line += ", EINC=" + einc;
    }
    if("none"!=outputvariable && "NONE"!=outputvariable && "None"!=outputvariable){
        line += ", OUTPUT VARIABLE=" + outputvariable;
    }
    if("none"!=interpolate && "NONE"!=interpolate && "None"!=interpolate){
        line += ", INTERPOLATE=" + interpolate;
    }
    if("none"!=user && "NONE"!=user && "None"!=user){
        line += ", USER=" + user;
    }
    if("none"!=number && "NONE"!=number && "None"!=number){
        line += ", NUMBER=" + number;
    }
    if("none"!=blocking && "NONE"!=blocking && "None"!=blocking){
        line += ", BLOCKING=" + blocking;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQfileformat(,string ascii,,string zeroincrement,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FILE FORMAT";
    if("none"!=ascii && "NONE"!=ascii && "None"!=ascii){
        line += ", ASCII=" + ascii;
    }
    if("none"!=zeroincrement && "NONE"!=zeroincrement && "None"!=zeroincrement){
        line += ", ZERO INCREMENT=" + zeroincrement;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQfileoutput(,string numberinterval,,string timemarks,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FILE OUTPUT";
    if("none"!=numberinterval && "NONE"!=numberinterval && "None"!=numberinterval){
        line += ", NUMBER INTERVAL=" + numberinterval;
    }
    if("none"!=timemarks && "NONE"!=timemarks && "None"!=timemarks){
        line += ", TIME MARKS=" + timemarks;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQfilm(,string amplitude,,string filmamplitude,,string op,,string regiontype,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FILM";
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=filmamplitude && "NONE"!=filmamplitude && "None"!=filmamplitude){
        line += ", FILM AMPLITUDE=" + filmamplitude;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    if("none"!=regiontype && "NONE"!=regiontype && "None"!=regiontype){
        line += ", REGION TYPE=" + regiontype;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQfilmproperty(,string name,,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FILM PROPERTY";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQfilter(,string name,,string halt,,string invariant,,string limit,,string operator,,string startcondition,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FILTER";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=halt && "NONE"!=halt && "None"!=halt){
        line += ", HALT=" + halt;
    }
    if("none"!=invariant && "NONE"!=invariant && "None"!=invariant){
        line += ", INVARIANT=" + invariant;
    }
    if("none"!=limit && "NONE"!=limit && "None"!=limit){
        line += ", LIMIT=" + limit;
    }
    if("none"!=operator && "NONE"!=operator && "None"!=operator){
        line += ", OPERATOR=" + operator;
    }
    if("none"!=startcondition && "NONE"!=startcondition && "None"!=startcondition){
        line += ", START CONDITION=" + startcondition;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQfixedmassscaling(,string dt,,string elset,,string factor,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FIXED MASS SCALING";
    if("none"!=dt && "NONE"!=dt && "None"!=dt){
        line += ", DT=" + dt;
    }
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=factor && "NONE"!=factor && "None"!=factor){
        line += ", FACTOR=" + factor;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQflexiblebody(,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FLEXIBLE BODY";
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQflow(,string amplitude,,string op,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FLOW";
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQfluidbehavior(,string name,,string user,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FLUID BEHAVIOR";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=user && "NONE"!=user && "None"!=user){
        line += ", USER=" + user;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQfluidboundary(,string surface,,string pressureoutlet,,string symmetric,,string velocityinlet,,string wall,,string op,,string slip,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FLUID BOUNDARY";
    if("none"!=surface && "NONE"!=surface && "None"!=surface){
        line += ", SURFACE=" + surface;
    }
    if("none"!=pressureoutlet && "NONE"!=pressureoutlet && "None"!=pressureoutlet){
        line += ", PRESSURE OUTLET=" + pressureoutlet;
    }
    if("none"!=symmetric && "NONE"!=symmetric && "None"!=symmetric){
        line += ", SYMMETRIC=" + symmetric;
    }
    if("none"!=velocityinlet && "NONE"!=velocityinlet && "None"!=velocityinlet){
        line += ", VELOCITY INLET=" + velocityinlet;
    }
    if("none"!=wall && "NONE"!=wall && "None"!=wall){
        line += ", WALL=" + wall;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    if("none"!=slip && "NONE"!=slip && "None"!=slip){
        line += ", SLIP=" + slip;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQfluidbulkmodulus(,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FLUID BULK MODULUS";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQfluidcavity(,string name,,string refnode,,string behavior,,string mixture,,string addedvolume,,string adiabatic,,string ambientpressure,,string ambienttemperature,,string checknormals,,string minimumvolume,,string surface,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FLUID CAVITY";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=refnode && "NONE"!=refnode && "None"!=refnode){
        line += ", REF NODE=" + refnode;
    }
    if("none"!=behavior && "NONE"!=behavior && "None"!=behavior){
        line += ", BEHAVIOR=" + behavior;
    }
    if("none"!=mixture && "NONE"!=mixture && "None"!=mixture){
        line += ", MIXTURE=" + mixture;
    }
    if("none"!=addedvolume && "NONE"!=addedvolume && "None"!=addedvolume){
        line += ", ADDED VOLUME=" + addedvolume;
    }
    if("none"!=adiabatic && "NONE"!=adiabatic && "None"!=adiabatic){
        line += ", ADIABATIC=" + adiabatic;
    }
    if("none"!=ambientpressure && "NONE"!=ambientpressure && "None"!=ambientpressure){
        line += ", AMBIENT PRESSURE=" + ambientpressure;
    }
    if("none"!=ambienttemperature && "NONE"!=ambienttemperature && "None"!=ambienttemperature){
        line += ", AMBIENT TEMPERATURE=" + ambienttemperature;
    }
    if("none"!=checknormals && "NONE"!=checknormals && "None"!=checknormals){
        line += ", CHECK NORMALS=" + checknormals;
    }
    if("none"!=minimumvolume && "NONE"!=minimumvolume && "None"!=minimumvolume){
        line += ", MINIMUM VOLUME=" + minimumvolume;
    }
    if("none"!=surface && "NONE"!=surface && "None"!=surface){
        line += ", SURFACE=" + surface;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQfluiddensity(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FLUID DENSITY";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQfluidexchange(,string name,,string property,,string cavitypressure,,string constants,,string effectivearea,,string surface,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FLUID EXCHANGE";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=property && "NONE"!=property && "None"!=property){
        line += ", PROPERTY=" + property;
    }
    if("none"!=cavitypressure && "NONE"!=cavitypressure && "None"!=cavitypressure){
        line += ", CAVITY PRESSURE=" + cavitypressure;
    }
    if("none"!=constants && "NONE"!=constants && "None"!=constants){
        line += ", CONSTANTS=" + constants;
    }
    if("none"!=effectivearea && "NONE"!=effectivearea && "None"!=effectivearea){
        line += ", EFFECTIVE AREA=" + effectivearea;
    }
    if("none"!=surface && "NONE"!=surface && "None"!=surface){
        line += ", SURFACE=" + surface;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQfluidexchangeactivation(,string amplitude,,string blockage,,string deltaleakagearea,,string op,,string outflowonly,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FLUID EXCHANGE ACTIVATION";
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=blockage && "NONE"!=blockage && "None"!=blockage){
        line += ", BLOCKAGE=" + blockage;
    }
    if("none"!=deltaleakagearea && "NONE"!=deltaleakagearea && "None"!=deltaleakagearea){
        line += ", DELTA LEAKAGE AREA=" + deltaleakagearea;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    if("none"!=outflowonly && "NONE"!=outflowonly && "None"!=outflowonly){
        line += ", OUTFLOW ONLY=" + outflowonly;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQfluidexchangeproperty(,string name,,string type,,string constants,,string dependencies,,string depvar,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FLUID EXCHANGE PROPERTY";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=constants && "NONE"!=constants && "None"!=constants){
        line += ", CONSTANTS=" + constants;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=depvar && "NONE"!=depvar && "None"!=depvar){
        line += ", DEPVAR=" + depvar;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQfluidexpansion(,string dependencies,,string zero,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FLUID EXPANSION";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=zero && "NONE"!=zero && "None"!=zero){
        line += ", ZERO=" + zero;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQfluidflux(,string amplitude,,string op,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FLUID FLUX";
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQfluidinflator(,string name,,string property,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FLUID INFLATOR";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=property && "NONE"!=property && "None"!=property){
        line += ", PROPERTY=" + property;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQfluidinflatoractivation(,string inflationtimeamplitude,,string massflowamplitude,,string op,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FLUID INFLATOR ACTIVATION";
    if("none"!=inflationtimeamplitude && "NONE"!=inflationtimeamplitude && "None"!=inflationtimeamplitude){
        line += ", INFLATION TIME AMPLITUDE=" + inflationtimeamplitude;
    }
    if("none"!=massflowamplitude && "NONE"!=massflowamplitude && "None"!=massflowamplitude){
        line += ", MASS FLOW AMPLITUDE=" + massflowamplitude;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQfluidinflatormixture(,string numberspecies,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FLUID INFLATOR MIXTURE";
    if("none"!=numberspecies && "NONE"!=numberspecies && "None"!=numberspecies){
        line += ", NUMBER SPECIES=" + numberspecies;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQfluidinflatorproperty(,string effectivearea,,string name,,string tankvolume,,string type,,string dischargecoefficient,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FLUID INFLATOR PROPERTY";
    if("none"!=effectivearea && "NONE"!=effectivearea && "None"!=effectivearea){
        line += ", EFFECTIVE AREA=" + effectivearea;
    }
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=tankvolume && "NONE"!=tankvolume && "None"!=tankvolume){
        line += ", TANK VOLUME=" + tankvolume;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=dischargecoefficient && "NONE"!=dischargecoefficient && "None"!=dischargecoefficient){
        line += ", DISCHARGE COEFFICIENT=" + dischargecoefficient;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQfluidleakoff(,string dependencies,,string user,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FLUID LEAKOFF";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=user && "NONE"!=user && "None"!=user){
        line += ", USER=" + user;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQfluidpipeconnectorloss(,string type,,string laminarflowtransition,,string valvecontrol,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FLUID PIPE CONNECTOR LOSS";
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=laminarflowtransition && "NONE"!=laminarflowtransition && "None"!=laminarflowtransition){
        line += ", LAMINAR FLOW TRANSITION=" + laminarflowtransition;
    }
    if("none"!=valvecontrol && "NONE"!=valvecontrol && "None"!=valvecontrol){
        line += ", VALVE CONTROL=" + valvecontrol;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQfluidpipeconnectorsection(,string elset,,string material,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FLUID PIPE CONNECTOR SECTION";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=material && "NONE"!=material && "None"!=material){
        line += ", MATERIAL=" + material;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQfluidpipeflowloss(,string type,,string laminarflowtransition,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FLUID PIPE FLOW LOSS";
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=laminarflowtransition && "NONE"!=laminarflowtransition && "None"!=laminarflowtransition){
        line += ", LAMINAR FLOW TRANSITION=" + laminarflowtransition;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQfluidpipesection(,string elset,,string material,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FLUID PIPE SECTION";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=material && "NONE"!=material && "None"!=material){
        line += ", MATERIAL=" + material;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQfluidsection(,string elset,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FLUID SECTION";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQfoundation(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FOUNDATION";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQfracturecriterion(,string distance,,string nset,,string type,,string dependencies,,string mixedmodebehavior,,string nodalenergyrate,,string normaldirection,,string symmetry,,string unstablegrowthtolerance,,string tolerance,,string viscosity,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FRACTURE CRITERION";
    if("none"!=distance && "NONE"!=distance && "None"!=distance){
        line += ", DISTANCE=" + distance;
    }
    if("none"!=nset && "NONE"!=nset && "None"!=nset){
        line += ", NSET=" + nset;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=mixedmodebehavior && "NONE"!=mixedmodebehavior && "None"!=mixedmodebehavior){
        line += ", MIXED MODE BEHAVIOR=" + mixedmodebehavior;
    }
    if("none"!=nodalenergyrate && "NONE"!=nodalenergyrate && "None"!=nodalenergyrate){
        line += ", NODAL ENERGY RATE=" + nodalenergyrate;
    }
    if("none"!=normaldirection && "NONE"!=normaldirection && "None"!=normaldirection){
        line += ", NORMAL DIRECTION=" + normaldirection;
    }
    if("none"!=symmetry && "NONE"!=symmetry && "None"!=symmetry){
        line += ", SYMMETRY=" + symmetry;
    }
    if("none"!=unstablegrowthtolerance && "NONE"!=unstablegrowthtolerance && "None"!=unstablegrowthtolerance){
        line += ", UNSTABLE GROWTH TOLERANCE=" + unstablegrowthtolerance;
    }
    if("none"!=tolerance && "NONE"!=tolerance && "None"!=tolerance){
        line += ", TOLERANCE=" + tolerance;
    }
    if("none"!=viscosity && "NONE"!=viscosity && "None"!=viscosity){
        line += ", VISCOSITY=" + viscosity;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQframesection(,string elset,,string buckling,,string density,,string dependencies,,string pinned,,string plasticdefaults,,string section,,string yieldstress,,string zero,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FRAME SECTION";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=buckling && "NONE"!=buckling && "None"!=buckling){
        line += ", BUCKLING=" + buckling;
    }
    if("none"!=density && "NONE"!=density && "None"!=density){
        line += ", DENSITY=" + density;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=pinned && "NONE"!=pinned && "None"!=pinned){
        line += ", PINNED=" + pinned;
    }
    if("none"!=plasticdefaults && "NONE"!=plasticdefaults && "None"!=plasticdefaults){
        line += ", PLASTIC DEFAULTS=" + plasticdefaults;
    }
    if("none"!=section && "NONE"!=section && "None"!=section){
        line += ", SECTION=" + section;
    }
    if("none"!=yieldstress && "NONE"!=yieldstress && "None"!=yieldstress){
        line += ", YIELD STRESS=" + yieldstress;
    }
    if("none"!=zero && "NONE"!=zero && "None"!=zero){
        line += ", ZERO=" + zero;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQfrequency(,string acousticcoupling,,string dampingprojection,,string eigensolver,,string normalization,,string propertyevaluation,,string residualmodes,,string sim,,string nset,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FREQUENCY";
    if("none"!=acousticcoupling && "NONE"!=acousticcoupling && "None"!=acousticcoupling){
        line += ", ACOUSTIC COUPLING=" + acousticcoupling;
    }
    if("none"!=dampingprojection && "NONE"!=dampingprojection && "None"!=dampingprojection){
        line += ", DAMPING PROJECTION=" + dampingprojection;
    }
    if("none"!=eigensolver && "NONE"!=eigensolver && "None"!=eigensolver){
        line += ", EIGENSOLVER=" + eigensolver;
    }
    if("none"!=normalization && "NONE"!=normalization && "None"!=normalization){
        line += ", NORMALIZATION=" + normalization;
    }
    if("none"!=propertyevaluation && "NONE"!=propertyevaluation && "None"!=propertyevaluation){
        line += ", PROPERTY EVALUATION=" + propertyevaluation;
    }
    if("none"!=residualmodes && "NONE"!=residualmodes && "None"!=residualmodes){
        line += ", RESIDUAL MODES=" + residualmodes;
    }
    if("none"!=sim && "NONE"!=sim && "None"!=sim){
        line += ", SIM=" + sim;
    }
    if("none"!=nset && "NONE"!=nset && "None"!=nset){
        line += ", NSET=" + nset;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQfriction(,string elasticslip,,string lagrange,,string rough,,string sliptolerance,,string user,,string anisotropic,,string dependencies,,string depvar,,string exponentialdecay,,string properties,,string sheartractionslope,,string taumax,,string testdata,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*FRICTION";
    if("none"!=elasticslip && "NONE"!=elasticslip && "None"!=elasticslip){
        line += ", ELASTIC SLIP=" + elasticslip;
    }
    if("none"!=lagrange && "NONE"!=lagrange && "None"!=lagrange){
        line += ", LAGRANGE=" + lagrange;
    }
    if("none"!=rough && "NONE"!=rough && "None"!=rough){
        line += ", ROUGH=" + rough;
    }
    if("none"!=sliptolerance && "NONE"!=sliptolerance && "None"!=sliptolerance){
        line += ", SLIP TOLERANCE=" + sliptolerance;
    }
    if("none"!=user && "NONE"!=user && "None"!=user){
        line += ", USER=" + user;
    }
    if("none"!=anisotropic && "NONE"!=anisotropic && "None"!=anisotropic){
        line += ", ANISOTROPIC=" + anisotropic;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=depvar && "NONE"!=depvar && "None"!=depvar){
        line += ", DEPVAR=" + depvar;
    }
    if("none"!=exponentialdecay && "NONE"!=exponentialdecay && "None"!=exponentialdecay){
        line += ", EXPONENTIAL DECAY=" + exponentialdecay;
    }
    if("none"!=properties && "NONE"!=properties && "None"!=properties){
        line += ", PROPERTIES=" + properties;
    }
    if("none"!=sheartractionslope && "NONE"!=sheartractionslope && "None"!=sheartractionslope){
        line += ", SHEAR TRACTION SLOPE=" + sheartractionslope;
    }
    if("none"!=taumax && "NONE"!=taumax && "None"!=taumax){
        line += ", TAUMAX=" + taumax;
    }
    if("none"!=testdata && "NONE"!=testdata && "None"!=testdata){
        line += ", TEST DATA=" + testdata;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQgap(,string elset,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*GAP";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQgapconductance(,string dependencies,,string pressure,,string user,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*GAP CONDUCTANCE";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=pressure && "NONE"!=pressure && "None"!=pressure){
        line += ", PRESSURE=" + pressure;
    }
    if("none"!=user && "NONE"!=user && "None"!=user){
        line += ", USER=" + user;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQgapelectricalconductance(,string dependencies,,string pressure,,string user,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*GAP ELECTRICAL CONDUCTANCE";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=pressure && "NONE"!=pressure && "None"!=pressure){
        line += ", PRESSURE=" + pressure;
    }
    if("none"!=user && "NONE"!=user && "None"!=user){
        line += ", USER=" + user;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQgapflow(,string dependencies,,string type,,string kmax,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*GAP FLOW";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=kmax && "NONE"!=kmax && "None"!=kmax){
        line += ", KMAX=" + kmax;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQgapheatgeneration(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*GAP HEAT GENERATION";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQgapradiation(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*GAP RADIATION";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQgasspecificheat(,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*GAS SPECIFIC HEAT";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQgasketbehavior(,string name,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*GASKET BEHAVIOR";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQgasketcontactarea(,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*GASKET CONTACT AREA";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQgasketelasticity(,string component,,string dependencies,,string variable,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*GASKET ELASTICITY";
    if("none"!=component && "NONE"!=component && "None"!=component){
        line += ", COMPONENT=" + component;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=variable && "NONE"!=variable && "None"!=variable){
        line += ", VARIABLE=" + variable;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQgasketsection(,string elset,,string behavior,,string material,,string orientation,,string stabilizationstiffness,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*GASKET SECTION";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=behavior && "NONE"!=behavior && "None"!=behavior){
        line += ", BEHAVIOR=" + behavior;
    }
    if("none"!=material && "NONE"!=material && "None"!=material){
        line += ", MATERIAL=" + material;
    }
    if("none"!=orientation && "NONE"!=orientation && "None"!=orientation){
        line += ", ORIENTATION=" + orientation;
    }
    if("none"!=stabilizationstiffness && "NONE"!=stabilizationstiffness && "None"!=stabilizationstiffness){
        line += ", STABILIZATION STIFFNESS=" + stabilizationstiffness;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQgasketthicknessbehavior(,string dependencies,,string direction,,string tensilestiffnessfactor,,string type,,string variable,,string slopedrop,,string yieldonset,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*GASKET THICKNESS BEHAVIOR";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=direction && "NONE"!=direction && "None"!=direction){
        line += ", DIRECTION=" + direction;
    }
    if("none"!=tensilestiffnessfactor && "NONE"!=tensilestiffnessfactor && "None"!=tensilestiffnessfactor){
        line += ", TENSILE STIFFNESS FACTOR=" + tensilestiffnessfactor;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=variable && "NONE"!=variable && "None"!=variable){
        line += ", VARIABLE=" + variable;
    }
    if("none"!=slopedrop && "NONE"!=slopedrop && "None"!=slopedrop){
        line += ", SLOPE DROP=" + slopedrop;
    }
    if("none"!=yieldonset && "NONE"!=yieldonset && "None"!=yieldonset){
        line += ", YIELD ONSET=" + yieldonset;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQgel(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*GEL";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQgeostatic(,string heat,,string utol,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*GEOSTATIC";
    if("none"!=heat && "NONE"!=heat && "None"!=heat){
        line += ", HEAT=" + heat;
    }
    if("none"!=utol && "NONE"!=utol && "None"!=utol){
        line += ", UTOL=" + utol;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQglobaldamping(,string alpha,,string beta,,string field,,string structural,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*GLOBAL DAMPING";
    if("none"!=alpha && "NONE"!=alpha && "None"!=alpha){
        line += ", ALPHA=" + alpha;
    }
    if("none"!=beta && "NONE"!=beta && "None"!=beta){
        line += ", BETA=" + beta;
    }
    if("none"!=field && "NONE"!=field && "None"!=field){
        line += ", FIELD=" + field;
    }
    if("none"!=structural && "NONE"!=structural && "None"!=structural){
        line += ", STRUCTURAL=" + structural;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQheading(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*HEADING";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQheatgeneration(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*HEAT GENERATION";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQheattransfer(,string centering,,string type,,string deltmx,,string end,,string steadystate,,string mxdem,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*HEAT TRANSFER";
    if("none"!=centering && "NONE"!=centering && "None"!=centering){
        line += ", CENTERING=" + centering;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=deltmx && "NONE"!=deltmx && "None"!=deltmx){
        line += ", DELTMX=" + deltmx;
    }
    if("none"!=end && "NONE"!=end && "None"!=end){
        line += ", END=" + end;
    }
    if("none"!=steadystate && "NONE"!=steadystate && "None"!=steadystate){
        line += ", STEADY STATE=" + steadystate;
    }
    if("none"!=mxdem && "NONE"!=mxdem && "None"!=mxdem){
        line += ", MXDEM=" + mxdem;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQheatcap(,string dependencies,,string elset,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*HEATCAP";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQhourglassstiffness(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*HOURGLASS STIFFNESS";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQhyperelastic(,string arruda-boyce,,string marlow,,string mooney-rivlin,,string neohooke,,string ogden,,string polynomial,,string reducedpolynomial,,string user,,string vanderwaals,,string yeoh,,string type,,string beta,,string moduli,,string n,,string poisson,,string properties,,string testdatainput,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*HYPERELASTIC";
    if("none"!=arruda-boyce && "NONE"!=arruda-boyce && "None"!=arruda-boyce){
        line += ", ARRUDA-BOYCE=" + arruda-boyce;
    }
    if("none"!=marlow && "NONE"!=marlow && "None"!=marlow){
        line += ", MARLOW=" + marlow;
    }
    if("none"!=mooney-rivlin && "NONE"!=mooney-rivlin && "None"!=mooney-rivlin){
        line += ", MOONEY-RIVLIN=" + mooney-rivlin;
    }
    if("none"!=neohooke && "NONE"!=neohooke && "None"!=neohooke){
        line += ", NEO HOOKE=" + neohooke;
    }
    if("none"!=ogden && "NONE"!=ogden && "None"!=ogden){
        line += ", OGDEN=" + ogden;
    }
    if("none"!=polynomial && "NONE"!=polynomial && "None"!=polynomial){
        line += ", POLYNOMIAL=" + polynomial;
    }
    if("none"!=reducedpolynomial && "NONE"!=reducedpolynomial && "None"!=reducedpolynomial){
        line += ", REDUCED POLYNOMIAL=" + reducedpolynomial;
    }
    if("none"!=user && "NONE"!=user && "None"!=user){
        line += ", USER=" + user;
    }
    if("none"!=vanderwaals && "NONE"!=vanderwaals && "None"!=vanderwaals){
        line += ", VAN DER WAALS=" + vanderwaals;
    }
    if("none"!=yeoh && "NONE"!=yeoh && "None"!=yeoh){
        line += ", YEOH=" + yeoh;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=beta && "NONE"!=beta && "None"!=beta){
        line += ", BETA=" + beta;
    }
    if("none"!=moduli && "NONE"!=moduli && "None"!=moduli){
        line += ", MODULI=" + moduli;
    }
    if("none"!=n && "NONE"!=n && "None"!=n){
        line += ", N=" + n;
    }
    if("none"!=poisson && "NONE"!=poisson && "None"!=poisson){
        line += ", POISSON=" + poisson;
    }
    if("none"!=properties && "NONE"!=properties && "None"!=properties){
        line += ", PROPERTIES=" + properties;
    }
    if("none"!=testdatainput && "NONE"!=testdatainput && "None"!=testdatainput){
        line += ", TEST DATA INPUT=" + testdatainput;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQhyperfoam(,string moduli,,string n,,string poisson,,string testdatainput,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*HYPERFOAM";
    if("none"!=moduli && "NONE"!=moduli && "None"!=moduli){
        line += ", MODULI=" + moduli;
    }
    if("none"!=n && "NONE"!=n && "None"!=n){
        line += ", N=" + n;
    }
    if("none"!=poisson && "NONE"!=poisson && "None"!=poisson){
        line += ", POISSON=" + poisson;
    }
    if("none"!=testdatainput && "NONE"!=testdatainput && "None"!=testdatainput){
        line += ", TEST DATA INPUT=" + testdatainput;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQhypoelastic(,string user,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*HYPOELASTIC";
    if("none"!=user && "NONE"!=user && "None"!=user){
        line += ", USER=" + user;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQhysteresis(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*HYSTERESIS";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQimpedance(,string property,,string nonreflecting,,string op,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*IMPEDANCE";
    if("none"!=property && "NONE"!=property && "None"!=property){
        line += ", PROPERTY=" + property;
    }
    if("none"!=nonreflecting && "NONE"!=nonreflecting && "None"!=nonreflecting){
        line += ", NONREFLECTING=" + nonreflecting;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQimpedanceproperty(,string name,,string data,,string input,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*IMPEDANCE PROPERTY";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=data && "NONE"!=data && "None"!=data){
        line += ", DATA=" + data;
    }
    if("none"!=input && "NONE"!=input && "None"!=input){
        line += ", INPUT=" + input;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQimperfection(,string file,,string input,,string step,,string inc,,string nset,,string system,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*IMPERFECTION";
    if("none"!=file && "NONE"!=file && "None"!=file){
        line += ", FILE=" + file;
    }
    if("none"!=input && "NONE"!=input && "None"!=input){
        line += ", INPUT=" + input;
    }
    if("none"!=step && "NONE"!=step && "None"!=step){
        line += ", STEP=" + step;
    }
    if("none"!=inc && "NONE"!=inc && "None"!=inc){
        line += ", INC=" + inc;
    }
    if("none"!=nset && "NONE"!=nset && "None"!=nset){
        line += ", NSET=" + nset;
    }
    if("none"!=system && "NONE"!=system && "None"!=system){
        line += ", SYSTEM=" + system;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQimport(,string update,,string eoffset,,string noffset,,string rename,,string increment,,string interval,,string iteration,,string state,,string step,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*IMPORT";
    if("none"!=update && "NONE"!=update && "None"!=update){
        line += ", UPDATE=" + update;
    }
    if("none"!=eoffset && "NONE"!=eoffset && "None"!=eoffset){
        line += ", EOFFSET=" + eoffset;
    }
    if("none"!=noffset && "NONE"!=noffset && "None"!=noffset){
        line += ", NOFFSET=" + noffset;
    }
    if("none"!=rename && "NONE"!=rename && "None"!=rename){
        line += ", RENAME=" + rename;
    }
    if("none"!=increment && "NONE"!=increment && "None"!=increment){
        line += ", INCREMENT=" + increment;
    }
    if("none"!=interval && "NONE"!=interval && "None"!=interval){
        line += ", INTERVAL=" + interval;
    }
    if("none"!=iteration && "NONE"!=iteration && "None"!=iteration){
        line += ", ITERATION=" + iteration;
    }
    if("none"!=state && "NONE"!=state && "None"!=state){
        line += ", STATE=" + state;
    }
    if("none"!=step && "NONE"!=step && "None"!=step){
        line += ", STEP=" + step;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQimportcontrols(,string normaltol,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*IMPORT CONTROLS";
    if("none"!=normaltol && "NONE"!=normaltol && "None"!=normaltol){
        line += ", NORMAL TOL=" + normaltol;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQimportelset(,string rename,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*IMPORT ELSET";
    if("none"!=rename && "NONE"!=rename && "None"!=rename){
        line += ", RENAME=" + rename;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQimportnset(,string rename,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*IMPORT NSET";
    if("none"!=rename && "NONE"!=rename && "None"!=rename){
        line += ", RENAME=" + rename;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQincidentwave(,string property,,string accelerationamplitude,,string pressureamplitude,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*INCIDENT WAVE";
    if("none"!=property && "NONE"!=property && "None"!=property){
        line += ", PROPERTY=" + property;
    }
    if("none"!=accelerationamplitude && "NONE"!=accelerationamplitude && "None"!=accelerationamplitude){
        line += ", ACCELERATION AMPLITUDE=" + accelerationamplitude;
    }
    if("none"!=pressureamplitude && "NONE"!=pressureamplitude && "None"!=pressureamplitude){
        line += ", PRESSURE AMPLITUDE=" + pressureamplitude;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQincidentwavefluidproperty(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*INCIDENT WAVE FLUID PROPERTY";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQincidentwaveinteraction(,string property,,string accelerationamplitude,,string conwep,,string pressureamplitude,,string undex,,string imaginary,,string real,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*INCIDENT WAVE INTERACTION";
    if("none"!=property && "NONE"!=property && "None"!=property){
        line += ", PROPERTY=" + property;
    }
    if("none"!=accelerationamplitude && "NONE"!=accelerationamplitude && "None"!=accelerationamplitude){
        line += ", ACCELERATION AMPLITUDE=" + accelerationamplitude;
    }
    if("none"!=conwep && "NONE"!=conwep && "None"!=conwep){
        line += ", CONWEP=" + conwep;
    }
    if("none"!=pressureamplitude && "NONE"!=pressureamplitude && "None"!=pressureamplitude){
        line += ", PRESSURE AMPLITUDE=" + pressureamplitude;
    }
    if("none"!=undex && "NONE"!=undex && "None"!=undex){
        line += ", UNDEX=" + undex;
    }
    if("none"!=imaginary && "NONE"!=imaginary && "None"!=imaginary){
        line += ", IMAGINARY=" + imaginary;
    }
    if("none"!=real && "NONE"!=real && "None"!=real){
        line += ", REAL=" + real;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQincidentwaveinteractionproperty(,string name,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*INCIDENT WAVE INTERACTION PROPERTY";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQincidentwaveproperty(,string name,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*INCIDENT WAVE PROPERTY";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQincidentwavereflection(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*INCIDENT WAVE REFLECTION";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQinclude(,string input,,string password,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*INCLUDE";
    if("none"!=input && "NONE"!=input && "None"!=input){
        line += ", INPUT=" + input;
    }
    if("none"!=password && "NONE"!=password && "None"!=password){
        line += ", PASSWORD=" + password;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQincrementationoutput(,string variable,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*INCREMENTATION OUTPUT";
    if("none"!=variable && "NONE"!=variable && "None"!=variable){
        line += ", VARIABLE=" + variable;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQinelasticheatfraction(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*INELASTIC HEAT FRACTION";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQinertiarelief(,string orientation,,string fixed,,string remove,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*INERTIA RELIEF";
    if("none"!=orientation && "NONE"!=orientation && "None"!=orientation){
        line += ", ORIENTATION=" + orientation;
    }
    if("none"!=fixed && "NONE"!=fixed && "None"!=fixed){
        line += ", FIXED=" + fixed;
    }
    if("none"!=remove && "NONE"!=remove && "None"!=remove){
        line += ", REMOVE=" + remove;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQinitialconditions(,string type,,string absoluteexteriortolerance,,string criterion,,string definition,,string drivingelsets,,string exteriortolerance,,string file,,string fulltensor,,string geostatic,,string inc,,string input,,string interpolate,,string midside,,string normal,,string numberbackstresses,,string outputvariable,,string rebar,,string sectionpoints,,string step,,string unbalancedstress,,string user,,string variable,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*INITIAL CONDITIONS";
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=absoluteexteriortolerance && "NONE"!=absoluteexteriortolerance && "None"!=absoluteexteriortolerance){
        line += ", ABSOLUTE EXTERIOR TOLERANCE=" + absoluteexteriortolerance;
    }
    if("none"!=criterion && "NONE"!=criterion && "None"!=criterion){
        line += ", CRITERION=" + criterion;
    }
    if("none"!=definition && "NONE"!=definition && "None"!=definition){
        line += ", DEFINITION=" + definition;
    }
    if("none"!=drivingelsets && "NONE"!=drivingelsets && "None"!=drivingelsets){
        line += ", DRIVING ELSETS=" + drivingelsets;
    }
    if("none"!=exteriortolerance && "NONE"!=exteriortolerance && "None"!=exteriortolerance){
        line += ", EXTERIOR TOLERANCE=" + exteriortolerance;
    }
    if("none"!=file && "NONE"!=file && "None"!=file){
        line += ", FILE=" + file;
    }
    if("none"!=fulltensor && "NONE"!=fulltensor && "None"!=fulltensor){
        line += ", FULL TENSOR=" + fulltensor;
    }
    if("none"!=geostatic && "NONE"!=geostatic && "None"!=geostatic){
        line += ", GEOSTATIC=" + geostatic;
    }
    if("none"!=inc && "NONE"!=inc && "None"!=inc){
        line += ", INC=" + inc;
    }
    if("none"!=input && "NONE"!=input && "None"!=input){
        line += ", INPUT=" + input;
    }
    if("none"!=interpolate && "NONE"!=interpolate && "None"!=interpolate){
        line += ", INTERPOLATE=" + interpolate;
    }
    if("none"!=midside && "NONE"!=midside && "None"!=midside){
        line += ", MIDSIDE=" + midside;
    }
    if("none"!=normal && "NONE"!=normal && "None"!=normal){
        line += ", NORMAL=" + normal;
    }
    if("none"!=numberbackstresses && "NONE"!=numberbackstresses && "None"!=numberbackstresses){
        line += ", NUMBER BACKSTRESSES=" + numberbackstresses;
    }
    if("none"!=outputvariable && "NONE"!=outputvariable && "None"!=outputvariable){
        line += ", OUTPUT VARIABLE=" + outputvariable;
    }
    if("none"!=rebar && "NONE"!=rebar && "None"!=rebar){
        line += ", REBAR=" + rebar;
    }
    if("none"!=sectionpoints && "NONE"!=sectionpoints && "None"!=sectionpoints){
        line += ", SECTION POINTS=" + sectionpoints;
    }
    if("none"!=step && "NONE"!=step && "None"!=step){
        line += ", STEP=" + step;
    }
    if("none"!=unbalancedstress && "NONE"!=unbalancedstress && "None"!=unbalancedstress){
        line += ", UNBALANCED STRESS=" + unbalancedstress;
    }
    if("none"!=user && "NONE"!=user && "None"!=user){
        line += ", USER=" + user;
    }
    if("none"!=variable && "NONE"!=variable && "None"!=variable){
        line += ", VARIABLE=" + variable;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQinstance(,string name,,string part,,string instance,,string name,,string instance,,string library,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*INSTANCE";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=part && "NONE"!=part && "None"!=part){
        line += ", PART=" + part;
    }
    if("none"!=instance && "NONE"!=instance && "None"!=instance){
        line += ", INSTANCE=" + instance;
    }
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=instance && "NONE"!=instance && "None"!=instance){
        line += ", INSTANCE=" + instance;
    }
    if("none"!=library && "NONE"!=library && "None"!=library){
        line += ", LIBRARY=" + library;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQintegratedoutput(,string section,,string surface,,string elset,,string section,,string surface,,string variable,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*INTEGRATED OUTPUT";
    if("none"!=section && "NONE"!=section && "None"!=section){
        line += ", SECTION=" + section;
    }
    if("none"!=surface && "NONE"!=surface && "None"!=surface){
        line += ", SURFACE=" + surface;
    }
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=section && "NONE"!=section && "None"!=section){
        line += ", SECTION=" + section;
    }
    if("none"!=surface && "NONE"!=surface && "None"!=surface){
        line += ", SURFACE=" + surface;
    }
    if("none"!=variable && "NONE"!=variable && "None"!=variable){
        line += ", VARIABLE=" + variable;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQintegratedoutputsection(,string name,,string surface,,string orientation,,string position,,string projectorientation,,string refnode,,string refnodemotion,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*INTEGRATED OUTPUT SECTION";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=surface && "NONE"!=surface && "None"!=surface){
        line += ", SURFACE=" + surface;
    }
    if("none"!=orientation && "NONE"!=orientation && "None"!=orientation){
        line += ", ORIENTATION=" + orientation;
    }
    if("none"!=position && "NONE"!=position && "None"!=position){
        line += ", POSITION=" + position;
    }
    if("none"!=projectorientation && "NONE"!=projectorientation && "None"!=projectorientation){
        line += ", PROJECT ORIENTATION=" + projectorientation;
    }
    if("none"!=refnode && "NONE"!=refnode && "None"!=refnode){
        line += ", REF NODE=" + refnode;
    }
    if("none"!=refnodemotion && "NONE"!=refnodemotion && "None"!=refnodemotion){
        line += ", REF NODE MOTION=" + refnodemotion;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQinterface(,string elset,,string name,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*INTERFACE";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQits(,string elset,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*ITS";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQjoint(,string elset,,string orientation,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*JOINT";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=orientation && "NONE"!=orientation && "None"!=orientation){
        line += ", ORIENTATION=" + orientation;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQjointelasticity(,string moduli,,string ndim,,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*JOINT ELASTICITY";
    if("none"!=moduli && "NONE"!=moduli && "None"!=moduli){
        line += ", MODULI=" + moduli;
    }
    if("none"!=ndim && "NONE"!=ndim && "None"!=ndim){
        line += ", NDIM=" + ndim;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQjointplasticity(,string type,,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*JOINT PLASTICITY";
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQjointedmaterial(,string dependencies,,string jointdirection,,string noseparation,,string shearretention,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*JOINTED MATERIAL";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=jointdirection && "NONE"!=jointdirection && "None"!=jointdirection){
        line += ", JOINT DIRECTION=" + jointdirection;
    }
    if("none"!=noseparation && "NONE"!=noseparation && "None"!=noseparation){
        line += ", NO SEPARATION=" + noseparation;
    }
    if("none"!=shearretention && "NONE"!=shearretention && "None"!=shearretention){
        line += ", SHEAR RETENTION=" + shearretention;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQjouleheatfraction(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*JOULE HEAT FRACTION";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQkappa(,string dependencies,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*KAPPA";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQkinematic(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*KINEMATIC";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQkinematiccoupling(,string refnode,,string orientation,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*KINEMATIC COUPLING";
    if("none"!=refnode && "NONE"!=refnode && "None"!=refnode){
        line += ", REF NODE=" + refnode;
    }
    if("none"!=orientation && "NONE"!=orientation && "None"!=orientation){
        line += ", ORIENTATION=" + orientation;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQlatentheat(,string porefluid,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*LATENT HEAT";
    if("none"!=porefluid && "NONE"!=porefluid && "None"!=porefluid){
        line += ", PORE FLUID=" + porefluid;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQloadcase(,string name,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*LOAD CASE";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQloadingdata(,string dependencies,,string direction,,string extrapolation,,string independentcomponents,,string regularize,,string rtol,,string type,,string ratedependent,,string rateinterpolation,,string damageonset,,string slopedrop,,string yieldonset,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*LOADING DATA";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=direction && "NONE"!=direction && "None"!=direction){
        line += ", DIRECTION=" + direction;
    }
    if("none"!=extrapolation && "NONE"!=extrapolation && "None"!=extrapolation){
        line += ", EXTRAPOLATION=" + extrapolation;
    }
    if("none"!=independentcomponents && "NONE"!=independentcomponents && "None"!=independentcomponents){
        line += ", INDEPENDENT COMPONENTS=" + independentcomponents;
    }
    if("none"!=regularize && "NONE"!=regularize && "None"!=regularize){
        line += ", REGULARIZE=" + regularize;
    }
    if("none"!=rtol && "NONE"!=rtol && "None"!=rtol){
        line += ", RTOL=" + rtol;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=ratedependent && "NONE"!=ratedependent && "None"!=ratedependent){
        line += ", RATE DEPENDENT=" + ratedependent;
    }
    if("none"!=rateinterpolation && "NONE"!=rateinterpolation && "None"!=rateinterpolation){
        line += ", RATE INTERPOLATION=" + rateinterpolation;
    }
    if("none"!=damageonset && "NONE"!=damageonset && "None"!=damageonset){
        line += ", DAMAGE ONSET=" + damageonset;
    }
    if("none"!=slopedrop && "NONE"!=slopedrop && "None"!=slopedrop){
        line += ", SLOPE DROP=" + slopedrop;
    }
    if("none"!=yieldonset && "NONE"!=yieldonset && "None"!=yieldonset){
        line += ", YIELD ONSET=" + yieldonset;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQlowdensityfoam(,string lateralstraindata,,string strainrate,,string rateextrapolation,,string tensioncutoff,,string fail,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*LOW DENSITY FOAM";
    if("none"!=lateralstraindata && "NONE"!=lateralstraindata && "None"!=lateralstraindata){
        line += ", LATERAL STRAIN DATA=" + lateralstraindata;
    }
    if("none"!=strainrate && "NONE"!=strainrate && "None"!=strainrate){
        line += ", STRAIN RATE=" + strainrate;
    }
    if("none"!=rateextrapolation && "NONE"!=rateextrapolation && "None"!=rateextrapolation){
        line += ", RATE EXTRAPOLATION=" + rateextrapolation;
    }
    if("none"!=tensioncutoff && "NONE"!=tensioncutoff && "None"!=tensioncutoff){
        line += ", TENSION CUTOFF=" + tensioncutoff;
    }
    if("none"!=fail && "NONE"!=fail && "None"!=fail){
        line += ", FAIL=" + fail;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQmagneticpermeability(,string dependencies,,string frequency,,string nonlinear,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*MAGNETIC PERMEABILITY";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=frequency && "NONE"!=frequency && "None"!=frequency){
        line += ", FREQUENCY=" + frequency;
    }
    if("none"!=nonlinear && "NONE"!=nonlinear && "None"!=nonlinear){
        line += ", NONLINEAR=" + nonlinear;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQmagnetostatic(,string direct,,string stabilization,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*MAGNETOSTATIC";
    if("none"!=direct && "NONE"!=direct && "None"!=direct){
        line += ", DIRECT=" + direct;
    }
    if("none"!=stabilization && "NONE"!=stabilization && "None"!=stabilization){
        line += ", STABILIZATION=" + stabilization;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQmapsolution(,string inc,,string step,,string unbalancedstress,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*MAP SOLUTION";
    if("none"!=inc && "NONE"!=inc && "None"!=inc){
        line += ", INC=" + inc;
    }
    if("none"!=step && "NONE"!=step && "None"!=step){
        line += ", STEP=" + step;
    }
    if("none"!=unbalancedstress && "NONE"!=unbalancedstress && "None"!=unbalancedstress){
        line += ", UNBALANCED STRESS=" + unbalancedstress;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQmass(,string elset,,string alpha,,string composite,,string orientation,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*MASS";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=alpha && "NONE"!=alpha && "None"!=alpha){
        line += ", ALPHA=" + alpha;
    }
    if("none"!=composite && "NONE"!=composite && "None"!=composite){
        line += ", COMPOSITE=" + composite;
    }
    if("none"!=orientation && "NONE"!=orientation && "None"!=orientation){
        line += ", ORIENTATION=" + orientation;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQmassadjust(,string targetdt,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*MASS ADJUST";
    if("none"!=targetdt && "NONE"!=targetdt && "None"!=targetdt){
        line += ", TARGET DT=" + targetdt;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQmassdiffusion(,string dcmax,,string end,,string steadystate,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*MASS DIFFUSION";
    if("none"!=dcmax && "NONE"!=dcmax && "None"!=dcmax){
        line += ", DCMAX=" + dcmax;
    }
    if("none"!=end && "NONE"!=end && "None"!=end){
        line += ", END=" + end;
    }
    if("none"!=steadystate && "NONE"!=steadystate && "None"!=steadystate){
        line += ", STEADY STATE=" + steadystate;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQmassflowrate(,string amplitude,,string input,,string op,,string user,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*MASS FLOW RATE";
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=input && "NONE"!=input && "None"!=input){
        line += ", INPUT=" + input;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    if("none"!=user && "NONE"!=user && "None"!=user){
        line += ", USER=" + user;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQmaterial(,string name,,string rtol,,string sratefactor,,string strainrateregularization,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*MATERIAL";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=rtol && "NONE"!=rtol && "None"!=rtol){
        line += ", RTOL=" + rtol;
    }
    if("none"!=sratefactor && "NONE"!=sratefactor && "None"!=sratefactor){
        line += ", SRATE FACTOR=" + sratefactor;
    }
    if("none"!=strainrateregularization && "NONE"!=strainrateregularization && "None"!=strainrateregularization){
        line += ", STRAIN RATE REGULARIZATION=" + strainrateregularization;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQmatrix(,string type,,string input,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*MATRIX";
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=input && "NONE"!=input && "None"!=input){
        line += ", INPUT=" + input;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQmatrixassemble(,string mass,,string stiffness,,string structuraldamping,,string viscousdamping,,string nset,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*MATRIX ASSEMBLE";
    if("none"!=mass && "NONE"!=mass && "None"!=mass){
        line += ", MASS=" + mass;
    }
    if("none"!=stiffness && "NONE"!=stiffness && "None"!=stiffness){
        line += ", STIFFNESS=" + stiffness;
    }
    if("none"!=structuraldamping && "NONE"!=structuraldamping && "None"!=structuraldamping){
        line += ", STRUCTURAL DAMPING=" + structuraldamping;
    }
    if("none"!=viscousdamping && "NONE"!=viscousdamping && "None"!=viscousdamping){
        line += ", VISCOUS DAMPING=" + viscousdamping;
    }
    if("none"!=nset && "NONE"!=nset && "None"!=nset){
        line += ", NSET=" + nset;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQmatrixcheck(,string referencenode,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*MATRIX CHECK";
    if("none"!=referencenode && "NONE"!=referencenode && "None"!=referencenode){
        line += ", REFERENCE NODE=" + referencenode;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQmatrixgenerate(,string stiffness,,string mass,,string viscousdamping,,string structuraldamping,,string load,,string solidinfiniteformulation,,string elementbyelement,,string elset,,string field,,string mpc,,string propertyevaluation,,string publicnodes,,string source,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*MATRIX GENERATE";
    if("none"!=stiffness && "NONE"!=stiffness && "None"!=stiffness){
        line += ", STIFFNESS=" + stiffness;
    }
    if("none"!=mass && "NONE"!=mass && "None"!=mass){
        line += ", MASS=" + mass;
    }
    if("none"!=viscousdamping && "NONE"!=viscousdamping && "None"!=viscousdamping){
        line += ", VISCOUS DAMPING=" + viscousdamping;
    }
    if("none"!=structuraldamping && "NONE"!=structuraldamping && "None"!=structuraldamping){
        line += ", STRUCTURAL DAMPING=" + structuraldamping;
    }
    if("none"!=load && "NONE"!=load && "None"!=load){
        line += ", LOAD=" + load;
    }
    if("none"!=solidinfiniteformulation && "NONE"!=solidinfiniteformulation && "None"!=solidinfiniteformulation){
        line += ", SOLID INFINITE FORMULATION=" + solidinfiniteformulation;
    }
    if("none"!=elementbyelement && "NONE"!=elementbyelement && "None"!=elementbyelement){
        line += ", ELEMENT BY ELEMENT=" + elementbyelement;
    }
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=field && "NONE"!=field && "None"!=field){
        line += ", FIELD=" + field;
    }
    if("none"!=mpc && "NONE"!=mpc && "None"!=mpc){
        line += ", MPC=" + mpc;
    }
    if("none"!=propertyevaluation && "NONE"!=propertyevaluation && "None"!=propertyevaluation){
        line += ", PROPERTY EVALUATION=" + propertyevaluation;
    }
    if("none"!=publicnodes && "NONE"!=publicnodes && "None"!=publicnodes){
        line += ", PUBLIC NODES=" + publicnodes;
    }
    if("none"!=source && "NONE"!=source && "None"!=source){
        line += ", SOURCE=" + source;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQmatrixinput(,string name,,string input,,string matrix,,string scalefactor,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*MATRIX INPUT";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=input && "NONE"!=input && "None"!=input){
        line += ", INPUT=" + input;
    }
    if("none"!=matrix && "NONE"!=matrix && "None"!=matrix){
        line += ", MATRIX=" + matrix;
    }
    if("none"!=scalefactor && "NONE"!=scalefactor && "None"!=scalefactor){
        line += ", SCALE FACTOR=" + scalefactor;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQmatrixoutput(,string stiffness,,string mass,,string viscousdamping,,string structuraldamping,,string load,,string format,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*MATRIX OUTPUT";
    if("none"!=stiffness && "NONE"!=stiffness && "None"!=stiffness){
        line += ", STIFFNESS=" + stiffness;
    }
    if("none"!=mass && "NONE"!=mass && "None"!=mass){
        line += ", MASS=" + mass;
    }
    if("none"!=viscousdamping && "NONE"!=viscousdamping && "None"!=viscousdamping){
        line += ", VISCOUS DAMPING=" + viscousdamping;
    }
    if("none"!=structuraldamping && "NONE"!=structuraldamping && "None"!=structuraldamping){
        line += ", STRUCTURAL DAMPING=" + structuraldamping;
    }
    if("none"!=load && "NONE"!=load && "None"!=load){
        line += ", LOAD=" + load;
    }
    if("none"!=format && "NONE"!=format && "None"!=format){
        line += ", FORMAT=" + format;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQmediatransport(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*MEDIA TRANSPORT";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQmembranesection(,string elset,,string material,,string controls,,string density,,string membranethickness,,string nodalthickness,,string orientation,,string poisson,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*MEMBRANE SECTION";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=material && "NONE"!=material && "None"!=material){
        line += ", MATERIAL=" + material;
    }
    if("none"!=controls && "NONE"!=controls && "None"!=controls){
        line += ", CONTROLS=" + controls;
    }
    if("none"!=density && "NONE"!=density && "None"!=density){
        line += ", DENSITY=" + density;
    }
    if("none"!=membranethickness && "NONE"!=membranethickness && "None"!=membranethickness){
        line += ", MEMBRANE THICKNESS=" + membranethickness;
    }
    if("none"!=nodalthickness && "NONE"!=nodalthickness && "None"!=nodalthickness){
        line += ", NODAL THICKNESS=" + nodalthickness;
    }
    if("none"!=orientation && "NONE"!=orientation && "None"!=orientation){
        line += ", ORIENTATION=" + orientation;
    }
    if("none"!=poisson && "NONE"!=poisson && "None"!=poisson){
        line += ", POISSON=" + poisson;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQmodaldamping(,string structural,,string viscous,,string definition,,string field,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*MODAL DAMPING";
    if("none"!=structural && "NONE"!=structural && "None"!=structural){
        line += ", STRUCTURAL=" + structural;
    }
    if("none"!=viscous && "NONE"!=viscous && "None"!=viscous){
        line += ", VISCOUS=" + viscous;
    }
    if("none"!=definition && "NONE"!=definition && "None"!=definition){
        line += ", DEFINITION=" + definition;
    }
    if("none"!=field && "NONE"!=field && "None"!=field){
        line += ", FIELD=" + field;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQmodaldynamic(,string continue,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*MODAL DYNAMIC";
    if("none"!=continue && "NONE"!=continue && "None"!=continue){
        line += ", CONTINUE=" + continue;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQmodalfile(,string frequency,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*MODAL FILE";
    if("none"!=frequency && "NONE"!=frequency && "None"!=frequency){
        line += ", FREQUENCY=" + frequency;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQmodaloutput(,string variable,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*MODAL OUTPUT";
    if("none"!=variable && "NONE"!=variable && "None"!=variable){
        line += ", VARIABLE=" + variable;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQmodalprint(,string frequency,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*MODAL PRINT";
    if("none"!=frequency && "NONE"!=frequency && "None"!=frequency){
        line += ", FREQUENCY=" + frequency;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQmodelchange(,string activate,,string add,,string remove,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*MODEL CHANGE";
    if("none"!=activate && "NONE"!=activate && "None"!=activate){
        line += ", ACTIVATE=" + activate;
    }
    if("none"!=add && "NONE"!=add && "None"!=add){
        line += ", ADD=" + add;
    }
    if("none"!=remove && "NONE"!=remove && "None"!=remove){
        line += ", REMOVE=" + remove;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQmohrcoulomb(,string dependencies,,string deviatoriceccentricity,,string eccentricity,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*MOHR COULOMB";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=deviatoriceccentricity && "NONE"!=deviatoriceccentricity && "None"!=deviatoriceccentricity){
        line += ", DEVIATORIC ECCENTRICITY=" + deviatoriceccentricity;
    }
    if("none"!=eccentricity && "NONE"!=eccentricity && "None"!=eccentricity){
        line += ", ECCENTRICITY=" + eccentricity;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQmohrcoulombhardening(,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*MOHR COULOMB HARDENING";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQmoistureswelling(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*MOISTURE SWELLING";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQmolecularweight(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*MOLECULAR WEIGHT";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQmomentumequationsolver(,string convergence,,string diagnostics,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*MOMENTUM EQUATION SOLVER";
    if("none"!=convergence && "NONE"!=convergence && "None"!=convergence){
        line += ", CONVERGENCE=" + convergence;
    }
    if("none"!=diagnostics && "NONE"!=diagnostics && "None"!=diagnostics){
        line += ", DIAGNOSTICS=" + diagnostics;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQmonitor(,string dof,,string node,,string frequency,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*MONITOR";
    if("none"!=dof && "NONE"!=dof && "None"!=dof){
        line += ", DOF=" + dof;
    }
    if("none"!=node && "NONE"!=node && "None"!=node){
        line += ", NODE=" + node;
    }
    if("none"!=frequency && "NONE"!=frequency && "None"!=frequency){
        line += ", FREQUENCY=" + frequency;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQmotion(,string rotation,,string translation,,string user,,string amplitude,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*MOTION";
    if("none"!=rotation && "NONE"!=rotation && "None"!=rotation){
        line += ", ROTATION=" + rotation;
    }
    if("none"!=translation && "NONE"!=translation && "None"!=translation){
        line += ", TRANSLATION=" + translation;
    }
    if("none"!=user && "NONE"!=user && "None"!=user){
        line += ", USER=" + user;
    }
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQmpc(,string input,,string mode,,string user,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*MPC";
    if("none"!=input && "NONE"!=input && "None"!=input){
        line += ", INPUT=" + input;
    }
    if("none"!=mode && "NONE"!=mode && "None"!=mode){
        line += ", MODE=" + mode;
    }
    if("none"!=user && "NONE"!=user && "None"!=user){
        line += ", USER=" + user;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQmullinseffect(,string testdatainput,,string user,,string beta,,string dependencies,,string m,,string properties,,string r,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*MULLINS EFFECT";
    if("none"!=testdatainput && "NONE"!=testdatainput && "None"!=testdatainput){
        line += ", TEST DATA INPUT=" + testdatainput;
    }
    if("none"!=user && "NONE"!=user && "None"!=user){
        line += ", USER=" + user;
    }
    if("none"!=beta && "NONE"!=beta && "None"!=beta){
        line += ", BETA=" + beta;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=m && "NONE"!=m && "None"!=m){
        line += ", M=" + m;
    }
    if("none"!=properties && "NONE"!=properties && "None"!=properties){
        line += ", PROPERTIES=" + properties;
    }
    if("none"!=r && "NONE"!=r && "None"!=r){
        line += ", R=" + r;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQm1(,string dependencies,,string elastic,,string linear,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*M1";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=elastic && "NONE"!=elastic && "None"!=elastic){
        line += ", ELASTIC=" + elastic;
    }
    if("none"!=linear && "NONE"!=linear && "None"!=linear){
        line += ", LINEAR=" + linear;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQm2(,string dependencies,,string elastic,,string linear,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*M2";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=elastic && "NONE"!=elastic && "None"!=elastic){
        line += ", ELASTIC=" + elastic;
    }
    if("none"!=linear && "NONE"!=linear && "None"!=linear){
        line += ", LINEAR=" + linear;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQncopy(,string changenumber,,string oldset,,string pole,,string reflect,,string shift,,string multiple,,string newset,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*NCOPY";
    if("none"!=changenumber && "NONE"!=changenumber && "None"!=changenumber){
        line += ", CHANGE NUMBER=" + changenumber;
    }
    if("none"!=oldset && "NONE"!=oldset && "None"!=oldset){
        line += ", OLD SET=" + oldset;
    }
    if("none"!=pole && "NONE"!=pole && "None"!=pole){
        line += ", POLE=" + pole;
    }
    if("none"!=reflect && "NONE"!=reflect && "None"!=reflect){
        line += ", REFLECT=" + reflect;
    }
    if("none"!=shift && "NONE"!=shift && "None"!=shift){
        line += ", SHIFT=" + shift;
    }
    if("none"!=multiple && "NONE"!=multiple && "None"!=multiple){
        line += ", MULTIPLE=" + multiple;
    }
    if("none"!=newset && "NONE"!=newset && "None"!=newset){
        line += ", NEW SET=" + newset;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQnetworkstiffnessratio(,string n,,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*NETWORK STIFFNESS RATIO";
    if("none"!=n && "NONE"!=n && "None"!=n){
        line += ", N=" + n;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQnfill(,string bias,,string nset,,string singular,,string twostep,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*NFILL";
    if("none"!=bias && "NONE"!=bias && "None"!=bias){
        line += ", BIAS=" + bias;
    }
    if("none"!=nset && "NONE"!=nset && "None"!=nset){
        line += ", NSET=" + nset;
    }
    if("none"!=singular && "NONE"!=singular && "None"!=singular){
        line += ", SINGULAR=" + singular;
    }
    if("none"!=twostep && "NONE"!=twostep && "None"!=twostep){
        line += ", TWO STEP=" + twostep;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQngen(,string line,,string nset,,string system,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*NGEN";
    if("none"!=line && "NONE"!=line && "None"!=line){
        line += ", LINE=" + line;
    }
    if("none"!=nset && "NONE"!=nset && "None"!=nset){
        line += ", NSET=" + nset;
    }
    if("none"!=system && "NONE"!=system && "None"!=system){
        line += ", SYSTEM=" + system;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQnmap(,string nset,,string type,,string definition,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*NMAP";
    if("none"!=nset && "NONE"!=nset && "None"!=nset){
        line += ", NSET=" + nset;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=definition && "NONE"!=definition && "None"!=definition){
        line += ", DEFINITION=" + definition;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQnocompression(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*NO COMPRESSION";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQnotension(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*NO TENSION";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQnodalenergyrate(,string generate,,string input,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*NODAL ENERGY RATE";
    if("none"!=generate && "NONE"!=generate && "None"!=generate){
        line += ", GENERATE=" + generate;
    }
    if("none"!=input && "NONE"!=input && "None"!=input){
        line += ", INPUT=" + input;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQnodalthickness(,string generate,,string input,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*NODAL THICKNESS";
    if("none"!=generate && "NONE"!=generate && "None"!=generate){
        line += ", GENERATE=" + generate;
    }
    if("none"!=input && "NONE"!=input && "None"!=input){
        line += ", INPUT=" + input;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQnode(,string input,,string nset,,string system,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*NODE";
    if("none"!=input && "NONE"!=input && "None"!=input){
        line += ", INPUT=" + input;
    }
    if("none"!=nset && "NONE"!=nset && "None"!=nset){
        line += ", NSET=" + nset;
    }
    if("none"!=system && "NONE"!=system && "None"!=system){
        line += ", SYSTEM=" + system;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQnodefile(,string frequency,,string global,,string lastmode,,string mode,,string nset,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*NODE FILE";
    if("none"!=frequency && "NONE"!=frequency && "None"!=frequency){
        line += ", FREQUENCY=" + frequency;
    }
    if("none"!=global && "NONE"!=global && "None"!=global){
        line += ", GLOBAL=" + global;
    }
    if("none"!=lastmode && "NONE"!=lastmode && "None"!=lastmode){
        line += ", LAST MODE=" + lastmode;
    }
    if("none"!=mode && "NONE"!=mode && "None"!=mode){
        line += ", MODE=" + mode;
    }
    if("none"!=nset && "NONE"!=nset && "None"!=nset){
        line += ", NSET=" + nset;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQnodeoutput(,string nset,,string tracerset,,string exterior,,string nset,,string tracerset,,string global,,string variable,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*NODE OUTPUT";
    if("none"!=nset && "NONE"!=nset && "None"!=nset){
        line += ", NSET=" + nset;
    }
    if("none"!=tracerset && "NONE"!=tracerset && "None"!=tracerset){
        line += ", TRACER SET=" + tracerset;
    }
    if("none"!=exterior && "NONE"!=exterior && "None"!=exterior){
        line += ", EXTERIOR=" + exterior;
    }
    if("none"!=nset && "NONE"!=nset && "None"!=nset){
        line += ", NSET=" + nset;
    }
    if("none"!=tracerset && "NONE"!=tracerset && "None"!=tracerset){
        line += ", TRACER SET=" + tracerset;
    }
    if("none"!=global && "NONE"!=global && "None"!=global){
        line += ", GLOBAL=" + global;
    }
    if("none"!=variable && "NONE"!=variable && "None"!=variable){
        line += ", VARIABLE=" + variable;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQnodeprint(,string frequency,,string global,,string lastmode,,string mode,,string nset,,string summary,,string totals,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*NODE PRINT";
    if("none"!=frequency && "NONE"!=frequency && "None"!=frequency){
        line += ", FREQUENCY=" + frequency;
    }
    if("none"!=global && "NONE"!=global && "None"!=global){
        line += ", GLOBAL=" + global;
    }
    if("none"!=lastmode && "NONE"!=lastmode && "None"!=lastmode){
        line += ", LAST MODE=" + lastmode;
    }
    if("none"!=mode && "NONE"!=mode && "None"!=mode){
        line += ", MODE=" + mode;
    }
    if("none"!=nset && "NONE"!=nset && "None"!=nset){
        line += ", NSET=" + nset;
    }
    if("none"!=summary && "NONE"!=summary && "None"!=summary){
        line += ", SUMMARY=" + summary;
    }
    if("none"!=totals && "NONE"!=totals && "None"!=totals){
        line += ", TOTALS=" + totals;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQnoderesponse(,string nset,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*NODE RESPONSE";
    if("none"!=nset && "NONE"!=nset && "None"!=nset){
        line += ", NSET=" + nset;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQnonlinearbh(,string dir,,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*NONLINEAR BH";
    if("none"!=dir && "NONE"!=dir && "None"!=dir){
        line += ", DIR=" + dir;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQnonstructuralmass(,string elset,,string units,,string distribution,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*NONSTRUCTURAL MASS";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=units && "NONE"!=units && "None"!=units){
        line += ", UNITS=" + units;
    }
    if("none"!=distribution && "NONE"!=distribution && "None"!=distribution){
        line += ", DISTRIBUTION=" + distribution;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQnormal(,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*NORMAL";
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQnset(,string nset,,string elset,,string generate,,string instance,,string internal,,string unsorted,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*NSET";
    if("none"!=nset && "NONE"!=nset && "None"!=nset){
        line += ", NSET=" + nset;
    }
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=generate && "NONE"!=generate && "None"!=generate){
        line += ", GENERATE=" + generate;
    }
    if("none"!=instance && "NONE"!=instance && "None"!=instance){
        line += ", INSTANCE=" + instance;
    }
    if("none"!=internal && "NONE"!=internal && "None"!=internal){
        line += ", INTERNAL=" + internal;
    }
    if("none"!=unsorted && "NONE"!=unsorted && "None"!=unsorted){
        line += ", UNSORTED=" + unsorted;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQorientation(,string name,,string definition,,string localdirections,,string system,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*ORIENTATION";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=definition && "NONE"!=definition && "None"!=definition){
        line += ", DEFINITION=" + definition;
    }
    if("none"!=localdirections && "NONE"!=localdirections && "None"!=localdirections){
        line += ", LOCAL DIRECTIONS=" + localdirections;
    }
    if("none"!=system && "NONE"!=system && "None"!=system){
        line += ", SYSTEM=" + system;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQornl(,string a,,string h,,string material,,string reset,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*ORNL";
    if("none"!=a && "NONE"!=a && "None"!=a){
        line += ", A=" + a;
    }
    if("none"!=h && "NONE"!=h && "None"!=h){
        line += ", H=" + h;
    }
    if("none"!=material && "NONE"!=material && "None"!=material){
        line += ", MATERIAL=" + material;
    }
    if("none"!=reset && "NONE"!=reset && "None"!=reset){
        line += ", RESET=" + reset;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQoutput(,string diagnostics,,string field,,string history,,string frequency,,string modelist,,string name,,string numberinterval,,string timemarks,,string timepoints,,string op,,string timeinterval,,string variable,,string sensor,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*OUTPUT";
    if("none"!=diagnostics && "NONE"!=diagnostics && "None"!=diagnostics){
        line += ", DIAGNOSTICS=" + diagnostics;
    }
    if("none"!=field && "NONE"!=field && "None"!=field){
        line += ", FIELD=" + field;
    }
    if("none"!=history && "NONE"!=history && "None"!=history){
        line += ", HISTORY=" + history;
    }
    if("none"!=frequency && "NONE"!=frequency && "None"!=frequency){
        line += ", FREQUENCY=" + frequency;
    }
    if("none"!=modelist && "NONE"!=modelist && "None"!=modelist){
        line += ", MODE LIST=" + modelist;
    }
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=numberinterval && "NONE"!=numberinterval && "None"!=numberinterval){
        line += ", NUMBER INTERVAL=" + numberinterval;
    }
    if("none"!=timemarks && "NONE"!=timemarks && "None"!=timemarks){
        line += ", TIME MARKS=" + timemarks;
    }
    if("none"!=timepoints && "NONE"!=timepoints && "None"!=timepoints){
        line += ", TIME POINTS=" + timepoints;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    if("none"!=timeinterval && "NONE"!=timeinterval && "None"!=timeinterval){
        line += ", TIME INTERVAL=" + timeinterval;
    }
    if("none"!=variable && "NONE"!=variable && "None"!=variable){
        line += ", VARIABLE=" + variable;
    }
    if("none"!=sensor && "NONE"!=sensor && "None"!=sensor){
        line += ", SENSOR=" + sensor;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQparameter(,string dependent,,string independent,,string table,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*PARAMETER";
    if("none"!=dependent && "NONE"!=dependent && "None"!=dependent){
        line += ", DEPENDENT=" + dependent;
    }
    if("none"!=independent && "NONE"!=independent && "None"!=independent){
        line += ", INDEPENDENT=" + independent;
    }
    if("none"!=table && "NONE"!=table && "None"!=table){
        line += ", TABLE=" + table;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQparameterdependence(,string numbervalues,,string table,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*PARAMETER DEPENDENCE";
    if("none"!=numbervalues && "NONE"!=numbervalues && "None"!=numbervalues){
        line += ", NUMBER VALUES=" + numbervalues;
    }
    if("none"!=table && "NONE"!=table && "None"!=table){
        line += ", TABLE=" + table;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQparametershapevariation(,string parameter,,string file,,string input,,string step,,string inc,,string mode,,string nset,,string system,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*PARAMETER SHAPE VARIATION";
    if("none"!=parameter && "NONE"!=parameter && "None"!=parameter){
        line += ", PARAMETER=" + parameter;
    }
    if("none"!=file && "NONE"!=file && "None"!=file){
        line += ", FILE=" + file;
    }
    if("none"!=input && "NONE"!=input && "None"!=input){
        line += ", INPUT=" + input;
    }
    if("none"!=step && "NONE"!=step && "None"!=step){
        line += ", STEP=" + step;
    }
    if("none"!=inc && "NONE"!=inc && "None"!=inc){
        line += ", INC=" + inc;
    }
    if("none"!=mode && "NONE"!=mode && "None"!=mode){
        line += ", MODE=" + mode;
    }
    if("none"!=nset && "NONE"!=nset && "None"!=nset){
        line += ", NSET=" + nset;
    }
    if("none"!=system && "NONE"!=system && "None"!=system){
        line += ", SYSTEM=" + system;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQpart(,string name,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*PART";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQparticlegenerator(,string maximumnumberofparticles,,string name,,string type,,string maxattemptsperincrement,,string maxinsertionattempts,,string solidfraction,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*PARTICLE GENERATOR";
    if("none"!=maximumnumberofparticles && "NONE"!=maximumnumberofparticles && "None"!=maximumnumberofparticles){
        line += ", MAXIMUM NUMBER OF PARTICLES=" + maximumnumberofparticles;
    }
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=maxattemptsperincrement && "NONE"!=maxattemptsperincrement && "None"!=maxattemptsperincrement){
        line += ", MAX ATTEMPTS PER INCREMENT=" + maxattemptsperincrement;
    }
    if("none"!=maxinsertionattempts && "NONE"!=maxinsertionattempts && "None"!=maxinsertionattempts){
        line += ", MAX INSERTION ATTEMPTS=" + maxinsertionattempts;
    }
    if("none"!=solidfraction && "NONE"!=solidfraction && "None"!=solidfraction){
        line += ", SOLID FRACTION=" + solidfraction;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQparticlegeneratorflow(,string generator,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*PARTICLE GENERATOR FLOW";
    if("none"!=generator && "NONE"!=generator && "None"!=generator){
        line += ", GENERATOR=" + generator;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQparticlegeneratorinlet(,string surface,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*PARTICLE GENERATOR INLET";
    if("none"!=surface && "NONE"!=surface && "None"!=surface){
        line += ", SURFACE=" + surface;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQparticlegeneratormixture(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*PARTICLE GENERATOR MIXTURE";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQperfectlymatchedlayer(,string elset,,string name,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*PERFECTLY MATCHED LAYER";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQperiodic(,string type,,string nr,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*PERIODIC";
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=nr && "NONE"!=nr && "None"!=nr){
        line += ", NR=" + nr;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQperiodicmedia(,string inletcontrolnode,,string name,,string orientation,,string outletcontrolnode,,string triggernode,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*PERIODIC MEDIA";
    if("none"!=inletcontrolnode && "NONE"!=inletcontrolnode && "None"!=inletcontrolnode){
        line += ", INLET CONTROL NODE=" + inletcontrolnode;
    }
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=orientation && "NONE"!=orientation && "None"!=orientation){
        line += ", ORIENTATION=" + orientation;
    }
    if("none"!=outletcontrolnode && "NONE"!=outletcontrolnode && "None"!=outletcontrolnode){
        line += ", OUTLET CONTROL NODE=" + outletcontrolnode;
    }
    if("none"!=triggernode && "NONE"!=triggernode && "None"!=triggernode){
        line += ", TRIGGER NODE=" + triggernode;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQpermanentmagnetization(,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*PERMANENT MAGNETIZATION";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQpermeability(,string dependencies,,string type,,string specific,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*PERMEABILITY";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=specific && "NONE"!=specific && "None"!=specific){
        line += ", SPECIFIC=" + specific;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQphysicalconstants(,string absolutezero,,string stefanboltzmann,,string universalgasconstant,,string splreferencepressure,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*PHYSICAL CONSTANTS";
    if("none"!=absolutezero && "NONE"!=absolutezero && "None"!=absolutezero){
        line += ", ABSOLUTE ZERO=" + absolutezero;
    }
    if("none"!=stefanboltzmann && "NONE"!=stefanboltzmann && "None"!=stefanboltzmann){
        line += ", STEFAN BOLTZMANN=" + stefanboltzmann;
    }
    if("none"!=universalgasconstant && "NONE"!=universalgasconstant && "None"!=universalgasconstant){
        line += ", UNIVERSAL GAS CONSTANT=" + universalgasconstant;
    }
    if("none"!=splreferencepressure && "NONE"!=splreferencepressure && "None"!=splreferencepressure){
        line += ", SPL REFERENCE PRESSURE=" + splreferencepressure;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQpiezoelectric(,string dependencies,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*PIEZOELECTRIC";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQpipe-soilinteraction(,string elset,,string orientation,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*PIPE-SOIL INTERACTION";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=orientation && "NONE"!=orientation && "None"!=orientation){
        line += ", ORIENTATION=" + orientation;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQpipe-soilstiffness(,string dependencies,,string direction,,string type,,string properties,,string variables,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*PIPE-SOIL STIFFNESS";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=direction && "NONE"!=direction && "None"!=direction){
        line += ", DIRECTION=" + direction;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=properties && "NONE"!=properties && "None"!=properties){
        line += ", PROPERTIES=" + properties;
    }
    if("none"!=variables && "NONE"!=variables && "None"!=variables){
        line += ", VARIABLES=" + variables;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQplanartestdata(,string smooth,,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*PLANAR TEST DATA";
    if("none"!=smooth && "NONE"!=smooth && "None"!=smooth){
        line += ", SMOOTH=" + smooth;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQplastic(,string hardening,,string scalestress,,string dependencies,,string rate,,string datatype,,string numberbackstresses,,string properties,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*PLASTIC";
    if("none"!=hardening && "NONE"!=hardening && "None"!=hardening){
        line += ", HARDENING=" + hardening;
    }
    if("none"!=scalestress && "NONE"!=scalestress && "None"!=scalestress){
        line += ", SCALESTRESS=" + scalestress;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=rate && "NONE"!=rate && "None"!=rate){
        line += ", RATE=" + rate;
    }
    if("none"!=datatype && "NONE"!=datatype && "None"!=datatype){
        line += ", DATA TYPE=" + datatype;
    }
    if("none"!=numberbackstresses && "NONE"!=numberbackstresses && "None"!=numberbackstresses){
        line += ", NUMBER BACKSTRESSES=" + numberbackstresses;
    }
    if("none"!=properties && "NONE"!=properties && "None"!=properties){
        line += ", PROPERTIES=" + properties;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQplasticaxial(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*PLASTIC AXIAL";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQplasticm1(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*PLASTIC M1";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQplasticm2(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*PLASTIC M2";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQplastictorque(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*PLASTIC TORQUE";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQpmlcoefficient(,string variation,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*PML COEFFICIENT";
    if("none"!=variation && "NONE"!=variation && "None"!=variation){
        line += ", VARIATION=" + variation;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQporousbulkmoduli(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*POROUS BULK MODULI";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQporouselastic(,string dependencies,,string shear,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*POROUS ELASTIC";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=shear && "NONE"!=shear && "None"!=shear){
        line += ", SHEAR=" + shear;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQporousfailurecriteria(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*POROUS FAILURE CRITERIA";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQporousmetalplasticity(,string dependencies,,string relativedensity,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*POROUS METAL PLASTICITY";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=relativedensity && "NONE"!=relativedensity && "None"!=relativedensity){
        line += ", RELATIVE DENSITY=" + relativedensity;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQpostoutput(,string step,,string cycle,,string iteration,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*POST OUTPUT";
    if("none"!=step && "NONE"!=step && "None"!=step){
        line += ", STEP=" + step;
    }
    if("none"!=cycle && "NONE"!=cycle && "None"!=cycle){
        line += ", CYCLE=" + cycle;
    }
    if("none"!=iteration && "NONE"!=iteration && "None"!=iteration){
        line += ", ITERATION=" + iteration;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQpotential(,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*POTENTIAL";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQpreprint(,string contact,,string echo,,string history,,string model,,string parsubstitution,,string parvalues,,string massproperty,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*PREPRINT";
    if("none"!=contact && "NONE"!=contact && "None"!=contact){
        line += ", CONTACT=" + contact;
    }
    if("none"!=echo && "NONE"!=echo && "None"!=echo){
        line += ", ECHO=" + echo;
    }
    if("none"!=history && "NONE"!=history && "None"!=history){
        line += ", HISTORY=" + history;
    }
    if("none"!=model && "NONE"!=model && "None"!=model){
        line += ", MODEL=" + model;
    }
    if("none"!=parsubstitution && "NONE"!=parsubstitution && "None"!=parsubstitution){
        line += ", PARSUBSTITUTION=" + parsubstitution;
    }
    if("none"!=parvalues && "NONE"!=parvalues && "None"!=parvalues){
        line += ", PARVALUES=" + parvalues;
    }
    if("none"!=massproperty && "NONE"!=massproperty && "None"!=massproperty){
        line += ", MASS PROPERTY=" + massproperty;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQpressureequationsolver(,string convergence,,string diagnostics,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*PRESSURE EQUATION SOLVER";
    if("none"!=convergence && "NONE"!=convergence && "None"!=convergence){
        line += ", CONVERGENCE=" + convergence;
    }
    if("none"!=diagnostics && "NONE"!=diagnostics && "None"!=diagnostics){
        line += ", DIAGNOSTICS=" + diagnostics;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQpressurepenetration(,string master,,string slave,,string amplitude,,string op,,string penetrationtime,,string imaginary,,string real,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*PRESSURE PENETRATION";
    if("none"!=master && "NONE"!=master && "None"!=master){
        line += ", MASTER=" + master;
    }
    if("none"!=slave && "NONE"!=slave && "None"!=slave){
        line += ", SLAVE=" + slave;
    }
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    if("none"!=penetrationtime && "NONE"!=penetrationtime && "None"!=penetrationtime){
        line += ", PENETRATION TIME=" + penetrationtime;
    }
    if("none"!=imaginary && "NONE"!=imaginary && "None"!=imaginary){
        line += ", IMAGINARY=" + imaginary;
    }
    if("none"!=real && "NONE"!=real && "None"!=real){
        line += ", REAL=" + real;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQpressurestress(,string amplitude,,string input,,string op,,string file,,string bstep,,string binc,,string estep,,string einc,,string user,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*PRESSURE STRESS";
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=input && "NONE"!=input && "None"!=input){
        line += ", INPUT=" + input;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    if("none"!=file && "NONE"!=file && "None"!=file){
        line += ", FILE=" + file;
    }
    if("none"!=bstep && "NONE"!=bstep && "None"!=bstep){
        line += ", BSTEP=" + bstep;
    }
    if("none"!=binc && "NONE"!=binc && "None"!=binc){
        line += ", BINC=" + binc;
    }
    if("none"!=estep && "NONE"!=estep && "None"!=estep){
        line += ", ESTEP=" + estep;
    }
    if("none"!=einc && "NONE"!=einc && "None"!=einc){
        line += ", EINC=" + einc;
    }
    if("none"!=user && "NONE"!=user && "None"!=user){
        line += ", USER=" + user;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQprestresshold(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*PRESTRESS HOLD";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQpre-tensionsection(,string node,,string element,,string surface,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*PRE-TENSION SECTION";
    if("none"!=node && "NONE"!=node && "None"!=node){
        line += ", NODE=" + node;
    }
    if("none"!=element && "NONE"!=element && "None"!=element){
        line += ", ELEMENT=" + element;
    }
    if("none"!=surface && "NONE"!=surface && "None"!=surface){
        line += ", SURFACE=" + surface;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQprint(,string adaptivemesh,,string contact,,string frequency,,string modelchange,,string plasticity,,string residual,,string solve,,string allke,,string criticalelement,,string dmass,,string etotal,,string mass,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*PRINT";
    if("none"!=adaptivemesh && "NONE"!=adaptivemesh && "None"!=adaptivemesh){
        line += ", ADAPTIVE MESH=" + adaptivemesh;
    }
    if("none"!=contact && "NONE"!=contact && "None"!=contact){
        line += ", CONTACT=" + contact;
    }
    if("none"!=frequency && "NONE"!=frequency && "None"!=frequency){
        line += ", FREQUENCY=" + frequency;
    }
    if("none"!=modelchange && "NONE"!=modelchange && "None"!=modelchange){
        line += ", MODEL CHANGE=" + modelchange;
    }
    if("none"!=plasticity && "NONE"!=plasticity && "None"!=plasticity){
        line += ", PLASTICITY=" + plasticity;
    }
    if("none"!=residual && "NONE"!=residual && "None"!=residual){
        line += ", RESIDUAL=" + residual;
    }
    if("none"!=solve && "NONE"!=solve && "None"!=solve){
        line += ", SOLVE=" + solve;
    }
    if("none"!=allke && "NONE"!=allke && "None"!=allke){
        line += ", ALLKE=" + allke;
    }
    if("none"!=criticalelement && "NONE"!=criticalelement && "None"!=criticalelement){
        line += ", CRITICAL ELEMENT=" + criticalelement;
    }
    if("none"!=dmass && "NONE"!=dmass && "None"!=dmass){
        line += ", DMASS=" + dmass;
    }
    if("none"!=etotal && "NONE"!=etotal && "None"!=etotal){
        line += ", ETOTAL=" + etotal;
    }
    if("none"!=mass && "NONE"!=mass && "None"!=mass){
        line += ", MASS=" + mass;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQprobabilitydensityfunction(,string name,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*PROBABILITY DENSITY FUNCTION";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQpsd-definition(,string name,,string dbreference,,string g,,string input,,string type,,string user,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*PSD-DEFINITION";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=dbreference && "NONE"!=dbreference && "None"!=dbreference){
        line += ", DB REFERENCE=" + dbreference;
    }
    if("none"!=g && "NONE"!=g && "None"!=g){
        line += ", G=" + g;
    }
    if("none"!=input && "NONE"!=input && "None"!=input){
        line += ", INPUT=" + input;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=user && "NONE"!=user && "None"!=user){
        line += ", USER=" + user;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQradiate(,string amplitude,,string op,,string regiontype,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*RADIATE";
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    if("none"!=regiontype && "NONE"!=regiontype && "None"!=regiontype){
        line += ", REGION TYPE=" + regiontype;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQradiationfile(,string cavity,,string elset,,string surface,,string frequency,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*RADIATION FILE";
    if("none"!=cavity && "NONE"!=cavity && "None"!=cavity){
        line += ", CAVITY=" + cavity;
    }
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=surface && "NONE"!=surface && "None"!=surface){
        line += ", SURFACE=" + surface;
    }
    if("none"!=frequency && "NONE"!=frequency && "None"!=frequency){
        line += ", FREQUENCY=" + frequency;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQradiationoutput(,string cavity,,string elset,,string surface,,string variable,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*RADIATION OUTPUT";
    if("none"!=cavity && "NONE"!=cavity && "None"!=cavity){
        line += ", CAVITY=" + cavity;
    }
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=surface && "NONE"!=surface && "None"!=surface){
        line += ", SURFACE=" + surface;
    }
    if("none"!=variable && "NONE"!=variable && "None"!=variable){
        line += ", VARIABLE=" + variable;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQradiationprint(,string cavity,,string elset,,string surface,,string frequency,,string summary,,string totals,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*RADIATION PRINT";
    if("none"!=cavity && "NONE"!=cavity && "None"!=cavity){
        line += ", CAVITY=" + cavity;
    }
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=surface && "NONE"!=surface && "None"!=surface){
        line += ", SURFACE=" + surface;
    }
    if("none"!=frequency && "NONE"!=frequency && "None"!=frequency){
        line += ", FREQUENCY=" + frequency;
    }
    if("none"!=summary && "NONE"!=summary && "None"!=summary){
        line += ", SUMMARY=" + summary;
    }
    if("none"!=totals && "NONE"!=totals && "None"!=totals){
        line += ", TOTALS=" + totals;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQradiationsymmetry(,string name,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*RADIATION SYMMETRY";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQradiationviewfactor(,string blocking,,string cavity,,string infinitesimal,,string integration,,string lumpedarea,,string off,,string range,,string reflection,,string symmetry,,string vtol,,string mdisp,,string nset,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*RADIATION VIEW FACTOR";
    if("none"!=blocking && "NONE"!=blocking && "None"!=blocking){
        line += ", BLOCKING=" + blocking;
    }
    if("none"!=cavity && "NONE"!=cavity && "None"!=cavity){
        line += ", CAVITY=" + cavity;
    }
    if("none"!=infinitesimal && "NONE"!=infinitesimal && "None"!=infinitesimal){
        line += ", INFINITESIMAL=" + infinitesimal;
    }
    if("none"!=integration && "NONE"!=integration && "None"!=integration){
        line += ", INTEGRATION=" + integration;
    }
    if("none"!=lumpedarea && "NONE"!=lumpedarea && "None"!=lumpedarea){
        line += ", LUMPED AREA=" + lumpedarea;
    }
    if("none"!=off && "NONE"!=off && "None"!=off){
        line += ", OFF=" + off;
    }
    if("none"!=range && "NONE"!=range && "None"!=range){
        line += ", RANGE=" + range;
    }
    if("none"!=reflection && "NONE"!=reflection && "None"!=reflection){
        line += ", REFLECTION=" + reflection;
    }
    if("none"!=symmetry && "NONE"!=symmetry && "None"!=symmetry){
        line += ", SYMMETRY=" + symmetry;
    }
    if("none"!=vtol && "NONE"!=vtol && "None"!=vtol){
        line += ", VTOL=" + vtol;
    }
    if("none"!=mdisp && "NONE"!=mdisp && "None"!=mdisp){
        line += ", MDISP=" + mdisp;
    }
    if("none"!=nset && "NONE"!=nset && "None"!=nset){
        line += ", NSET=" + nset;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQrandomresponse(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*RANDOM RESPONSE";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQratedependent(,string dependencies,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*RATE DEPENDENT";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQratios(,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*RATIOS";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQreactionrate(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*REACTION RATE";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQrebar(,string element,,string material,,string name,,string geometry,,string isodirection,,string orientation,,string single,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*REBAR";
    if("none"!=element && "NONE"!=element && "None"!=element){
        line += ", ELEMENT=" + element;
    }
    if("none"!=material && "NONE"!=material && "None"!=material){
        line += ", MATERIAL=" + material;
    }
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=geometry && "NONE"!=geometry && "None"!=geometry){
        line += ", GEOMETRY=" + geometry;
    }
    if("none"!=isodirection && "NONE"!=isodirection && "None"!=isodirection){
        line += ", ISODIRECTION=" + isodirection;
    }
    if("none"!=orientation && "NONE"!=orientation && "None"!=orientation){
        line += ", ORIENTATION=" + orientation;
    }
    if("none"!=single && "NONE"!=single && "None"!=single){
        line += ", SINGLE=" + single;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQrebarlayer(,string geometry,,string orientation,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*REBAR LAYER";
    if("none"!=geometry && "NONE"!=geometry && "None"!=geometry){
        line += ", GEOMETRY=" + geometry;
    }
    if("none"!=orientation && "NONE"!=orientation && "None"!=orientation){
        line += ", ORIENTATION=" + orientation;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQreflection(,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*REFLECTION";
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQrelease(,string input,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*RELEASE";
    if("none"!=input && "NONE"!=input && "None"!=input){
        line += ", INPUT=" + input;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQresponsespectrum(,string comp,,string sum,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*RESPONSE SPECTRUM";
    if("none"!=comp && "NONE"!=comp && "None"!=comp){
        line += ", COMP=" + comp;
    }
    if("none"!=sum && "NONE"!=sum && "None"!=sum){
        line += ", SUM=" + sum;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQrestart(,string read,,string write,,string cycle,,string endstep,,string inc,,string iteration,,string step,,string frequency,,string numberinterval,,string timemarks,,string overlay,,string read,,string write,,string step,,string endstep,,string interval,,string numberinterval,,string timemarks,,string overlay,,string single,,string read,,string write,,string endstep,,string inc,,string step,,string frequency,,string numberinterval,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*RESTART";
    if("none"!=read && "NONE"!=read && "None"!=read){
        line += ", READ=" + read;
    }
    if("none"!=write && "NONE"!=write && "None"!=write){
        line += ", WRITE=" + write;
    }
    if("none"!=cycle && "NONE"!=cycle && "None"!=cycle){
        line += ", CYCLE=" + cycle;
    }
    if("none"!=endstep && "NONE"!=endstep && "None"!=endstep){
        line += ", END STEP=" + endstep;
    }
    if("none"!=inc && "NONE"!=inc && "None"!=inc){
        line += ", INC=" + inc;
    }
    if("none"!=iteration && "NONE"!=iteration && "None"!=iteration){
        line += ", ITERATION=" + iteration;
    }
    if("none"!=step && "NONE"!=step && "None"!=step){
        line += ", STEP=" + step;
    }
    if("none"!=frequency && "NONE"!=frequency && "None"!=frequency){
        line += ", FREQUENCY=" + frequency;
    }
    if("none"!=numberinterval && "NONE"!=numberinterval && "None"!=numberinterval){
        line += ", NUMBER INTERVAL=" + numberinterval;
    }
    if("none"!=timemarks && "NONE"!=timemarks && "None"!=timemarks){
        line += ", TIME MARKS=" + timemarks;
    }
    if("none"!=overlay && "NONE"!=overlay && "None"!=overlay){
        line += ", OVERLAY=" + overlay;
    }
    if("none"!=read && "NONE"!=read && "None"!=read){
        line += ", READ=" + read;
    }
    if("none"!=write && "NONE"!=write && "None"!=write){
        line += ", WRITE=" + write;
    }
    if("none"!=step && "NONE"!=step && "None"!=step){
        line += ", STEP=" + step;
    }
    if("none"!=endstep && "NONE"!=endstep && "None"!=endstep){
        line += ", END STEP=" + endstep;
    }
    if("none"!=interval && "NONE"!=interval && "None"!=interval){
        line += ", INTERVAL=" + interval;
    }
    if("none"!=numberinterval && "NONE"!=numberinterval && "None"!=numberinterval){
        line += ", NUMBER INTERVAL=" + numberinterval;
    }
    if("none"!=timemarks && "NONE"!=timemarks && "None"!=timemarks){
        line += ", TIME MARKS=" + timemarks;
    }
    if("none"!=overlay && "NONE"!=overlay && "None"!=overlay){
        line += ", OVERLAY=" + overlay;
    }
    if("none"!=single && "NONE"!=single && "None"!=single){
        line += ", SINGLE=" + single;
    }
    if("none"!=read && "NONE"!=read && "None"!=read){
        line += ", READ=" + read;
    }
    if("none"!=write && "NONE"!=write && "None"!=write){
        line += ", WRITE=" + write;
    }
    if("none"!=endstep && "NONE"!=endstep && "None"!=endstep){
        line += ", END STEP=" + endstep;
    }
    if("none"!=inc && "NONE"!=inc && "None"!=inc){
        line += ", INC=" + inc;
    }
    if("none"!=step && "NONE"!=step && "None"!=step){
        line += ", STEP=" + step;
    }
    if("none"!=frequency && "NONE"!=frequency && "None"!=frequency){
        line += ", FREQUENCY=" + frequency;
    }
    if("none"!=numberinterval && "NONE"!=numberinterval && "None"!=numberinterval){
        line += ", NUMBER INTERVAL=" + numberinterval;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQretainednodaldofs(,string sorted,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*RETAINED NODAL DOFS";
    if("none"!=sorted && "NONE"!=sorted && "None"!=sorted){
        line += ", SORTED=" + sorted;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQrigidbody(,string refnode,,string analyticalsurface,,string elset,,string pinnset,,string tienset,,string isothermal,,string position,,string density,,string nodalthickness,,string offset,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*RIGID BODY";
    if("none"!=refnode && "NONE"!=refnode && "None"!=refnode){
        line += ", REF NODE=" + refnode;
    }
    if("none"!=analyticalsurface && "NONE"!=analyticalsurface && "None"!=analyticalsurface){
        line += ", ANALYTICAL SURFACE=" + analyticalsurface;
    }
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=pinnset && "NONE"!=pinnset && "None"!=pinnset){
        line += ", PIN NSET=" + pinnset;
    }
    if("none"!=tienset && "NONE"!=tienset && "None"!=tienset){
        line += ", TIE NSET=" + tienset;
    }
    if("none"!=isothermal && "NONE"!=isothermal && "None"!=isothermal){
        line += ", ISOTHERMAL=" + isothermal;
    }
    if("none"!=position && "NONE"!=position && "None"!=position){
        line += ", POSITION=" + position;
    }
    if("none"!=density && "NONE"!=density && "None"!=density){
        line += ", DENSITY=" + density;
    }
    if("none"!=nodalthickness && "NONE"!=nodalthickness && "None"!=nodalthickness){
        line += ", NODAL THICKNESS=" + nodalthickness;
    }
    if("none"!=offset && "NONE"!=offset && "None"!=offset){
        line += ", OFFSET=" + offset;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQrigidsurface(,string elset,,string name,,string refnode,,string type,,string filletradius,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*RIGID SURFACE";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=refnode && "NONE"!=refnode && "None"!=refnode){
        line += ", REF NODE=" + refnode;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=filletradius && "NONE"!=filletradius && "None"!=filletradius){
        line += ", FILLET RADIUS=" + filletradius;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQrotaryinertia(,string elset,,string alpha,,string composite,,string orientation,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*ROTARY INERTIA";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=alpha && "NONE"!=alpha && "None"!=alpha){
        line += ", ALPHA=" + alpha;
    }
    if("none"!=composite && "NONE"!=composite && "None"!=composite){
        line += ", COMPOSITE=" + composite;
    }
    if("none"!=orientation && "NONE"!=orientation && "None"!=orientation){
        line += ", ORIENTATION=" + orientation;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsectioncontrols(,string name,,string conversioncriterion,,string distortioncontrol,,string drillstiffness,,string elementconversion,,string elementdeletion,,string hourglass,,string initialgapopening,,string kernel,,string kinematicsplit,,string lengthratio,,string maxdegradation,,string particlethickness,,string perturbation,,string rampinitialstress,,string secondorderaccuracy,,string sphformulation,,string sphsmoothinglength,,string viscosity,,string weightfactor,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SECTION CONTROLS";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=conversioncriterion && "NONE"!=conversioncriterion && "None"!=conversioncriterion){
        line += ", CONVERSION CRITERION=" + conversioncriterion;
    }
    if("none"!=distortioncontrol && "NONE"!=distortioncontrol && "None"!=distortioncontrol){
        line += ", DISTORTION CONTROL=" + distortioncontrol;
    }
    if("none"!=drillstiffness && "NONE"!=drillstiffness && "None"!=drillstiffness){
        line += ", DRILL STIFFNESS=" + drillstiffness;
    }
    if("none"!=elementconversion && "NONE"!=elementconversion && "None"!=elementconversion){
        line += ", ELEMENT CONVERSION=" + elementconversion;
    }
    if("none"!=elementdeletion && "NONE"!=elementdeletion && "None"!=elementdeletion){
        line += ", ELEMENT DELETION=" + elementdeletion;
    }
    if("none"!=hourglass && "NONE"!=hourglass && "None"!=hourglass){
        line += ", HOURGLASS=" + hourglass;
    }
    if("none"!=initialgapopening && "NONE"!=initialgapopening && "None"!=initialgapopening){
        line += ", INITIAL GAP OPENING=" + initialgapopening;
    }
    if("none"!=kernel && "NONE"!=kernel && "None"!=kernel){
        line += ", KERNEL=" + kernel;
    }
    if("none"!=kinematicsplit && "NONE"!=kinematicsplit && "None"!=kinematicsplit){
        line += ", KINEMATIC SPLIT=" + kinematicsplit;
    }
    if("none"!=lengthratio && "NONE"!=lengthratio && "None"!=lengthratio){
        line += ", LENGTH RATIO=" + lengthratio;
    }
    if("none"!=maxdegradation && "NONE"!=maxdegradation && "None"!=maxdegradation){
        line += ", MAX DEGRADATION=" + maxdegradation;
    }
    if("none"!=particlethickness && "NONE"!=particlethickness && "None"!=particlethickness){
        line += ", PARTICLE THICKNESS=" + particlethickness;
    }
    if("none"!=perturbation && "NONE"!=perturbation && "None"!=perturbation){
        line += ", PERTURBATION=" + perturbation;
    }
    if("none"!=rampinitialstress && "NONE"!=rampinitialstress && "None"!=rampinitialstress){
        line += ", RAMP INITIAL STRESS=" + rampinitialstress;
    }
    if("none"!=secondorderaccuracy && "NONE"!=secondorderaccuracy && "None"!=secondorderaccuracy){
        line += ", SECOND ORDER ACCURACY=" + secondorderaccuracy;
    }
    if("none"!=sphformulation && "NONE"!=sphformulation && "None"!=sphformulation){
        line += ", SPH FORMULATION=" + sphformulation;
    }
    if("none"!=sphsmoothinglength && "NONE"!=sphsmoothinglength && "None"!=sphsmoothinglength){
        line += ", SPH SMOOTHING LENGTH=" + sphsmoothinglength;
    }
    if("none"!=viscosity && "NONE"!=viscosity && "None"!=viscosity){
        line += ", VISCOSITY=" + viscosity;
    }
    if("none"!=weightfactor && "NONE"!=weightfactor && "None"!=weightfactor){
        line += ", WEIGHT FACTOR=" + weightfactor;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsectionfile(,string name,,string surface,,string axes,,string frequency,,string update,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SECTION FILE";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=surface && "NONE"!=surface && "None"!=surface){
        line += ", SURFACE=" + surface;
    }
    if("none"!=axes && "NONE"!=axes && "None"!=axes){
        line += ", AXES=" + axes;
    }
    if("none"!=frequency && "NONE"!=frequency && "None"!=frequency){
        line += ", FREQUENCY=" + frequency;
    }
    if("none"!=update && "NONE"!=update && "None"!=update){
        line += ", UPDATE=" + update;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsectionorigin(,string origin,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SECTION ORIGIN";
    if("none"!=origin && "NONE"!=origin && "None"!=origin){
        line += ", ORIGIN=" + origin;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsectionpoints(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SECTION POINTS";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsectionprint(,string name,,string surface,,string axes,,string frequency,,string update,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SECTION PRINT";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=surface && "NONE"!=surface && "None"!=surface){
        line += ", SURFACE=" + surface;
    }
    if("none"!=axes && "NONE"!=axes && "None"!=axes){
        line += ", AXES=" + axes;
    }
    if("none"!=frequency && "NONE"!=frequency && "None"!=frequency){
        line += ", FREQUENCY=" + frequency;
    }
    if("none"!=update && "NONE"!=update && "None"!=update){
        line += ", UPDATE=" + update;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQselectcyclicsymmetrymodes(,string even,,string nmin,,string nmax,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SELECT CYCLIC SYMMETRY MODES";
    if("none"!=even && "NONE"!=even && "None"!=even){
        line += ", EVEN=" + even;
    }
    if("none"!=nmin && "NONE"!=nmin && "None"!=nmin){
        line += ", NMIN=" + nmin;
    }
    if("none"!=nmax && "NONE"!=nmax && "None"!=nmax){
        line += ", NMAX=" + nmax;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQselecteigenmodes(,string definition,,string generate,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SELECT EIGENMODES";
    if("none"!=definition && "NONE"!=definition && "None"!=definition){
        line += ", DEFINITION=" + definition;
    }
    if("none"!=generate && "NONE"!=generate && "None"!=generate){
        line += ", GENERATE=" + generate;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsfilm(,string amplitude,,string filmamplitude,,string op,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SFILM";
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=filmamplitude && "NONE"!=filmamplitude && "None"!=filmamplitude){
        line += ", FILM AMPLITUDE=" + filmamplitude;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsflow(,string amplitude,,string op,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SFLOW";
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQshearcenter(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SHEAR CENTER";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQshearfailure(,string dependencies,,string elementdeletion,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SHEAR FAILURE";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=elementdeletion && "NONE"!=elementdeletion && "None"!=elementdeletion){
        line += ", ELEMENT DELETION=" + elementdeletion;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQshearretention(,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SHEAR RETENTION";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsheartestdata(,string shrinf,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SHEAR TEST DATA";
    if("none"!=shrinf && "NONE"!=shrinf && "None"!=shrinf){
        line += ", SHRINF=" + shrinf;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQshellgeneralsection(,string elset,,string density,,string bendingonly,,string controls,,string layup,,string membraneonly,,string offset,,string orientation,,string poisson,,string smearalllayers,,string stackdirection,,string symmetric,,string thicknessmodulus,,string zero,,string composite,,string material,,string user,,string nodalthickness,,string shellthickness,,string iproperties,,string properties,,string unsymm,,string variables,,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SHELL GENERAL SECTION";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=density && "NONE"!=density && "None"!=density){
        line += ", DENSITY=" + density;
    }
    if("none"!=bendingonly && "NONE"!=bendingonly && "None"!=bendingonly){
        line += ", BENDING ONLY=" + bendingonly;
    }
    if("none"!=controls && "NONE"!=controls && "None"!=controls){
        line += ", CONTROLS=" + controls;
    }
    if("none"!=layup && "NONE"!=layup && "None"!=layup){
        line += ", LAYUP=" + layup;
    }
    if("none"!=membraneonly && "NONE"!=membraneonly && "None"!=membraneonly){
        line += ", MEMBRANE ONLY=" + membraneonly;
    }
    if("none"!=offset && "NONE"!=offset && "None"!=offset){
        line += ", OFFSET=" + offset;
    }
    if("none"!=orientation && "NONE"!=orientation && "None"!=orientation){
        line += ", ORIENTATION=" + orientation;
    }
    if("none"!=poisson && "NONE"!=poisson && "None"!=poisson){
        line += ", POISSON=" + poisson;
    }
    if("none"!=smearalllayers && "NONE"!=smearalllayers && "None"!=smearalllayers){
        line += ", SMEAR ALL LAYERS=" + smearalllayers;
    }
    if("none"!=stackdirection && "NONE"!=stackdirection && "None"!=stackdirection){
        line += ", STACK DIRECTION=" + stackdirection;
    }
    if("none"!=symmetric && "NONE"!=symmetric && "None"!=symmetric){
        line += ", SYMMETRIC=" + symmetric;
    }
    if("none"!=thicknessmodulus && "NONE"!=thicknessmodulus && "None"!=thicknessmodulus){
        line += ", THICKNESS MODULUS=" + thicknessmodulus;
    }
    if("none"!=zero && "NONE"!=zero && "None"!=zero){
        line += ", ZERO=" + zero;
    }
    if("none"!=composite && "NONE"!=composite && "None"!=composite){
        line += ", COMPOSITE=" + composite;
    }
    if("none"!=material && "NONE"!=material && "None"!=material){
        line += ", MATERIAL=" + material;
    }
    if("none"!=user && "NONE"!=user && "None"!=user){
        line += ", USER=" + user;
    }
    if("none"!=nodalthickness && "NONE"!=nodalthickness && "None"!=nodalthickness){
        line += ", NODAL THICKNESS=" + nodalthickness;
    }
    if("none"!=shellthickness && "NONE"!=shellthickness && "None"!=shellthickness){
        line += ", SHELL THICKNESS=" + shellthickness;
    }
    if("none"!=iproperties && "NONE"!=iproperties && "None"!=iproperties){
        line += ", I PROPERTIES=" + iproperties;
    }
    if("none"!=properties && "NONE"!=properties && "None"!=properties){
        line += ", PROPERTIES=" + properties;
    }
    if("none"!=unsymm && "NONE"!=unsymm && "None"!=unsymm){
        line += ", UNSYMM=" + unsymm;
    }
    if("none"!=variables && "NONE"!=variables && "None"!=variables){
        line += ", VARIABLES=" + variables;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQshellsection(,string elset,,string composite,,string material,,string controls,,string density,,string layup,,string nodalthickness,,string offset,,string orientation,,string poisson,,string sectionintegration,,string shellthickness,,string stackdirection,,string symmetric,,string temperature,,string thicknessmodulus,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SHELL SECTION";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=composite && "NONE"!=composite && "None"!=composite){
        line += ", COMPOSITE=" + composite;
    }
    if("none"!=material && "NONE"!=material && "None"!=material){
        line += ", MATERIAL=" + material;
    }
    if("none"!=controls && "NONE"!=controls && "None"!=controls){
        line += ", CONTROLS=" + controls;
    }
    if("none"!=density && "NONE"!=density && "None"!=density){
        line += ", DENSITY=" + density;
    }
    if("none"!=layup && "NONE"!=layup && "None"!=layup){
        line += ", LAYUP=" + layup;
    }
    if("none"!=nodalthickness && "NONE"!=nodalthickness && "None"!=nodalthickness){
        line += ", NODAL THICKNESS=" + nodalthickness;
    }
    if("none"!=offset && "NONE"!=offset && "None"!=offset){
        line += ", OFFSET=" + offset;
    }
    if("none"!=orientation && "NONE"!=orientation && "None"!=orientation){
        line += ", ORIENTATION=" + orientation;
    }
    if("none"!=poisson && "NONE"!=poisson && "None"!=poisson){
        line += ", POISSON=" + poisson;
    }
    if("none"!=sectionintegration && "NONE"!=sectionintegration && "None"!=sectionintegration){
        line += ", SECTION INTEGRATION=" + sectionintegration;
    }
    if("none"!=shellthickness && "NONE"!=shellthickness && "None"!=shellthickness){
        line += ", SHELL THICKNESS=" + shellthickness;
    }
    if("none"!=stackdirection && "NONE"!=stackdirection && "None"!=stackdirection){
        line += ", STACK DIRECTION=" + stackdirection;
    }
    if("none"!=symmetric && "NONE"!=symmetric && "None"!=symmetric){
        line += ", SYMMETRIC=" + symmetric;
    }
    if("none"!=temperature && "NONE"!=temperature && "None"!=temperature){
        line += ", TEMPERATURE=" + temperature;
    }
    if("none"!=thicknessmodulus && "NONE"!=thicknessmodulus && "None"!=thicknessmodulus){
        line += ", THICKNESS MODULUS=" + thicknessmodulus;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQshelltosolidcoupling(,string constraintname,,string influencedistance,,string positiontolerance,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SHELL TO SOLID COUPLING";
    if("none"!=constraintname && "NONE"!=constraintname && "None"!=constraintname){
        line += ", CONSTRAINT NAME=" + constraintname;
    }
    if("none"!=influencedistance && "NONE"!=influencedistance && "None"!=influencedistance){
        line += ", INFLUENCE DISTANCE=" + influencedistance;
    }
    if("none"!=positiontolerance && "NONE"!=positiontolerance && "None"!=positiontolerance){
        line += ", POSITION TOLERANCE=" + positiontolerance;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsimpedance(,string property,,string nonreflecting,,string op,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SIMPEDANCE";
    if("none"!=property && "NONE"!=property && "None"!=property){
        line += ", PROPERTY=" + property;
    }
    if("none"!=nonreflecting && "NONE"!=nonreflecting && "None"!=nonreflecting){
        line += ", NONREFLECTING=" + nonreflecting;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsimplesheartestdata(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SIMPLE SHEAR TEST DATA";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQslideline(,string elset,,string type,,string extensionzone,,string generate,,string smooth,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SLIDE LINE";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=extensionzone && "NONE"!=extensionzone && "None"!=extensionzone){
        line += ", EXTENSION ZONE=" + extensionzone;
    }
    if("none"!=generate && "NONE"!=generate && "None"!=generate){
        line += ", GENERATE=" + generate;
    }
    if("none"!=smooth && "NONE"!=smooth && "None"!=smooth){
        line += ", SMOOTH=" + smooth;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsload(,string amplitude,,string op,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SLOAD";
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsofteningregularization(,string dependencies,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SOFTENING REGULARIZATION";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsoils(,string allsdtol,,string cetol,,string consolidation,,string continue,,string deltmx,,string end,,string creep,,string factor,,string heat,,string stabilize,,string utol,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SOILS";
    if("none"!=allsdtol && "NONE"!=allsdtol && "None"!=allsdtol){
        line += ", ALLSDTOL=" + allsdtol;
    }
    if("none"!=cetol && "NONE"!=cetol && "None"!=cetol){
        line += ", CETOL=" + cetol;
    }
    if("none"!=consolidation && "NONE"!=consolidation && "None"!=consolidation){
        line += ", CONSOLIDATION=" + consolidation;
    }
    if("none"!=continue && "NONE"!=continue && "None"!=continue){
        line += ", CONTINUE=" + continue;
    }
    if("none"!=deltmx && "NONE"!=deltmx && "None"!=deltmx){
        line += ", DELTMX=" + deltmx;
    }
    if("none"!=end && "NONE"!=end && "None"!=end){
        line += ", END=" + end;
    }
    if("none"!=creep && "NONE"!=creep && "None"!=creep){
        line += ", CREEP=" + creep;
    }
    if("none"!=factor && "NONE"!=factor && "None"!=factor){
        line += ", FACTOR=" + factor;
    }
    if("none"!=heat && "NONE"!=heat && "None"!=heat){
        line += ", HEAT=" + heat;
    }
    if("none"!=stabilize && "NONE"!=stabilize && "None"!=stabilize){
        line += ", STABILIZE=" + stabilize;
    }
    if("none"!=utol && "NONE"!=utol && "None"!=utol){
        line += ", UTOL=" + utol;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsolidsection(,string composite,,string elset,,string material,,string refnode,,string orientation,,string controls,,string layup,,string order,,string stackdirection,,string symmetric,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SOLID SECTION";
    if("none"!=composite && "NONE"!=composite && "None"!=composite){
        line += ", COMPOSITE=" + composite;
    }
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=material && "NONE"!=material && "None"!=material){
        line += ", MATERIAL=" + material;
    }
    if("none"!=refnode && "NONE"!=refnode && "None"!=refnode){
        line += ", REF NODE=" + refnode;
    }
    if("none"!=orientation && "NONE"!=orientation && "None"!=orientation){
        line += ", ORIENTATION=" + orientation;
    }
    if("none"!=controls && "NONE"!=controls && "None"!=controls){
        line += ", CONTROLS=" + controls;
    }
    if("none"!=layup && "NONE"!=layup && "None"!=layup){
        line += ", LAYUP=" + layup;
    }
    if("none"!=order && "NONE"!=order && "None"!=order){
        line += ", ORDER=" + order;
    }
    if("none"!=stackdirection && "NONE"!=stackdirection && "None"!=stackdirection){
        line += ", STACK DIRECTION=" + stackdirection;
    }
    if("none"!=symmetric && "NONE"!=symmetric && "None"!=symmetric){
        line += ", SYMMETRIC=" + symmetric;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsolubility(,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SOLUBILITY";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsolutiontechnique(,string type,,string reformkernel,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SOLUTION TECHNIQUE";
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=reformkernel && "NONE"!=reformkernel && "None"!=reformkernel){
        line += ", REFORM KERNEL=" + reformkernel;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsolvercontrols(,string constraintoptimization,,string reset,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SOLVER CONTROLS";
    if("none"!=constraintoptimization && "NONE"!=constraintoptimization && "None"!=constraintoptimization){
        line += ", CONSTRAINT OPTIMIZATION=" + constraintoptimization;
    }
    if("none"!=reset && "NONE"!=reset && "None"!=reset){
        line += ", RESET=" + reset;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsorption(,string law,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SORPTION";
    if("none"!=law && "NONE"!=law && "None"!=law){
        line += ", LAW=" + law;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQspecificheat(,string dependencies,,string porefluid,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SPECIFIC HEAT";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=porefluid && "NONE"!=porefluid && "None"!=porefluid){
        line += ", PORE FLUID=" + porefluid;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQspectrum(,string name,,string g,,string input,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SPECTRUM";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=g && "NONE"!=g && "None"!=g){
        line += ", G=" + g;
    }
    if("none"!=input && "NONE"!=input && "None"!=input){
        line += ", INPUT=" + input;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsphsurfacebehavior(,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SPH SURFACE BEHAVIOR";
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQspring(,string elset,,string complexstiffness,,string dependencies,,string nonlinear,,string orientation,,string rtol,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SPRING";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=complexstiffness && "NONE"!=complexstiffness && "None"!=complexstiffness){
        line += ", COMPLEX STIFFNESS=" + complexstiffness;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=nonlinear && "NONE"!=nonlinear && "None"!=nonlinear){
        line += ", NONLINEAR=" + nonlinear;
    }
    if("none"!=orientation && "NONE"!=orientation && "None"!=orientation){
        line += ", ORIENTATION=" + orientation;
    }
    if("none"!=rtol && "NONE"!=rtol && "None"!=rtol){
        line += ", RTOL=" + rtol;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsradiate(,string amplitude,,string op,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SRADIATE";
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQstatic(,string adiabatic,,string allsdtol,,string continue,,string direct,,string factor,,string fullyplastic,,string longterm,,string riks,,string stabilize,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*STATIC";
    if("none"!=adiabatic && "NONE"!=adiabatic && "None"!=adiabatic){
        line += ", ADIABATIC=" + adiabatic;
    }
    if("none"!=allsdtol && "NONE"!=allsdtol && "None"!=allsdtol){
        line += ", ALLSDTOL=" + allsdtol;
    }
    if("none"!=continue && "NONE"!=continue && "None"!=continue){
        line += ", CONTINUE=" + continue;
    }
    if("none"!=direct && "NONE"!=direct && "None"!=direct){
        line += ", DIRECT=" + direct;
    }
    if("none"!=factor && "NONE"!=factor && "None"!=factor){
        line += ", FACTOR=" + factor;
    }
    if("none"!=fullyplastic && "NONE"!=fullyplastic && "None"!=fullyplastic){
        line += ", FULLY PLASTIC=" + fullyplastic;
    }
    if("none"!=longterm && "NONE"!=longterm && "None"!=longterm){
        line += ", LONG TERM=" + longterm;
    }
    if("none"!=riks && "NONE"!=riks && "None"!=riks){
        line += ", RIKS=" + riks;
    }
    if("none"!=stabilize && "NONE"!=stabilize && "None"!=stabilize){
        line += ", STABILIZE=" + stabilize;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsteadystatecriteria(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*STEADY STATE CRITERIA";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsteadystatedetection(,string elset,,string sampling,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*STEADY STATE DETECTION";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=sampling && "NONE"!=sampling && "None"!=sampling){
        line += ", SAMPLING=" + sampling;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsteadystatedynamics(,string direct,,string subspaceprojection,,string dampingchange,,string frequencyscale,,string frictiondamping,,string interval,,string realonly,,string stiffnesschange,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*STEADY STATE DYNAMICS";
    if("none"!=direct && "NONE"!=direct && "None"!=direct){
        line += ", DIRECT=" + direct;
    }
    if("none"!=subspaceprojection && "NONE"!=subspaceprojection && "None"!=subspaceprojection){
        line += ", SUBSPACE PROJECTION=" + subspaceprojection;
    }
    if("none"!=dampingchange && "NONE"!=dampingchange && "None"!=dampingchange){
        line += ", DAMPING CHANGE=" + dampingchange;
    }
    if("none"!=frequencyscale && "NONE"!=frequencyscale && "None"!=frequencyscale){
        line += ", FREQUENCY SCALE=" + frequencyscale;
    }
    if("none"!=frictiondamping && "NONE"!=frictiondamping && "None"!=frictiondamping){
        line += ", FRICTION DAMPING=" + frictiondamping;
    }
    if("none"!=interval && "NONE"!=interval && "None"!=interval){
        line += ", INTERVAL=" + interval;
    }
    if("none"!=realonly && "NONE"!=realonly && "None"!=realonly){
        line += ", REAL ONLY=" + realonly;
    }
    if("none"!=stiffnesschange && "NONE"!=stiffnesschange && "None"!=stiffnesschange){
        line += ", STIFFNESS CHANGE=" + stiffnesschange;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsteadystatetransport(,string allsdtol,,string continue,,string direct,,string elset,,string factor,,string inertia,,string longterm,,string mullins,,string passbypass,,string stabilize,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*STEADY STATE TRANSPORT";
    if("none"!=allsdtol && "NONE"!=allsdtol && "None"!=allsdtol){
        line += ", ALLSDTOL=" + allsdtol;
    }
    if("none"!=continue && "NONE"!=continue && "None"!=continue){
        line += ", CONTINUE=" + continue;
    }
    if("none"!=direct && "NONE"!=direct && "None"!=direct){
        line += ", DIRECT=" + direct;
    }
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=factor && "NONE"!=factor && "None"!=factor){
        line += ", FACTOR=" + factor;
    }
    if("none"!=inertia && "NONE"!=inertia && "None"!=inertia){
        line += ", INERTIA=" + inertia;
    }
    if("none"!=longterm && "NONE"!=longterm && "None"!=longterm){
        line += ", LONG TERM=" + longterm;
    }
    if("none"!=mullins && "NONE"!=mullins && "None"!=mullins){
        line += ", MULLINS=" + mullins;
    }
    if("none"!=passbypass && "NONE"!=passbypass && "None"!=passbypass){
        line += ", PASS BY PASS=" + passbypass;
    }
    if("none"!=stabilize && "NONE"!=stabilize && "None"!=stabilize){
        line += ", STABILIZE=" + stabilize;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQstep(,string amplitude,,string convertsdi,,string dsa,,string extrapolation,,string inc,,string name,,string nlgeom,,string perturbation,,string solver,,string unsymm,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*STEP";
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=convertsdi && "NONE"!=convertsdi && "None"!=convertsdi){
        line += ", CONVERT SDI=" + convertsdi;
    }
    if("none"!=dsa && "NONE"!=dsa && "None"!=dsa){
        line += ", DSA=" + dsa;
    }
    if("none"!=extrapolation && "NONE"!=extrapolation && "None"!=extrapolation){
        line += ", EXTRAPOLATION=" + extrapolation;
    }
    if("none"!=inc && "NONE"!=inc && "None"!=inc){
        line += ", INC=" + inc;
    }
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=nlgeom && "NONE"!=nlgeom && "None"!=nlgeom){
        line += ", NLGEOM=" + nlgeom;
    }
    if("none"!=perturbation && "NONE"!=perturbation && "None"!=perturbation){
        line += ", PERTURBATION=" + perturbation;
    }
    if("none"!=solver && "NONE"!=solver && "None"!=solver){
        line += ", SOLVER=" + solver;
    }
    if("none"!=unsymm && "NONE"!=unsymm && "None"!=unsymm){
        line += ", UNSYMM=" + unsymm;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsubcycling(,string elset,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SUBCYCLING";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsubmodel(,string acoustictostructure,,string shelltosolid,,string shellthickness,,string absoluteexteriortolerance,,string exteriortolerance,,string globalelset,,string intersectiononly,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SUBMODEL";
    if("none"!=acoustictostructure && "NONE"!=acoustictostructure && "None"!=acoustictostructure){
        line += ", ACOUSTIC TO STRUCTURE=" + acoustictostructure;
    }
    if("none"!=shelltosolid && "NONE"!=shelltosolid && "None"!=shelltosolid){
        line += ", SHELL TO SOLID=" + shelltosolid;
    }
    if("none"!=shellthickness && "NONE"!=shellthickness && "None"!=shellthickness){
        line += ", SHELL THICKNESS=" + shellthickness;
    }
    if("none"!=absoluteexteriortolerance && "NONE"!=absoluteexteriortolerance && "None"!=absoluteexteriortolerance){
        line += ", ABSOLUTE EXTERIOR TOLERANCE=" + absoluteexteriortolerance;
    }
    if("none"!=exteriortolerance && "NONE"!=exteriortolerance && "None"!=exteriortolerance){
        line += ", EXTERIOR TOLERANCE=" + exteriortolerance;
    }
    if("none"!=globalelset && "NONE"!=globalelset && "None"!=globalelset){
        line += ", GLOBAL ELSET=" + globalelset;
    }
    if("none"!=intersectiononly && "NONE"!=intersectiononly && "None"!=intersectiononly){
        line += ", INTERSECTION ONLY=" + intersectiononly;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsubstructurecopy(,string newtype,,string oldtype,,string newlibrary,,string oldlibrary,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SUBSTRUCTURE COPY";
    if("none"!=newtype && "NONE"!=newtype && "None"!=newtype){
        line += ", NEW TYPE=" + newtype;
    }
    if("none"!=oldtype && "NONE"!=oldtype && "None"!=oldtype){
        line += ", OLD TYPE=" + oldtype;
    }
    if("none"!=newlibrary && "NONE"!=newlibrary && "None"!=newlibrary){
        line += ", NEW LIBRARY=" + newlibrary;
    }
    if("none"!=oldlibrary && "NONE"!=oldlibrary && "None"!=oldlibrary){
        line += ", OLD LIBRARY=" + oldlibrary;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsubstructuredamping(,string alpha,,string beta,,string structural,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SUBSTRUCTURE DAMPING";
    if("none"!=alpha && "NONE"!=alpha && "None"!=alpha){
        line += ", ALPHA=" + alpha;
    }
    if("none"!=beta && "NONE"!=beta && "None"!=beta){
        line += ", BETA=" + beta;
    }
    if("none"!=structural && "NONE"!=structural && "None"!=structural){
        line += ", STRUCTURAL=" + structural;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsubstructuredampingcontrols(,string structural,,string viscous,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SUBSTRUCTURE DAMPING CONTROLS";
    if("none"!=structural && "NONE"!=structural && "None"!=structural){
        line += ", STRUCTURAL=" + structural;
    }
    if("none"!=viscous && "NONE"!=viscous && "None"!=viscous){
        line += ", VISCOUS=" + viscous;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsubstructuredelete(,string type,,string library,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SUBSTRUCTURE DELETE";
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=library && "NONE"!=library && "None"!=library){
        line += ", LIBRARY=" + library;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsubstructuredirectory(,string library,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SUBSTRUCTURE DIRECTORY";
    if("none"!=library && "NONE"!=library && "None"!=library){
        line += ", LIBRARY=" + library;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsubstructuregenerate(,string type,,string eigenproblem,,string elset,,string gravityload,,string library,,string massmatrix,,string nset,,string overwrite,,string propertyevaluation,,string recoverymatrix,,string structuraldampingmatrix,,string viscousdampingmatrix,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SUBSTRUCTURE GENERATE";
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=eigenproblem && "NONE"!=eigenproblem && "None"!=eigenproblem){
        line += ", EIGENPROBLEM=" + eigenproblem;
    }
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=gravityload && "NONE"!=gravityload && "None"!=gravityload){
        line += ", GRAVITY LOAD=" + gravityload;
    }
    if("none"!=library && "NONE"!=library && "None"!=library){
        line += ", LIBRARY=" + library;
    }
    if("none"!=massmatrix && "NONE"!=massmatrix && "None"!=massmatrix){
        line += ", MASS MATRIX=" + massmatrix;
    }
    if("none"!=nset && "NONE"!=nset && "None"!=nset){
        line += ", NSET=" + nset;
    }
    if("none"!=overwrite && "NONE"!=overwrite && "None"!=overwrite){
        line += ", OVERWRITE=" + overwrite;
    }
    if("none"!=propertyevaluation && "NONE"!=propertyevaluation && "None"!=propertyevaluation){
        line += ", PROPERTY EVALUATION=" + propertyevaluation;
    }
    if("none"!=recoverymatrix && "NONE"!=recoverymatrix && "None"!=recoverymatrix){
        line += ", RECOVERY MATRIX=" + recoverymatrix;
    }
    if("none"!=structuraldampingmatrix && "NONE"!=structuraldampingmatrix && "None"!=structuraldampingmatrix){
        line += ", STRUCTURAL DAMPING MATRIX=" + structuraldampingmatrix;
    }
    if("none"!=viscousdampingmatrix && "NONE"!=viscousdampingmatrix && "None"!=viscousdampingmatrix){
        line += ", VISCOUS DAMPING MATRIX=" + viscousdampingmatrix;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsubstructureloadcase(,string name,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SUBSTRUCTURE LOAD CASE";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsubstructurematrixoutput(,string filename,,string gravityload,,string mass,,string outputfile,,string recoverymatrix,,string sload,,string stiffness,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SUBSTRUCTURE MATRIX OUTPUT";
    if("none"!=filename && "NONE"!=filename && "None"!=filename){
        line += ", FILE NAME=" + filename;
    }
    if("none"!=gravityload && "NONE"!=gravityload && "None"!=gravityload){
        line += ", GRAVITY LOAD=" + gravityload;
    }
    if("none"!=mass && "NONE"!=mass && "None"!=mass){
        line += ", MASS=" + mass;
    }
    if("none"!=outputfile && "NONE"!=outputfile && "None"!=outputfile){
        line += ", OUTPUT FILE=" + outputfile;
    }
    if("none"!=recoverymatrix && "NONE"!=recoverymatrix && "None"!=recoverymatrix){
        line += ", RECOVERY MATRIX=" + recoverymatrix;
    }
    if("none"!=sload && "NONE"!=sload && "None"!=sload){
        line += ", SLOAD=" + sload;
    }
    if("none"!=stiffness && "NONE"!=stiffness && "None"!=stiffness){
        line += ", STIFFNESS=" + stiffness;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsubstructuremodaldamping(,string structural,,string viscous,,string definition,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SUBSTRUCTURE MODAL DAMPING";
    if("none"!=structural && "NONE"!=structural && "None"!=structural){
        line += ", STRUCTURAL=" + structural;
    }
    if("none"!=viscous && "NONE"!=viscous && "None"!=viscous){
        line += ", VISCOUS=" + viscous;
    }
    if("none"!=definition && "NONE"!=definition && "None"!=definition){
        line += ", DEFINITION=" + definition;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsubstructurepath(,string enterelement,,string leave,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SUBSTRUCTURE PATH";
    if("none"!=enterelement && "NONE"!=enterelement && "None"!=enterelement){
        line += ", ENTER ELEMENT=" + enterelement;
    }
    if("none"!=leave && "NONE"!=leave && "None"!=leave){
        line += ", LEAVE=" + leave;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsubstructureproperty(,string elset,,string positiontol,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SUBSTRUCTURE PROPERTY";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=positiontol && "NONE"!=positiontol && "None"!=positiontol){
        line += ", POSITION TOL=" + positiontol;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsurface(,string name,,string property,,string combine,,string crop,,string definition,,string filletradius,,string internal,,string regiontype,,string trim,,string type,,string maxratio,,string nooffset,,string nothick,,string scalethick,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SURFACE";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=property && "NONE"!=property && "None"!=property){
        line += ", PROPERTY=" + property;
    }
    if("none"!=combine && "NONE"!=combine && "None"!=combine){
        line += ", COMBINE=" + combine;
    }
    if("none"!=crop && "NONE"!=crop && "None"!=crop){
        line += ", CROP=" + crop;
    }
    if("none"!=definition && "NONE"!=definition && "None"!=definition){
        line += ", DEFINITION=" + definition;
    }
    if("none"!=filletradius && "NONE"!=filletradius && "None"!=filletradius){
        line += ", FILLET RADIUS=" + filletradius;
    }
    if("none"!=internal && "NONE"!=internal && "None"!=internal){
        line += ", INTERNAL=" + internal;
    }
    if("none"!=regiontype && "NONE"!=regiontype && "None"!=regiontype){
        line += ", REGION TYPE=" + regiontype;
    }
    if("none"!=trim && "NONE"!=trim && "None"!=trim){
        line += ", TRIM=" + trim;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=maxratio && "NONE"!=maxratio && "None"!=maxratio){
        line += ", MAX RATIO=" + maxratio;
    }
    if("none"!=nooffset && "NONE"!=nooffset && "None"!=nooffset){
        line += ", NO OFFSET=" + nooffset;
    }
    if("none"!=nothick && "NONE"!=nothick && "None"!=nothick){
        line += ", NO THICK=" + nothick;
    }
    if("none"!=scalethick && "NONE"!=scalethick && "None"!=scalethick){
        line += ", SCALE THICK=" + scalethick;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsurfacebehavior(,string augmentedlagrange,,string direct,,string penalty,,string noseparation,,string pressure-overclosure,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SURFACE BEHAVIOR";
    if("none"!=augmentedlagrange && "NONE"!=augmentedlagrange && "None"!=augmentedlagrange){
        line += ", AUGMENTED LAGRANGE=" + augmentedlagrange;
    }
    if("none"!=direct && "NONE"!=direct && "None"!=direct){
        line += ", DIRECT=" + direct;
    }
    if("none"!=penalty && "NONE"!=penalty && "None"!=penalty){
        line += ", PENALTY=" + penalty;
    }
    if("none"!=noseparation && "NONE"!=noseparation && "None"!=noseparation){
        line += ", NO SEPARATION=" + noseparation;
    }
    if("none"!=pressure-overclosure && "NONE"!=pressure-overclosure && "None"!=pressure-overclosure){
        line += ", PRESSURE-OVERCLOSURE=" + pressure-overclosure;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsurfaceflaw(,string side,,string input,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SURFACE FLAW";
    if("none"!=side && "NONE"!=side && "None"!=side){
        line += ", SIDE=" + side;
    }
    if("none"!=input && "NONE"!=input && "None"!=input){
        line += ", INPUT=" + input;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsurfaceinteraction(,string name,,string depvar,,string padthickness,,string properties,,string trackingthickness,,string unsymm,,string user,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SURFACE INTERACTION";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=depvar && "NONE"!=depvar && "None"!=depvar){
        line += ", DEPVAR=" + depvar;
    }
    if("none"!=padthickness && "NONE"!=padthickness && "None"!=padthickness){
        line += ", PAD THICKNESS=" + padthickness;
    }
    if("none"!=properties && "NONE"!=properties && "None"!=properties){
        line += ", PROPERTIES=" + properties;
    }
    if("none"!=trackingthickness && "NONE"!=trackingthickness && "None"!=trackingthickness){
        line += ", TRACKING THICKNESS=" + trackingthickness;
    }
    if("none"!=unsymm && "NONE"!=unsymm && "None"!=unsymm){
        line += ", UNSYMM=" + unsymm;
    }
    if("none"!=user && "NONE"!=user && "None"!=user){
        line += ", USER=" + user;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsurfaceoutput(,string surface,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SURFACE OUTPUT";
    if("none"!=surface && "NONE"!=surface && "None"!=surface){
        line += ", SURFACE=" + surface;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsurfaceproperty(,string name,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SURFACE PROPERTY";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsurfacepropertyassignment(,string property,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SURFACE PROPERTY ASSIGNMENT";
    if("none"!=property && "NONE"!=property && "None"!=property){
        line += ", PROPERTY=" + property;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsurfacesection(,string elset,,string aquavisualization,,string density,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SURFACE SECTION";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=aquavisualization && "NONE"!=aquavisualization && "None"!=aquavisualization){
        line += ", AQUAVISUALIZATION=" + aquavisualization;
    }
    if("none"!=density && "NONE"!=density && "None"!=density){
        line += ", DENSITY=" + density;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsurfacesmoothing(,string name,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SURFACE SMOOTHING";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQswelling(,string dependencies,,string law,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SWELLING";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=law && "NONE"!=law && "None"!=law){
        line += ", LAW=" + law;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsymmetricmodelgeneration(,string periodic,,string reflect,,string revolve,,string elementoffset,,string filename,,string nodeoffset,,string tolerance,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SYMMETRIC MODEL GENERATION";
    if("none"!=periodic && "NONE"!=periodic && "None"!=periodic){
        line += ", PERIODIC=" + periodic;
    }
    if("none"!=reflect && "NONE"!=reflect && "None"!=reflect){
        line += ", REFLECT=" + reflect;
    }
    if("none"!=revolve && "NONE"!=revolve && "None"!=revolve){
        line += ", REVOLVE=" + revolve;
    }
    if("none"!=elementoffset && "NONE"!=elementoffset && "None"!=elementoffset){
        line += ", ELEMENT OFFSET=" + elementoffset;
    }
    if("none"!=filename && "NONE"!=filename && "None"!=filename){
        line += ", FILE NAME=" + filename;
    }
    if("none"!=nodeoffset && "NONE"!=nodeoffset && "None"!=nodeoffset){
        line += ", NODE OFFSET=" + nodeoffset;
    }
    if("none"!=tolerance && "NONE"!=tolerance && "None"!=tolerance){
        line += ", TOLERANCE=" + tolerance;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsymmetricresultstransfer(,string step,,string inc,,string iteration,,string unbalancedstress,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SYMMETRIC RESULTS TRANSFER";
    if("none"!=step && "NONE"!=step && "None"!=step){
        line += ", STEP=" + step;
    }
    if("none"!=inc && "NONE"!=inc && "None"!=inc){
        line += ", INC=" + inc;
    }
    if("none"!=iteration && "NONE"!=iteration && "None"!=iteration){
        line += ", ITERATION=" + iteration;
    }
    if("none"!=unbalancedstress && "NONE"!=unbalancedstress && "None"!=unbalancedstress){
        line += ", UNBALANCED STRESS=" + unbalancedstress;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQsystem(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*SYSTEM";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQtemperature(,string amplitude,,string input,,string op,,string file,,string absoluteexteriortolerance,,string exteriortolerance,,string bstep,,string binc,,string estep,,string einc,,string btramp,,string drivingelsets,,string interpolate,,string midside,,string user,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*TEMPERATURE";
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=input && "NONE"!=input && "None"!=input){
        line += ", INPUT=" + input;
    }
    if("none"!=op && "NONE"!=op && "None"!=op){
        line += ", OP=" + op;
    }
    if("none"!=file && "NONE"!=file && "None"!=file){
        line += ", FILE=" + file;
    }
    if("none"!=absoluteexteriortolerance && "NONE"!=absoluteexteriortolerance && "None"!=absoluteexteriortolerance){
        line += ", ABSOLUTE EXTERIOR TOLERANCE=" + absoluteexteriortolerance;
    }
    if("none"!=exteriortolerance && "NONE"!=exteriortolerance && "None"!=exteriortolerance){
        line += ", EXTERIOR TOLERANCE=" + exteriortolerance;
    }
    if("none"!=bstep && "NONE"!=bstep && "None"!=bstep){
        line += ", BSTEP=" + bstep;
    }
    if("none"!=binc && "NONE"!=binc && "None"!=binc){
        line += ", BINC=" + binc;
    }
    if("none"!=estep && "NONE"!=estep && "None"!=estep){
        line += ", ESTEP=" + estep;
    }
    if("none"!=einc && "NONE"!=einc && "None"!=einc){
        line += ", EINC=" + einc;
    }
    if("none"!=btramp && "NONE"!=btramp && "None"!=btramp){
        line += ", BTRAMP=" + btramp;
    }
    if("none"!=drivingelsets && "NONE"!=drivingelsets && "None"!=drivingelsets){
        line += ", DRIVING ELSETS=" + drivingelsets;
    }
    if("none"!=interpolate && "NONE"!=interpolate && "None"!=interpolate){
        line += ", INTERPOLATE=" + interpolate;
    }
    if("none"!=midside && "NONE"!=midside && "None"!=midside){
        line += ", MIDSIDE=" + midside;
    }
    if("none"!=user && "NONE"!=user && "None"!=user){
        line += ", USER=" + user;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQtensilefailure(,string dependencies,,string elementdeletion,,string pressure,,string shear,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*TENSILE FAILURE";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=elementdeletion && "NONE"!=elementdeletion && "None"!=elementdeletion){
        line += ", ELEMENT DELETION=" + elementdeletion;
    }
    if("none"!=pressure && "NONE"!=pressure && "None"!=pressure){
        line += ", PRESSURE=" + pressure;
    }
    if("none"!=shear && "NONE"!=shear && "None"!=shear){
        line += ", SHEAR=" + shear;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQtensioncutoff(,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*TENSION CUTOFF";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQtensionstiffening(,string dependencies,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*TENSION STIFFENING";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQthermalexpansion(,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*THERMAL EXPANSION";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQtie(,string name,,string positiontolerance,,string tiednset,,string adjust,,string constraintratio,,string cyclicsymmetry,,string norotation,,string nothickness,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*TIE";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=positiontolerance && "NONE"!=positiontolerance && "None"!=positiontolerance){
        line += ", POSITION TOLERANCE=" + positiontolerance;
    }
    if("none"!=tiednset && "NONE"!=tiednset && "None"!=tiednset){
        line += ", TIED NSET=" + tiednset;
    }
    if("none"!=adjust && "NONE"!=adjust && "None"!=adjust){
        line += ", ADJUST=" + adjust;
    }
    if("none"!=constraintratio && "NONE"!=constraintratio && "None"!=constraintratio){
        line += ", CONSTRAINT RATIO=" + constraintratio;
    }
    if("none"!=cyclicsymmetry && "NONE"!=cyclicsymmetry && "None"!=cyclicsymmetry){
        line += ", CYCLIC SYMMETRY=" + cyclicsymmetry;
    }
    if("none"!=norotation && "NONE"!=norotation && "None"!=norotation){
        line += ", NO ROTATION=" + norotation;
    }
    if("none"!=nothickness && "NONE"!=nothickness && "None"!=nothickness){
        line += ", NO THICKNESS=" + nothickness;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQtimepoints(,string name,,string generate,,string input,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*TIME POINTS";
    if("none"!=name && "NONE"!=name && "None"!=name){
        line += ", NAME=" + name;
    }
    if("none"!=generate && "NONE"!=generate && "None"!=generate){
        line += ", GENERATE=" + generate;
    }
    if("none"!=input && "NONE"!=input && "None"!=input){
        line += ", INPUT=" + input;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQtorque(,string dependencies,,string elastic,,string linear,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*TORQUE";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=elastic && "NONE"!=elastic && "None"!=elastic){
        line += ", ELASTIC=" + elastic;
    }
    if("none"!=linear && "NONE"!=linear && "None"!=linear){
        line += ", LINEAR=" + linear;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQtorqueprint(,string frequency,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*TORQUE PRINT";
    if("none"!=frequency && "NONE"!=frequency && "None"!=frequency){
        line += ", FREQUENCY=" + frequency;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQtracerparticle(,string tracerset,,string particlebirthstages,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*TRACER PARTICLE";
    if("none"!=tracerset && "NONE"!=tracerset && "None"!=tracerset){
        line += ", TRACER SET=" + tracerset;
    }
    if("none"!=particlebirthstages && "NONE"!=particlebirthstages && "None"!=particlebirthstages){
        line += ", PARTICLE BIRTH STAGES=" + particlebirthstages;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQtransform(,string nset,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*TRANSFORM";
    if("none"!=nset && "NONE"!=nset && "None"!=nset){
        line += ", NSET=" + nset;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQtransportequationsolver(,string convergence,,string diagnostics,,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*TRANSPORT EQUATION SOLVER";
    if("none"!=convergence && "NONE"!=convergence && "None"!=convergence){
        line += ", CONVERGENCE=" + convergence;
    }
    if("none"!=diagnostics && "NONE"!=diagnostics && "None"!=diagnostics){
        line += ", DIAGNOSTICS=" + diagnostics;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQtransportvelocity(,string amplitude,,string user,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*TRANSPORT VELOCITY";
    if("none"!=amplitude && "NONE"!=amplitude && "None"!=amplitude){
        line += ", AMPLITUDE=" + amplitude;
    }
    if("none"!=user && "NONE"!=user && "None"!=user){
        line += ", USER=" + user;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQtransverseshearstiffness(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*TRANSVERSE SHEAR STIFFNESS";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQtriaxialtestdata(,string a,,string b,,string pt,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*TRIAXIAL TEST DATA";
    if("none"!=a && "NONE"!=a && "None"!=a){
        line += ", A=" + a;
    }
    if("none"!=b && "NONE"!=b && "None"!=b){
        line += ", B=" + b;
    }
    if("none"!=pt && "NONE"!=pt && "None"!=pt){
        line += ", PT=" + pt;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQtrs(,string definition,,string properties,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*TRS";
    if("none"!=definition && "NONE"!=definition && "None"!=definition){
        line += ", DEFINITION=" + definition;
    }
    if("none"!=properties && "NONE"!=properties && "None"!=properties){
        line += ", PROPERTIES=" + properties;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQturbulencemodel(,string type,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*TURBULENCE MODEL";
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQuelproperty(,string elset,,string material,,string orientation,,string alpha,,string beta,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*UEL PROPERTY";
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=material && "NONE"!=material && "None"!=material){
        line += ", MATERIAL=" + material;
    }
    if("none"!=orientation && "NONE"!=orientation && "None"!=orientation){
        line += ", ORIENTATION=" + orientation;
    }
    if("none"!=alpha && "NONE"!=alpha && "None"!=alpha){
        line += ", ALPHA=" + alpha;
    }
    if("none"!=beta && "NONE"!=beta && "None"!=beta){
        line += ", BETA=" + beta;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQundexchargeproperty(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*UNDEX CHARGE PROPERTY";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQuniaxial(,string component,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*UNIAXIAL";
    if("none"!=component && "NONE"!=component && "None"!=component){
        line += ", COMPONENT=" + component;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQuniaxialtestdata(,string smooth,,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*UNIAXIAL TEST DATA";
    if("none"!=smooth && "NONE"!=smooth && "None"!=smooth){
        line += ", SMOOTH=" + smooth;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQunloadingdata(,string definition,,string ratedependent,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*UNLOADING DATA";
    if("none"!=definition && "NONE"!=definition && "None"!=definition){
        line += ", DEFINITION=" + definition;
    }
    if("none"!=ratedependent && "NONE"!=ratedependent && "None"!=ratedependent){
        line += ", RATE DEPENDENT=" + ratedependent;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQuserdefinedfield(,string properties,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*USER DEFINED FIELD";
    if("none"!=properties && "NONE"!=properties && "None"!=properties){
        line += ", PROPERTIES=" + properties;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQuserelement(,string type,,string file,,string integration,,string tensor,,string oldelement,,string step,,string increment,,string linear,,string nodes,,string coordinates,,string unsymm,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*USER ELEMENT";
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=file && "NONE"!=file && "None"!=file){
        line += ", FILE=" + file;
    }
    if("none"!=integration && "NONE"!=integration && "None"!=integration){
        line += ", INTEGRATION=" + integration;
    }
    if("none"!=tensor && "NONE"!=tensor && "None"!=tensor){
        line += ", TENSOR=" + tensor;
    }
    if("none"!=oldelement && "NONE"!=oldelement && "None"!=oldelement){
        line += ", OLD ELEMENT=" + oldelement;
    }
    if("none"!=step && "NONE"!=step && "None"!=step){
        line += ", STEP=" + step;
    }
    if("none"!=increment && "NONE"!=increment && "None"!=increment){
        line += ", INCREMENT=" + increment;
    }
    if("none"!=linear && "NONE"!=linear && "None"!=linear){
        line += ", LINEAR=" + linear;
    }
    if("none"!=nodes && "NONE"!=nodes && "None"!=nodes){
        line += ", NODES=" + nodes;
    }
    if("none"!=coordinates && "NONE"!=coordinates && "None"!=coordinates){
        line += ", COORDINATES=" + coordinates;
    }
    if("none"!=unsymm && "NONE"!=unsymm && "None"!=unsymm){
        line += ", UNSYMM=" + unsymm;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQusermaterial(,string constants,,string hybridformulation,,string type,,string unsymm,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*USER MATERIAL";
    if("none"!=constants && "NONE"!=constants && "None"!=constants){
        line += ", CONSTANTS=" + constants;
    }
    if("none"!=hybridformulation && "NONE"!=hybridformulation && "None"!=hybridformulation){
        line += ", HYBRID FORMULATION=" + hybridformulation;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=unsymm && "NONE"!=unsymm && "None"!=unsymm){
        line += ", UNSYMM=" + unsymm;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQuseroutputvariables(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*USER OUTPUT VARIABLES";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQvariablemassscaling(,string dt,,string elset,,string type,,string frequency,,string numberinterval,,string crosssectionnodes,,string extrudedlength,,string feedrate,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*VARIABLE MASS SCALING";
    if("none"!=dt && "NONE"!=dt && "None"!=dt){
        line += ", DT=" + dt;
    }
    if("none"!=elset && "NONE"!=elset && "None"!=elset){
        line += ", ELSET=" + elset;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=frequency && "NONE"!=frequency && "None"!=frequency){
        line += ", FREQUENCY=" + frequency;
    }
    if("none"!=numberinterval && "NONE"!=numberinterval && "None"!=numberinterval){
        line += ", NUMBER INTERVAL=" + numberinterval;
    }
    if("none"!=crosssectionnodes && "NONE"!=crosssectionnodes && "None"!=crosssectionnodes){
        line += ", CROSS SECTION NODES=" + crosssectionnodes;
    }
    if("none"!=extrudedlength && "NONE"!=extrudedlength && "None"!=extrudedlength){
        line += ", EXTRUDED LENGTH=" + extrudedlength;
    }
    if("none"!=feedrate && "NONE"!=feedrate && "None"!=feedrate){
        line += ", FEED RATE=" + feedrate;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQviewfactoroutput(,string cavity,,string frequency,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*VIEW FACTOR OUTPUT";
    if("none"!=cavity && "NONE"!=cavity && "None"!=cavity){
        line += ", CAVITY=" + cavity;
    }
    if("none"!=frequency && "NONE"!=frequency && "None"!=frequency){
        line += ", FREQUENCY=" + frequency;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQvisco(,string allsdtol,,string cetol,,string continue,,string creep,,string factor,,string stabilize,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*VISCO";
    if("none"!=allsdtol && "NONE"!=allsdtol && "None"!=allsdtol){
        line += ", ALLSDTOL=" + allsdtol;
    }
    if("none"!=cetol && "NONE"!=cetol && "None"!=cetol){
        line += ", CETOL=" + cetol;
    }
    if("none"!=continue && "NONE"!=continue && "None"!=continue){
        line += ", CONTINUE=" + continue;
    }
    if("none"!=creep && "NONE"!=creep && "None"!=creep){
        line += ", CREEP=" + creep;
    }
    if("none"!=factor && "NONE"!=factor && "None"!=factor){
        line += ", FACTOR=" + factor;
    }
    if("none"!=stabilize && "NONE"!=stabilize && "None"!=stabilize){
        line += ", STABILIZE=" + stabilize;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQviscoelastic(,string frequency,,string nonlinear,,string time,,string law,,string networkid,,string sratio,,string dependencies,,string preload,,string properties,,string type,,string errtol,,string nmax,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*VISCOELASTIC";
    if("none"!=frequency && "NONE"!=frequency && "None"!=frequency){
        line += ", FREQUENCY=" + frequency;
    }
    if("none"!=nonlinear && "NONE"!=nonlinear && "None"!=nonlinear){
        line += ", NONLINEAR=" + nonlinear;
    }
    if("none"!=time && "NONE"!=time && "None"!=time){
        line += ", TIME=" + time;
    }
    if("none"!=law && "NONE"!=law && "None"!=law){
        line += ", LAW=" + law;
    }
    if("none"!=networkid && "NONE"!=networkid && "None"!=networkid){
        line += ", NETWORKID=" + networkid;
    }
    if("none"!=sratio && "NONE"!=sratio && "None"!=sratio){
        line += ", SRATIO=" + sratio;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=preload && "NONE"!=preload && "None"!=preload){
        line += ", PRELOAD=" + preload;
    }
    if("none"!=properties && "NONE"!=properties && "None"!=properties){
        line += ", PROPERTIES=" + properties;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=errtol && "NONE"!=errtol && "None"!=errtol){
        line += ", ERRTOL=" + errtol;
    }
    if("none"!=nmax && "NONE"!=nmax && "None"!=nmax){
        line += ", NMAX=" + nmax;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQviscosity(,string definition,,string dependencies,,string properties,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*VISCOSITY";
    if("none"!=definition && "NONE"!=definition && "None"!=definition){
        line += ", DEFINITION=" + definition;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=properties && "NONE"!=properties && "None"!=properties){
        line += ", PROPERTIES=" + properties;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQviscous(,string dependencies,,string law,,string time,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*VISCOUS";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    if("none"!=law && "NONE"!=law && "None"!=law){
        line += ", LAW=" + law;
    }
    if("none"!=time && "NONE"!=time && "None"!=time){
        line += ", TIME=" + time;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQvoidnucleation(,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*VOID NUCLEATION";
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQvolumetrictestdata(,string smooth,,string dependencies,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*VOLUMETRIC TEST DATA";
    if("none"!=smooth && "NONE"!=smooth && "None"!=smooth){
        line += ", SMOOTH=" + smooth;
    }
    if("none"!=dependencies && "NONE"!=dependencies && "None"!=dependencies){
        line += ", DEPENDENCIES=" + dependencies;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQwave(,string input,,string type,,string waveperiod,,string datafile,,string minimum,,string quadratic,,string stochastic,,string properties,,string depvar,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*WAVE";
    if("none"!=input && "NONE"!=input && "None"!=input){
        line += ", INPUT=" + input;
    }
    if("none"!=type && "NONE"!=type && "None"!=type){
        line += ", TYPE=" + type;
    }
    if("none"!=waveperiod && "NONE"!=waveperiod && "None"!=waveperiod){
        line += ", WAVE PERIOD=" + waveperiod;
    }
    if("none"!=datafile && "NONE"!=datafile && "None"!=datafile){
        line += ", DATA FILE=" + datafile;
    }
    if("none"!=minimum && "NONE"!=minimum && "None"!=minimum){
        line += ", MINIMUM=" + minimum;
    }
    if("none"!=quadratic && "NONE"!=quadratic && "None"!=quadratic){
        line += ", QUADRATIC=" + quadratic;
    }
    if("none"!=stochastic && "NONE"!=stochastic && "None"!=stochastic){
        line += ", STOCHASTIC=" + stochastic;
    }
    if("none"!=properties && "NONE"!=properties && "None"!=properties){
        line += ", PROPERTIES=" + properties;
    }
    if("none"!=depvar && "NONE"!=depvar && "None"!=depvar){
        line += ", DEPVAR=" + depvar;
    }
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}


void writeABQinputFile::writeABQwind(,vector<string> data,string comment){
    ofstream abq;
    abq.open(filepath, ios::out, ios::app);
    abq << "**\n";
    string line = "*WIND";
    abq << line + "\n";
    abq << "** " + comment + "\n";
    for(int i=0;i<data.size;i++){
        abq << data[i] + "\n";
    }
    abq.close();
}

