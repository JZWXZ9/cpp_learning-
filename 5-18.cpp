//输入ctrl+Z停止
#include <iostream>
using namespace std ;
int main() {
    char ch ;
    int count = 0 ;
    while(cin.fail() == false) {//如果是true ，则说明读取失败 ，cin.eof()同理，此外还可以使用ch == EOF来检测（前提是ch得是int，使用cin.get()方法）
        cout << ch ;
        count ++ ;
        cin.get(ch) ;
    }
    cout << count << " words read!" << endl ;

    cin.get() ;

    return 0 ;
}