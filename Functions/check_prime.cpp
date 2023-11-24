#include<iostream>
using namespace std ;

bool check_prime ( int n ) {
    
    for ( int i = 2 ; i < n ; i++ ) {
        if ( n % i == 0 ) {
            return false ;
        }
    }
    return true ;
}

int main () {
    int n ;
    cin >> n ;

    bool prime = check_prime(n) ;
    if ( prime == true ) {
        cout << "Prime" << endl;
    } else {
        cout << "Not Prime" << endl;
    }

}