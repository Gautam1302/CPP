#include<iostream>
using namespace std ;

bool check_even_odd ( int n ) {

    if ( n % 2 == 0 ) {
        return true ;
    } else{
        return false ;
    }
}


int main () {
    int n ;
    cin >> n ;

    bool check = check_even_odd (n) ;
    if ( check == true ) {
        cout << "even" << endl;
    } else {
        cout << "odd" << endl;
    }
}