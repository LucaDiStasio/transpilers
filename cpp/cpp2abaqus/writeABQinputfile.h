/*
 * =====================================================================================
 *
 * Copyright (c) 2017 Université de Lorraine & Luleå tekniska universitet
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

#ifndef WRITEABQINPUTFILE_H
#define WRITEABQINPUTFILE_H

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
    A class providing tools for 1D, 2D, 3D Lagrange and Hermite interpolation
*/
//============================================================================//
//============================================================================//


//===================================================
//==================  HEADER  =======================
//===================================================

class interp {

    //===================================================
    //                  Variables
    //===================================================
    private:

    // Control parameters
    string path;                                                                // absolute path to file

    //===================================================
    //                      Methods
    //===================================================
    public:

    // Constructor (default)
    writeABQinputfile();

    // Constructor (initialize file)
    writeABQinputfile(string folder, string filename);

    // Destructor
    ~writeABQinputfile();

    // General tools

    

};

#endif
