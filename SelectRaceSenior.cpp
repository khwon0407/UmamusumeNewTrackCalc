#include <iostream>
#include "RaceHeader.hpp"
#include "RaceBase.hpp"
#include "RaceList.hpp"

using namespace std;

void select_s1_f() {
	Race* s1f_race[11] = { nullptr, new NikkeiNewYear, new Ichi, new KyotoGold, new NakayamaGold, new ManyoS, new UrethraShortS, new PolluxS, new JanuaryS, new NewYearS, new CarbunkleS };
	int select;
	cout << "(시니어 1월 전반)" << endl;
	select = select_racenumber(s1f_race, 11);
	all_race[36] = s1f_race[select];
	free_race(s1f_race, 11, select);
}

void select_s1_s() {
	Race* s1s_race[7] = { nullptr, new AmericaJCC, new TokaiS, new SilkroadS, new NegisiS, new PleiadesS, new SirahujiS };
	int select;
	cout << "(시니어 1월 후반)" << endl;
	select = select_racenumber(s1s_race, 7);
	all_race[37] = s1s_race[select];
	free_race(s1s_race, 7, select);
}

void select_s2_f() {
	Race* s2f_race[7] = { nullptr, new KyotoAnniversary, new TokyoNewpaper, new YamatoS, new LakuyoS, new AlthebaranS, new ValentineS };
	int select;
	cout << "(시니어 2월 전반)" << endl;
	select = select_racenumber(s2f_race, 7);
	all_race[38] = s2f_race[select];
	free_race(s2f_race, 7, select);
}

void select_s2_s() {
	Race* s2s_race[9] = { nullptr, new FebruaryS, new NakayamaAnniversary, new KyotoUmamusumeS, new DiamondS, new KokuraTarget, new Hanque, new SobuS, new KitakushuShortS };
	int select;
	cout << "(시니어 2월 후반)" << endl;
	select = select_racenumber(s2s_race, 9);
	all_race[39] = s2s_race[select];
	free_race(s2s_race, 9, select);
}

void select_s3_f() {
	Race* s3f_race[8] = { nullptr, new Kinko, new NakayamaUmamusumeS, new OceanS, new OsacaCastleS, new PolarisS, new NigawaS, new EastWindS };
	int select;
	cout << "(시니어 3월 전반)" << endl;
	select = select_racenumber(s3f_race, 8);
	all_race[40] = s3f_race[select];
	free_race(s3f_race, 8, select);
}

void select_s3_s() {
	Race* s3s_race[8] = { nullptr, new Osaka, new Takamatsunomiya, new HansinTarget, new Nikkei, new MarchS, new ChibaS, new RotcoS };
	int select;
	cout << "(시니어 3월 후반)" << endl;
	select = select_racenumber(s3s_race, 8);
	all_race[41] = s3s_race[select];
	free_race(s3s_race, 8, select);
}

void select_s4_f() {
	Race* s4f_race[9] = { nullptr, new HansinUmamusumeS, new DubbyChallengeTrophie, new AntaresS, new CoralS, new KeiyoS, new SpringThunderS, new HukusimaMinbo, new AzumacohujiS };
	int select;
	cout << "(시니어 4월 전반)" << endl;
	select = select_racenumber(s4f_race, 9);
	all_race[42] = s4f_race[select];
	free_race(s4f_race, 9, select);
}

void select_s4_s() {
	Race* s4s_race[6] = { nullptr, new HaruTen, new MilelusCup, new HukusimaUmamusumeS, new OasisS, new TennoMountainS };
	int select;
	cout << "(시니어 4월 후반)" << endl;
	select = select_racenumber(s4s_race, 6);
	all_race[43] = s4s_race[select];
	free_race(s4s_race, 6, select);
}

void select_s5_f() {
	Race* s5f_race[10] = { nullptr, new VictoriaMile, new KeioSpringCup, new NiegataTarget, new TanigawadakeS, new MetropolitanS, new KuramaS, new BrilliantS, new MiyakoBackcountryS, new RittoS };
	int select;
	cout << "(시니어 5월 전반)" << endl;
	select = select_racenumber(s5f_race, 10);
	all_race[44] = s5f_race[select];
	free_race(s5f_race, 10, select);
}

void select_s5_s() {
	Race* s5s_race[7] = { nullptr, new MeguroAnniversary, new HeianS, new MayS, new WitacheonS, new ZelcovaS, new AzchiCastleS };
	int select;
	cout << "(시니어 5월 후반)" << endl;
	select = select_racenumber(s5s_race, 7);
	all_race[45] = s5s_race[select];
	free_race(s5s_race, 7, select);
}

void select_s6_f() {
	Race* s6f_race[7] = { nullptr, new YasudaAnniversary, new MermaidS, new NaruoAnniversary, new EpsumCup, new TenposanS, new SleipnirS };
	int select;
	cout << "(시니어 6월 전반)" << endl;
	select = select_racenumber(s6f_race, 7);
	all_race[46] = s6f_race[select];
	free_race(s6f_race, 7, select);
}

void select_s6_s() {
	Race* s6s_race[9] = { nullptr, new TakarazukaAnniversary, new Lord, new HakodateSprintS, new AhalTekeS, new YonagoS, new OnumaS, new ParadiseS, new SannomiyaS };
	int select;
	cout << "(시니어 6월 후반)" << endl;
	select = select_racenumber(s6s_race, 9);
	all_race[47] = s6s_race[select];
	free_race(s6s_race, 9, select);
}

void select_s7_f() {
	Race* s7f_race[8] = { nullptr, new CBC, new ProsionS, new Tanabata, new HakodateAnniversary, new Tomoe, new MarineS, new NagoyaTrain };
	int select;
	cout << "(시니어 7월 전반)" << endl;
	select = select_racenumber(s7f_race, 8);
	all_race[48] = s7f_race[select];
	free_race(s7f_race, 8, select);
}

void select_s7_s() {
	Race* s7s_race[5] = { nullptr, new ChucoAnniversary, new IviesSummerDash, new QueenS, new HukusimaTVOpen };
	int select;
	cout << "(시니어 7월 후반)" << endl;
	select = select_racenumber(s7s_race, 5);
	all_race[49] = s7s_race[select];
	free_race(s7s_race, 5, select);
}

void select_s8_f() {
	Race* s8f_race[8] = { nullptr, new SekiyaAnniversary, new ElemS, new KokuraAnniversary, new SatporoNikkeiOpen, new UHB, new AsoS, new KanetsuS };
	int select;
	cout << "(시니어 8월 전반)" << endl;
	select = select_racenumber(s8f_race, 8);
	all_race[50] = s8f_race[select];
	free_race(s8f_race, 8, select);
}

void select_s8_s() {
	Race* s8s_race[8] = { nullptr, new SatporoAnniversary, new KitakyushuAnniversary, new KinlandCup, new NST, new BSN, new KokuraNikkeiOpen, new IbisS };
	int select;
	cout << "(시니어 8월 후반)" << endl;
	select = select_racenumber(s8s_race, 8);
	all_race[51] = s8s_race[select];
	free_race(s8s_race, 8, select);
}

void select_s9_f() {
	Race* s9f_race[7] = { nullptr, new SentoS, new KeiseiAutumnHandicap, new NiegataAnniversary, new CraneS, new EnifS, new RadioJapan };
	int select;
	cout << "(시니어 9월 전반)" << endl;
	select = select_racenumber(s9f_race, 7);
	all_race[52] = s9f_race[select];
	free_race(s9f_race, 7, select);
}

void select_s9_s() {
	Race* s9s_race[6] = { nullptr, new SprintersS, new AllCummers, new SerioosS, new PortIslandS, new NakatsukiS };
	int select;
	cout << "(시니어 9월 후반)" << endl;
	select = select_racenumber(s9s_race, 6);
	all_race[53] = s9s_race[select];
	free_race(s9s_race, 6, select);
}

void select_s10_f() {
	Race* s10f_race[9] = { nullptr, new HuchuUmamusumeS, new MainichiCrown, new KyotoTarget, new OpalS, new GreenChannelCup, new OctoberS, new SinetsuS, new UzumasaS };
	int select;
	cout << "(시니어 10월 전반)" << endl;
	select = select_racenumber(s10f_race, 9);
	all_race[54] = s10f_race[select];
	free_race(s10f_race, 9, select);
}

void select_s10_s() {
	Race* s10s_race[8] = { nullptr, new ArkiTen, new SwanS, new HujiS, new MuromachiS, new BrazilCup, new CasiopeiaS, new LumierAutumnDash };
	int select;
	cout << "(시니어 10월 후반)" << endl;
	select = select_racenumber(s10s_race, 8);
	all_race[55] = s10s_race[select];
	free_race(s10s_race, 8, select);
}

void select_s11_f() {
	Race* s11f_race[10] = { nullptr, new ElizabethQueen, new JBCLadiesClassic, new JBCSprint, new JBCClassic, new ArgentinaRepublic, new MiyakoS, new MusasinoS, new HukusimaAnniversary, new OROCup };
	int select;
	cout << "(시니어 11월 전반)" << endl;
	select = select_racenumber(s11f_race, 10);
	all_race[56] = s11f_race[select];
	free_race(s11f_race, 10, select);
}

void select_s11_s() {
	Race* s11s_race[9] = { nullptr, new MileChampionship, new JapanCup, new Keihan, new AndromedaS, new SolsticeMonthS, new HukusimaMinooCup, new CapitalS, new AutumnLeafS };
	int select;
	cout << "(시니어 11월 후반)" << endl;
	select = select_racenumber(s11s_race, 9);
	all_race[57] = s11s_race[select];
	free_race(s11s_race, 9, select);
}

void select_s12_f() {
	Race* s12f_race[12] = { nullptr, new ChampionsCup, new StayersS, new TurkeyStoneS, new CapellaS, new ChallengeCup, new ChunichiNewpaper, new LapisLazuliS, new NewYearMonthS, new LigelS, new TanzanightS, new DecemberS };
	int select;
	cout << "(시니어 12월 전반)" << endl;
	select = select_racenumber(s12f_race, 12);
	all_race[58] = s12f_race[select];
	free_race(s12f_race, 12, select);
}

void select_s12_s() {
	Race* s12s_race[6] = { nullptr, new ArimaAnniversary, new TokyoTarget, new HansinCup, new GalaxyS, new BetelgiusS };
	int select;
	cout << "(시니어 12월 후반)" << endl;
	select = select_racenumber(s12s_race, 6);
	all_race[59] = s12s_race[select];
	free_race(s12s_race, 6, select);
}