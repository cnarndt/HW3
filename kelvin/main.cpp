//Clayton Arndt
//HW3 kelvin

#include <iostream> // did not have the iostream
using std::cin;
using std::cout;
using std::endl;

double ctok(double c) //converts Celsius to Kelvin
{
    double k = c + 273.15; // k needs to be doubled not classified as an int
    return k; // int is not domething that can be returned it needs to be k
}

int main()
{

        double c = 0; //Celsius variable
        cin >> c; //reads in the Celsius temperature and not some random int that has not been defined
    if(c<-273.15) {
        cout<<" This input is not valid.";
    }
       else
    {
        double k = ctok(c); //converts the temperature which before had the quotes which was incorrect

        cout << k << endl; //prints out the temperature
    }


}