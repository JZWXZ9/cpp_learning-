//内联函数inline的定义
#include <iostream>
using namespace std ;
inline double square(double x) { return x * x ;} ; //内联函数的定
//与常规的宏定义有区别，在内联函数替换的时候还是使用函数传值而不只是简单的进行代码替换
int main() {
    double a = 5 ;
    double b = 12 ;
    cout << square(a) << '+' << square(b) << endl ;
    cout << square(13) ;

    return 0 ;
}