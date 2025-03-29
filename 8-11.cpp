//泛型编程
#include <iostream>
using namespace std ;
template <typename  T> // 告诉编译器模板
void Change(T & a , T & b) ;    //使用变量别名，相当于告诉了一个常量指针
int main () {
    int a = 10 , b = 20 ;
    double c = 10.1 , d = 10.2 ;
    cout << "Before Change :" 
         << " a " << a 
         << " b " << b 
         << " c " << c 
         << " d " << d << endl ;
    
    Change(a , b) ;
    Change(c , d) ;

    cout << "After Change :" 
         << " a " << a 
         << " b " << b 
         << " c " << c 
         << " d " << d << endl ;

    cin.get() ;
    return 0 ;
}

template <typename  T>
void Change(T & a , T & b){
    T temp = a ;
    a = b ;
    b = temp ;
}