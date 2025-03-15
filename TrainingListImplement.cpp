#include <iostream>
#include <cstring>
#include "TrainingList.hpp"

using namespace std;

void print_using_item(int gap, int NormalStatSum, int Megaphone40StatSum, int Megaphone60StatSum, int AnkleStatSum) {
	int NoItemStat = NormalStatSum;
	int Megaphone40Stat = NormalStatSum + Megaphone40StatSum;
	int Megaphone60Stat = NormalStatSum + Megaphone60StatSum;
	int AnkleStat = NormalStatSum + AnkleStatSum;
	int Megaphone40AndAnkleStat = NormalStatSum + Megaphone40StatSum + AnkleStatSum;
	int Megaphone60AndAnkleStat = NormalStatSum + Megaphone60StatSum + AnkleStatSum;

	cout << "�ް��� �̻��, ��Ŭ �̻�� �� : " << NoItemStat << "�� ���� �̵�, ���̽��� �� �� ";
	if(gap - NoItemStat >= 0) cout << gap - NoItemStat << "�� ���̸�ŭ ���̽��� �� �̵�" << endl << endl;
	else cout << NoItemStat - gap << "�� ���̸�ŭ Ʈ���̴��� �� �̵�" << endl << endl;

	cout << "40% �ް��� ���, ��Ŭ �̻�� �� : " << Megaphone40Stat << "�� ���� �̵�, ���̽��� �� �� ";
	if(gap - Megaphone40Stat >= 0) cout << gap - Megaphone40Stat << "�� ���̸�ŭ ���̽��� �� �̵�" << endl << endl;
	else cout << Megaphone40Stat - gap << "�� ���̸�ŭ Ʈ���̴� �� �̵�" << endl << endl;

	cout << "60% �ް��� ���, ��Ŭ �̻�� �� : " << Megaphone60Stat << "�� ���� �̵�, ���̽��� �� �� ";
	if (gap - Megaphone60Stat >= 0) cout << gap - Megaphone60Stat << "�� ���̸�ŭ ���̽��� �� �̵�" << endl << endl;
	else cout << Megaphone60Stat - gap << "�� ���̸�ŭ Ʈ���̴� �� �̵�" << endl << endl;

	cout << "�ް��� �̻��, ��Ŭ ��� �� : " << AnkleStat << "�� ���� �̵�, ���̽��� �� �� ";
	if (gap - AnkleStat >= 0) cout << gap - AnkleStat << "�� ���̸�ŭ ���̽��� �� �̵�" << endl << endl;
	else cout << AnkleStat - gap << "�� ���̸�ŭ Ʈ���̴� �� �̵�" << endl << endl;

	cout << "40% �ް��� ���, ��Ŭ ��� �� : " << Megaphone40AndAnkleStat << "�� ���� �̵�, ���̽��� �� �� ";
	if (gap - Megaphone40AndAnkleStat >= 0) cout << gap - Megaphone40AndAnkleStat << "�� ���̸�ŭ ���̽��� �� �̵�" << endl << endl;
	else cout << Megaphone40AndAnkleStat - gap << "�� ���̸�ŭ Ʈ���̴� �� �̵�" << endl << endl;

	cout << "60% �ް��� ���, ��Ŭ ��� �� : " << Megaphone60AndAnkleStat << "�� ���� �̵�, ���̽��� �� �� ";
	if (gap - Megaphone60AndAnkleStat >= 0) cout << gap - Megaphone60AndAnkleStat << "�� ���̸�ŭ ���̽��� �� �̵�" << endl << endl;
	else cout << Megaphone60AndAnkleStat - gap << "�� ���̸�ŭ Ʈ���̴� �� �̵�" << endl << endl;
}

Speed::Speed(int speed, int power, int gap) : Training(gap), speed(speed), power(power) {}
void Speed::print() {
	int speed_40_megaphone = speed * 0.4;
	int power_40_megaphone = power * 0.4;

	int speed_60_megaphone = speed * 0.6;
	int power_60_megaphone = power * 0.6;

	int speed_ankle = speed * 0.5;
	int power_ankle = power * 0.5;

	int NormalStatSum = speed + power;
	int Megaphone40StatSum = speed_40_megaphone + power_40_megaphone;
	int Megaphone60StatSum = speed_60_megaphone + power_60_megaphone;
	int AnkleStatSum = speed_ankle + power_ankle;

	cout << "���ǵ� �Ʒ� ���� ���� ���" << endl << endl;
	print_using_item(gap, NormalStatSum, Megaphone40StatSum, Megaphone60StatSum, AnkleStatSum);
}

Stamina::Stamina(int stamina, int grit, int gap) : Training(gap), stamina(stamina), grit(grit) {}
void Stamina::print() {
	int stamina_40_megaphone = stamina * 0.4;
	int grit_40_megaphone = grit * 0.4;

	int stamina_60_megaphone = stamina * 0.6;
	int grit_60_megaphone = grit * 0.6;

	int stamina_ankle = stamina * 0.5;
	int grit_ankle = grit * 0.5;

	int NormalStatSum = stamina + grit;
	int Megaphone40StatSum = stamina_40_megaphone + grit_40_megaphone;
	int Megaphone60StatSum = stamina_60_megaphone + grit_60_megaphone;
	int AnkleStatSum = stamina_ankle + grit_ankle;

	cout << "���¹̳� �Ʒ� ���� ���� ���" << endl << endl;
	print_using_item(gap, NormalStatSum, Megaphone40StatSum, Megaphone60StatSum, AnkleStatSum);
}

Power::Power(int power, int stamina, int gap) : Training(gap), power(power), stamina(stamina) {}
void Power::print() {
	int stamina_40_megaphone = stamina * 0.4;
	int power_40_megaphone = power * 0.4;

	int stamina_60_megaphone = stamina * 0.6;
	int power_60_megaphone = power * 0.6;

	int stamina_ankle = stamina * 0.5;
	int power_ankle = power * 0.5;

	int NormalStatSum = stamina + power;
	int Megaphone40StatSum = stamina_40_megaphone + power_40_megaphone;
	int Megaphone60StatSum = stamina_60_megaphone + power_60_megaphone;
	int AnkleStatSum = stamina_ankle + power_ankle;

	cout << "�Ŀ� �Ʒ� ���� ���� ���" << endl << endl;
	print_using_item(gap, NormalStatSum, Megaphone40StatSum, Megaphone60StatSum, AnkleStatSum);
}

Grit::Grit(int grit, int speed, int power, int gap) : Training(gap), speed(speed), power(power), grit(grit) {}
void Grit::print() {
	int speed_40_megaphone = speed * 0.4;
	int power_40_megaphone = power * 0.4;
	int grit_40_megaphone = grit * 0.4;

	int speed_60_megaphone = speed * 0.6;
	int power_60_megaphone = power * 0.6;
	int grit_60_megaphone = grit * 0.6;

	int speed_ankle = speed * 0.5;
	int power_ankle = power * 0.5;
	int grit_ankle = grit * 0.5;

	int NormalStatSum = speed + power + grit;
	int Megaphone40StatSum = speed_40_megaphone + power_40_megaphone + grit_40_megaphone;
	int Megaphone60StatSum = speed_60_megaphone + power_60_megaphone + grit_60_megaphone;
	int AnkleStatSum = speed_ankle + power_ankle + grit_ankle;

	cout << "�ټ� �Ʒ� ���� ���� ���" << endl << endl;
	print_using_item(gap, NormalStatSum, Megaphone40StatSum, Megaphone60StatSum, AnkleStatSum);
}

Intelligence::Intelligence(int intelligence, int speed, int gap) : Training(gap), intelligence(intelligence), speed(speed) {}
void Intelligence::print() {
	int speed_40_megaphone = speed * 0.4;
	int intelligence_40_megaphone = intelligence * 0.4;

	int speed_60_megaphone = speed * 0.6;
	int intelligence_60_megaphone = intelligence * 0.6;

	int speed_ankle = speed * 0.5;
	int intelligence_ankle = intelligence * 0.5;

	int NormalStatSum = speed + intelligence;
	int Megaphone40StatSum = speed_40_megaphone + intelligence_40_megaphone;
	int Megaphone60StatSum = speed_60_megaphone + intelligence_60_megaphone;
	int AnkleStatSum = speed_ankle + intelligence_ankle;

	cout << "���� �Ʒ� ���� ���� ���" << endl << endl;
	print_using_item(gap, NormalStatSum, Megaphone40StatSum, Megaphone60StatSum, AnkleStatSum);
}