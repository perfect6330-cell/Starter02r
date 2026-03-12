#pragma once
#include <iostream>
#include "Player.h"

class Thief : public Player
{
private:
	string skill;

public:
	Thief(std::string nickname);
	void attack() override;
	void attack(Monster* monster) override;
};