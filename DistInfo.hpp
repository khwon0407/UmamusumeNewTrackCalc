#ifndef _DISTINFO_H__
#define _DISTINFO_H__

#include <iostream>
#include <cstring>
using namespace std;

//레이스 거리 정보
class DistInfo {
protected:
	int dist; //실거리
	bool MultipleOf400; //근간거리 여부 파악
	string CompareDist; //거리에 따른 분류
public:
	DistInfo(int dist, string CompareDist);
	~DistInfo();
	void print();
	void tempNew();
	void tempDelete();
};

//단거리
class Short : public DistInfo {
public:
	Short(int dist);
	~Short();
};

//마일
class Mile : public DistInfo {
public:
	Mile(int dist);
	~Mile();
};


//중거리
class Middle : public DistInfo {
public:
	Middle(int dist);
	~Middle();
};

//장거리
class Long : public DistInfo {
public:
	Long(int dist);
	~Long();
};

#endif