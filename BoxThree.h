#pragma once
#include <iostream>
#include <vector>
#include <string>

class BoxThree
{
public:
	void boxThreeSides();
private:
	void B3_sideOne();
	void B3_sideTwo();
	void B3_sideThree();

	int sideChoice = NULL;
	//vector <string> B3_sideOneOpt = { "Knob", "Lever", "Pannel" };
	//vector<string>B3_sideTwoOpt = { "Lever", "Speaker", "Microphone" };
	//vector<string>B3_sideThreeOpt = { "Un-lit Light", "Window", "Wires" };
};

