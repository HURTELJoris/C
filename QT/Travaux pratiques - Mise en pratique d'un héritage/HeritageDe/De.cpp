#include "De.h"



void De::initRandom()
{
	rng = new std::mt19937(dev());
	dist6 = new std::uniform_int_distribution<std::mt19937::result_type>(1, 6);
}

int De::getRandomValue()
{
	return (*dist6)(*rng);
}

De::De(int n)
	: QObject()
{
	score = n;
	scoreTotal = n;
	initRandom();
}

De::De()
	: QObject()
{
	initRandom();
	scoreTotal = 0;
	(*this)++;
}

De::De(De& toCopy)
	: QObject()
{
	initRandom();
	this->score = toCopy.score;
	this->scoreTotal = toCopy.scoreTotal;
}

De::~De()
{
	delete dist6;
	delete rng;
}

De De::operator++(int)
{
	De dd(*this);
	score = getRandomValue();
	scoreTotal += score;
	return dd;
}

De& De::operator=(const int& b)
{
	scoreTotal = b;
	return (*this);
}

int& operator+=(int& a, const De& b)
{
	a = b.score;
	return a;
}

bool operator<(int& a, const De& b)
{
	a = b.scoreTotal;
	return true;
}
