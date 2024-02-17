#pragma once
class Status
{
public:
	virtual void update(int message) = 0;
};

class Score : public Status
{
public:
	virtual void update(int message);
};

class HitRatio : public Status
{
public:
	virtual void update(int message);
};