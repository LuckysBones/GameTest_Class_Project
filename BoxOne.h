#pragma once
#include <iostream>
#include <vector>
#include <string>

class BoxOne
{
public:
	void boxOneSides();
	bool BoxOneComplete = false;
	int resetChoice() { return sideChoice = 10; };
	int resetMainLoop() { return mainChoice = 10; };
private:
	void B1_sideOne();
	void B1_sideTwo();
	void B1_sideThree();
	char userB1 = 'y';
	int sideChoice = 10;
	int mainChoice = 10;
	char itemChoice;
protected:
	bool B1_light = false;
	bool B1_wire = false;
	bool B1_mic = false;
	bool B1_lever = false;
	bool B1_knob = false;
	bool pannel_ = false;
	bool B1_done = true;
};

