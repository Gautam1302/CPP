// Convert binary to decimal by multiplying each extracted digit from end to its place value 
#include<iostream>
#include<cmath>
using namespace std ;

int bintodec ( int num ) {
    
    int ans = 0 ;
    int i = 0 ;
    
    while (num != 0 ) {
        int rem = num % 10 ;
        ans = rem*pow(2,i++) + ans ;
        num = num / 10 ;
    }

    return ans ;
}

int main () {
    int binaryno ;
    cin >> binaryno ;

    cout << bintodec(binaryno) << endl ;

}