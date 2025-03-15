#ifndef _RACEBASE_H__
#define _RACEBASE_H__

#include <iostream>
#include "GradeInfo.hpp"
#include "PlaceInfo.hpp"
#include "StadiumInfo.hpp"

using namespace std;

//���̽� ����
class Race {
private:
	string name;

	GradeInfo* grade;
	PlaceInfo* place;
	StadiumInfo* stadium; //StadiumInfo

	int point_stat = 50; //���̽� �¸��� ����Ʈ 100����Ʈ, 2����Ʈ�� 1�� ȯ��
	int rival_stat = 10; //���̹��� ������ ����� �� �ִ� ���� ����Ʈ
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