#include "BoxOne.h"
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

void BoxOne::boxOneSides() {
	cout << "\n\nYou See 3 parts to the boxs,\n";
	while (userB1 == 'y') {
		cout << "\n Which side would you like to look at? : ";
		cin >> sideChoice;
		switch (sideChoice)
		{
		case 1:
			B1_sideOne();
			break;
		case 2:
			B1_sideTwo();
			break;
		case 3:
			B1_sideThree();
			break;
		default:
			break;
		}
		cout << "\n Which item would you like to try out : ";
		cin >> userB1;
		system("CLS");
	}
}

void BoxOne::B1_sideOne() {
	cout << "\n\nYou look at one of the sides and see three objects\n";
	cout <<"\nwhat would you like to look at? ";
	vector<string>B2_sideOneOpt = { "Knob", "Lever", "Pannel" };
	cout << endl;
	while (userB1 == 'y') {
		for (size_t i = 0; i < 3; i++) {
			cout << "\n*" << B2_sideOneOpt[i];
			//cin >> sideChoice;
		}
		cout << "\n Which item would you like to try out : ";
		cin >> sideChoice;
		switch (sideChoice)
		{
		case 1:
			cout << "\n\n Knob \n";
			cout << "Would you like to try the knob?";
			cin >> itemChoice;
			if (itemChoice == 'y') {
				cout << "";
			}
			break;
		case 2:
			cout << "\n\n Lever \n\n";
			cin >> itemChoice;
			if (itemChoice == 'y') {
				cout << "";
			}
			break;
		case 3:
			cout << "\n\n Pannel \n\n";
			cin >> itemChoice;
			if (itemChoice == 'y') {
				cout << "";
			}
			break;
		default:
			break;
		}
		cout << "\n\nWhat side would you like to look at next[y/n]? ";
		cin >> userB1;
		system("CLS");
	}
	system("CLS");
}

void BoxOne::B1_sideTwo() {
	cout << "\n\nYou look at one of the sides and see three objects\n\nwhat would you like to look at? ";
	vector<string>B2_sideTwoOpt = { "Lever", "Speaker", "Microphone" };
	while (userB1 == 'y') {
		for (size_t i = 0; i < 3; i++) {
			cout << "\n*" << B2_sideTwoOpt[i];
		}
		cout << "\n Which item would you like to try out : ";
		cin >> sideChoice;
		switch (sideChoice)
		{
		case 1:
			cout << "\n\n Lever \n";
			cin >> itemChoice;
			if (itemChoice == 'y') {
				cout << "";
			}
			break;
		case 2:
			cout << "\n\n Speaker \n";
			cin >> itemChoice;
			if (itemChoice == 'y') {
				cout << "";
			}
			break;
		case 3:
			cout << "\n\n Microphone \n";
			cin >> itemChoice;
			if (itemChoice == 'y') {
				cout << "";
			}
			break;
		default:
			break;
		}
		cout << "\n\nWhat side would you like to look at next[y/n]? ";
		cin >> userB1;
		system("CLS");
	}
	system("CLS");
}

void BoxOne::B1_sideThree() {
	cout << "\n\nYou look at one of the sides and see three objects\n\nwhat would you like to look at? ";
	vector<string>B2_sideThreeOpt = { "Light", "Window", "Wires" };
	while (userB1 == 'y') {
		for (size_t i = 0; i < 3; i++) {
			cout << "\n*" << B2_sideThreeOpt[i];
			//cin >> sideChoice;
		}
		cout << "\n Which item would you like to try out : ";
		cin >> sideChoice;
		switch (sideChoice)
		{
		case 1:
			cout << "\n\n Light \n\n";
			if (itemChoice == 'y') {
				cout << "";
			}
			break;
		case 2:
			cout << "\n\n Window \n\n";
			if (itemChoice == 'y') {
				cout << "";
			}
			break;
		case 3:
			cout << "\n\n Wires \n\n";
			if (itemChoice == 'y') {
				cout << "";
			}
			break;
		default:
			break;
		}
		cout << "\n\nWhat side would you like to look at next[y/n]? ";
		cin >> userB1;
		system("CLS");
	}
	system("CLS");
}