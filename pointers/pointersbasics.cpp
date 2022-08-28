#include<iostream>
using namespace std;

void func(int *ptr) {
    *ptr = *ptr + 1 ;  //ADDRESS MEIN STORED VALUE CHANGE HOGI
}

int main(){
//    int a=3 ;
//     int *p= &a;
//    // cout << sizeof(p) ;
//  //   cout << *p ;
//  cout << a << endl; 

//  cout << &a << endl;
//  cout << p << endl;
//  cout << &p << endl;
//  //cout << *a << endl;

int a =5 ;
int *p = &a;

cout << "before " << p << endl ; 
cout << "before " << *p << endl ; 

func(p) ;

cout << "after " << p << endl ;
cout << "after " << *p << endl ;



    return 0;
}