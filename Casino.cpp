#include <iostream>
#include <string>
#include "Casino.h"
#include "EscapeDeep.h"


namespace CSC234 {
	//class Casino implementation file
	void Casino::play(string gameName) {
		Casino* game = NULL;   //pointer can refer to object of subclass
		gameName = "Escape the Deep";
		if (gameName == "Escape the Deep")
			game = EscapeDeep::makeGame();

		game->start();  // using late binding, invoke game start
		delete game;	// cleaning up heap

	}

	void Casino::start() {
		std::cout << "Subclass funtion start() is not defined-test123." << endl;
	}

	Casino::~Casino() {
		std::cout << "\nCasino desctructor here" << endl;
	}
}
