#include <iostream>
using namespace std ;

//函数模板
template <typename T>
void Swap(T & a , T & b) ;

//显式具体化
template<> void Swap<double>(double & a , double & b) ;

int main() {
    int a = 1 , b = 10 ;
    double c = 10.0 , d = 20.0 ;
    cout << "Before Change :" 
         << " a " << a 
         << " b " << b 
         << " c " << c 
         << " d " << d << endl ;

    Swap(a , b) ;
    Swap(c , d) ;

    cout << "After Change :" 
        << " a " << a 
        << " b " << b 
        << " c " << c 
        << " d " << d << endl ;
}   

template <typename T >
void Swap(T & a , T & b) {
    T temp = a ;
    a = b ;
    b = temp ;
}

template<> void Swap<double>(double  & a , double & b) {
    a += 1 ;
    b += 1 ;
}