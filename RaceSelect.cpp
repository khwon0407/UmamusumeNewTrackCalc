#include <iostream>
#include "RaceHeader.hpp"
using namespace std;

int select_race() {
	int year_select;
	int month_select;
	int week_select;
	int index;

	cout << "1_ �ִϾ�, Ŭ����, �ôϾ� �� �������ּ���." << endl;
	cout << "1) �ִϾ� 2) Ŭ���� 3) �ôϾ� ";
	do {
		cout << ">> ";
		cin >> year_select;
	} while (year_select < 1 || year_select > 3);
	cout << endl;
	cout << "2_ ���� �Է��ϼ���. ";
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
	cout << "3_ ���ݰ� �Ĺ� �� �ְ��� �������ּ���." << endl;
	cout << "1) ���� 2) �Ĺ� ";
	do {
		cout << ">> ";
		cin >> week_select;
	} while (week_select < 1 || week_select > 2);
	
	index = (week_select - 1) + 2 * (month_select - 7) + 24 * (year_select - 1);
	
	return index;
}