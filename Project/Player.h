#pragma once
#include <string>

using namespace std;

class Monster;

class Player
{
protected:
	string nickname;
	string job;
	int level;
	int hp;
	int mp;
	int power;
	int mana;
	int speed;
	int accuracy;
	int defence;

public:
	Player(string name) : nickname(name), job("x"), level(1), hp(0), mp(0), power(0), mana(0), speed(0), accuracy(0), defence(0)
	{
		/* 직업별 기본스텟 분배를 위한 임시 초기화 */
	}
	virtual void attack() = 0;
	virtual void attack(Monster* monster) = 0;
	void printPlayerStatus();

	int getHp();
	int getPower();
	int getMana();
	int getSpeed();
	int getAccuracy();
	int getDefence();

	void setHp(int hp);
	void setPower(int power);
	void setMana(int mana);
	void setSpeed(int speed);
	void setAccuracy(int accuracy);
	void setDefence(int defence);
};

