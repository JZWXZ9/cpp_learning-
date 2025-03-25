//使用结构
#include <iostream>
#include <string>
using namespace std ;

struct flatable {
    string name ;
    float volume = 0 ;
    double price = 0 ;
} ;

int main() {
    flatable visit {
         "JZWXZ" , // 逗号分隔
         1.98 , 
         20.98,
    } ; // ;分割

    cout << "name : " << visit.name << endl ;
    cout << "volume : " << visit.volume << endl ;

    //结构可以直接等号赋值，即便其中含有数组类字符串（这里不演示）
    flatable  domain {

    } ;
    domain = visit ;
    cout << "name : " << domain.name << endl ; 

    cin.get() ;
    return 0 ;
}