//Convert decimal to binary by division method
#include<iostream>
#include<cmath> 

using namespace std ;

int bin_to_dec(int num) {
    int binary = 0 ;
    int i = 0 ;

    while ( num != 0 ) {
        int bit = num % 2 ;
        binary = ( bit*round(pow(10 , i++))) + binary ;
        num = num / 2 ;
    }
    return binary ;
}


int main () {
    int num ;
    cin >> num ;

    cout << bin_to_dec(num) << endl ;
}