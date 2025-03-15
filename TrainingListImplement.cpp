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

	cout << "메가폰 미사용, 앵클 미사용 시 : " << NoItemStat << "의 스탯 이득, 레이스와 비교 시 ";
	if(gap - NoItemStat >= 0) cout << gap - NoItemStat << "의 차이만큼 레이스가 더 이득" << endl << endl;
	else cout << NoItemStat - gap << "의 차이만큼 트레이닝이 더 이득" << endl << endl;

	cout << "40% 메가폰 사용, 앵클 미사용 시 : " << Megaphone40Stat << "의 스탯 이득, 레이스와 비교 시 ";
	if(gap - Megaphone40Stat >= 0) cout << gap - Megaphone40Stat << "의 차이만큼 레이스가 더 이득" << endl << endl;
	else cout << Megaphone40Stat - gap << "의 차이만큼 트레이닝 더 이득" << endl << endl;

	cout << "60% 메가폰 사용, 앵클 미사용 시 : " << Megaphone60Stat << "의 스탯 이득, 레이스와 비교 시 ";
	if (gap - Megaphone60Stat >= 0) cout << gap - Megaphone60Stat << "의 차이만큼 레이스가 더 이득" << endl << endl;
	else cout << Megaphone60Stat - gap << "의 차이만큼 트레이닝 더 이득" << endl << endl;

	cout << "메가폰 미사용, 앵클 사용 시 : " << AnkleStat << "의 스탯 이득, 레이스와 비교 시 ";
	if (gap - AnkleStat >= 0) cout << gap - AnkleStat << "의 차이만큼 레이스가 더 이득" << endl << endl;
	else cout << AnkleStat - gap << "의 차이만큼 트레이닝 더 이득" << endl << endl;

	cout << "40% 메가폰 사용, 앵클 사용 시 : " << Megaphone40AndAnkleStat << "의 스탯 이득, 레이스와 비교 시 ";
	if (gap - Megaphone40AndAnkleStat >= 0) cout << gap - Megaphone40AndAnkleStat << "의 차이만큼 레이스가 더 이득" << endl << endl;
	else cout << Megaphone40AndAnkleStat - gap << "의 차이만큼 트레이닝 더 이득" << endl << endl;

	cout << "60% 메가폰 사용, 앵클 사용 시 : " << Megaphone60AndAnkleStat << "의 스탯 이득, 레이스와 비교 시 ";
	if (gap - Megaphone60AndAnkleStat >= 0) cout << gap - Megaphone60AndAnkleStat << "의 차이만큼 레이스가 더 이득" << endl << endl;
	else cout << Megaphone60AndAnkleStat - gap << "의 차이만큼 트레이닝 더 이득" << endl << endl;
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

	cout << "스피드 훈련 예상 값을 출력" << endl << endl;
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

	cout << "스태미너 훈련 예상 값을 출력" << endl << endl;
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

	cout << "파워 훈련 예상 값을 출력" << endl << endl;
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

	cout << "근성 훈련 예상 값을 출력" << endl << endl;
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

	cout << "지능 훈련 예상 값을 출력" << endl << endl;
	print_using_item(gap, NormalStatSum, Megaphone40StatSum, Megaphone60StatSum, AnkleStatSum);
}