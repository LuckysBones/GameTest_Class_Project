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
	while (userB3 == 'y') {
		for (size_t i = 0; i < 3; i++) {
			cout << "\n*" << B3_sideOneOpt[i];
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
		cin >> userB3;
	}
	system("CLS");
}

void BoxThree::B3_sideTwo() {
	cout << "\n\nYou look at one of the sides and see three objects\n\nwhat would you like to look at? ";
	vector<string>B3_sideTwoOpt = { "Lever", "Speaker", "Microphone"};
	while (userB3 == 'y') {
		for (size_t i = 0; i < 3; i++) {
			cout << "\n*" << B3_sideTwoOpt[i];
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
		cin >> userB3;
	}
	system("CLS");
}

void BoxThree::B3_sideThree() {
	cout << "\n\nYou look at one of the sides and see three objects\n\nwhat would you like to look at? ";
	vector<string>B3_sideThreeOpt = { "Un-lit Light", "Window", "Wires"};
	cout << endl;
	while (userB3 == 'y') {
		for (size_t i = 0; i < 3; i++) {
			cout << "\n*" << B3_sideThreeOpt[i];
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
		cin >> userB3;
	}
	system("CLS");
}