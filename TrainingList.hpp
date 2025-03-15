#ifndef _TRAININGLIST_H__
#define _TRAININGLIST_H__

#include <iostream>
#include <cstring>
#include "TrainingBase.hpp"

class Speed : public Training {
private:
	int speed;
	int power;
public:
	Speed(int, int, int);
	void print();
};

class Stamina : public Training {
private:
	int stamina;
	int grit;
public:
	Stamina(int, int, int);
	void print();
};

class Power : public Training {
private:
	int power;
	int stamina;
public:
	Power(int, int, int);
	void print();
};

class Grit : public Training {
private:
	int grit;
	int speed;
	int power;
public:
	Grit(int, int, int, int);
	void print();
};

class Intelligence : public Training {
private:
	int intelligence;
	int speed;
public:
	Intelligence(int, int, int);
	void print();
};

#endif