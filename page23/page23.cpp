/*
 * Эта программа преобразует галлоны в литры.
 */

/* 
 * File:   page23.cpp
 * Author: xcoder
 *
 * Created on November 5, 2018, 7:56 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int gallons, liters;
    cout << "Введите количество	галлонов: ";
    cin >> gallons; // Ввод данных от пользователя.
    liters = gallons * 4; // Преобразование в литры.
    cout << "Литров: "	<< liters;
    return 0;
}

