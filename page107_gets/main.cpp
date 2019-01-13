/*
 * Использование функции gets() для считывания строки с клавиатуры.
 */

/* 
 * File:   main.cpp
 * Author: xcoder
 *
 * Created on January 13, 2019, 4:55 PM
 */

#include <cstdlib>
#include <iostream>
#include <cstdio>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    char str[80];
    cout << "Введите строку: ";
    gets(str); // Считываем строку с клавиатуры.
    cout << "Вот ваша	строка: ";
    cout << str;
    return 0;
}

