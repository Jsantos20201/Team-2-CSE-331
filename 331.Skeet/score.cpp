/***********************************************************************
 * Source File:
 *    Score
 * Author:
 *    Br. Helfrich
 * Summary:
 *    How well the player is doing
 ************************************************************************/

#include "score.h"
#include <sstream>
using namespace std;

/************************
 * SCORE GET TEXT
 * Get the status text
 ************************/
string Score::getText() const
{
    ostringstream sout;
    sout << "Score:  " << points;
    return sout.str();
}

/************************
 * SCORE UPDATE
 * Observer function to update points
 ************************/
void Score::update(int message) {
   points += message;
}

/************************
 * HIT RATIO  GET TEXT
 * Get the status text
 ************************/
string HitRatio::getText() const
{
    ostringstream sout;
    sout << "Birds:   ";
    
    // compute the percentage when possible
    if (numMissed + numKilled)
        sout << (numKilled * 100 / (numMissed + numKilled)) << "%";
    else
        sout << "--";

    return sout.str();
}

/************************
 * HIT Ratio UPDATE
 * Observer function to update hit ratio
 ************************/
void HitRatio::update(int message) {
   if (message > 0)
      numKilled++;
   else if (message < 0)
      numMissed++;
}