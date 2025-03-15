#include <iostream>
#include "RaceHeader.hpp"
#include "RaceList.hpp"

using namespace std;

void (*pfunc[60])(void) = {
select_j7_f, select_j7_s, select_j8_f, select_j8_s, select_j9_f, select_j9_s, select_j10_f, select_j10_s, select_j11_f, select_j11_s, select_j12_f, select_j12_s,
select_c1_f, select_c1_s, select_c2_f, select_c2_s, select_c3_f, select_c3_s, select_c4_f, select_c4_s, select_c5_f, select_c5_s, select_c6_f, select_c6_s,
select_c7_f, select_c7_s, select_c8_f, select_c8_s, select_c9_f, select_c9_s, select_c10_f, select_c10_s, select_c11_f, select_c11_s, select_c12_f, select_c12_s,
select_s1_f, select_s1_s, select_s2_f, select_s2_s, select_s3_f, select_s3_s, select_s4_f, select_s4_s, select_s5_f, select_s5_s, select_s6_f, select_s6_s,
select_s7_f, select_s7_s, select_s8_f, select_s8_s, select_s9_f, select_s9_s, select_s10_f, select_s10_s, select_s11_f, select_s11_s, select_s12_f, select_s12_s
};

void register_rotation() {
	int select;
	cout << "등록할 레이스를 선택해주세요." << endl;
	cout << "1) 잔디      마일/중거리/장거리 로테이션 템플릿" << endl;
	cout << "2) 잔디/더트 마일/중거리/장거리 로테이션 템플릿" << endl;
	cout << "3) 잔디      마일/중거리        로테이션 템플릿" << endl;
	cout << "4) 잔디/더트 마일/중거리        로테이션 템플릿" << endl;
	cout << "5) 잔디      중거리/장거리      로테이션 템플릿" << endl;
	cout << "6) 잔디      단거리/마일        로테이션 템플릿" << endl;
	cout << "7) 잔디/더트 단거리/마일        로테이션 템플릿" << endl;
	cout << "8) 잔디/더트 단거리/마일/중거리 로테이션 템플릿" << endl;
	cout << "9) 직접 입력" << endl;
	do {
		cout << ">> ";
		cin >> select;
	} while (select < 1 || select > 9);

	switch (select) {
	case 1:
	{
		for (int i = 0; i < 60; i++) {
			if (i == 3) all_race[i] = new NiegataJrS;
			else if (i == 4) all_race[i] = new SatporoJrS;
			else if (i == 6) all_race[i] = new SaudiRoyal;
			else if (i == 7) all_race[i] = new ArtemisS;
			else if (i == 9) all_race[i] = new KyotoJrS;
			else if (i == 10) all_race[i] = new AsahiFuturityS;
			else if (i == 11) all_race[i] = new HopefulS;

			else if (i == 14) all_race[i] = new Kisaragi;
			else if (i == 16) all_race[i] = new Yayoi;
			else if (i == 17) all_race[i] = new SpringS;
			else if (i == 18) all_race[i] = new Satsuki;
			else if (i == 20) all_race[i] = new NHKMileCup;
			else if (i == 21) all_race[i] = new JapanDubby;
			else if (i == 23) all_race[i] = new TakarazukaAnniversary;

			else if (i == 28) all_race[i] = new NiegataAnniversary;
			else if (i == 29) all_race[i] = new SentlightAnniversary;
			else if (i == 31) all_race[i] = new Kitka;
			else if (i == 32) all_race[i] = new ClassicElizabethQueen;
			else if (i == 33) all_race[i] = new MileChampionship;
			else if (i == 35) all_race[i] = new ClassicArimaAnniversary;

			else if (i == 36) all_race[i] = new NikkeiNewYear;
			else if (i == 40) all_race[i] = new NakayamaUmamusumeS;
			else if (i == 41) all_race[i] = new Osaka;
			else if (i == 43) all_race[i] = new HaruTen;
			else if (i == 44) all_race[i] = new VictoriaMile;
			else if (i == 46) all_race[i] = new YasudaAnniversary;
			else if (i == 47) all_race[i] = new TakarazukaAnniversary;

			else if (i == 52) all_race[i] = new NiegataAnniversary;
			else if (i == 53) all_race[i] = new AllCummers;
			else if (i == 55) all_race[i] = new ArkiTen;
			else if (i == 56) all_race[i] = new ElizabethQueen;
			else if (i == 57) all_race[i] = new JapanCup;
			else if (i == 59) all_race[i] = new ArimaAnniversary;

			else all_race[i] = nullptr;
		}
		set_bonus_point();
		break;
	}
	case 2:
	{
		for (int i = 0; i < 60; i++) {
			if (i == 3) all_race[i] = new NiegataJrS;
			else if (i == 4) all_race[i] = new SatporoJrS;
			else if (i == 6) all_race[i] = new SaudiRoyal;
			else if (i == 7) all_race[i] = new ArtemisS;
			else if (i == 9) all_race[i] = new TokyoSportsJrS;
			else if (i == 10) all_race[i] = new AsahiFuturityS;
			else if (i == 11) all_race[i] = new HopefulS;

			else if (i == 14) all_race[i] = new Kisaragi;
			else if (i == 16) all_race[i] = new Yayoi;
			else if (i == 17) all_race[i] = new SpringS;
			else if (i == 18) all_race[i] = new Satsuki;
			else if (i == 20) all_race[i] = new NHKMileCup;
			else if (i == 21) all_race[i] = new JapanDubby;
			else if (i == 23) all_race[i] = new TakarazukaAnniversary;

			else if (i == 24) all_race[i] = new JapanDirtDubby;
			else if (i == 28) all_race[i] = new NiegataAnniversary;
			else if (i == 30) all_race[i] = new HuchuUmamusumeS;
			else if (i == 31) all_race[i] = new Kitka;
			else if (i == 33) all_race[i] = new MileChampionship;
			else if (i == 34) all_race[i] = new ChampionsCup;
			else if (i == 35) all_race[i] = new ClassicArimaAnniversary;

			else if (i == 39) all_race[i] = new FebruaryS;
			else if (i == 40) all_race[i] = new NakayamaUmamusumeS;
			else if (i == 41) all_race[i] = new Osaka;
			else if (i == 43) all_race[i] = new HaruTen;
			else if (i == 44) all_race[i] = new VictoriaMile;
			else if (i == 46) all_race[i] = new YasudaAnniversary;
			else if (i == 47) all_race[i] = new Lord;

			else if (i == 52) all_race[i] = new NiegataAnniversary;
			else if (i == 54) all_race[i] = new HuchuUmamusumeS;
			else if (i == 55) all_race[i] = new ArkiTen;
			else if (i == 57) all_race[i] = new JapanCup;
			else if (i == 58) all_race[i] = new ChampionsCup;
			else if (i == 59) all_race[i] = new ArimaAnniversary;

			else all_race[i] = nullptr;
		}
		set_bonus_point();
		break;
	}
	case 3:
	{
		for (int i = 0; i < 60; i++) {
			if (i == 3) all_race[i] = new NiegataJrS;
			else if (i == 4) all_race[i] = new SatporoJrS;
			else if (i == 6) all_race[i] = new SaudiRoyal;
			else if (i == 7) all_race[i] = new ArtemisS;
			else if (i == 9) all_race[i] = new TokyoSportsJrS;
			else if (i == 10) all_race[i] = new HansinJuvnileFillis;
			else if (i == 11) all_race[i] = new HopefulS;

			else if (i == 14) all_race[i] = new Kisaragi;
			else if (i == 16) all_race[i] = new Yayoi;
			else if (i == 17) all_race[i] = new SpringS;
			else if (i == 18) all_race[i] = new Sakura;
			else if (i == 20) all_race[i] = new NHKMileCup;
			else if (i == 21) all_race[i] = new Oaks;
			else if (i == 23) all_race[i] = new TakarazukaAnniversary;

			else if (i == 28) all_race[i] = new NiegataAnniversary;
			else if (i == 29) all_race[i] = new SentlightAnniversary;
			else if (i == 31) all_race[i] = new Shuka;
			else if (i == 32) all_race[i] = new ClassicElizabethQueen;
			else if (i == 33) all_race[i] = new MileChampionship;

			else if (i == 37) all_race[i] = new AmericaJCC;
			else if (i == 38) all_race[i] = new KyotoAnniversary;
			else if (i == 39) all_race[i] = new NakayamaAnniversary;
			else if (i == 41) all_race[i] = new Osaka;
			else if (i == 42) all_race[i] = new HansinUmamusumeS;
			else if (i == 44) all_race[i] = new VictoriaMile;
			else if (i == 46) all_race[i] = new YasudaAnniversary;
			else if (i == 47) all_race[i] = new TakarazukaAnniversary;

			else if (i == 52) all_race[i] = new NiegataAnniversary;
			else if (i == 53) all_race[i] = new AllCummers;
			else if (i == 55) all_race[i] = new ArkiTen;
			else if (i == 56) all_race[i] = new ElizabethQueen;
			else if (i == 57) all_race[i] = new JapanCup;

			else all_race[i] = nullptr;
		}
		set_bonus_point();
		break;
	}
	case 4:
	{
		for (int i = 0; i < 60; i++) {
			if (i == 3) all_race[i] = new NiegataJrS;
			else if (i == 4) all_race[i] = new SatporoJrS;
			else if (i == 6) all_race[i] = new SaudiRoyal;
			else if (i == 7) all_race[i] = new ArtemisS;
			else if (i == 9) all_race[i] = new TokyoSportsJrS;
			else if (i == 10) all_race[i] = new HansinJuvnileFillis;
			else if (i == 11) all_race[i] = new HopefulS;

			else if (i == 14) all_race[i] = new Kisaragi;
			else if (i == 16) all_race[i] = new Yayoi;
			else if (i == 17) all_race[i] = new SpringS;
			else if (i == 18) all_race[i] = new Sakura;
			else if (i == 20) all_race[i] = new NHKMileCup;
			else if (i == 21) all_race[i] = new Oaks;
			else if (i == 23) all_race[i] = new TakarazukaAnniversary;

			else if (i == 28) all_race[i] = new NiegataAnniversary;
			else if (i == 29) all_race[i] = new SentlightAnniversary;
			else if (i == 31) all_race[i] = new Shuka;
			else if (i == 32) all_race[i] = new ClassicElizabethQueen;
			else if (i == 34) all_race[i] = new ChampionsCup;
			else if (i == 35) all_race[i] = new TokyoTarget;

			else if (i == 39) all_race[i] = new FebruaryS;
			else if (i == 40) all_race[i] = new NakayamaUmamusumeS;
			else if (i == 41) all_race[i] = new Osaka;
			else if (i == 44) all_race[i] = new VictoriaMile;
			else if (i == 46) all_race[i] = new YasudaAnniversary;
			else if (i == 47) all_race[i] = new Lord;

			else if (i == 52) all_race[i] = new NiegataAnniversary;
			else if (i == 53) all_race[i] = new AllCummers;
			else if (i == 55) all_race[i] = new ArkiTen;
			else if (i == 56) all_race[i] = new ElizabethQueen;
			else if (i == 58) all_race[i] = new ChampionsCup;
			else if (i == 59) all_race[i] = new TokyoTarget;

			else all_race[i] = nullptr;
		}
		set_bonus_point();
		break;
	}
	case 5:
	{
		for (int i = 0; i < 60; i++) {
			if (i == 5) all_race[i] = new HibiscusS;
			else if (i == 6) all_race[i] = new PurpleDaisy;
			else if (i == 9) all_race[i] = new KyotoJrS;
			else if (i == 11) all_race[i] = new HopefulS;

			else if (i == 12) all_race[i] = new Keisei;
			else if (i == 15) all_race[i] = new VioletS;
			else if (i == 16) all_race[i] = new Yayoi;
			else if (i == 18) all_race[i] = new Satsuki;
			else if (i == 19) all_race[i] = new BlueLeaf;
			else if (i == 21) all_race[i] = new JapanDubby;
			else if (i == 23) all_race[i] = new TakarazukaAnniversary;

			else if (i == 28) all_race[i] = new NiegataAnniversary;
			else if (i == 29) all_race[i] = new SentlightAnniversary;
			else if (i == 31) all_race[i] = new Kitka;
			else if (i == 32) all_race[i] = new ClassicElizabethQueen;
			else if (i == 33) all_race[i] = new ClassicJapanCup;
			else if (i == 35) all_race[i] = new ClassicArimaAnniversary;

			else if (i == 37) all_race[i] = new AmericaJCC;
			else if (i == 38) all_race[i] = new KyotoAnniversary;
			else if (i == 41) all_race[i] = new Osaka;
			else if (i == 43) all_race[i] = new HaruTen;
			else if (i == 44) all_race[i] = new NiegataTarget;
			else if (i == 47) all_race[i] = new TakarazukaAnniversary;

			else if (i == 52) all_race[i] = new NiegataAnniversary;
			else if (i == 53) all_race[i] = new AllCummers;
			else if (i == 55) all_race[i] = new ArkiTen;
			else if (i == 56) all_race[i] = new ElizabethQueen;
			else if (i == 57) all_race[i] = new JapanCup;
			else if (i == 59) all_race[i] = new ArimaAnniversary;

			else all_race[i] = nullptr;
		}
		set_bonus_point();
		break;
	}
	case 6:
	{
		for (int i = 0; i < 60; i++) {
			if (i == 1) all_race[i] = new HacodateJrS;
			else if (i == 3) all_race[i] = new NiegataJrS;
			else if (i == 4) all_race[i] = new SatporoJrS;
			else if (i == 6) all_race[i] = new SaudiRoyal;
			else if (i == 7) all_race[i] = new ArtemisS;
			else if (i == 9) all_race[i] = new TokyoSportsJrS;
			else if (i == 10) all_race[i] = new HansinJuvnileFillis;

			else if (i == 12) all_race[i] = new SinjanAnniversary;
			else if (i == 14) all_race[i] = new Kisaragi;
			else if (i == 16) all_race[i] = new Tulip;
			else if (i == 17) all_race[i] = new SpringS;
			else if (i == 18) all_race[i] = new Sakura;
			else if (i == 20) all_race[i] = new NHKMileCup;
			else if (i == 22) all_race[i] = new YasudaAnniversary;
			else if (i == 23) all_race[i] = new HakodateSprintS;

			else if (i == 28) all_race[i] = new RoseS;
			else if (i == 29) all_race[i] = new SprintersS;
			else if (i == 30) all_race[i] = new HuchuUmamusumeS;
			else if (i == 33) all_race[i] = new MileChampionship;
			else if (i == 34) all_race[i] = new TurkeyStoneS;
			else if (i == 35) all_race[i] = new HansinCup;

			else if (i == 39) all_race[i] = new KyotoUmamusumeS;
			else if (i == 40) all_race[i] = new NakayamaUmamusumeS;
			else if (i == 41) all_race[i] = new Takamatsunomiya;
			else if (i == 43) all_race[i] = new HukusimaUmamusumeS;
			else if (i == 44) all_race[i] = new VictoriaMile;
			else if (i == 46) all_race[i] = new YasudaAnniversary;
			else if (i == 47) all_race[i] = new HakodateSprintS;

			else if (i == 52) all_race[i] = new SentoS;
			else if (i == 53) all_race[i] = new SprintersS;
			else if (i == 54) all_race[i] = new HuchuUmamusumeS;
			else if (i == 57) all_race[i] = new MileChampionship;
			else if (i == 58) all_race[i] = new TurkeyStoneS;
			else if (i == 59) all_race[i] = new HansinCup;

			else all_race[i] = nullptr;
		}
		set_bonus_point();
		break;
	}
	case 7:
	{
		for (int i = 0; i < 60; i++) {
			if (i == 1) all_race[i] = new HacodateJrS;
			else if (i == 3) all_race[i] = new NiegataJrS;
			else if (i == 4) all_race[i] = new SatporoJrS;
			else if (i == 6) all_race[i] = new SaudiRoyal;
			else if (i == 7) all_race[i] = new ArtemisS;
			else if (i == 9) all_race[i] = new TokyoSportsJrS;
			else if (i == 10) all_race[i] = new HansinJuvnileFillis;

			else if (i == 12) all_race[i] = new SinjanAnniversary;
			else if (i == 14) all_race[i] = new Kisaragi;
			else if (i == 16) all_race[i] = new Tulip;
			else if (i == 17) all_race[i] = new SpringS;
			else if (i == 18) all_race[i] = new Sakura;
			else if (i == 20) all_race[i] = new NHKMileCup;
			else if (i == 22) all_race[i] = new YasudaAnniversary;
			else if (i == 23) all_race[i] = new HakodateSprintS;

			else if (i == 29) all_race[i] = new SprintersS;
			else if (i == 30) all_race[i] = new HuchuUmamusumeS;
			else if (i == 32) all_race[i] = new JBCSprint;
			else if (i == 33) all_race[i] = new MileChampionship;
			else if (i == 34) all_race[i] = new ChampionsCup;

			else if (i == 39) all_race[i] = new FebruaryS;
			else if (i == 40) all_race[i] = new NakayamaUmamusumeS;
			else if (i == 41) all_race[i] = new Takamatsunomiya;
			else if (i == 43) all_race[i] = new HukusimaUmamusumeS;
			else if (i == 44) all_race[i] = new VictoriaMile;
			else if (i == 46) all_race[i] = new YasudaAnniversary;
			else if (i == 47) all_race[i] = new HakodateSprintS;

			else if (i == 53) all_race[i] = new SprintersS;
			else if (i == 54) all_race[i] = new HuchuUmamusumeS;
			else if (i == 56) all_race[i] = new JBCSprint;
			else if (i == 58) all_race[i] = new ChampionsCup;
			else if (i == 59) all_race[i] = new HansinCup;

			else all_race[i] = nullptr;
		}
		set_bonus_point();
		break;
	}
	case 8:
	{
		for (int i = 0; i < 60; i++) {
			if (i == 3) all_race[i] = new NiegataJrS;
			else if (i == 4) all_race[i] = new SatporoJrS;
			else if (i == 6) all_race[i] = new SaudiRoyal;
			else if (i == 7) all_race[i] = new ArtemisS;
			else if (i == 9) all_race[i] = new TokyoSportsJrS;
			else if (i == 10) all_race[i] = new HansinJuvnileFillis;
			else if (i == 11) all_race[i] = new HopefulS;

			else if (i == 14) all_race[i] = new Kisaragi;
			else if (i == 16) all_race[i] = new Yayoi;
			else if (i == 17) all_race[i] = new SpringS;
			else if (i == 18) all_race[i] = new Sakura;
			else if (i == 20) all_race[i] = new NHKMileCup;
			else if (i == 21) all_race[i] = new Oaks;
			else if (i == 23) all_race[i] = new TakarazukaAnniversary;

			else if (i == 28) all_race[i] = new RoseS;
			else if (i == 29) all_race[i] = new SprintersS;
			else if (i == 31) all_race[i] = new Shuka;
			else if (i == 32) all_race[i] = new ClassicElizabethQueen;
			else if (i == 33) all_race[i] = new MileChampionship;
			else if (i == 35) all_race[i] = new TokyoTarget;

			else if (i == 39) all_race[i] = new FebruaryS;
			else if (i == 40) all_race[i] = new NakayamaUmamusumeS;
			else if (i == 41) all_race[i] = new Takamatsunomiya;
			else if (i == 44) all_race[i] = new VictoriaMile;
			else if (i == 46) all_race[i] = new YasudaAnniversary;
			else if (i == 47) all_race[i] = new Lord;

			else if (i == 52) all_race[i] = new NiegataAnniversary;
			else if (i == 53) all_race[i] = new SprintersS;
			else if (i == 55) all_race[i] = new ArkiTen;
			else if (i == 56) all_race[i] = new ElizabethQueen;
			else if (i == 58) all_race[i] = new ChampionsCup;
			else if (i == 59) all_race[i] = new TokyoTarget;

			else all_race[i] = nullptr;
		}
		set_bonus_point();
		break;
	}
	case 9:
	{
		cout << "=================================================================" << endl;
		cout << "모든 달의 0번 선택은 레이스 미출주입니다." << endl;
		cout << "또한 좌회전과 우회전의 경우에는 영향이 없어, 표기하지 않았습니다." << endl;
		cout << "=================================================================" << endl << endl;
		for (int i = 0; i < 60; i++) {
			pfunc[i]();
		}
		set_bonus_point();
		break;
	}
	} //switch 닫기 블록
}