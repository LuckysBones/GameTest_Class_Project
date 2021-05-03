#include "BoxTwo.h"
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

void BoxTwo::boxTwoSides() {
	cout << "\n\nYou See 3 parts to the boxs,\n";
	while (userB2 == 'y') {
		cout << "\n Which side would you like to look at? : ";
		cin >> sideChoice;
		switch (sideChoice)
		{
		case 1:
			B2_sideOne();
			break;
		case 2:
			B2_sideTwo();
			break;
		case 3:
			B2_sideThree();
			break;
		default:
			break;
		}
		cout << "\n\nWhat side would you like to look at next[y/n]? ";
		cin >> userB2;
		system("CLS");
	}
}

void BoxTwo::B2_sideOne() {
	cout << "\n\nYou look at one of the sides and see three objects\n\nwhat would you like to look at? ";
	vector<string>B2_sideOneOpt = { "Knob", "Lever", "Pannel" };
	cout << endl;
	while (userB2 == 'y') {
		for (size_t i = 0; i < 3; i++) {
			cout << "\n*" << B2_sideOneOpt[i];
			//cin >> sideChoice;
		}
		cout << "\n Which side would you like to look at? : ";
		cin >> sideChoice;
		switch (sideChoice)
		{
		case 1:
			cout << "\n\none\n\n";
			break;
		case 2:
			cout << "\n\ntwo\n\n";
			break;
		case 3:
			cout << "\n\nthree\n\n";
			break;
		default:
			break;
		}
		cout << "\n\nWhat side would you like to look at next[y/n]? ";
		cin >> userB2;
	}
	system("CLS");
}

void BoxTwo::B2_sideTwo() {
	cout << "\n\nYou look at one of the sides and see three objects\n\nwhat would you like to look at? ";
	vector<string>B2_sideTwoOpt = { "Lever", "Speaker", "Microphone" };
	while (userB2 == 'y') {
		for (size_t i = 0; i < 3; i++) {
			cout << "\n*" << B2_sideTwoOpt[i];
		}
		cout << "\n Which side would you like to look at? : ";
		cin >> sideChoice;
		switch (sideChoice)
		{
		case 1:
			cout << "\n\none\n\n";
			break;
		case 2:
			cout << "\n\ntwo\n\n";
			break;
		case 3:
			cout << "\n\nthree\n\n";
			break;
		default:
			break;
		}
		cout << "\n\nWhat side would you like to look at next[y/n]? ";
		cin >> userB2;
	}
	system("CLS");
}

void BoxTwo::B2_sideThree() {
	cout << "\n\nYou look at one of the sides and see three objects\n\nwhat would you like to look at? ";
	vector<string>B2_sideThreeOpt = { "Un-lit Light", "Window", "Wires" };
	cout << endl;
	while (userB2 == 'y') {
		for (size_t i = 0; i < 3; i++) {
			cout << "\n*" << B2_sideThreeOpt[i];
			//cin >> sideChoice;
		}
		cout << "\n Which side would you like to look at? : ";
		cin >> sideChoice;
		switch (sideChoice)
		{
		case 1:
			cout << "\n\none\n\n";
			break;
		case 2:
			cout << "\n\ntwo\n\n";
			break;
		case 3:
			cout << "\n\nthree\n\n";
			break;
		default:
			break;
		}
		cout << "\n\nWhat side would you like to look at next[y/n]? ";
		cin >> userB2;
	}
	system("CLS");
}