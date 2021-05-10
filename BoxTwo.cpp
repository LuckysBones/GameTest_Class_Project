#include "BoxTwo.h"
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <windows.h>

using namespace std;

void BoxTwo::boxTwoSides() {
	while (mainChoice != 0) {
		system("CLS");
		cout << "\n\t\t\tBox Two";
		printf("\n\n  --------------------------------------------------");
		cout << "\n\n You See 3 sides to the box,\n\n";
		cout << "1 - Side One\n2 - Side Two\n3 - Side Three\n4 - Box Check\n";
		cout << "0 - Return";
		printf("\n\n  --------------------------------------------------\n");
		cout << "\n Which side would you like to look at? : ";
		cin >> mainChoice;
		switch (mainChoice)
		{
		case 1:
			system("CLS");
			B2_sideOne();
			break;
		case 2:
			system("CLS");
			B2_sideTwo();
			break;
		case 3:
			system("CLS");
			B2_sideThree();
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

void BoxTwo::B2_sideOne() {
	while (sideChoice != 0) {
		cout << "\n\t\tBox Two - Side One";
		printf("\n\n  --------------------------------------------------");
		cout << "\n\n You look at one of the sides and see three objects\n\n";
		vector<string>B2_sideOneOpt = { "Switch", "Small Door", "Wires" };
		for (size_t i = 0; i < 3; i++) {
			cout << i + 1 << " - " << B2_sideOneOpt[i] << "\n";
		}
		cout << "0 - Return";
		printf("\n\n  --------------------------------------------------\n");
		cout << "\n Which side would you like to look at? : ";
		cin >> sideChoice;
		system("CLS");
		switch (sideChoice)
		{
		case 1:
			cout << "\n\n\t\tSwitch\n\n";
			if (B2_Switch == false) {
				B2_Switch = true;
				cout << "The Switch is now switched to the on positsion";
				B2_Screen = true;
			}
			else if (B2_Switch == true) {
				B2_Switch = false;
				cout << "The Switch is now switched to the off positsion";
				B2_Screen = false;
			}
			break;
		case 2:
			cout << "\n\n\t\tSmall Door\n\n";
			cout << "Would you like to try to open the Small purple Door?";
			if (B2_Smdr == false) {
				cout << "1\n";
			}
			else if (B2_Smdr == true) {
				B2_Box2done = true;
				cout << "2\n";
			}

			break;
		case 3:
			cout << "\n\n\t\t Wires \n\n";
			//if ( == 'y') {
				if (B2_Wire == true) {
					cout << "You already cut the Wire\n";
					B2_Wire = true;
				}
				else if (B2_Wire == false) {
					cout << "After cutting the wires nothing seems to change\n";
					B2_Wire = true;
				}
			break;
		default:
			break;
		}
		printf("\n\n  --------------------------------------------------\n");
	}
}

void BoxTwo::B2_sideTwo() {
	while (sideChoice != 0) {
		cout << "\n\t\tBox Two - Side Two";
		printf("\n\n  --------------------------------------------------");
		cout << "\n\n You look at one of the sides and see three objects\n\n";
		vector<string>B2_sideTwoOpt = { "Green Light", "Red Light", "Blue Light" };
		for (size_t i = 0; i < 3; i++) {
			cout << i + 1 << " - " << B2_sideTwoOpt[i] << "\n";
		}
		cout << "0 - Return";
		printf("\n\n  --------------------------------------------------\n");
		cout << "\n Which side would you like to look at? : ";
		cin >> sideChoice;
		system("CLS");
		switch (sideChoice)
		{
		case 1:
			cout << "\n\n\t\tGreen Light\n";
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
			cout << "\n\n\t\tRed Light\n";
			if (B2_Red == false) {
				cout << "The Red Light has been turned on";
				B2_Red = true;
			}
			else if (B2_Red == true) {
				cout << "The Red Light has been turned off";
				B2_Red = false;
			}
			else if (B2_Red == true && B2_Blue == true) {
				cout << "The Red Light and Blue Light turned off";
				B2_Red = false;
				B2_Blue = false;
				B2_Lights = true;
			}
			break;
		case 3:
			cout << "\n\n\t\tBlue Light\n";
			printf("\n  --------------------------------------------------\n");
			if (B2_Blue == false) {
				cout << "The Blue Light has been turned on";
				B2_Blue = true;
			}
			else if (B2_Blue == true) {
				cout << "The Blue Light has been turned off";
				B2_Blue = false;
			}
			else if (B2_Red == true && B2_Blue == true) {
				cout << "The Red Light and Blue Light turned off";
				B2_Red = false;
				B2_Blue = false;
				B2_Lights = true;
			}
			break;
		default:
			break;
		}
		printf("\n\n  --------------------------------------------------\n");
	}
}

void BoxTwo::B2_sideThree() {
	while (sideChoice != 0) {
		cout << "\n\t\tBox Two - Side Three";
		printf("\n\n  --------------------------------------------------");
		cout << "\n\n You look at one of the sides and see three objects\n\n";
		vector<string>B2_sideThreeOpt = { "An Opaque Window", "Lever", "Screen" };
		cout << endl;
		for (size_t i = 0; i < 3; i++) {
			cout << i + 1 << " - " << B2_sideThreeOpt[i] << "\n";
		}
		cout << "0 - Return";
		printf("\n\n  --------------------------------------------------\n");
		cout << "\n Which side would you like to look at? : ";
		cin >> sideChoice;
		system("CLS");
		switch (sideChoice)
		{
		case 1:
			cout << "\n\n\t\tAn Opaque Window\n";
			printf("\n  --------------------------------------------------\n");
			if (B2_Red == true && B2_Blue == true) {
				cout << "You can barely see a Purple light through the window";
				cout << "You can kind of see some letters spelling out door";
				B2_Smdr = true;
			}else{
				cout << "There is nothing to see here, no light\n";
			}
			break;
		case 2:
			cout << "\n\n\t\tLever\n";
			printf("\n  --------------------------------------------------\n");
			cout << "This lever feels odd, like it's not even real";
			break;
		case 3:
			cout << "\n\n\t\tScreen\n";
			printf("\n  --------------------------------------------------\n");
			if (B2_Screen == true) {
				cout << "The Screen seems to have turned off at some point";
			}
			else if (B2_Screen == false) {
				cout << "The screen is currently a bright white";
			}
			break;
		default:
			break;
		}
		printf("\n\n  --------------------------------------------------\n");
	}
}

void BoxTwo::isBox_done() {
	if (B2_Lights == true && B2_Screen == true && B2_Box2done == true) {
		cout << "You have finished Box Two\n";
	}
	else if (B2_Lights == false || B2_Screen == false || B2_Box2done == false) {
		cout << "There is still more to be done with Box Two\n\n";
	}
	else {
		cout << "You have found anything yet?\nWhere you going?\n\n";
	}
	Sleep(5000);
}