//指针复习
#include <iostream>
using namespace std ;
int main() {
    int number = 90 ;
    int * p_number ; //创建int 变量
    p_number = &number ;  //&取地址计算

    cout << "number : " << number << " and : " << *p_number << endl ;

    int* p_num , num ; // 创建一个指针和整数
    num = 90 ;
    p_num = &num ;
    cout << num << " " << *p_num << endl ;

    cin.get() ;
    return 0 ;
}