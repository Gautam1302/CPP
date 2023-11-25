#include<iostream>
using namespace std ;

void prime_upto_n ( int n ) {
    int counter ;

    for ( int i = 2 ; i <= n ; i++ ) {

        counter = 0 ;
        for ( int j = 2 ; j < i ; j++ ) {
            if ( i % j == 0 ) {
                counter++ ;
            }
        }
        
        if ( !counter ) {
            cout << i <<"  " ;
        }

    }
}


int main () {
    int n ;
    cin >> n ;

    prime_upto_n(n) ;
}