/*
 * Эта программа демонстрирует различие между signed- и
 * unsigned-значениями целочисленного типа.
 */

/* 
 * File:   main.cpp
 * Author: xcoder
 *
 * Created on January 12, 2019, 6:32 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    short int i; // короткое int-значение со знаком
    short unsigned int j; // короткое int-значение без знака
    j = 60000;
    i = j;
    cout << "i with sign = " << i << "\n" << "j is unsigned = " << j;
    return 0;
}

