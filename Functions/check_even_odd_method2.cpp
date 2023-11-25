#include<iostream>
using namespace std ;

bool Check_even_odd ( int n ) {
    if ( (n&1) == 0 ) {
        return true ;
    } else {
        return false ;
    }
}


int main () {
    int n ;
    cin >> n ;

    bool isEven = Check_even_odd(n) ;

    if (isEven) {
        cout << "even" << endl;
    } else {
        cout << "odd" << endl;
    }
    
}