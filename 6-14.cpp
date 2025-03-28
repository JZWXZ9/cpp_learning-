#include <iostream>
using namespace std ;
const int Arsize = 5 ;
int getNumber() ;
int main() {
    int number[Arsize] ;
    cout << "Please input a number of numbers: " << endl;
    int i = 0 ;
    for(i = 0 ; i < Arsize ; ++i){
        cout << "Round #" << i << ": " ;
        // while(!(cin >> number[i])) {
        //     cin.clear() ;
        //     while(cin.get() != '\n')
        //         continue ;
        //     cout << "Please enter a integer : " ;
        // }
        // cin.get() ;
        number[i] = getNumber() ;
    }
    double avg = 0 ;
    for(i = 0 ; i < Arsize ; ++i ) {
        avg += number[i] ;
    }
    avg /= Arsize ;
    cout << "The average of the numbers is :" << avg << endl ;

    cin.get() ;
    return 0 ;
}

int getNumber() {
    int result = 0 ;
    while(!(cin >> result)) {   //原理：cin 输入流得到一串数字的时候会返回一个bool值，此时进入循环
        cin.clear() ;
        while(cin.get() != '\n'){
            continue ;
        }
        cout << "Must be integer!!! :" ;
    }

    cin.get() ;
    return result ;
}