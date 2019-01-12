/*
 * Демонстрация возврата функциями значений.
 */

/* 
 * File:   main.cpp
 * Author: xcoder
 *
 * Created on January 12, 2019, 4:27 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int mul(int x, int y); //	Прототип	функции	mul().

/*
 * 
 */
int main(int argc, char** argv) {
    int answer;
    answer = mul(10, 11); // Присваивание значения, возвращаемого функцией.
    cout << "Ответ равен " << answer;
    return 0;
}

// Эта функция возвращает значение.

int mul(int x, int y) {
    return x * y; // Функция возвращает произведение х и у.
}