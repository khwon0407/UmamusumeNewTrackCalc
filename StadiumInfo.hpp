#ifndef _STADIUMINFO_H__
#define _STADIUMINFO_H__

#include <iostream>
#include "GroundInfo.hpp"
#include "DistInfo.hpp"

class StadiumInfo {
private:
	GroundInfo* ground; //GroundInfo
	DistInfo* dist; //DistInfo
public:
	StadiumInfo(GroundInfo* ground, DistInfo* dist);
	virtual ~StadiumInfo();
	void print();
	bool isTerf() const;
	bool isDirt() const;
	virtual void tempNew() = 0;
	virtual void tempDelete() = 0;
};

//잔디 단마중장
class TerfShort : public StadiumInfo {
public:
	TerfShort(int dist);
	~TerfShort();
	void tempNew();
	void tempDelete();
};

class TerfMile : public StadiumInfo {
public:
	TerfMile(int dist);
	~TerfMile();
	void tempNew();
	void tempDelete();
};

class TerfMiddle : public StadiumInfo {
public:
	TerfMiddle(int dist);
	~TerfMiddle();
	void tempNew();
	void tempDelete();
};

class TerfLong : public StadiumInfo {
public:
	TerfLong(int dist);
	~TerfLong();
	void tempNew();
	void tempDelete();
};

//더트 단마중
class DirtShort : public StadiumInfo {
public:
	DirtShort(int dist);
	~DirtShort();
	void tempNew();
	void tempDelete();
};

class DirtMile : public StadiumInfo {
public:
	DirtMile(int dist);
	~DirtMile();
	void tempNew();
	void tempDelete();
};

class DirtMiddle : public StadiumInfo {
public:
	DirtMiddle(int dist);
	~DirtMiddle();
	void tempNew();
	void tempDelete();
};

#endif