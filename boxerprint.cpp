//
// Created by Clayton on 9/29/2020.
//
#include <iostream>
#include "boxerprint.h"
using std::string;
using std::cout;
using std::endl;
using std::cin;
int boxerprint(){
    do{
        string str;
        cout<<"Enter a string: ";
        cin>>str;
        int num;
        cout<<"Enter number of layers: ";
        cin>>num;
        while(num<=0)
        {
            cout<<"Enter number of layers: ";
            cin>>num;
        }
        for(int i=1;i<=num;i++)
        {
            for(int j=0;j<2*num+str.length();j++) //creates the first layer of stars
                cout<<"*";
            cout<<endl;

        }
        //insert the string that the user insertts

      
        }



        return 0;


