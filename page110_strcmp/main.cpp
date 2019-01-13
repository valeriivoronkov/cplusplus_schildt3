/* 
 * File:   main.cpp
 * Author: xcoder
 *
 * Created on January 13, 2019, 6:06 PM
 */

#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

bool checkPassword();

/*
 * 
 */
int main(int argc, char** argv) {
    if (checkPassword()) {
        cout << "Вход разрешен.\n";
    } else {
        cout << "В доступе отказано.\n";
    }
    return 0;
}

/*
 * Функция возвращает значение true, если пароль принят, и
 * значение false в противном случае.
*/
bool checkPassword(){
    char str[80];
    cout << "Введите пароль: ";
    gets(str);
    if(strcmp(str, "password")){ //	Строки различны.
        cout << "Пароль недействителен.\n";
        return false;
    }
    return true;
}