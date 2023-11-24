#include <iostream>
using namespace std ;

int add_two_numbers ( int a , int b ) {
    return a + b ;          // return the addition of two numbers 
}

int main () {
    int a , b ;
    cin >> a >> b ;

    int ans = add_two_numbers(a , b);
    cout << ans << endl;
}