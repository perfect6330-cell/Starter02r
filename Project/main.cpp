// main.cpp

#include "Player.h"
#include "Warrior.h"
#include "Magician.h"
#include "Thief.h"
#include "Archer.h"
#include "Monster.h"
#include <iostream>
#include <string>
 
using namespace std;

int main()
{
	string nickname;
	int jobChoice;

	cout << "환영합니다 플레이어님." << endl;
	cout << "사용할 닉네임을 입력해주세요 : ";
	cin >> nickname;

	cout << "======================================== <전직 시스템> ========================================" << endl;
	cout << "전직하고자 하는 직업을 선택해주세요." << endl;
	cout << "1. Warrior(전사) / 2. Magician(마법사) / 3. Thief(도적) / 4. Archer(궁수)" << endl;
	cout << "===============================================================================================" << endl;
	cin >> jobChoice;

	Player* player = nullptr;

	while (true)
	{
		switch(jobChoice)
		{
			case 1:
				player = new Warrior(nickname);
				cout << "Warrior 전직이 완료되었습니다." << endl;
				break;

			case 2:
				player = new Magician(nickname);
				cout << "Magician 전직이 완료되었습니다." << endl;
				break;

			case 3:
				player = new Thief(nickname);
				cout << "Thief 전직이 완료되었습니다." << endl;
				break;

			case 4:
				player = new Archer(nickname);
				cout << "Archer 전직이 완료되었습니다." << endl;
				break;

			default:
				cout << "잘못된 입력이 감지되었습니다." << endl;
				cout << "다시 입력해주세요 : ";
				cin >> jobChoice;
				continue;
		}
		break;
	}

	while (true)
	{

		int menuChoice;

		cout << "이용하고자 하는 컨텐츠를 선택해주세요" << endl;
		cout << "==================== Menu ====================" << endl;
		cout << "1.Status / 2. 전투진행 / 3. 프로그램 종료 " << endl;
		cout << "==============================================" << endl;
		cin >> menuChoice;

		switch (menuChoice)
		{
		case 1:
			player->printPlayerStatus();

			int back;
			cout << "메뉴로 돌아가기 : 0" << endl;
			cin >> back;
			break;

		case 2:
		{
			Monster* monster = new Monster("좀비");

			int battleChoice;

				cout << "시즌 몬스터 " << monster->getName() << "와 전투가 시작되었습니다." << endl;

			while (true)
			{
				cout << "==================== Battle ====================" << endl;
				cout << "1. 공격하기 / 2. 방어하기 / 3. 몬스터 정보" << endl;
				cout << "================================================" << endl;
				cout << "진행할 번호를 입력해주세요 : ";

				cin >> battleChoice;

				switch (battleChoice)
				{
				case 1:
					player->attack(monster);
					break;

				case 2:
					monster->attack(player);
					break;

				case 3:
					monster->printMonsterStatus();

					int back;
					cout << "배틀로 돌아가기 : 0" << endl;
					cin >> back;
					break;

				default:
					cout << "잘못된 입력입니다." << endl;
				}

				if (monster->getHp() <= 0)
				{
					cout << endl;
					cout << "축하드립니다. 시즌몬스터 " << monster->getName() << "을 처치하였습니다." << endl;
					cout << "메인 컨텐츠 공략을 성공하였습니다. 프로그램을 종료합니다." << endl;
					cout << endl;
					delete monster;
					delete player;
					return 0;
				}

				if (player->getHp() <= 0)
				{
					cout << endl;
					cout << "시즌몬스터 " << monster->getName() << "에게 패배하여 HP가 0이 되었습니다." << endl;
					cout << "메인 컨텐츠 공략에 실패하여 프로그램이 종료됩니다." << endl;
					cout << endl;
					delete monster;
					delete player;
					return 0;
				}

			}
			break;
		}
		case 3:
			cout << "게임을 종료합니다." << endl;
			delete player;
			return 0;
			break;

		default:
			cout << "잘못된 입력이 감지되었습니다." << endl;
			break;
		}
	}

	return 0;
}