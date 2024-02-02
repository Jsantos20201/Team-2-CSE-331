/***********************************************************************
 * Header File:
 *    ADVANCE TEMPLATE
 * Author:
 *    Team 2
 * Summary:
 *    The advance template class
 ************************************************************************/

#pragma once
#include "bird.h"

class AdvanceTemplate
{
public:
    AdvanceTemplate(Bird& bird) : bird(bird) {};

    void advance(Bird& bird) 
    {
        inertia(bird);
        drag(bird);
        buoyancy(bird);
        turn(bird);

        if (bird.isOutOfBounds())
        {
            bird.kill();
        }
    };

private:
    Bird& bird;
    virtual void inertia(Bird& bird)
    {
        //pt.add(v);;
        bird.getPosition().add(bird.getVelocity());
    }
    virtual void drag(Bird& bird) {};
    virtual void buoyancy(Bird& bird) {};
    virtual void turn(Bird& bird) {};
};


/*********************************************
* FLOATER ADVANCE
* Define movement steps for Floater bird
*********************************************/
class AdvanceFloater : public AdvanceTemplate
{
public:
    AdvanceFloater(Floater& floater) : AdvanceTemplate(floater) {}

private:

    void drag(Bird& bird) override
    {
        bird = bird.getVelocity() * 0.99;
    }

    void buoyancy(Bird& bird) override
    {
        double newDy = bird.getVelocity().getDy() + 0.05;
        bird.getVelocity().setDy(newDy);
    }
};
