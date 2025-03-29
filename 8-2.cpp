//引用变量的使用
//引用变量更像是常量指针（无法改变的指针）
#include <iostream>
using namespace std ;
int main() {
    int number = 100 ;
    int & header = number ; //引用必须在创建的时候申明

    cout << number << " The same as " << header << endl ;
    header ++ ;
    cout << header << " The same as " << number << endl ;

    return 0;
}