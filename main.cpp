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
            std::string & seq = num;
            int k = boxerprint(seq, i);


        }

        boxer(std::string str,int num);


        for(int i=1;i<=num;i++)
        {
            for(int j=0;j<2*num+str.length();j++)
                cout<<"*";
            cout<<endl;

        }
    }
}
    cout << "Press 1 to continue: ";
    cin >> end;
    while(end==1);
    return 0;

}

