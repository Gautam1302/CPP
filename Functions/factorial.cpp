#include<iostream>
using namespace std ;

int factorial ( int n ) {

    int answer = 1 ;

    for ( int i = n ; i >= 1 ; i-- ) {
        answer = answer*i ;
    }
    return answer;
}

int main () {
    int n ;
    cin >> n ;

    cout << factorial(n) << endl;
}