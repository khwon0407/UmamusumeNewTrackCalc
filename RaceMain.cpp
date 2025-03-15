#include <iostream>
#include "RaceHeader.hpp"
#include "RaceBase.hpp"

using namespace std;

float race_bonus = 0;
Race* all_race[60];

int main(void) {

	//system("chcp 65001");
	setlocale(LC_ALL, "");

	int select;
	cout << "================================================================================================" << endl;
	cout << "��Ʈ�� ���� ver 0.0.2" << endl;
	cout << "�ش� ����� ��Ʈ�������� �Ʒð� ���̽� ���� �̵� ���踦 ��Ȯ�ϰ� ����ϱ� ���� ���۵Ǿ����ϴ�." << endl << endl;
	cout << "�����" << endl;
	cout << "1. ���� �� ���̽� ���ʽ��� �Է��� �� �ٷ� �����̼� ����� �մϴ�." << endl;
	cout << "2. ��� �Ϸ� �� �����̼� ���� �� ���̽� ������ �� ���� �� ���� ����� ����� �� �ֽ��ϴ�." << endl << endl;
	cout << "������ ����" << endl;
	cout << "���� ���Ǹ� ����ϸ� �˴ϴ�. �� �� ���� �Է� �� ���α׷��� ���۵��ϴ� �������ּ���." << endl;
	cout << "���� �� ��� ��� ���� �������� ������ �ƴմϴ�." << endl;
	cout << "���̽��� �ٰų� Ʈ���̴��� �ϴ� ���� ������ ��Ȳ�� �°� �������ּ���." << endl;
	cout << "================================================================================================" << endl << endl;

	cout << "���̽� ���ʽ� ��ġ�� �Է����ּ���. �ۼ�Ʈ ��ġ�Դϴ�. >> ";
	cin >> race_bonus;
	cout << endl;
	race_bonus /= 100;

	cout << "���̽� �����̼��� ����մϴ�." << endl;
	cout << "���� ��ȣ�� �Է��ϸ� �°� �Է��� ������ ��ȣ�� �Է¹޽��ϴ�." << endl;
	
	register_rotation();

	while (1) {
		cout << endl << "������ ����� �����ϼ���. �Ʒ� ����� �ƴ� �ٸ� ���� �Է� �� ����˴ϴ�." << endl;
		cout<< "1) �����̼� ���  2) ���ʽ� ���� ���  3) �����̼� ����  4) �� �Ͽ� ���� ���̽� �� Ʈ���̴� �� >> ";
		cin >> select;
		switch (select) {
		case 1:
			print_rotation(); break;
		case 2:
			print_bonus(); break;
		case 3:
			change_rotation(); break;
		case 4:
			compare_training_and_race(); break;
		default:
			for (int i = 0; i < 60; i++) {
				if (all_race[i] != nullptr) delete all_race[i];
			}
			exit(0);
		}
	}
}