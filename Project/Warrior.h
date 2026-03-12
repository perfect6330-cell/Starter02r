#pragma once
#include <iostream>
#include "Player.h"

class Warrior : public Player
{
private:
	string skill;

public:
	Warrior(std::string nickname);
	void attack() override;
	void attack(Monster* monster) override;
};