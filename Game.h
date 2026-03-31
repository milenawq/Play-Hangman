//
// Created by Milena on 29.03.2026.
//

#ifndef HANGMAN_EXAM_GAME_H
#define HANGMAN_EXAM_GAME_H
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
using namespace std;
#include "DrawHangman.h"

class Game {
private:
    string word;
    string wordBoard;
    int mistakes = 0;
    int maxMistakes = 6;
    vector<char> letters;

    DrawHangman draw;

public:
    void SetWord(const string& w);
    void Show();
    void GuessLetter(char letter);
    bool IsWin();
    bool IsLose();
    void Start();


};

#endif //HANGMAN_EXAM_GAME_H