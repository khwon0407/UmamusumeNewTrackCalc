#include <iostream>
#include <cstring>
#include "RaceHeader.hpp"
#include "RaceBase.hpp"

using namespace std;

void change_rotation() {
	int index;
	cout << "�ٲٰ��� �ϴ� �ñ⸦ �Է��մϴ�." << endl;
	index = select_race();
	if (all_race[index] != nullptr) delete all_race[index];
	pfunc[index]();
	set_bonus_point();
}