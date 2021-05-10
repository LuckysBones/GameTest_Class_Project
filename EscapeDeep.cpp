#include "EscapeDeep.h"
#include <iostream>

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
        //cout << "Escape the Deep - Run";
        intro();
        items();
    }

    // Nothing more than a quick intro about the game
    void EscapeDeep::intro() {
        cout << "\n\nStory here, whats happening why are you suck under water";
    }

    //Takes user input to enter a box or check for end game
    void EscapeDeep::items() {
        printf("\n  --------------------------------------------------\n");
        cout << "\n\nThere's 2 Boxes around you and one escape hatch, that seems to be locked";
        cout << "\n\nWhich box would you like to look at? ";
        do {
            cin >> boxChoice;
            switch (boxChoice)
            {
            case 1:
                boxOneSides();
                break;
            case 2:
                boxTwoSides();
                break;
            case 3:
                EscapeHatch();
                break;
            default:
                break;
            }

            cout << "\n\nThere's still more to do, which box would you like to look at next? ";
        } while (boxGame != true);
    }


    //Post-conditional: Tells the user with box they have finished, 
    // if user has finished both boxes, the game with finish. 
    void EscapeDeep::EscapeHatch() {
        if (B2Done == true && BoxOneDone == true) {
            cout << "Done Done";
            boxGame = true;
        }else if (B2Done == true && BoxOneDone != true) {
            cout << "Done Not-Done";
        }
        else if (B2Done != true && BoxOneDone == true) {
            cout << "Not-Done Done";
        }
        else {
            cout << "Not Done";
        }
    }
}


