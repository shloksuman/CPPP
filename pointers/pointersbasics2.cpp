#include<iostream>
using namespace std;

void func(int *ptr) {
    ptr = ptr + 1 ;
}

int main(){

int a =5 ;
int *p = &a;

cout << "before " << p << endl ; 
cout << "before " << *p << endl ; 

func(p) ;

cout << "after " << p << endl ;
cout << "after " << *p << endl ;



    return 0;
}