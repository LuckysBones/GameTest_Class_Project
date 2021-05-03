#pragma once
#include <iostream>
#include <vector>
#include <string>

class BoxTwo
{
public:
	void boxTwoSides();
private:
	void B2_sideOne();
	void B2_sideTwo();
	void B2_sideThree();
	char userB2 = 'y';
	int sideChoice = NULL;
};

