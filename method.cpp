/**
*
*   Idea: G, dt are passed by parameter
*   the initial conditions are read from .dat file of format (xcoord  ycoord  vx0  vy0  mass)
*   Would be good too to include an python data generator.
*
*   Output formatted on .dat files like (time xcoord1 ycoord1 xcoord2 ycoord2 xcoord3 ycoord3...)
*
*   Initially python will graph the paths, then graph paths with color functions of time, and finally animate the result.
*
*   In the future maybe use OpenGL for fun the simulation on real time.
*
*
*
*
*
*
*
*
*
**/


#include <iostream>
#include <fstream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;
