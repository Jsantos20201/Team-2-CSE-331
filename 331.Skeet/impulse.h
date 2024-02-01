#pragma once
#include "bird.h"
class Impulse
{
private:
	virtual void impulse(Bird* bird) = 0;
};

class ApplyInertia :public Impulse {
private:
	virtual void impulse(Bird* bird);
};

class ApplyGravity :public Impulse {
private:
	virtual void impulse(Bird* bird);
};

class ApplyBouyancy :public Impulse {
private:
	virtual void impulse(Bird* bird);
};

class ApplyDrag :public Impulse {
private:
	virtual void impulse(Bird* bird);
};

class ApplyTurn :public Impulse {
private:
	virtual void impulse(Bird* bird);
};