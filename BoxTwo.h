#pragma once
#include <iostream>
#include <vector>
#include <string>

class BoxTwo
{
public:
	void boxTwoSides(); 
	int resetChoice() { return sideChoice = 10; };
	int resetMainLoop() { return mainChoice = 10; };
	void isBox_done();
	bool B2Done = false;
private:
	void B2_sideOne();
	void B2_sideTwo();
	void B2_sideThree();
	int sideChoice = 10;
	int mainChoice = 10;
protected:
	bool B2_Switch = false;
	bool B2_Smdr = false;
	bool B2_Wire = false;
	bool B2_Green = false;
	bool B2_Blue = false;
	bool B2_Red = false;
	bool B2_Lights = false;
	bool B2_Screen = false;
	bool B2_Box2done = false;
};

