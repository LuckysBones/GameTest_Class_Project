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
		}
		cout << "\n Which side would you like to look at? : ";
		cin >> sideChoice;
		switch (sideChoice)
		{
		case 1:
			cout << "\n\nSwitch\n\n";
			if (B2_Switch == false) {
				B2_Switch = true;
				cout << "The Switch is now switched to the on positsion";
			}
			else if (B2_Switch == true) {
				B2_Switch = false;
				cout << "The Switch is now switched to the off positsion";
			}
			break;
		case 2:
			cout << "\n\nSmall Door\n\n";
			if (B2_Smdr == false) {
				B2_Smdr = true;
			}
			else if (B2_Smdr == true) {
				B2_Smdr = false;
			}

			break;
		case 3:
			cout << "\n\nWires\n\n";
			if (B2_Wire == false) {
				B2_Wire = true;
			}
			else if (B2_Wire == true) {
				B2_Wire = false;
			}
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
			cout << "\n\nGreen Light\n\n";
			if (B2_Green == false) {
				cout << "The Green Light has been turned on";
				B2_Green = true;
			}
			else if (B2_Green == true) {
				cout << "The Green Light has been turned off";
				B2_Green = false;
			}
			break;
		case 2:
			cout << "\n\nRed Light\n\n";
			if (B2_Red == false) {
				cout << "The Red Light has been turned on";
				B2_Red = true;
			}
			else if (B2_Red == true) {
				cout << "The Red Light has been turned off";
				B2_Red = false;
			}
			else if (B2_Red == true && B2_Blue == true) {
				cout << "The Red Light has been turned off";
			}
			break;
		case 3:
			cout << "\n\nBlue Light\n\n";
			if (B2_Blue == false) {
				cout << "The Blue Light has been turned on";
				B2_Blue = true;
			}
			else if (B2_Blue == true) {
				cout << "The Blue Light has been turned off";
				B2_Blue = false;
			}
			else if (B2_Red == true && B2_Blue == true) {
				cout << "The Blue Light has been turned on";
			}
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
			cout << "\n\nAn Opaque Window\n\n";
			if (B2_Red == true && B2_Blue == true) {
				cout << "You can barely see a Purple light through the window";
			}
			else
			{
				cout << "There is nothing to see here, no light's";
			}
			break;
		case 2:
			cout << "\n\nLever\n\n";
			//turn lever on once purple light on to turn speaker on
			break;
		case 3:
			cout << "\n\nSpeaker\n\n";
			//once the lever has been pulled turn speaker on
			break;
		default:
			break;
		}
		cout << "\n\nWhat side would you like to look at next[y/n]? ";
		cin >> userB2;
	}
	system("CLS");
}