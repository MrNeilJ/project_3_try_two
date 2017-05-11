//
// Created by Neil on 5/2/2017.
//

#ifndef PROJECT_3_CREATURE_HPP
#define PROJECT_3_CREATURE_HPP

#include "Dice.hpp"

class Creature {
private:
	Dice attackDie;
	Dice defenseDie;
	int armor;
	int strength;

public:
	virtual int attack() = 0;
	virtual int defend() = 0;
	



};


#endif //PROJECT_3_CREATURE_HPP
