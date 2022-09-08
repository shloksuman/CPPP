#include<iostream>
using namespace std;

int main(){
    int a = 5 ;
    
    cout << "The value of a is : " << a << endl;
    cout << "The address of a is &a is : " << &a << endl ;

    int *p = &a;
    cout << "The size of p is : " << sizeof(p) << endl ;

    cout << "playtime!!!" << endl ;

    cout << a << endl;
    cout << &a << endl;
 //   cout << *a << endl;
    cout << p << endl;
    cout << &p << endl;
    cout << *p << endl;

    return 0;
}