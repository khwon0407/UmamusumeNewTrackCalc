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
			if (i < 12) cout << "�ִϾ� " << junior_month << "�� ";
			else if (i < 36) cout << "Ŭ���� " << classic_month << "�� ";
			else cout << "�ôϾ� " << senior_month << "�� ";

			if (i % 2 == 0) cout << "����" << endl;
			else cout << "�Ĺ�" << endl;

			all_race[i]->print();
		}
	}
	cout << "--------------------------------------------" << endl << endl;
}
