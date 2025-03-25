#include <iostream>
using namespace std ;
void print_mice() ;
void print_see()  ;
int main() {
    for(int i = 0 ; i < 2 ; i ++ ) {
        print_mice();
    }
    for(int i = 0 ; i < 2 ; i ++ ) {
        print_see();
    }
    cin.get() ;

    return 0;
}

void print_mice() {
    cout << "There are three mice" << endl ;
}

void print_see() {
    cout << "See how they act !" << endl ;
}