//
// Created by Neil on 5/2/2017.
//

#include <cstdlib>
#include "Dice.hpp"


Dice::Dice(int userSides, int userDice) {
	sides = userSides;
	numDie = userDice;
}

int Dice::roll() {
	int total = 0;
	for (int i = 0; i < numDie; i++) {
		total += rand() % sides;
	}
	return  total;
}
