//使用函数指针
#include <iostream>
using namespace std ;
double func_one_dimension(int input) ;  // 计算公式1
double func_two_dimension(int input) ;  // 计算公式2

double calc_result1(int input , double (*pfunc)(int) ) ;    //调用方式1 函数名
double calc_result2(int input , double (*pfunc)(int) ) ;    //调用方式2 指针

int input() ;   // 判断cin >> 返回值来进行输入值的矫正

int main() {
    int input_n = input() ;
    cout << "func1 : result : " << calc_result1(input_n , func_one_dimension) <<endl;
    cout << "func2 : result : " << calc_result2(input_n , func_two_dimension) <<endl;

    cin.get() ;
    return 0 ;
}

double func_one_dimension(int input ) {
    double result = 0 ;
    result = 0.05 * input ;
    return result ;
}

double func_two_dimension(int input) {
    double result = 0 ;
    result = 0.03 * input + 0.0004 * input * input ;
    return result ;
}

double calc_result1(int input , double (*pfunc)(int)) {
    double result = pfunc(input) ;
    return result ;
}

double calc_result2(int input , double (*pfunc)(int)) {
    double result = (*pfunc)(input) ;
    return result ;
}

//以上两种调用函数指针方式相同（等价） C++ 采取折衷方式

int input() {
    int input_n = 0 ;
    cout << "Please enter a number : " ;
    while(!(cin >> input_n)) {
        cin.clear() ;
        while(cin.get() != '\n') {
            continue ;
        }
        cout << "Input must be an integer !!! : " ;
    }

    return input_n ;
}