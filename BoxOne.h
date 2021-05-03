#pragma once
#include <iostream>
#include <vector>
#include <string>

class BoxOne
{
public:
	void boxOneSides();
private:
	void B1_sideOne();
	void B1_sideTwo();
	void B1_sideThree();
	char userB1 = 'y';
	int sideChoice = NULL;
	char itemChoice;
};

