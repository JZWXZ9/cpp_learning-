//函数重载示例
#include <iostream>
using namespace std ;

//根据引用的变量名以及返回的结果决定使用哪个函数
int calc_result(int & a , int & b) ;
int calc_result(int && a , int && b ) ;

int main() {
    int a = 1 ; 
    int b = 2 ;
    int c = a + b ;
    int d = a + b + 1 ;
    cout << "左值运算结果：" << calc_result(c , d) << endl ;
    cout << "优质运算结果：" << calc_result(a+b , c + 1) << endl ;
    
    cin.get() ;
    return 0 ;
}
//输入值是一个左值
int calc_result(int &a , int & b) {
    return a + b ;
}
//输入值是一个右值
int calc_result(int && a , int && b) {
    return (a + b) - 1  ;
}