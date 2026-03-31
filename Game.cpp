//
// Created by Milena on 29.03.2026.
//
#include "Game.h"
#include "Statistics.h"


void Game::SetWord(const string& w) {
    word = w;
    wordBoard = string(word.length(), '_');
    cout << endl;
}

void Game::Show() {
    draw.Draw(mistakes);

    for (char c : wordBoard)
        cout << c << " ";
    cout << endl;

    cout << "Использованные буквы: ";
    for (char c : letters) {
        cout << c << " ";
    }
    cout << endl;

    cout << "Ошибки: " << mistakes << "/" << maxMistakes << endl;
}

void Game::GuessLetter(char letter) {
    for (char c : letters) {
        if (c == letter) {
            cout << "Вы уже вводили эту букву!\n";
            return;
        }
    }

    bool found = false;
    for (int i = 0; i < word.length(); i++) {
        if (word[i] == letter) {
            wordBoard[i] = letter;
            found = true;
            cout << "Правильная буква! " << endl;
        }
    }

    if (!found) {
        mistakes++;
        cout << "Неправильная буква!\n";
    }

    letters.push_back(letter);

}

bool Game::IsWin() {
    return wordBoard == word;
}

bool Game::IsLose() {
    return mistakes >= maxMistakes;
}

void Game::Start() {
    time_t startTime = time(0);

    char letter;

    while (!IsWin() && !IsLose()) {
        Show();

        cout << "Введите букву: ";
        cin >> letter;

        GuessLetter(letter);
    }

    time_t endTime = time(0);
    double allTime = difftime(endTime, startTime);

    if (IsWin()) {
        cout << "Вы выиграли!\n";
    } else {
        cout << "Вы проиграли!\n";
        draw.Draw(mistakes);
    }

    Statistics stat(word, letters, letters.size(), allTime);
    stat.ShowStatistics();

}
