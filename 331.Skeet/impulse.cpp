#include "impulse.h"
void ApplyInertia::impulse(Bird* bird) {
	Velocity v = bird->getVelocity();
	Position p = bird->getPosition();
	p.add(v);
	*bird = p;
}

void ApplyGravity::impulse(Bird* bird) {
	Velocity v = bird->getVelocity();
	v.addDy(-0.04);
	*bird = v;
}

void ApplyBouyancy::impulse(Bird* bird) {
Velocity v = bird->getVelocity();
v.addDy(0.05);
*bird = v;
}

void ApplyDrag::impulse(Bird* bird) {
	Velocity v = bird->getVelocity();
	
}

void ApplyTurn::impulse(Bird* bird) {

}