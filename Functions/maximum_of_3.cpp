#include <iostream>
using namespace std ;

int max_of_three ( int a , int b , int c ) {
    if ( a >= b && a >= c ) {
        return a ;
    } else if ( b >= a && b >= c ) {
        return b ;
    } else {
        return c ;
    }
}

int main () {

    int a , b , c ;
    cin >> a >> b >> c ;

    cout << max_of_three ( a , b , c) << endl ;

}