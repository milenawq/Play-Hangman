//
// Created by Milena on 29.03.2026.
//

#ifndef HANGMAN_EXAM_WORDGENERATION_H
#define HANGMAN_EXAM_WORDGENERATION_H
#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

class WordGeneration {
private:
    vector<string> words;
    string DecryptWord(const string& word);

public:
    string GetRandomWord();
    void LoadFromFile(const string& filename);

};

#endif //HANGMAN_EXAM_WORDGENERATION_H