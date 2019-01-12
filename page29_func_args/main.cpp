/*
 * Простая	 программа, которая	демонстрирует использование функции mul().
 */

/* 
 * File:   main.cpp
 * Author: xcoder
 *
 * Created on January 12, 2019, 4:16 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void mul(int x, int y); // Прототип функции	mul().

/*
 * 
 */
int main(int argc, char** argv) {
    mul(13, 23);
    mul(15, 46);
    mul(28, 19);
    return 0;
}

void mul(int x, int y) {
    cout << x * y << "	";
}