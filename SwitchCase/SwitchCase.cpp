#include <iostream>
using namespace std ;

int main () {

    float a , b ;
    cout << " Enter any two numbers : " << endl;
    cin >> a >> b ;

    int operation ;
    cout << " Enter operation number :" << endl << "0. Addition" << endl << "1. Subtraction" << endl << "2. Multiplication" << endl << "3. Divide" << endl;
    cin >> operation ;

    float ans = 0 ;

    switch (operation)
    {
    case 0:
        ans = a + b ; 
        break;
    case 1:
        ans = a - b ;
        break;
    case 2:
        ans = a * b ;
        break;
    case 3:
        ans = a/b ;
        break;            
    default:
        cout << "Invalid operation" << endl;
        return 0;
    }

    cout << "Answer :" << ans << endl;
    return 0 ;
}