#include "Thief.h"
#include "Monster.h"
#include <iostream>

using namespace std;

Thief::Thief(string name) : Player(name)
{
	nickname = name;
	job = "Thief";
	skill = "Shadow strike";
	level = 10;
	hp = 100;
	mp = 50;
	power = 5;
	mana = 5;
	speed = 30;
	accuracy = 5;
	defence = 10;
}

void Thief::attack()
{
	cout << "고유스킬 " << skill << "를 사용합니다." << endl;
}

void Thief::attack(Monster* monster)
{
	int damage = speed - monster->getDefence();
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