#include <iostream>
#include <string>
using namespace std ;
void HelloWorld(string contant = "Hello world !", int times = 10) ;
int main() {
    string contant = "你好世界！" ;
    HelloWorld() ; //默认参数
    HelloWorld(contant) ;
    HelloWorld(contant , 5) ;

    return 0 ;
}

void HelloWorld(string contant  , int times ) {
    for(int i = 0 ; i < times ; i ++) {
        cout << contant << endl ;
    }

}