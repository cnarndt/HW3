//
// Created by Clayton on 9/29/2020.
//
#include "boxerprint.h"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
using std::cin;
int boxerprint(std::string seq, int k) {

    for (int j = 0; j < 2 * k + seq.length(); j++)
        cout << "*";
    cout << endl;
}