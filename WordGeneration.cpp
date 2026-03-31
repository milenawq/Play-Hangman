//
// Created by Milena on 30.03.2026.
//
#include "WordGeneration.h"


string WordGeneration::DecryptWord(const string &word) {
    string decrypted = word;
    for (int i = 0; i < decrypted.length(); i++) {
        decrypted[i] = decrypted[i] - 2;
    }
    return decrypted;
}

string WordGeneration::GetRandomWord() {
    if (words.empty()) {
        cout << "В списке нет слов! " << endl;
        return "";
    }

    int index = rand() % words.size();
    string word = words[index];
    word = DecryptWord(word);
    return word;
}

void WordGeneration::LoadFromFile(const string &filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Ошибка! Не удалось открыть файл " << filename << endl;
        exit(1);
    }
    string word;
    while (file >> word) {
        while (!word.empty() && (word.back() == '\n'))
            word.pop_back();
        words.push_back(word);
    }
    file.close();

}
