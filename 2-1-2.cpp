#include <iostream>
int main() {
    using namespace std;
    int carrots; 
    cout << "How many carrots do you need?" << endl ;
    cin >> carrots ;
    cin.get() ;                 //吸收换行符
    carrots += 2 ;
    cout << "Here are two more: " << carrots << "  Carrots" << endl ;
    cin.get() ;                 //保持黑框框

    return 0;
}