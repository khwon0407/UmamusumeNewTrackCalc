#include "RaceHeader.hpp"
#ifdef _WIN32
#include <Windows.h>
#endif

void set_bonus_point() {
	BonusStatSum = 0;

	if (TakamatsunomiyaWin && SprintersSWin) {
		great_sprinter = true;
		BonusStatSum += 20;
	}
	else
		great_sprinter = false;

	if (SakuraWin && OaksWin && ShukaWin) {
		heroine_umamusume = true;
		BonusStatSum += 20;
	}
	else
		heroine_umamusume = false;

	if (SatsukiWin && JapanDubbyWin && KitkaWin) {
		charisma_umamusume = true;
		BonusStatSum += 20;
	}
	else
		charisma_umamusume = false;

	if (NHKMileCupWin && YasudaWin && MileChampionshipWin) {
		high_speed_miler = true;
		BonusStatSum += 30;
	}
	else
		high_speed_miler = false;

	if (charisma_umamusume && ClassicJapanCupORArimaWin) {
		wonderful_umamusume = true;
		BonusStatSum += 30;
	}
	else
		wonderful_umamusume = false;

	if (heroine_umamusume && HansinJFWin && VictoriaMileWin && (ElizabethWin == 2)) {
		queen_umamusume = true;
		BonusStatSum += 30;
	}
	else
		queen_umamusume = false;

	if (charisma_umamusume && (((OsakaWin >= 1) + (HaruTenWin >= 1) + (TakarazukaWin >= 1) + (ArkiTenWin >= 1) + (JapanCupWin >= 1) + (ArimaWin >= 1)) >= 2)) {
		best_umamusume = true;
		BonusStatSum += 30;
	}
	else
		best_umamusume = false;

	if (DirtG1Win >= 5) {
		dirt_g1_lord = true;
		BonusStatSum += 30;
	}
	else
		dirt_g1_lord = false;

	if (great_sprinter && YasudaWin && MileChampionshipWin) {
		high_speed_sprinter = true;
		BonusStatSum += 30;
	}
	else
		high_speed_sprinter = false;

	if (DirtWin >= 15) {
		dirt_swell = true;
		BonusStatSum += 20;
	}
	else
		dirt_swell = false;

	if (SakuraWin && OaksWin && ShukaWin && ClassicElizabethWin) {
		princess_umamusume = true;
		BonusStatSum += 20;
	}
	else
		princess_umamusume = false;

	if (Multiple400Win >= 10) {
		distance_400_winner = true;
		BonusStatSum += 20;
	}
	else
		distance_400_winner = false;

	if (MultipleNot400Win >= 10) {
		distance_not_400_winner = true;
		BonusStatSum += 20;
	}
	else
		distance_not_400_winner = false;

	if (HaruTenWin && ArkiTenWin) {
		shield_winner = true;
		BonusStatSum += 20;
	}
	else
		shield_winner = false;

	if (DirtWin >= 10) {
		dirt_wise_man = true;
		BonusStatSum += 20;
	}
	else
		dirt_wise_man = false;

	if (JBCSprinterWin == 2) {
		dirt_sprinter = true;
		BonusStatSum += 20;
	}
	else
		dirt_sprinter = false;

	if (DirtG1Win >= 4) {
		dirt_g1_monster = true;
		BonusStatSum += 20;
	}
	else
		dirt_g1_monster = false;

	if (DirtG1Win >= 3) {
		dirt_g1_strong = true;
		BonusStatSum += 20;
	}
	else
		dirt_g1_strong = false;

	if (OsakaWin && HaruTenWin && TakarazukaWin) {
		spring_winner = true;
		BonusStatSum += 20;
	}
	else
		spring_winner = false;

	if (ArkiTenWin && JapanCupWin && ArimaWin) {
		autumn_winner = true;
		BonusStatSum += 20;
	}
	else
		autumn_winner = false;

	if (DirtWin >= 5) {
		dirt_proficiency = true;
		BonusStatSum += 10;
	}
	else
		dirt_proficiency = false;

	if (DirtShortWin && DirtMileWin && DirtMiddleWin) {
		swell_umamusume = true;
		BonusStatSum += 10;
	}
	else
		swell_umamusume = false;

	if (TerfShortWin && TerfMileWin && TerfMiddleWin && TerfLongWin) {
		master_umamusume = true;
		BonusStatSum += 10;
	}
	else
		master_umamusume = false;

	if (JuniorWin >= 3) {
		junior_umamusume = true;
		BonusStatSum += 10;
	}
	else
		junior_umamusume = false;

	if (UnicornSWin && JapanDirtDubbyWin && LeopardSWin) {
		dirt_new_star = true;
		BonusStatSum += 10;
	}
	else
		dirt_new_star = false;

	if (((HansinUSWin >= 1) + (HuchuUSWin >= 1) + (HukusimaUSWin >= 1) + (KyotoUSWin >= 1) + (NakayamaUSWin >= 1)) >= 3) {
		poor_umamusume = true;
		BonusStatSum += 10;
	}
	else
		poor_umamusume = false;

	if (((SaudiWin >= 1) + (NewZealandWin >= 1) + (JapanDirtDubbyWin >= 1) + (BrazilCupWin >= 1) + (ArgentinaWin >= 1) + (JapanCupWin >= 1) + (AmericaWin >= 1)) >= 3) {
		global_umamusume = true;
		BonusStatSum += 10;
	}
	else
		global_umamusume = false;

	if (moreOPWin >= 10) {
		veteran_umamusume = true;
		BonusStatSum += 10;
	}
	else
		veteran_umamusume = false;

	if (OguriWin >= 2) {
		oguri_master = true;
		BonusStatSum += 10;
	}
	else
		oguri_master = false;

	if (DohokuWin >= 3) {
		dohoku_master = true;
		BonusStatSum += 10;
	}
	else
		dohoku_master = false;

	if (KantoWin >= 3) {
		kanto_master = true;
		BonusStatSum += 10;
	}
	else
		kanto_master = false;

	if (HotkaidoWin >= 3) {
		hotkaido_master = true;
		BonusStatSum += 10;
	}
	else
		hotkaido_master = false;

	if (KansaiWin >= 3) {
		kansai_master = true;
		BonusStatSum += 10;
	}
	else
		kansai_master = false;
}