/*
 * Эта программа содержит две	функции:	main() и myfunc().
 */

/* 
 * File:   page27.cpp
 * Author: xcoder
 *
 * Created on November 5, 2018, 8:43 PM
 */

#include <iostream>

using namespace std;

void myfunc(); // прототип функции myfunc()

/*
 * 
 */
int main(int argc, char** argv) {
    cout << "В функции main().";
    cout << "";
    myfunc(); // Вызываем функцию myfunc().
    cout << "Снова в функции main().";
    cout << "";
    return 0;
}

void myfunc() {
    cout << " В функции myfunc(). ";
    cout << "";
}

