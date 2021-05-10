#include "BoxOne.h"
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <windows.h>

using namespace std;

void BoxOne::boxOneSides() {
	while (mainChoice != 0) {
		system("CLS");
		cout << "\n\t\t\tBox One";
		printf("\n\n  --------------------------------------------------");
		cout << "\n\n You See 3 sides to the box,\n\n";
		cout << " 1 - Side One\n 2 - Side Two\n 3 - Side Three\n 4 - Check Box\n";
		cout << " 0 - Return";
		printf("\n\n  --------------------------------------------------\n");
		cout << "\n Which side would you like to look at? : ";
		cin >> mainChoice;
		switch (mainChoice)
		{
		case 1:
			system("CLS");
			B1_sideOne();
			break;
		case 2:
			system("CLS");
			B1_sideTwo();
			break;
		case 3:
			system("CLS");
			B1_sideThree();
			break;
		case 4:
			system("CLS");
			isBox_done();
		default:
			break;
		}
		resetChoice();
	}
	resetMainLoop();
}

void BoxOne::B1_sideOne() {
	while (sideChoice != 0) {
		cout << "\n\t\tBox One - Side One";
		printf("\n\n  --------------------------------------------------");
		cout << "\n\n You look at one of the sides and see three objects\n\n";
		vector<string>B1_sideOneOpt = { "Knob", "Lever", "Pannel" };
		for (size_t i = 0; i < 3; i++) {
			cout << " " << i + 1 << " - " << B1_sideOneOpt[i] << "\n";
		}
		cout << " 0 - Return";
		printf("\n\n  --------------------------------------------------\n");
		cout << "\n Which item would you like to try out : ";
		cin >> sideChoice;
		system("CLS");
		switch (sideChoice)
		{
		case 1:
			cout << "\n\n\t\t Knob \n\n";
			if (B1_lever == false) {
				cout << "\n The Knob rotates smoothly";
				B1_knob = false;
			}
			else if (B1_lever == true) {
				cout << "\n The Knob wont rotate any more";
				B1_knob = true;
			}
			break;
		case 2:
			cout << "\n\n Lever \n\n";
			cout << "\n Nothing seems to happen when you pull the Lever";
			break;
		case 3:
			cout << "\n\n Pannel \n\n";
			if (B1_knob == true) {
				if (pannel_ == false) 
				{
					cout << " After you open the pannel open you see ";
					cout << " picture of a purple light";
					pannel_ = true;
				}else if (pannel_ == true) 
				{
					cout << " With the pannel open you see ";
					cout << " picture of a purple light";
				}
			}
			else {
				cout << "\nAt this moment you can't open the pannel\n";
			}
			break;
		default:
			break;
		}
		printf("\n\n  --------------------------------------------------\n");
	}
}

void BoxOne::B1_sideTwo() {
	while (sideChoice != 0) {
		cout << "\n\t\tBox One - Side Two";
		printf("\n\n  --------------------------------------------------");
		cout << "\n\n You look at one of the sides and see three objects\n\n ";
		vector<string>B1_sideTwoOpt = { "Lever", "Speaker", "Microphone" };
		for (size_t i = 0; i < 3; i++) {
			cout << " " << i + 1 << " - " << B1_sideTwoOpt[i] << "\n";
		}
		cout << " 0 - Return";
		printf("\n\n  --------------------------------------------------\n");
		cout << "\n Which item would you like to try out : ";
		cin >> sideChoice;
		system("CLS");
		switch (sideChoice)
		{
		case 1:
			cout << "\n\n\t\t\tLever \n";
			if (B1_lever == false) {
				cout << "You Pulled the Lever you heard a solid click";
				B1_lever = true;
			}
			else if (B1_lever == true) {
				cout << "You Pulled the Lever you heard a soft click";
				B1_lever = false;
			}
			break;
		case 2:
			cout << "\n\n Speaker \n";
			if (B1_wire == true) {
				cout << "The Speaker is " << "making noise" << endl;
			}
			else if (B1_wire == false) {
				cout << "The Speaker is " << "not making noise" << endl;
			}
			else if (B1_wire == true && B1_mic == true) {
				cout << "The Speaker is making a different noise than before";
				B1_done = true;

			}
			break;
		case 3:
			cout << "\n\n Microphone \n";
			if (B1_wire == true) {
				cout << "You Speak into the Microphone\n";
				cout << "A different noise started from somewhere\n\n";
			}
			else if (B1_wire == false) {
				cout << "You Speak into the Microphone\n";
				cout << "As far as you can tell nothing changed\n\n";
				B1_mic = true;
			}
			break;
		default:
			break;
		}
		printf("\n\n  --------------------------------------------------\n");
	}
}

void BoxOne::B1_sideThree() {
	while (sideChoice != 0) {
		cout << "\n\t\tBox One - Side Three";
		printf("\n\n  --------------------------------------------------");
		cout << "\n\nYou look at one of the sides and see three objects\n\n";
		vector<string>B2_sideThreeOpt = { "Light", "Window", "Wires" };
		for (size_t i = 0; i < 3; i++) {
			cout << " " << i + 1 << B2_sideThreeOpt[i] << "\n";
		}
		cout << " 0 - Return";
		cout << "\n Which item would you like to try out : ";
		cin >> sideChoice;
		system("CLS");
		switch (sideChoice)
		{
		case 1:
			cout << "\n\n Light \n\n";
			if (B1_light != false) {
				cout << "The Light is now" << " lit" << endl;
			}
			else if (B1_light != true) {
				cout << "The Light is now" << " Un-lit" << endl;
			}
			break;
		case 2:
			cout << "\n\n Window \n\n";
			if (B1_lever == false)
			{
				cout << "You see a button though the window\n";
				cout << "Currently there isn't anything you can do with the button\n\n";
			}
			else if (B1_lever == true) {
				cout << "The Window seems to be open now\n";
				cout << "You were able to press the button\n\n";
			}
			break;
		case 3:
			cout << "\n\n Wires \n\n";
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
			break;
		default:
			break;
		}
		printf("\n\n  --------------------------------------------------\n");
	}
}



//knob
//light
//B1_done

void BoxOne::isBox_done() {
	if (B1_light == true && B1_knob == true && B1_done == true) {
		cout << "You have finished Box One\n";
		BoxOneDone = true;
	}
	else if (B1_light == false || B1_knob == true && B1_done == true) {
		cout << "There is still more to be done with Box One\n\n";
	}
	else {
		cout << "You have found anything yet?\nWhere you going?\n\n";
	}
	Sleep(5000);
}