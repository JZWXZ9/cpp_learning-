// 练习使用vector 和 array
#include <iostream>
#include <vector>
#include <array>

using namespace std ;
int main() {
    int numbers = 4 ;
    vector<int> vi = { 1 ,2 ,3 ,4 } ;
    vector<int> vi2 (2 , 1) ;

    array<int , 4> arr = { 1 , 2 , 3, 4} ;

    cout << vi[2] <<  endl << arr[3] << endl ;

    for(int i = 0 ; i < 2 ; i++) {
        cout << vi2[i] << endl ;
    }

    cin.get() ;
    return 0 ;


}