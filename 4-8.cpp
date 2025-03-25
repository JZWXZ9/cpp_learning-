// C++中string的使用
#include <iostream>
#include <string>
using namespace std ;
int main() {
    string name1 = "JZWXZ" ;
    string name2 = ""  ;
    string name3 = ""  ;

    // 直接进行赋值
    name2 = name1 ;
    //加法
    name3 = name1 + name2 ;
    //使用数组操作
    cout << name1 << endl ;
    cout << name2 << endl ;
    cout << name3 << endl ;
    cout << name3[0] << endl ;

    cin.get() ;
    return 0 ;
}