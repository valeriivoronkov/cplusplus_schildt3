/* 
 * File:   main.cpp
 * Author: xcoder
 *
 * Created on January 13, 2019, 5:57 PM
 */

#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    char x1[20], x2[40];
    strcpy(x1, "Hello, ");
    strcpy(x2, "fuc** dorks!");
    strcat(x1, x2);
    cout << x1;
    return 0;
}

