//
// Created by Milena on 30.03.2026.
//
#include "DrawHangman.h"


void DrawHangman::Draw(int mistakes) {
    if (mistakes == 0) {
        cout << "________ " << endl;
        cout << "|   |    " << endl;
        cout << "|        " << endl;
        cout << "|        " << endl;
        cout << "|        " << endl;
        cout << "|        " << endl;
    }
    if (mistakes == 1) {
        cout << "________ " << endl;
        cout << "|   |    " << endl;
        cout << "|   O    " << endl;
        cout << "|        " << endl;
        cout << "|        " << endl;
        cout << "|        " << endl;
    }
    if (mistakes == 2) {
        cout << "________ " << endl;
        cout << "|   |    " << endl;
        cout << "|   O    " << endl;
        cout << "|   |    " << endl;
        cout << "|        " << endl;
        cout << "|        " << endl;
    }
    if (mistakes == 3) {
        cout << "________ " << endl;
        cout << "|   |    " << endl;
        cout << "|   O    " << endl;
        cout << "|  /|    " << endl;
        cout << "|        " << endl;
        cout << "|        " << endl;
    }
    if (mistakes == 4) {
        cout << "________ " << endl;
        cout << "|   |    " << endl;
        cout << "|   O    " << endl;
        cout << "|  /|\\  " << endl;
        cout << "|        " << endl;
        cout << "|        " << endl;
    }
    if (mistakes == 5) {
        cout << "________ " << endl;
        cout << "|   |    " << endl;
        cout << "|   O    " << endl;
        cout << "|  /|\\  " << endl;
        cout << "|  /     " << endl;
        cout << "|        " << endl;
    }
    if (mistakes == 6) {
        cout << "________ " << endl;
        cout << "|   |    " << endl;
        cout << "|   O    " << endl;
        cout << "|  /|\\  " << endl;
        cout << "|  / \\    " << endl;
        cout << "|        " << endl;
    }
}
