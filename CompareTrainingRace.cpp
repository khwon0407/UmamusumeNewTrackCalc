#include <iostream>
#include <cstring>
#include "RaceHeader.hpp"
#include "RaceBase.hpp"
#include "TrainingBase.hpp"
#include "TrainingList.hpp"

void printTrainingAndRace(Training* training[]) {
	for (int i = 0; i < 3; i++) {
		if (i == 0) cout << "<���� �̻��>" << endl;
		else if (i == 1) cout << "<������ ���>" << endl;
		else cout << "<������ ���>" << endl;
		training[i]->print();
		delete training[i];
	}
}

void compare_training_and_race() {
	int BonusStatGap = BonusStatSum;
	int training_select;
	int rival_select;

	int index;

	int NormalRaceStat;
	int SilverRaceStat;
	int GoldRaceStat;

	int NormalRaceStatSum;
	int SilverRaceStatSum;
	int GoldRaceStatSum;
	Training* training[3];

	cout << "���ϰ��� �ϴ� �ñ⸦ �Է��մϴ�." << endl;
	index = select_race();
	
	if (all_race[index] != nullptr) {
		all_race[index]->tempDelete();
	}
	else {
		cout << "���̽��� ��ϵǾ� ���� �ʴ� ���Դϴ�." << endl;
		return;
	}
	set_bonus_point();

	BonusStatGap -= BonusStatSum;

	all_race[index]->tempNew();
	set_bonus_point();

	NormalRaceStat = all_race[index]->RaceStat() * (1 + race_bonus);
	SilverRaceStat = NormalRaceStat * 1.2;
	GoldRaceStat = NormalRaceStat * 1.35;
	
	NormalRaceStatSum = all_race[index]->PointStat() + NormalRaceStat;
	SilverRaceStatSum = all_race[index]->PointStat() + SilverRaceStat;
	GoldRaceStatSum = all_race[index]->PointStat() + GoldRaceStat;

	if (!(all_race[index]->isG1())) {
		cout << "���̹��� ������ �������ּ���." << endl;
		cout << "1) ���� 2) ����" << endl;
		do {
			cout << ">> ";
			cin >> rival_select;
		} while (rival_select < 1 || rival_select > 2);
	}
	else {
		rival_select = 1;
	}
	if (rival_select == 1) {
		NormalRaceStatSum += all_race[index]->RivalStat();
		SilverRaceStatSum += all_race[index]->RivalStat();
		GoldRaceStatSum += all_race[index]->RivalStat();
	}

	NormalRaceStatSum += BonusStatGap;
	SilverRaceStatSum += BonusStatGap;
	GoldRaceStatSum += BonusStatGap;
	
	cout << endl;
	cout << "<���� �̻�� ��>" << endl;
	cout << "�� ���̽��� �����ϸ� " << NormalRaceStatSum << "�� ���� �ս� �߻�" << endl << endl;
	cout << "<������ ��� ��>" << endl;
	cout << "�� ���̽��� �����ϸ� " << SilverRaceStatSum << "�� ���� �ս� �߻�" << endl << endl;
	cout << "<������ ��� ��>" << endl;
	cout << "�� ���̽��� �����ϸ� " << GoldRaceStatSum << "�� ���� �ս� �߻�" << endl << endl;

	cout << "�Ϸ��� �ϴ� �Ʒ��� �������ּ���." << endl;
	cout << "1) ���ǵ� 2) ���¹̳� 3) �Ŀ� 4) �ټ� 5) ����" << endl;
	do {
		cout << ">> ";
		cin >> training_select;
	} while (training_select < 1 || training_select > 5);
	cout << endl;
	switch (training_select) {
	case 1:
	{
		int speed; int power;
		cout << "���ǵ� ��� ���� �����ּ���. >> ";
		cin >> speed;
		cout << "�Ŀ� ��� ���� �����ּ���. >> ";
		cin >> power;
		cout << endl;
		training[0] = new Speed(speed, power, NormalRaceStatSum);
		training[1] = new Speed(speed, power, SilverRaceStatSum);
		training[2] = new Speed(speed, power, GoldRaceStatSum);
		printTrainingAndRace(training);
		break;
	}
	case 2:
	{
		int stamina; int grit;
		cout << "���¹̳� ��� ���� �����ּ���. >> ";
		cin >> stamina;
		cout << "�ټ� ��� ���� �����ּ���. >> ";
		cin >> grit;
		cout << endl;
		training[0] = new Stamina(stamina, grit, NormalRaceStatSum);
		training[1] = new Speed(stamina, grit, SilverRaceStatSum);
		training[2] = new Speed(stamina, grit, GoldRaceStatSum);
		printTrainingAndRace(training);
		break;
	}
	case 3:
	{
		int power; int stamina;
		cout << "�Ŀ� ��� ���� �����ּ���. >> ";
		cin >> power;
		cout << "���¹̳� ��� ���� �����ּ���. >> ";
		cin >> stamina;
		cout << endl;
		training[0] = new Power(power, stamina, NormalRaceStatSum);
		training[1] = new Power(power, stamina, SilverRaceStatSum);
		training[2] = new Power(power, stamina, GoldRaceStatSum);
		printTrainingAndRace(training);
		break;
	}
	case 4:
	{
		int grit;  int speed; int power;
		cout << "�ټ� ��� ���� �����ּ���. >> ";
		cin >> grit;
		cout << "���ǵ� ��� ���� �����ּ���. >> ";
		cin >> speed;
		cout << "�Ŀ� ��� ���� �����ּ���. >> ";
		cin >> power;
		cout << endl;
		training[0] = new Grit(grit, speed, power, NormalRaceStatSum);
		training[1] = new Grit(grit, speed, power, SilverRaceStatSum);
		training[2] = new Grit(grit, speed, power, GoldRaceStatSum);
		printTrainingAndRace(training);
		break;
	}
	case 5:
	{
		int intelligence; int speed;
		cout << "���� ��� ���� �����ּ���. >> ";
		cin >> intelligence;
		cout << "���ǵ� ��� ���� �����ּ���. >> ";
		cin >> speed;
		cout << endl;
		training[0] = new Intelligence(intelligence, speed, NormalRaceStatSum);
		training[1] = new Intelligence(intelligence, speed, SilverRaceStatSum);
		training[2] = new Intelligence(intelligence, speed, GoldRaceStatSum);
		printTrainingAndRace(training);
		break;
	}
	}
	
}