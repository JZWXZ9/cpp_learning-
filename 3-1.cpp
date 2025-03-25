// 查看该系统各种变量最大储存量
#include <iostream>
#include <climits>      //表3.1，C++ Promer Plus P42
using namespace std ;
int main() {
    int n_int = INT_MAX ;
    short n_short = SHRT_MAX ;
    long n_long = LONG_MAX ;
    long long n_llong = LLONG_MAX ;

    cout << "int is " << sizeof(int) << " MaxValue is " << n_int <<endl ;
    cout << "short is " << sizeof(short) << " MaxValue is " << n_short << endl ;
    cout << "long is " << sizeof(long) << " MaxValue is " << n_long << endl ;
    cout << "long long is " << sizeof(long long) << " MaxValue is " << n_llong << endl ;
    cout << endl ;
    cin.get() ;

    return 0;
}