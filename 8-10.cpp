//��������ʾ��
#include <iostream>
using namespace std ;

//�������õı������Լ����صĽ������ʹ���ĸ�����
int calc_result(int & a , int & b) ;
int calc_result(int && a , int && b ) ;

int main() {
    int a = 1 ; 
    int b = 2 ;
    int c = a + b ;
    int d = a + b + 1 ;
    cout << "��ֵ��������" << calc_result(c , d) << endl ;
    cout << "������������" << calc_result(a+b , c + 1) << endl ;
    
    cin.get() ;
    return 0 ;
}
//����ֵ��һ����ֵ
int calc_result(int &a , int & b) {
    return a + b ;
}
//����ֵ��һ����ֵ
int calc_result(int && a , int && b) {
    return (a + b) - 1  ;
}