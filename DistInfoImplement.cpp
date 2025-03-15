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
	if (!MultipleOf400) cout << "��";
	cout << "�ٰ��Ÿ�)";
}

void DistInfo::tempNew() {
	if(MultipleOf400) Multiple400Win++;
	else MultipleNot400Win++;
}

void DistInfo::tempDelete() {
	if(MultipleOf400) Multiple400Win--;
	else MultipleNot400Win--;
}

Short::Short(int dist) : DistInfo(dist, "�ܰŸ�") {}
Short::~Short() {}

Mile::Mile(int dist) : DistInfo(dist, "����") {}
Mile::~Mile() {}

Middle::Middle(int dist) : DistInfo(dist, "�߰Ÿ�") {}
Middle::~Middle() {}

Long::Long(int dist) : DistInfo(dist, "��Ÿ�") {}
Long::~Long() {}