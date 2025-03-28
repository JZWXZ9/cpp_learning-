//使用ctime模块延时

#include <iostream>
#include <ctime>

using namespace std ;
int main () {
    double seco = 0 ;
    clock_t delay = 0 ;
    cout << "Please enter the time you want to delay" << endl ;
    cin >> seco ;
    cin.get() ;
    delay = seco * CLOCKS_PER_SEC ;//系统每一秒的时间
    clock_t start = clock() ; //获取系统时间

    while(clock() - start < delay) ;

    cout << "Ok end" ;
    cin.get() ;
    return 0 ;
}