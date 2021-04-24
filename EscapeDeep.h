
#pragma once
#include "Casino.h"

namespace CSC234 {
	class EscapeDeep : public Casino
	{
	public:
		//Constructor
		void EscapeDeepGame();
		static EscapeDeep* makeGame();
		//This plays the game
		void start();
	private:
		void run();
	};
}