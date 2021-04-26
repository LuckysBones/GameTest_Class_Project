#include "BoxThree.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void BoxThree::boxThreeSides() {
	cout << "\n\nYou See 3 parts to the boxs, which would you like to look at first?: ";
	B3_sideOne();
	B3_sideTwo();
	B3_sideThree();
}

void BoxThree::B3_sideOne() {
	cout << "\n\nYou look at one of the sides and see three objects\n\nwhat would you like to look at? ";
	vector<string>B3_sideOneOpt = {"Knob", "Lever", "Pannel" };
	cout << endl;
	for (size_t i = 0; i < 3; i++) {
		cout << "\n*" << B3_sideOneOpt[i];
		//cin >> sideChoice;
	}
}

void BoxThree::B3_sideTwo() {
	cout << "\n\nYou look at one of the sides and see three objects\n\nwhat would you like to look at? ";
	vector<string>B3_sideTwoOpt = { "Lever", "Speaker", "Microphone" };
	cout << endl;
	for (size_t i = 0; i < 3; i++) {
		cout << "\n*" << B3_sideTwoOpt[i];
		//cin >> sideChoice;
	}
}

void BoxThree::B3_sideThree() {
	cout << "\n\nYou look at one of the sides and see three objects\n\nwhat would you like to look at? ";
	vector<string>B3_sideThreeOpt = { "Un-lit Light", "Window", "Wires" };
	cout << endl;
	for (size_t i = 0; i < 3; i++) {
		cout << "\n*" << B3_sideThreeOpt[i];
		//cin >> sideChoice;
	}
}