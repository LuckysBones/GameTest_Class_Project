#include "BoxThree.h"
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

void BoxThree::boxThreeSides() {
	cout << "\n\nYou See 3 parts to the boxs,\n";
	while (userB3 == 'y') {
		cout << "\n Which side would you like to look at? : ";
		cin >> sideChoice;
		switch (sideChoice)
		{
		case 1:
			B3_sideOne();
			break;
		case 2:
			B3_sideTwo();
			break;
		case 3:
			B3_sideThree();
			break;
		default:
			break;
		}
		cout << "\n\nWhat side would you like to look at next[y/n]? ";
		cin >> userB3;
		system("CLS");
	}
}

void BoxThree::B3_sideOne() {
	cout << "\n\nYou look at one of the sides and see three objects\n\nwhat would you like to look at? ";
	vector<string>B3_sideOneOpt = {"Knob", "Lever", "Pannel"};
	cout << endl;
	for (size_t i = 0; i < 3; i++) {
		cout << "\n*" << B3_sideOneOpt[i];
		//cin >> sideChoice;
		//system("CLS");
	}

}

void BoxThree::B3_sideTwo() {
	cout << "\n\nYou look at one of the sides and see three objects\n\nwhat would you like to look at? ";
	vector<string>B3_sideTwoOpt = { "Lever", "Speaker", "Microphone"};
	cout << endl;
	for (size_t i = 0; i < 3; i++) {
		cout << "\n*" << B3_sideTwoOpt[i];
		//cin >> sideChoice;
		//system("CLS");
	}
}

void BoxThree::B3_sideThree() {
	cout << "\n\nYou look at one of the sides and see three objects\n\nwhat would you like to look at? ";
	vector<string>B3_sideThreeOpt = { "Un-lit Light", "Window", "Wires"};
	cout << endl;
	for (size_t i = 0; i < 3; i++) {
		cout << "\n*" << B3_sideThreeOpt[i];
		//cin >> sideChoice;
		//system("CLS");
	}
}