/*
 * Программа "Угадай магическое число": последняя	версия.
 */

/* 
 * File:   main.cpp
 * Author: xcoder
 *
 * Created on January 13, 2019, 12:49 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void play(int mus);

/*
 * 
 */
int main(int argc, char** argv) {
    int option;
    int magic;
    magic = rand();
    do {
        cout << "1. Получить новое магическое число\n";
        cout << "2. Сыграть\n";
        cout << "3. Выйти из программы\n";
        do {
            cout << "Введите свой вариант: ";
            cin >> option;
        } while (option < 1 || option > 3);
        switch (option) {
            case 1:
                magic = rand();
                break;
            case 2:
                play(magic);
                break;
            case 3:
                cout << "До свидания	!\n";
                break;
        }
    }    while (option != 3);
    return 0;
}

// Сыграем	в игру.

void play(int m) {
    int x;
    for (int t = 0; t < 100; t++) {
        cout << "Угадайте магическое число:	";
        cin >> x;
        if (x == m) {
            cout << "** Правильно **\n";
            return;
        } else {
            if (x < m) {
                cout << "Маловато.\n";
            } else {
                cout << "Многовато.\n";
            }
        }
    }
    cout << "Вы использовали все шансы угадать число. " << "Попытайтесь снова.\n";
}