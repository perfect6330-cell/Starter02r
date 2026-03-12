#include "Player.h"
#include "Monster.h"
#include <iostream>

using namespace std;

void Player::printPlayerStatus()
{
	cout << "==================== Status ====================" << endl;
	cout << "Player : " << nickname << endl;
	cout << "Job : " << job << endl;
	cout << "Level : " << level << endl;
	cout << "HP : " << hp << endl;
	cout << "Mp : " << mp << endl;
	cout << "Power : " << power << endl;
	cout << "Mana : " << mana << endl;
	cout << "accuracy : " << power << endl;
	cout << "Speed : " << speed << endl;
	cout << "================================================" << endl;
}

void Player::attack(Monster* monster)
{
	int damage = power - monster->getDefence();

	if (damage <= 0)
	{
		damage = 1;
	}

	cout << endl;
	cout << nickname << "에게 공격당했다" << endl;
	monster->setHp(monster->getHp() - damage);
	cout << "플레이어의 남은 hp : " << monster->getHp() << endl;
	cout << endl;
}

/* Getter */
int Player::getHp() { return hp; }
int Player::getPower() { return power; }
int Player::getMana() { return mana; }
int Player::getSpeed() { return speed; }
int Player::getAccuracy() { return accuracy; }
int Player::getDefence() { return defence; }

/* Setter */
void Player::setHp(int hp) { this->hp = hp; }
void Player::setPower(int power) { this->power = power; }
void Player::setMana(int mana) { this->mana = mana; }
void Player::setSpeed(int speed) { this->speed = speed; }
void Player::setAccuracy(int accuracy) { this->accuracy = accuracy; }
void Player::setDefence(int defence) { this->defence = defence; }