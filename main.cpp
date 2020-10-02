#include<iostream>
#include "boxerprint.h"
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(){
    int ch=1;
    do{
        string str;

        cout<<"Enter a string: ";
        cin>>str;
        int num;
        cout<<endl<<"Enter number of layers:";
        cin>>num;
        while(num<=0)
        {
            cout<<endl<<"Enter number of layers:";
            cin>>num;
        }
        boxerprint(str, num);
        cout<<"Press 1 to continue: ";
        cin>>ch;
    }while(ch==1);
    return 0;

}