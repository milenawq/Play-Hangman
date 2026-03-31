//
// Created by Milena on 31.03.2026.
//
#include "Statistics.h"


Statistics::Statistics(string w, vector<char> lett, int att, double time)  : word(w), letters(lett), attempts(att), allTime(time) {}

void Statistics::ShowStatistics() {
    cout << "\n--------- Статистика игры ---------\n" << endl;
    cout << "Загаданое слово: " << word << endl;

    cout << "Введённые буквы: ";
    for (char c : letters) {
        cout << c << " ";
    }
    cout << endl;

    cout << "Количество попыток: " << attempts << endl;
    cout << "Количество времени (с): " << allTime << endl;

}
