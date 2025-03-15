#include <iostream>
#include <cstring>
#include "RaceHeader.hpp"
#include "RaceBase.hpp"

using namespace std;

void change_rotation() {
	int index;
	cout << "바꾸고자 하는 시기를 입력합니다." << endl;
	index = select_race();
	if (all_race[index] != nullptr) delete all_race[index];
	pfunc[index]();
	set_bonus_point();
}