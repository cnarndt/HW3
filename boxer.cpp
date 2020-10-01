//
// Created by Clayton on 9/29/2020.
//


#include <iostream>
#include "boxer.h"
#include <string>
using std::string;
using std::cout;
using std::endl;
using std::cin;
int boxer(std::string str,int num){
    for(int i=0;i<num;i++)
        cout<<"*";
    cout<<str;
    for(int i=0;i<num;i++)
        cout<<"*";
    cout<<endl;
}