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
int boxer(std::string & seqq, int z){
    for(int i=0;i<z;i++)
        cout<<"*";
    cout<<seqq;
    for(int i=0;i<z;i++)
        cout<<"*";
    cout<<endl;
}