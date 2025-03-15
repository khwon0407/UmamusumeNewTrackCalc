#include <iostream>
#include "RaceHeader.hpp"

using namespace std;

int BonusStatSum = 0;

void print_bonus() {
	cout << "<보너스 스탯 30 칭호 달성>" << endl;
	if (high_speed_sprinter) cout << "광속 스프린터 달성 : +30" << endl;
	if (high_speed_miler) cout << "고속 마일러 달성 : +30" << endl;
	if (wonderful_umamusume) cout << "원더풀 우마무스메 달성 : +30" << endl;
	if (best_umamusume) cout << "베스트 우마무스메 달성 : +30" << endl;
	if (queen_umamusume) cout << "퀸 우마무스메 달성 : +30" << endl;
	if (dirt_g1_lord) cout << "더트 G1 제왕 달성 : +30" << endl;
	cout << endl;

	cout << "<보너스 스탯 20 칭호 달성>" << endl;
	if (great_sprinter) cout << "굉장한 스프린터 달성 : +20" << endl;
	if (charisma_umamusume) cout << "카리스마 우마무스메 달성 : +20" << endl;
	if (princess_umamusume) cout << "공주 우마무스메 달성 : +20" << endl;
	if (heroine_umamusume) cout << "히로인 우마무스메 달성 : +20" << endl;
	if (shield_winner) cout << "방패 패자 달성 : +20" << endl;
	if (spring_winner) cout << "봄의 패자 달성 : +20" << endl;
	if (autumn_winner) cout << "가을의 패자 달성 : +20" << endl;
	if (dirt_swell) cout << "더트 달인 달성 : +20" << endl;
	if (dirt_wise_man) cout << "더트 현인 달성 : +20" << endl;
	if (dirt_sprinter) cout << "더트 스프린터 달성 : +20" << endl;
	if (dirt_g1_monster) cout << "더트 G1 괴물 달성 : +20" << endl;
	if (dirt_g1_strong) cout << "더트 G1 강자 달성 : +20" << endl;
	if (distance_400_winner) cout << "근간거리의 패자 달성 : +20" << endl;
	if (distance_not_400_winner) cout << "비근간거리의 패자 달성 : +20" << endl;
	cout << endl;

	cout << "<보너스 스탯 10 칭호 달성>" << endl;
	if (master_umamusume) cout << "명인 우마무스메 달성 : +10" << endl;
	if (dirt_proficiency) cout << "더트 능숙 달성 : +10" << endl;
	if (swell_umamusume) cout << "달인 우마무스메 달성 : +10" << endl;
	if (junior_umamusume) cout << "주니어 우마무스메 달성 : +10" << endl;
	if (dirt_new_star) cout << "더트의 신성 달성 : +10" << endl;
	if (poor_umamusume) cout << "가련한 우마무스메 달성 : +10" << endl;
	if (global_umamusume) cout << "글로벌 우마무스메 달성 : +10" << endl;
	if (veteran_umamusume) cout << "베테랑 우마무스메 달성 : +10" << endl;
	if (oguri_master) cout << "오구리 마스터 달성 : +10" << endl;
	if (dohoku_master) cout << "도호쿠 마스터 달성 : +10" << endl;
	if (kanto_master) cout << "간토 마스터 달성 : +10" << endl;
	if (hotkaido_master) cout << "홋카이도 마스터 달성 : +10" << endl;
	if (kansai_master) cout << "간사이 마스터 달성 : +10" << endl;

	cout << endl << "총 보너스 합 = " << BonusStatSum << endl;
}