// 使用cin.getline 以及cin.get()
#include <iostream>
#include <cstring>
using namespace std ;
int main() {
    const int size = 30 ;
    char name[size] = {} ;
    char dessert[size] = {} ;
    char felling[size] = {} ;

    cout << "Please enter your name : " << endl ;
    //第一个参数是接受的字符串名称 ， 第二个参数是最大字符串数（包括\0）
    //getline 丢弃换行符
    cin.getline(name , size)   ;
    cout << "Ok and your favorite dessert : " << endl ;
    cin.getline(dessert , size ) ;
    cout << name << " Your favorite dessert is " << dessert << endl ;
    cout << strlen(name) << endl ;
    
    //cin.get() 函数遇到换行符停止，但不会吞并换行符
    cout << "Please tell me your felling : " << endl ;
    cin.get(felling , size).get()  ; //吸收换行符，连续使用方法get()
    cout << "Felling : " << felling << endl ;
    cin.get() ;

    return 0 ;
}