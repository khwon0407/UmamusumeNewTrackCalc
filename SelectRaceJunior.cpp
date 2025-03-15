#include <iostream>
#include "RaceHeader.hpp"
#include "RaceBase.hpp"
#include "RaceList.hpp"

using namespace std;

void select_j7_f() {
	cout << "(주니어 7월 전반)" << endl;
	cout << "--------------------------------------------" << endl;
	cout << "레이스 없음" << endl;
	cout << "--------------------------------------------" << endl << endl;
	all_race[0] = nullptr;
}

void select_j7_s() {
	Race* j7s_race[3] = { nullptr, new HacodateJrS, new ChucoJrS };
	int select;
	cout << "(주니어 7월 후반)" << endl;
	select = select_racenumber(j7s_race, 3);
	all_race[1] = j7s_race[select];
	free_race(j7s_race, 3, select);
}

void select_j8_f() {
	Race* j8f_race[4] = { nullptr, new Dalia, new Pheonix, new Cosmos };
	int select;
	cout << "(주니어 8월 초반)" << endl;
	select = select_racenumber(j8f_race, 4);
	all_race[2] = j8f_race[select];
	free_race(j8f_race, 4, select);
}

void select_j8_s() {
	Race* j8s_race[3] = { nullptr, new NiegataJrS, new Clover };
	int select;
	cout << "(주니어 8월 후반)"<< endl;
	select = select_racenumber(j8s_race, 3);
	all_race[3] = j8s_race[select];
	free_race(j8s_race, 3, select);
}

void select_j9_f() {
	Race* j9f_race[6] = { nullptr, new SatporoJrS, new KokuraJrS, new Maylily, new DaisyS, new NewyorkAster};
	int select;
	cout << "(주니어 9월 초반)" << endl;
	select = select_racenumber(j9f_race, 6);
	all_race[4] = j9f_race[select];
	free_race(j9f_race, 6, select);
}

void select_j9_s() {
	Race* j9s_race[5] = { nullptr, new HibiscusS, new DorajiS, new HongchoS, new Sapran };
	int select;
	cout << "(주니어 9월 후반)" << endl;
	select = select_racenumber(j9s_race, 5);
	all_race[5] = j9s_race[select];
	free_race(j9s_race, 5, select);
}

void select_j10_f() {
	Race* j10f_race[6] = { nullptr, new SaudiRoyal, new MapleS, new PurpleDaisy, new Gentian, new Platanus };
	int select;
	cout << "(주니어 10월 전반)" << endl;
	select = select_racenumber(j10f_race, 6);
	all_race[6] = j10f_race[select];
	free_race(j10f_race, 6, select);
}

void select_j10_s() {
	Race* j10s_race[5] = { nullptr, new ArtemisS, new IvyS, new ArtemisiaS, new Gilyflower };
	int select;
	cout << "(주니어 10월 후반)" << endl;
	select = select_racenumber(j10s_race, 5);
	all_race[7] = j10s_race[select];
	free_race(j10s_race, 5, select);
}

void select_j11_f() {
	Race* j11f_race[9] = { nullptr, new KeioJrS, new DailyJrS, new FantasyS, new HukusimaJrS, new HundredGrassSp, new GoldenTreeSp, new LoveGrass, new YellowDaisy};
	int select;
	cout << "(주니어 11월 전반)" << endl;
	select = select_racenumber(j11f_race, 9);
	all_race[8] = j11f_race[select];
	free_race(j11f_race, 9, select);
}

void select_j11_s() {
	Race* j11s_race[11] = { nullptr, new TokyoSportsJrS, new KyotoJrS, new Ilex, new RedPine, new WindFlower, new Cattleya, new Begonia, new WhiteDaisy, new Cauliflower, new GoldPine};
	int select;
	cout << "(주니어 11월 후반)" << endl;
	select = select_racenumber(j11s_race, 11);
	all_race[9] = j11s_race[select];
	free_race(j11s_race, 11, select);
}

void select_j12_f() {
	Race* j12f_race[10] = { nullptr, new AsahiFuturityS, new HansinJuvnileFillis, new CoralAdisia, new BlackPine, new Erica, new TeolMuwhi, new Holly, new Sanqua, new WinterCamellia };
	int select;
	cout << "(주니어 12월 전반)" << endl;
	select = select_racenumber(j12f_race, 10);
	all_race[10] = j12f_race[select];
	free_race(j12f_race, 10, select);
}

void select_j12_s() {
	Race* j12s_race[4] = { nullptr, new HopefulS, new ChristmasRoseS, new Sarcandra };
	int select;
	cout << "(주니어 12월 후반)" << endl;
	select = select_racenumber(j12s_race, 4);
	all_race[11] = j12s_race[select];
	free_race(j12s_race, 4, select);
}