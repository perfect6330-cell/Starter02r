#include "Magician.h"
#include "Monster.h"
#include <iostream>

using namespace std;

Magician::Magician(string name) : Player(name)
{
	nickname = name;
	job = "Magician";
	skill = "Thunderbolt";
	level = 10;
	hp = 100;
	mp = 50;
	power = 5;
	mana = 30;
	speed = 5;
	accuracy = 5;
	defence = 10;
}

void Magician::attack()
{
	cout << "고유스킬 " << skill << "를 사용합니다." << endl;
}

void Magician::attack(Monster* monster)
{
	int damage = mana - monster->getDefence();
	if (damage <= 0)
	{
		damage = 1;
	}

	cout << endl;
	cout << nickname << "님이 " << monster->getName() << "에게 " << skill << "를 사용합니다" << endl;
	monster->setHp(monster->getHp() - damage);
	cout << "몬스터의 남은 HP : " << monster->getHp() << endl;
	cout << endl;
}