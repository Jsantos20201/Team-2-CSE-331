/***********************************************************************
 * Header File:
 *    Score
 * Author:
 *    Br. Helfrich
 * Summary:
 *    How well the player is doing
 ************************************************************************/

#pragma once
#include <string>

/**********************
 * STATUS
 * How well the player is doing
 **********************/
class Status
{
public:
    Status() {}
    virtual std::string getText() const = 0;
    virtual void reset() = 0;

    //For the observers
    virtual void update(int message) = 0;
};

/**********************
 * SCORE
 * Points earned vs lost
 **********************/
class Score : public Status
{
public:
    Score() { reset(); }
    std::string getText() const;
    void reset() { points = 0; }

    //For the observers
    void update(int message);
private:
    int points;
};

/**********************
 * HIT RATIO
 * Bird hit ratio
 **********************/
class HitRatio : public Status
{
public:
    HitRatio()  { reset(); }
    std::string getText() const;
    void reset() { numKilled = numMissed = 0; }

    //for the observers
    void update(int message);
private:
    int numKilled;
    int numMissed;
};
