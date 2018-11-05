/*
 * Эта программа преобразует галлоны в литры с помощью чисел с плавающей точкой.
 */

/* 
 * File:   page25.cpp
 * Author: xcoder
 *
 * Created on November 5, 2018, 8:23 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    double gallons, liters;
    cout << "Введите количество	галлонов: ";
    cin >> gallons; // Ввод данных от пользователя.
    liters = gallons * 3.7854; // Преобразование в литры.
    cout << "Литров: " << liters;
    return 0;
}

