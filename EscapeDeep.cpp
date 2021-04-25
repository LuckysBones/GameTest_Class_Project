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

    void EscapeDeep::start() {
        run();
    }

    void EscapeDeep::run() {
        cout << "Escape the Deep - Run";
        intro();
        items();
    }

    void EscapeDeep::intro() {
        cout << "\n\nStory here, whats happening why are you suck under water";
    }

    void EscapeDeep::items() {
        cout << "\n\nThere's 3 items around you and one escape hatch, that seems to be locked";
        boxOneSides();
        boxTwoSides();
        boxThreeSides();

    }
}