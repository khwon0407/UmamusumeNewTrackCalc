#include <iostream>
#include "RaceHeader.hpp"

using namespace std;

int BonusStatSum = 0;

void print_bonus() {
	cout << "<���ʽ� ���� 30 Īȣ �޼�>" << endl;
	if (high_speed_sprinter) cout << "���� �������� �޼� : +30" << endl;
	if (high_speed_miler) cout << "��� ���Ϸ� �޼� : +30" << endl;
	if (wonderful_umamusume) cout << "����Ǯ �츶������ �޼� : +30" << endl;
	if (best_umamusume) cout << "����Ʈ �츶������ �޼� : +30" << endl;
	if (queen_umamusume) cout << "�� �츶������ �޼� : +30" << endl;
	if (dirt_g1_lord) cout << "��Ʈ G1 ���� �޼� : +30" << endl;
	cout << endl;

	cout << "<���ʽ� ���� 20 Īȣ �޼�>" << endl;
	if (great_sprinter) cout << "������ �������� �޼� : +20" << endl;
	if (charisma_umamusume) cout << "ī������ �츶������ �޼� : +20" << endl;
	if (princess_umamusume) cout << "���� �츶������ �޼� : +20" << endl;
	if (heroine_umamusume) cout << "������ �츶������ �޼� : +20" << endl;
	if (shield_winner) cout << "���� ���� �޼� : +20" << endl;
	if (spring_winner) cout << "���� ���� �޼� : +20" << endl;
	if (autumn_winner) cout << "������ ���� �޼� : +20" << endl;
	if (dirt_swell) cout << "��Ʈ ���� �޼� : +20" << endl;
	if (dirt_wise_man) cout << "��Ʈ ���� �޼� : +20" << endl;
	if (dirt_sprinter) cout << "��Ʈ �������� �޼� : +20" << endl;
	if (dirt_g1_monster) cout << "��Ʈ G1 ���� �޼� : +20" << endl;
	if (dirt_g1_strong) cout << "��Ʈ G1 ���� �޼� : +20" << endl;
	if (distance_400_winner) cout << "�ٰ��Ÿ��� ���� �޼� : +20" << endl;
	if (distance_not_400_winner) cout << "��ٰ��Ÿ��� ���� �޼� : +20" << endl;
	cout << endl;

	cout << "<���ʽ� ���� 10 Īȣ �޼�>" << endl;
	if (master_umamusume) cout << "���� �츶������ �޼� : +10" << endl;
	if (dirt_proficiency) cout << "��Ʈ �ɼ� �޼� : +10" << endl;
	if (swell_umamusume) cout << "���� �츶������ �޼� : +10" << endl;
	if (junior_umamusume) cout << "�ִϾ� �츶������ �޼� : +10" << endl;
	if (dirt_new_star) cout << "��Ʈ�� �ż� �޼� : +10" << endl;
	if (poor_umamusume) cout << "������ �츶������ �޼� : +10" << endl;
	if (global_umamusume) cout << "�۷ι� �츶������ �޼� : +10" << endl;
	if (veteran_umamusume) cout << "���׶� �츶������ �޼� : +10" << endl;
	if (oguri_master) cout << "������ ������ �޼� : +10" << endl;
	if (dohoku_master) cout << "��ȣ�� ������ �޼� : +10" << endl;
	if (kanto_master) cout << "���� ������ �޼� : +10" << endl;
	if (hotkaido_master) cout << "Ȫī�̵� ������ �޼� : +10" << endl;
	if (kansai_master) cout << "������ ������ �޼� : +10" << endl;

	cout << endl << "�� ���ʽ� �� = " << BonusStatSum << endl;
}