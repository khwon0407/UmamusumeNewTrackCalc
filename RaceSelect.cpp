#include <iostream>
#include "RaceHeader.hpp"
using namespace std;

int select_race() {
	int year_select;
	int month_select;
	int week_select;
	int index;

	cout << "1_ 주니어, 클래식, 시니어 중 선택해주세요." << endl;
	cout << "1) 주니어 2) 클래식 3) 시니어 ";
	do {
		cout << ">> ";
		cin >> year_select;
	} while (year_select < 1 || year_select > 3);
	cout << endl;
	cout << "2_ 달을 입력하세요. ";
	if (year_select != 1) {
		do {
			cout << ">> ";
			cin >> month_select;
		} while (month_select < 1 || month_select > 12);
	}
	else {
		do {
			cout << ">> ";
			cin >> month_select;
		} while (month_select < 7 || month_select > 12);
	}
	cout << endl;
	cout << "3_ 전반과 후반 중 주간을 선택해주세요." << endl;
	cout << "1) 전반 2) 후반 ";
	do {
		cout << ">> ";
		cin >> week_select;
	} while (week_select < 1 || week_select > 2);
	
	index = (week_select - 1) + 2 * (month_select - 7) + 24 * (year_select - 1);
	
	return index;
}