
#pragma once
#include "Casino.h"
#include "BoxOne.h"
#include "BoxTwo.h"
#include "BoxThree.h"

namespace CSC234 {
	class EscapeDeep : public Casino, BoxOne, BoxTwo, BoxThree
	{
	public:
		//Constructor
		void EscapeDeepGame();
		static EscapeDeep* makeGame();
		//This plays the game
		void start();
		// Game Function
	private:
		void run();
		void intro();
		void items();
	};
}