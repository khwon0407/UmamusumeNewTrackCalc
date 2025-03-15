#include <iostream>
#include <cstring>
#include "RaceHeader.hpp"
#include "RaceBase.hpp"
#include "TrainingBase.hpp"
#include "TrainingList.hpp"

void printTrainingAndRace(Training* training[]) {
	for (int i = 0; i < 3; i++) {
		if (i == 0) cout << "<편자 미사용>" << endl;
		else if (i == 1) cout << "<은편자 사용>" << endl;
		else cout << "<금편자 사용>" << endl;
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

	cout << "비교하고자 하는 시기를 입력합니다." << endl;
	index = select_race();
	
	if (all_race[index] != nullptr) {
		all_race[index]->tempDelete();
	}
	else {
		cout << "레이스가 등록되어 있지 않는 턴입니다." << endl;
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
		cout << "라이벌의 유무를 선택해주세요." << endl;
		cout << "1) 있음 2) 없음" << endl;
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
	cout << "<편자 미사용 시>" << endl;
	cout << "이 레이스를 포기하면 " << NormalRaceStatSum << "의 스탯 손실 발생" << endl << endl;
	cout << "<은편자 사용 시>" << endl;
	cout << "이 레이스를 포기하면 " << SilverRaceStatSum << "의 스탯 손실 발생" << endl << endl;
	cout << "<금편자 사용 시>" << endl;
	cout << "이 레이스를 포기하면 " << GoldRaceStatSum << "의 스탯 손실 발생" << endl << endl;

	cout << "하려고 하는 훈련을 선택해주세요." << endl;
	cout << "1) 스피드 2) 스태미너 3) 파워 4) 근성 5) 지능" << endl;
	do {
		cout << ">> ";
		cin >> training_select;
	} while (training_select < 1 || training_select > 5);
	cout << endl;
	switch (training_select) {
	case 1:
	{
		int speed; int power;
		cout << "스피드 상승 값을 적어주세요. >> ";
		cin >> speed;
		cout << "파워 상승 값을 적어주세요. >> ";
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
		cout << "스태미너 상승 값을 적어주세요. >> ";
		cin >> stamina;
		cout << "근성 상승 값을 적어주세요. >> ";
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
		cout << "파워 상승 값을 적어주세요. >> ";
		cin >> power;
		cout << "스태미너 상승 값을 적어주세요. >> ";
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
		cout << "근성 상승 값을 적어주세요. >> ";
		cin >> grit;
		cout << "스피드 상승 값을 적어주세요. >> ";
		cin >> speed;
		cout << "파워 상승 값을 적어주세요. >> ";
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
		cout << "지능 상승 값을 적어주세요. >> ";
		cin >> intelligence;
		cout << "스피드 상승 값을 적어주세요. >> ";
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