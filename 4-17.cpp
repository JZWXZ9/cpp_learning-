// 使用new 和 delete创建和删除指针
#include <iostream>
using namespace std ;
int main() {
    int *pint = new int ;
    *pint = 340 ;
    cout << *pint << endl ; 
    cout << " at " << pint << endl ;

    delete pint ; //delete只能删除new创建的指针，不能删除创建变量时候的指针

    cin.get() ;
    return 0 ;
}