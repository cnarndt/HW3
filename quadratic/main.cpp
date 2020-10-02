//Clayton Arndt
//HW3
//9/30/20
//CS201

#include<iostream>

#include<cmath>

using std::endl;
using std::cout;
using std::cin;


int main()

{

    int a,b,c;

    cout << "Enter values of a:" ;

    cin >> a;

    cout << "Enter values of b:";

    cin>>b;

    cout << "Enter values of c:";

    cin>>c;

    cout << endl;

    double x =( -b + sqrt(b*b-4*a*c)/(2*a));

    cout << " root is given by " << x << endl;

    return 0;

}