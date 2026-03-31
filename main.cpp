#include <iostream>
#include "Game.h"
#include "Statistics.h"
#include "DrawHangman.h"
#include "WordGeneration.h"

int main() {
    auto lang = "C++";
/*
    srand(time(0));

    WordGeneration generation;
    generation.LoadFromFile("words.txt");

    string word = generation.GetRandomWord();

    Game game;
    game.SetWord(word);
    game.Start();
*/

    srand(time(0));

    WordGeneration generation;
    generation.LoadFromFile("words.txt");

    cout << "\n--------- Добро пожаловать в игру Виселица ---------\n";
    int choice = 0;

    while (true) {
        cout << " 1. Начать игру " << endl;
        cout << " 2. Выйти " << endl;

        cout << "Ваш выбор: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string word = generation.GetRandomWord();

                Game game;
                game.SetWord(word);
                game.Start();
                break;
            }
            case 2:
                cout << "Вы закончили игру!" << endl;
                return 0;

            default:
                cout << "Неправильный выбор! Попробуйте еще раз! "<< endl;


        }
    }




    return 0;

}