#pragma once
#include "Casino.h"
#include "BoxOne.h"
#include "BoxTwo.h"

namespace CSC234 {
	class EscapeDeep : public Casino, BoxOne, BoxTwo
	{
	public:
		//Constructor
		void EscapeDeepGame();
		static EscapeDeep* makeGame();
		//This plays the game
		void start();
		// Game Function
		void EscapeHatch();
	private:
		int boxChoice = NULL;
		bool boxGame = false;
		void run();
		void intro();
		void items();
	};
}