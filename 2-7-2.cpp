#include <iostream>
int main() {
    using namespace std ;
    int init = 0 ;
    cout << "Please enter the LONG:" ;
    cin >> init ;
    cin.get() ;
    long long int result = init * 220 ;
    cout << "This is the last result : "
         << result 
         << "Having a nice day !"
         << endl ;
    cin.get() ;

    return 0;
}