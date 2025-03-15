#ifndef _TRAININGBASE_H__
#define _TRAININGBASE_H__

#include <iostream>
#include <cstring>

class Training {
protected:
	int gap;
public:
	Training(int);
	virtual void print() = 0;
};

#endif