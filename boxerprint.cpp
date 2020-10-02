//
// Created by Clayton on 9/29/2020.
//

#include <iostream>
#include "boxerprint.h"
#include <string>
using std::string;
using std::cout;
using std::endl;
using std::cin;

void boxerprint(const string &seq,const int& k) {

    for(int i=1;i<=k;i++)
    {
        for(int j=0;j<2*k+seq.length();j++)
            cout<<"*";
        cout<<endl;

    }
    for(int i=0;i<k;i++)
        cout<<"*";
    cout<<seq;
    for(int i=0;i<k;i++)
        cout<<"*";
    cout<<endl;
    for(int i=1;i<=k;i++)
    {
        for(int j=0;j<2*k+seq.length();j++)
            cout<<"*";
        cout<<endl;

    }
}
