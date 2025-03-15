#include <iostream>
#include "RaceHeader.hpp"
#include "RaceBase.hpp"

using namespace std;

float race_bonus = 0;
Race* all_race[60];

int main(void) {

	//system("chcp 65001");
	setlocale(LC_ALL, "");

	int select;
	cout << "================================================================================================" << endl;
	cout << "뉴트랙 계산기 ver 0.0.2" << endl;
	cout << "해당 계산기는 뉴트랙에서의 훈련과 레이스 간의 이득 관계를 정확하게 계산하기 위해 제작되었습니다." << endl << endl;
	cout << "사용방법" << endl;
	cout << "1. 실행 후 레이스 보너스를 입력한 후 바로 로테이션 등록을 합니다." << endl;
	cout << "2. 등록 완료 후 로테이션 수정 및 레이스 미출주 시 스탯 비교 등의 기능을 사용할 수 있습니다." << endl << endl;
	cout << "※주의 사항" << endl;
	cout << "숫자 자판만 사용하면 됩니다. 그 외 자판 입력 시 프로그램이 오작동하니 주의해주세요." << endl;
	cout << "또한 이 계산 결과 값은 절대적인 기준이 아닙니다." << endl;
	cout << "레이스를 뛰거나 트레이닝을 하는 것은 본인의 상황에 맞게 조절해주세요." << endl;
	cout << "================================================================================================" << endl << endl;

	cout << "레이스 보너스 수치를 입력해주세요. 퍼센트 수치입니다. >> ";
	cin >> race_bonus;
	cout << endl;
	race_bonus /= 100;

	cout << "레이스 로테이션을 등록합니다." << endl;
	cout << "없는 번호를 입력하면 맞게 입력할 때까지 번호를 입력받습니다." << endl;
	
	register_rotation();

	while (1) {
		cout << endl << "동작할 기능을 선택하세요. 아래 기능이 아닌 다른 숫자 입력 시 종료됩니다." << endl;
		cout<< "1) 로테이션 출력  2) 보너스 스탯 출력  3) 로테이션 수정  4) 한 턴에 대해 레이스 및 트레이닝 비교 >> ";
		cin >> select;
		switch (select) {
		case 1:
			print_rotation(); break;
		case 2:
			print_bonus(); break;
		case 3:
			change_rotation(); break;
		case 4:
			compare_training_and_race(); break;
		default:
			for (int i = 0; i < 60; i++) {
				if (all_race[i] != nullptr) delete all_race[i];
			}
			exit(0);
		}
	}
}