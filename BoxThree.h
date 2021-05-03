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
	char userB3 = 'y';
	int sideChoice = NULL;
};

