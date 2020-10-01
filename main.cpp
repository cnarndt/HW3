//Clayton Arndt
//Homework 3
//9/29/20
//CS201

#include<iostream>
#include "boxerprint.h"
using std::string;
using std::cout;
using std::endl;
using std::cin;
int main(){
    int end=1;
    boxerprint();
    cout << "Press 1 to continue: ";
    cin >> end;
    while(end==1);
    return 0;

}

