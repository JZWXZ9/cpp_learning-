#include <iostream>
#include <cmath>
int main() {
    using namespace std ;

    double area ;
    cout << "Enter the floor area" << endl ;
    cin >> area ;
    cin.get() ;
    double result = 0 ;
    result = sqrt(area) ;
    cout << "The result is " << result << " Thanks" << endl ;
    cin.get() ;

    return 0;
}