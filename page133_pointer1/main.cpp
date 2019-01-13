/* 
 * File:   main.cpp
 * Author: xcoder
 *
 * Created on January 13, 2019, 6:56 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int balance, *balptr, value;
    balance = 6666;
    balptr = &balance;
    value = *balptr;
    cout << "Баланc равен: " << value << "\n";
    return 0;
}

