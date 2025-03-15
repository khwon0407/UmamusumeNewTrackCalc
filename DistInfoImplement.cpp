#include <iostream>
#include <cstring>
#include "RaceHeader.hpp"
#include "DistInfo.hpp"

using namespace std;

DistInfo::DistInfo(int dist, string CompasreDist) : dist(dist), CompareDist(CompareDist) {
	if (dist % 400 == 0) MultipleOf400 = true;
	else MultipleOf400 = false;
	tempNew();
}

DistInfo::~DistInfo() {
	tempDelete();
}

void DistInfo::print() {
	cout << " " << dist << "m " << CompareDist << " (";
	if (!MultipleOf400) cout << "비";
	cout << "근간거리)";
}

void DistInfo::tempNew() {
	if(MultipleOf400) Multiple400Win++;
	else MultipleNot400Win++;
}

void DistInfo::tempDelete() {
	if(MultipleOf400) Multiple400Win--;
	else MultipleNot400Win--;
}

Short::Short(int dist) : DistInfo(dist, "단거리") {}
Short::~Short() {}

Mile::Mile(int dist) : DistInfo(dist, "마일") {}
Mile::~Mile() {}

Middle::Middle(int dist) : DistInfo(dist, "중거리") {}
Middle::~Middle() {}

Long::Long(int dist) : DistInfo(dist, "장거리") {}
Long::~Long() {}