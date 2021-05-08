#include <iostream>
#include <windows.h>
#include "Casino.h"
using namespace std;

using namespace CSC234;
int main() {
	string Choice = "Escape the Deep";

		cout << "Welcome to the Wolf Casino.  You have chosen to play: " << Choice << std::endl;
		cout << "Getting game ready." << endl;
		Casino::play(Choice); //static function call
}
