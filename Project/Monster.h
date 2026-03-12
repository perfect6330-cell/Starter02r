#pragma once
#include <string>

using namespace std;

class Player;

class Monster
{
public:
	Monster(string name);

	void attack(Player* player);
	void printMonsterStatus();

	/* getter */
	string getName();
	int getHp();
	int getAttack();
	int getDefence();
	int getSpeed();

	/* setter */
	void setName(string name);
	void setHp(int hp);
	void setAttack(int attack);
	void setDefence(int defence);
	void setSpeed(int speed);

protected:
	string name;
	int hp;
	int power;
	int defence;
	int speed;
};