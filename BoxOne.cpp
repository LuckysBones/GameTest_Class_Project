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
		cout << "\n Would you like to continue looking : ";
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
			cout << "\n\n*" << B2_sideOneOpt[i];
		}
		cout << "\n Which item would you like to try out : ";
		cin >> sideChoice;
		switch (sideChoice)
		{
		case 1:
			cout << "\n\n\t\t Knob \n\n";
			cout << "Would you like to try the Knob? ";
			cin >> itemChoice;
			if (itemChoice == 'y') {
				if (B1_lever == false) {
					cout << "\nThe Knob rotates smoothly";
					B1_knob = false;
				}
				else if (B1_lever == true) {
					cout << "\nThe Knob wont rotate any more";
					B1_knob = true;
				}
			}
			break;
		case 2:
			cout << "\n\n Lever \n\n";
			cout << "Would you like to try the Lever? ";
			cin >> itemChoice;
			if (itemChoice == 'y') {
				cout << "\nNothing seems to happen when you pull the Lever";
			}
			break;
		case 3:
			cout << "\n\n Pannel \n\n";
			cout << "Would you like to try the Pannel? ";
			cin >> itemChoice;
			if (itemChoice == 'y' && B1_knob == true) {
				if (pannel_ == false) 
				{
					cout << "After you open the pannel open you see ";
					cout << "picture of a purple light";
					pannel_ = true;
				}else if (pannel_ == true) 
				{
					cout << "With the pannel open you see ";
					cout << "picture of a purple light";
				}
			}
			else {
				cout << "\nAt this moment you can't open the pannel\n";
			}
			break;
		default:
			break;
		}
		cout << "\n\nWould you like to continue looking [y/n]? ";
		cin >> userB1;
	}
	system("CLS");
}

void BoxOne::B1_sideTwo() {
	cout << "\n\nYou look at one of the sides and see three objects\n\nwhat would you like to look at? ";
	vector<string>B2_sideTwoOpt = { "Lever", "Speaker", "Microphone" };
	while (userB1 == 'y') {
		for (size_t i = 0; i < 3; i++) {
			cout << "\n\n*" << B2_sideTwoOpt[i];
		}
		cout << "\n Which item would you like to try out : ";
		cin >> sideChoice;
		switch (sideChoice)
		{
		case 1:
			cout << "\n\n\t\t\tLever \n";
			cin >> itemChoice;
			if (itemChoice == 'y') {
				if (B1_lever == false) {
					cout << "When you Pulled the Lever you heard a solid click";
					B1_lever = true;
				}
				else if (B1_lever == true) {
					cout << "When you Pulled the Lever you heard a soft click";
					B1_lever = false;
				}
				
			}
			break;
		case 2:
			cout << "\n\n Speaker \n";
			cin >> itemChoice;
			if (itemChoice == 'y') {
				if (B1_wire == true) {
					cout << "The Speaker is " << "making noise" << endl;
				}
				else if (B1_wire == false){
					cout << "The Speaker is " << "not making noise" << endl;
				}
				else if (B1_wire == true && B1_mic == true) {
					cout << "The Speaker is making a different noise than before";
					B1_done = true;

				}
			}
			break;
		case 3:
			cout << "\n\n Microphone \n";
			cin >> itemChoice;
			if (itemChoice == 'y') {
				if (B1_wire == true) {
					cout << "You Speak into the Microphone\n";
					cout << "A different noise started from somewhere\n\n";
				}
				else if (B1_wire == false) {
					cout << "You Speak into the Microphone\n";
					cout << "As far as you can tell nothing changed\n\n";
					B1_mic = true;
				}
			}
			break;
		default:
			break;
		}
		cout << "\n\nWould you like to continue looking[y/n]? ";
		cin >> userB1;
	}
	system("CLS");
}

void BoxOne::B1_sideThree() {
	cout << "\n\nYou look at one of the sides and see three objects\n\nwhat would you like to look at? ";
	vector<string>B2_sideThreeOpt = { "Light", "Window", "Wires" };
	while (userB1 == 'y') {
		for (size_t i = 0; i < 3; i++) {
			cout << "\n\n*" << B2_sideThreeOpt[i];
		}
		cout << "\n Which item would you like to try out : ";
		cin >> sideChoice;
		switch (sideChoice)
		{
		case 1:
			cout << "\n\n Light \n\n";
			cin >> itemChoice;
			if (itemChoice == 'y') {
				if (B1_light != false) {
					cout << "The Light is now" << " lit" << endl;
				}
				else if(B1_light != true){
					cout << "The Light is now" << " Un-lit" << endl;
				}
			}
			break;
		case 2:
			cout << "\n\n Window \n\n";
			cin >> itemChoice;
			if (itemChoice == 'y') {
				if (B1_lever == false)
				{
					cout << "You see a button though the window\n";
					cout << "Currently there isn't anything you can do with the button\n\n";
				}
				else if (B1_lever == true) {
					cout << "The Window seems to be open now\n";
					cout << "Theres a button would you like to press it\n\n";
					cin >> itemChoice;
					if (itemChoice == 'y') {
						cout << "You pushed the button and hear a Knock";
					} 
				}
			}
			break;
		case 3:
			cout << "\n\n Wires \n\n";
			cin >> itemChoice;
			if (itemChoice == 'y') {
				if (B1_wire == true) {
					cout << "You already cut the Wire and you still hear the noise\n";
					B1_wire = true;
					B1_light = true;
				}
				else if (B1_wire == false) {
					cout << "After cutting the wires you hear a noise\n";
					B1_wire = true;
					B1_light = true;
				}
			}

			break;
		default:
			break;
		}
		cout << "\n\nWould you like to continue looking[y/n]? ";
		cin >> userB1;
	}
	system("CLS");
}



//knob
//light
//B1_done