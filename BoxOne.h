#pragma once
#include <iostream>
#include <vector>
#include <string>

class BoxOne
{
public:
	void boxOneSides();
	bool BoxOneComplete = false;
private:
	void B1_sideOne();
	void B1_sideTwo();
	void B1_sideThree();
	char userB1 = 'y';
	int sideChoice = NULL;
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

