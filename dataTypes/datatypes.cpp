#include<stdio.h>
#include<iostream>
using namespace std;

int main(){ 
    //cout << "Hello" << endl;
    int a = 10 ;
   // cout << "int a = " << a << endl;
    cout << "Size of int a is : " << sizeof(a) << " bytes" << endl;
    short int b = 12 ;
    cout << "short int b = " << b << endl;
    signed short int shortie = 65530 ;
    cout << "short int shortie = " << shortie << endl;
    cout << "Size of short int b is : " << sizeof(b) << " bytes" << endl;
    long int c = 122 ;
   // cout << "long int c = " << c << endl;
    cout << "Size of long int c is : " << sizeof(c) << " bytes" << endl;
    long long int d = 1112 ;
   // cout << "long long int d = " << d << endl;
    cout << "Size of long long int d is : " << sizeof(d) << " bytes" << endl;
    short unsigned e = 3;
    cout << "Size of short unsigned e is : " << sizeof(e) << " bytes" << endl;
    short unsigned int f = 3;
    cout << "Size of short unsigned int f is : " << sizeof(f) << " bytes" << endl;

    //cin.get();




    return 0;
}