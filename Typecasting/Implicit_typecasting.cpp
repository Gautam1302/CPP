#include<iostream>
using namespace std ;

int main () {
    // Implicit typecasting 

    // int to float
    int num1 = 10 ;   // implicit conversion of num1 from int to float
    float num2 = 5.5 ;
    float num = num1 + num2 ;
    cout << num << endl;

    // char to int 
    char ch = 'A' ;
    int a = ch + 1 ; // implicit conversion of ch from char to int 
    cout << a << endl;

    // int to char 
    int a1 = 97 ;
    char ch1 = a1 ; // implicit conversion from int to char 
    cout << ch1 << endl;
}