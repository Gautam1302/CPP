#include<iostream>
using namespace std ;

int sum_even ( int n ) {
    
    int sum = 0 ;
    for ( int i = 0 ; i <= n ; i = i + 2 ) {
        sum = sum + i ;
    }
    return sum ;

}

int main () {
    int n ;
    cin >> n ;

    cout << sum_even(n) << endl;
}