#pragma once
#include <random>
#include <iostream>
#include <qobject.h>

class De : public QObject
{
	Q_OBJECT;

	int score;
	int scoreTotal;

	std::random_device dev;
	std::mt19937* rng;
	std::uniform_int_distribution<std::mt19937::result_type>* dist6;
	void initRandom();
	int getRandomValue();

public:
	De(int n);
	De();
	De(De& toCopy);
	~De();
	virtual De operator++(int);
	friend int& operator +=(int& a, const De& b);
	De& operator =(const int& b);
	friend bool operator<(int& a, const De& b);
};

int& operator +=(int& a, const De& b);
bool operator<(int& a, const De& b);

