#include<iostream>
using namespace std ;

int main () {
    // Explicit typecasting 

    // Double to Int 
    double pi = 3.14159265 ;
    int intpi = (int)pi ;
    cout << intpi << endl;

    // float to char 
    float floatingnumber = 65.35 ;
    char charValue = (char)floatingnumber ;
    cout << charValue << endl;

    // int to float
    int a = 10 ;
    int b = 3.0 ;

    float c = a / ((float)b) ;
    cout << c << endl;
}