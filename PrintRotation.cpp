#include <iostream>
#include "RaceHeader.hpp"

using namespace std;

void print_rotation() {
	int junior_month = 6;
	int classic_month = 0;
	int senior_month = 0;
	for (int i = 0; i < 60; i++) {
		if (i < 12) {
			if (i % 2 == 0) junior_month++;
		}
		else if (i < 36) {
			if (i % 2 == 0) classic_month++;
		}
		else {
			if (i % 2 == 0) senior_month++;
		}

		if (all_race[i] != nullptr) {
			cout << "--------------------------------------------" << endl;
			if (i < 12) cout << "주니어 " << junior_month << "월 ";
			else if (i < 36) cout << "클래식 " << classic_month << "월 ";
			else cout << "시니어 " << senior_month << "월 ";

			if (i % 2 == 0) cout << "전반" << endl;
			else cout << "후반" << endl;

			all_race[i]->print();
		}
	}
	cout << "--------------------------------------------" << endl << endl;
}
