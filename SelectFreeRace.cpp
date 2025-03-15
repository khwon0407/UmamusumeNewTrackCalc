#include <iostream>
#include "RaceHeader.hpp"
#include "RaceBase.hpp"
#include "RaceList.hpp"

using namespace std;

int select_racenumber(Race* selectRace[], int size) {
	int select;
	cout << "--------------------------------------------" << endl;
	for (int i = 0; i < size; i++) {
		cout << i << ") ";
		if (i == 0)
			cout << "레이스 미출주" << endl << endl;
		else
			selectRace[i]->print();
		cout << "--------------------------------------------" << endl;
	}

	do {
		cout << ">> ";
		cin >> select;
	} while ((select < 0) || (select >= size));
	cout << endl;
	return select;
}

void free_race(Race* selectRace[], int size, int select) {
	for (int i = 0; i < size; i++) {
		if (i != select) {
			if (selectRace[i] != nullptr) { delete selectRace[i]; }
		}
	}
}