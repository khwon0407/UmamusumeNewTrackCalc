#include <iostream>
#include "RaceHeader.hpp"
#include "RaceBase.hpp"
#include "RaceList.hpp"

using namespace std;

void select_c1_f() {
	Race* c1f_race[6] = { nullptr, new Keisei, new SinjanAnniversary, new FairyS, new JrCup, new RedPlum };
	int select;
	cout << "(클래식 1월 전반)" << endl;
	select = select_racenumber(c1f_race, 6);
	all_race[12] = c1f_race[select];
	free_race(c1f_race, 6, select);
}

void select_c1_s() {
	Race* c1s_race[3] = { nullptr, new WakagomaS, new CroakersS };
	int select;
	cout << "(클래식 1월 후반)" << endl;
	select = select_racenumber(c1s_race, 3);
	all_race[13] = c1s_race[select];
	free_race(c1s_race, 3, select);
}

void select_c2_f() {
	Race* c2f_race[5] = { nullptr, new Kisaragi, new QueenCup, new KyodoCommunication, new ElfinS };
	int select;
	cout << "(클래식 2월 전반)" << endl;
	select = select_racenumber(c2f_race, 5);
	all_race[14] = c2f_race[select];
	free_race(c2f_race, 5, select);
}

void select_c2_s() {
	Race* c2s_race[4] = { nullptr, new VioletS, new HyacinthS, new MagaretS };
	int select;
	cout << "(클래식 2월 후반)" << endl;
	select = select_racenumber(c2s_race, 4);
	all_race[15] = c2s_race[select];
	free_race(c2s_race, 4, select);
}

void select_c3_f() {
	Race* c3f_race[6] = { nullptr, new Yayoi, new Tulip, new FillisLevue, new AnemoneS, new UpDragonS };
	int select;
	cout << "(클래식 3월 전반)" << endl;
	select = select_racenumber(c3f_race, 6);
	all_race[16] = c3f_race[select];
	free_race(c3f_race, 6, select);
}

void select_c3_s() {
	Race* c3s_race[6] = { nullptr, new SpringS, new FalconS, new FlowerCup, new Mainichi, new NewLeafS };
	int select;
	cout << "(클래식 3월 후반)" << endl;
	select = select_racenumber(c3s_race, 6);
	all_race[17] = c3s_race[select];
	free_race(c3s_race, 6, select);
}

void select_c4_f() {
	Race* c4f_race[7] = { nullptr, new Satsuki, new Sakura, new NewZealandTrophie, new AllingtonCup, new HideDragonS, new ForgetMeNot };
	int select;
	cout << "(클래식 4월 전반)" << endl;
	select = select_racenumber(c4f_race, 7);
	all_race[18] = c4f_race[select];
	free_race(c4f_race, 7, select);
}

void select_c4_s() {
	Race* c4s_race[6] = { nullptr, new BlueLeaf, new FloraS, new TangerineS, new DanoS, new SweetpeaS };
	int select;
	cout << "(클래식 4월 후반)" << endl;
	select = select_racenumber(c4s_race, 6);
	all_race[19] = c4s_race[select];
	free_race(c4s_race, 6, select);
}

void select_c5_f() {
	Race* c5f_race[5] = { nullptr, new NHKMileCup, new KyotoNewspaper, new PrincipalS, new BlueDragonS };
	int select;
	cout << "(클래식 5월 전반)" << endl;
	select = select_racenumber(c5f_race, 5);
	all_race[20] = c5f_race[select];
	free_race(c5f_race, 5, select);
}

void select_c5_s() {
	Race* c5s_race[6] = { nullptr, new JapanDubby, new Oaks, new DishFlowerS, new BongchuS, new WhiteLilyS };
	int select;
	cout << "(클래식 5월 후반)" << endl;
	select = select_racenumber(c5s_race, 6);
	all_race[21] = c5s_race[select];
	free_race(c5s_race, 6, select);
}

void select_c6_f() {
	Race* c6f_race[7] = { nullptr, new YasudaAnniversary, new MermaidS, new NaruoAnniversary, new EpsumCup, new TenposanS, new SleipnirS };
	int select;
	cout << "(클래식 6월 전반)" << endl;
	select = select_racenumber(c6f_race, 7);
	all_race[22] = c6f_race[select];
	free_race(c6f_race, 7, select);
}

void select_c6_s() {
	Race* c6s_race[9] = { nullptr, new TakarazukaAnniversary, new HakodateSprintS, new UnicornS, new AhalTekeS, new YonagoS, new OnumaS, new ParadiseS, new SannomiyaS };
	int select;
	cout << "(클래식 6월 후반)" << endl;
	select = select_racenumber(c6s_race, 9);
	all_race[23] = c6s_race[select];
	free_race(c6s_race, 9, select);
}

void select_c7_f() {
	Race* c7f_race[10] = { nullptr, new JapanDirtDubby, new CBC, new ProsionS, new RadioNIKKEI, new Tanabata, new HakodateAnniversary, new Tomoe, new MarineS, new NagoyaTrain };
	int select;
	cout << "(클래식 7월 전반)" << endl;
	select = select_racenumber(c7f_race, 10);
	all_race[24] = c7f_race[select];
	free_race(c7f_race, 10, select);
}

void select_c7_s() {
	Race* c7s_race[5] = { nullptr, new ChucoAnniversary, new IviesSummerDash, new QueenS, new HukusimaTVOpen };
	int select;
	cout << "(클래식 7월 후반)" << endl;
	select = select_racenumber(c7s_race, 5);
	all_race[25] = c7s_race[select];
	free_race(c7s_race, 5, select);
}

void select_c8_f() {
	Race* c8f_race[9] = { nullptr, new SekiyaAnniversary, new ElemS, new LeopardS, new KokuraAnniversary, new SatporoNikkeiOpen, new UHB, new AsoS, new KanetsuS };
	int select;
	cout << "(클래식 8월 전반)" << endl;
	select = select_racenumber(c8f_race, 9);
	all_race[26] = c8f_race[select];
	free_race(c8f_race, 9, select);
}

void select_c8_s() {
	Race* c8s_race[8] = { nullptr, new SatporoAnniversary, new KitakyushuAnniversary, new KinlandCup, new NST, new BSN, new KokuraNikkeiOpen, new IbisS };
	int select;
	cout << "(클래식 8월 후반)" << endl;
	select = select_racenumber(c8s_race, 8);
	all_race[27] = c8s_race[select];
	free_race(c8s_race, 8, select);
}

void select_c9_f() {
	Race* c9f_race[9] = { nullptr, new RoseS, new SentoS, new KeiseiAutumnHandicap, new TartarianAsterS, new NiegataAnniversary, new CraneS, new EnifS, new RadioJapan };
	int select;
	cout << "(클래식 9월 전반)" << endl;
	select = select_racenumber(c9f_race, 9);
	all_race[28] = c9f_race[select];
	free_race(c9f_race, 9, select);
}

void select_c9_s() {
	Race* c9s_race[8] = { nullptr, new SprintersS, new SentlightAnniversary, new AllCummers, new KobeNewspaper, new SerioosS, new PortIslandS, new NakatsukiS };
	int select;
	cout << "(클래식 9월 후반)" << endl;
	select = select_racenumber(c9s_race, 8);
	all_race[29] = c9s_race[select];
	free_race(c9s_race, 8, select);
}

void select_c10_f() {
	Race* c10f_race[9] = { nullptr, new HuchuUmamusumeS, new MainichiCrown, new KyotoTarget, new OpalS, new GreenChannelCup, new OctoberS, new SinetsuS, new UzumasaS };
	int select;
	cout << "(클래식 10월 전반)" << endl;
	select = select_racenumber(c10f_race, 9);
	all_race[30] = c10f_race[select];
	free_race(c10f_race, 9, select);
}

void select_c10_s() {
	Race* c10s_race[10] = { nullptr, new Kitka, new Shuka, new ArkiTen, new SwanS, new HujiS, new MuromachiS, new BrazilCup, new CasiopeiaS, new LumierAutumnDash };
	int select;
	cout << "(클래식 10월 후반)" << endl;
	select = select_racenumber(c10s_race, 10);
	all_race[31] = c10s_race[select];
	free_race(c10s_race, 10, select);
}

void select_c11_f() {
	Race* c11f_race[10] = { nullptr, new ClassicElizabethQueen, new JBCLadiesClassic, new JBCSprint, new JBCClassic, new ArgentinaRepublic, new MiyakoS, new MusasinoS, new HukusimaAnniversary, new OROCup };
	int select;
	cout << "(클래식 11월 전반)" << endl;
	select = select_racenumber(c11f_race, 10);
	all_race[32] = c11f_race[select];
	free_race(c11f_race, 10, select);
}

void select_c11_s() {
	Race* c11s_race[9] = { nullptr, new MileChampionship, new ClassicJapanCup, new Keihan, new AndromedaS, new SolsticeMonthS, new HukusimaMinooCup, new CapitalS, new AutumnLeafS };
	int select;
	cout << "(클래식 11월 후반)" << endl;
	select = select_racenumber(c11s_race, 9);
	all_race[33] = c11s_race[select];
	free_race(c11s_race, 9, select);
}

void select_c12_f() {
	Race* c12f_race[12] = { nullptr, new ChampionsCup, new StayersS, new TurkeyStoneS, new CapellaS, new ChallengeCup, new ChunichiNewpaper, new LapisLazuliS, new NewYearMonthS, new LigelS, new TanzanightS, new DecemberS };
	int select;
	cout << "(클래식 12월 전반)" << endl;
	select = select_racenumber(c12f_race, 12);
	all_race[34] = c12f_race[select];
	free_race(c12f_race, 12, select);
}

void select_c12_s() {
	Race* c12s_race[6] = { nullptr, new ClassicArimaAnniversary, new TokyoTarget, new HansinCup, new GalaxyS, new BetelgiusS };
	int select;
	cout << "(클래식 12월 후반)" << endl;
	select = select_racenumber(c12s_race, 6);
	all_race[35] = c12s_race[select];
	free_race(c12s_race, 6, select);
}