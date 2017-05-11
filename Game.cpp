//
// Created by Neil on 5/2/2017.
//

#include <iostream>
#include "Game.hpp"
#include "Vampire.hpp"
#include "Barbarian.hpp"
#include "BlueMen.hpp"
#include "Medusa.hpp"
#include "HarryPotter.hpp"


Game::Game() {

}

Game::~Game() {

}

void Game::classDescriptions(int userChoice) {
	if (userChoice == 1) {
		std::cout << "Suave, debonair, but vicious and surprisingly resilient!\n" << std::endl;
	}
	else if (userChoice == 2) {
		std::cout << "Think Conan or Hercules from the movies. Big sword, big muscles, bare torso.\n" << std::endl;
	}
	else if (userChoice == 3) {
		std::cout << "They are small (6” tall), fast and tough. So they are hard to hit and can take\n"
				"some damage. As for the attack value, you can do a LOT of damage when you can \n"
				"crawl inside the armor or clothing of your opponent.\n" << std::endl;
	}
	else if (userChoice == 4) {
		std::cout << "Scrawny lady with snakes for hair. They help with fighting. Just don’t look at her!\n" << std::endl;
	}
	else if (userChoice == 5) {
		std::cout << "Why are you reading this? How can you not know who Harry Potter is?\n" << std::endl;
	}
}

void Game::setOpponent(int currOpp, int creatureChoice) {
	if (creatureChoice == 1) {
		Opponents[currOpp] = new Vampire;
	}
	else if (creatureChoice == 2) {
		Opponents[currOpp] = new Barbarian;
	}
	else if (creatureChoice == 3) {
		Opponents[currOpp] = new BlueMen;
	}
	else if (creatureChoice == 4) {
		Opponents[currOpp] = new Medusa;
	}
	else if (creatureChoice == 5) {
		Opponents[currOpp] = new HarryPotter;
	}
}

void Game::round() {

}

void Game::play() {

}
