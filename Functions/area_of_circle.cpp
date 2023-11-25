#include<iostream>
#include<cmath>
using namespace std ;

double area_of_circle( float n ) {
    double area = M_PI*(n*n) ;
    return area ;
}


int main () {
    double radius ;
    cin >> radius ;

    cout << area_of_circle(radius) << endl;

}