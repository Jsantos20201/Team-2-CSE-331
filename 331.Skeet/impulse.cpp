#include "impulse.h"
void ApplyInertia::impulse(Bird* bird) {
	Velocity v = bird->getVelocity();
	bird->getPosition().add(v);
}

void ApplyGravity::impulse(Bird* bird) {
	Velocity v = bird->getVelocity();
	v.addDy(-0.04);
}

void ApplyBouyancy::impulse(Bird* bird) {

}

void ApplyDrag::impulse(Bird* bird) {

}

void ApplyTurn::impulse(Bird* bird) {

}