// 使用cstring 库
#include <iostream>
#include <cstring>
using namespace std ;
int main() {
    const int size = 15 ;
    char name_1[size] = {} ; 
    char name_2[size] = {"C++_the_JZWXZ"} ;

    cout << "Hello I am " << name_2 << " and you?" << endl;
    cin >> name_1 ;
    cin.get() ;
    cout << "ok your name is " << name_1 << " and lenth " << strlen(name_1) <<  endl << " Good Bye" << endl ;
    cin.get() ;
    return 0 ;
}