#include "Monster.h"
#include "Player.h"
#include <iostream>

using namespace std;

class Player;

Monster::Monster(string name)
{
    this->name = name;
    hp = 100;
    power = 30;
    defence = 10;
    speed = 10;
}

void Monster::printMonsterStatus()
{
	cout << "==================== Status ====================" << endl;
	cout << "Mosnter : " << name << endl;
	cout << "HP : " << hp << endl;
	cout << "Power : " << power << endl;
	cout << "Defence : " << defence << endl;
	cout << "Speed : " << speed << endl;
	cout << "Defence : " << defence << endl;
	cout << "================================================" << endl;
}

void Monster::attack(Player* player)
{
	int damage = power - player->getDefence();

	if (damage <= 0)
	{
		damage = 1;
	}

	cout << endl;
	cout << name << "에게 공격당했습니다." << endl;
	player->setHp(player->getHp() - damage);
	cout << "플레이어의 남은 hp : " << player->getHp() << endl;
	cout << endl;
}

// Getter
string Monster::getName() { return name; }
int Monster::getHp() { return hp; }
int Monster::getAttack() { return power; }
int Monster::getDefence() { return defence; }
int Monster::getSpeed() { return speed; }

// Setter
void Monster::setName(string name) { this->name = name; }
void Monster::setHp(int hp) { this->hp = hp; }
void Monster::setAttack(int attack) { this->power = attack; }
void Monster::setDefence(int defence) { this->defence = defence; }
void Monster::setSpeed(int speed) { this->speed = speed; }