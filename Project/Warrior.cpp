#include "Warrior.h"
#include "Monster.h"
#include <iostream>

using namespace std;

Warrior::Warrior(string name) : Player(name)
{
	nickname = name;
	job = "Warrior";
	skill = "Power Strike";
	level = 10;
	hp = 100;
	mp = 50;
	power = 30;
	mana = 5;
	speed = 5;
	accuracy = 5;
	defence = 10;
}

void Warrior::attack()
{
	cout << "고유스킬 " << skill << "를 사용합니다." << endl;
}

void Warrior::attack(Monster* monster)
{
	int damage = power - monster->getDefence();
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