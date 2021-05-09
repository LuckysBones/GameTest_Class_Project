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
protected:
	bool B2_Switch = false;
	bool B2_Smdr = false;
	bool B2_Wire = false;
	bool B2_Green = false;
	bool B2_Blue = false;
	bool B2_Red = false;
	bool B2_Lights = false;
};

