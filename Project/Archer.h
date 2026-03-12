#pragma once
#include <iostream>
#include "Player.h"

class Archer : public Player
{
private:
	string skill;

public:
	Archer(std::string nickname);
	void attack() override;
	void attack(Monster* monster) override;
};