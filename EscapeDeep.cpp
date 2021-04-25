#include "EscapeDeep.h"
#include <iostream>

//using namespace std;

namespace CSC234 {
    //Constructor
    void EscapeDeep::EscapeDeepGame()
    {
        cout << "Escape the Deep - Start\n";
    }

    EscapeDeep* EscapeDeep::makeGame() {
        return new EscapeDeep;
    }
    //Pre-Condition - user or program runs the start function
    //Post-Condition - the function will start the private run function
        
    void EscapeDeep::start() {
        run();
    }
    //Pre-Condition - the main running function for the game "Escape the Deep"
    //Post-Condition - the run function will start the game and run the associated functions
    void EscapeDeep::run() {
        cout << "Escape the Deep - Run";
        intro();
        items();
    }

    void EscapeDeep::intro() {
        cout << "\n\nStory here, whats happening why are you suck under water";
    }

    void EscapeDeep::items() {
        cout << "\n\nThere's 3 items around you and one escape hatch, that seems to be locked\n\n";

        cout << "Which box would you like to look at? ";
        cin >> boxChoice;

        do {
            switch (boxChoice)
            {
            case 1:
                boxOneSides();
                break;
            case 2:
                boxTwoSides();
                break;
            case 3:
                boxThreeSides();
                break;
            default:
                cout << "There's still more to do, which box would you like to look at next? ";
                cin >> boxChoice;
                boxGame = true;
                break;
            }
            cout << "There's still more to do, which box would you like to look at next? ";
            cin >> boxChoice;
        } while (boxGame != true);
    }
}