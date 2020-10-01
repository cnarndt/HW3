//Clayton Arndt
//Homework 3
//9/29/20
//CS201

#include<iostream>
#include "boxerprint.h"
#include "boxer.h"
using std::string;
using std::cout;
using std::endl;
using std::cin;
int main(){
    int end=1;
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
            std::string seq = str;
            int k = boxerprint(seq, i);

        }
        for(int i=0;i<num;i++)
            cout<<"*";
        cout<<str;
        for(int i=0;i<num;i++)
            cout<<"*";
        cout<<endl;

        for(int i=1;i<=num;i++)
        {
            std::string seq = str;
            int k = boxerprint(seq, i);

        }
        cout << "Press 1 to continue: ";
        cin >> end;
    }while(end==1);
    return 0;

}

