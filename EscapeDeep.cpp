#include "EscapeDeep.h"
#include <iostream>

using namespace std;

namespace CSC234 {
    //Constructor
    void EscapeDeep::EscapeDeepGame()
    {
        cout << "Escape the Deep - Start";
    }

    EscapeDeep* EscapeDeep::makeGame() {
        return new EscapeDeep;
    }

    void EscapeDeep::start() {
        run();
    }

    void EscapeDeep::run() {
        cout << "Escape the Deep - Run";
    }
}