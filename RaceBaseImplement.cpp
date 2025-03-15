#include <iostream>
#include <cstring>
#include "RaceBase.hpp"
#include "RaceHeader.hpp"
#include "GradeInfo.hpp"
#include "PlaceInfo.hpp"
#include "StadiumInfo.hpp"

using namespace std;

Race::Race(string name, GradeInfo* grade, PlaceInfo* place, StadiumInfo* stadium) : name(name), grade(grade), place(place), stadium(stadium) {
	tempNew();
}

Race::~Race() {
	tempDelete();
	delete grade; delete place; delete stadium;
}

void Race::print() {
	cout << name << endl;
	grade->print(); place->print(); stadium->print();
	cout << endl;
}

void Race::tempNew() {
	if (stadium->isDirt() && grade->isG1()) DirtG1Win++;
	if (grade->isPattern()) place->updatePlus();
}

void Race::tempDelete() {
	if (stadium->isDirt() && grade->isG1()) DirtG1Win--;
	if (grade->isPattern()) place->updateMinus();
}

int Race::PointStat() const { return point_stat; }
int Race::RivalStat() const { return rival_stat; }
int Race::RaceStat() const { return grade->RaceStat(); }
bool Race::isG1() const { return grade->isG1(); }