#pragma once
#include <iostream>
#include "Player.h"

class Magician : public Player
{
private:
	string skill;

public:
	Magician(std::string nickname);
	void attack() override;
	void attack(Monster* monster) override;
};

