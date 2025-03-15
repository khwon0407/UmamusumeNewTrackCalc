#ifndef _RACEBASE_H__
#define _RACEBASE_H__

#include <iostream>
#include "GradeInfo.hpp"
#include "PlaceInfo.hpp"
#include "StadiumInfo.hpp"

using namespace std;

//레이스 정보
class Race {
private:
	string name;

	GradeInfo* grade;
	PlaceInfo* place;
	StadiumInfo* stadium; //StadiumInfo

	int point_stat = 50; //레이스 승리시 포인트 100포인트, 2포인트당 1로 환산
	int rival_stat = 10; //라이벌이 있을시 기대할 수 있는 스탯 포인트
public:
	Race(string name, GradeInfo* grade, PlaceInfo* place, StadiumInfo* stadium);
	virtual ~Race();
	void print();
	virtual void tempNew();
	virtual void tempDelete();
	int PointStat() const;
	int RivalStat() const;
	int RaceStat() const;
	bool isG1() const;
};

extern Race* all_race[];

#endif