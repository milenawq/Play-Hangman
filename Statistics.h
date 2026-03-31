//
// Created by Milena on 29.03.2026.
//

#ifndef HANGMAN_EXAM_STATISTICS_H
#define HANGMAN_EXAM_STATISTICS_H
#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Statistics {
private:
    string word;
    vector<char> letters;
    int attempts;
    double allTime;
public:
    Statistics(string w, vector<char> lett, int att, double time);
    void ShowStatistics();
};

#endif //HANGMAN_EXAM_STATISTICS_H