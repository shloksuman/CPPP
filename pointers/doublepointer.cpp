#include<bits/stdc++.h>
using namespace std;



int main(){

    // int a = 5 ;
    // int *p = &a;
    // int **q = &p ;

//     cout << "&a = " << &a << endl ;
//     cout << "a = " << a << endl ;
//   //  cout << "*a = " << *a << endl ; gives error since a is not a pointer

//     cout << "&p = " << &p << endl ;
//     cout << "p = " << p << endl ;
//     cout << "*p = " << *p << endl ;

//     cout << "&q = " << &q << endl ;
//     cout << "q = " << q << endl ;
//     cout << "*q = " << *q << endl ;

// QUESTION 1
    // float f=10.5 ;
    // float p=2.5 ;
    // float * ptr=&f ;

    // (*ptr)++ ;
    //     cout << *ptr << endl;

    // *ptr = p;

    // cout << *ptr << endl;
    // cout << f << endl;
    // cout << p << endl;

    // int *ptr= 0 ;
    // int a = 10 ;
    // *ptr = a ;          // should have been defined like *ptr = &a ,, as discussed earlier
    // cout << *ptr << endl ;

    // int a = 5 ;  // a's address is 100 , where it has 5
    // int *b = &a ; // b points to a's address
    // b = b + 1 ; //increments a's address , since it is a integer type so increases by 4 bytes ,so we get 100+4 = 104
    // cout << a << " " << *b << endl ; // here *b prints a garbage value , since at 104 , we don't know what is stored

    // int a[5] ;
    // int *c ;
    // cout << sizeof(a) << endl;
    // cout << sizeof(c) << endl;

    // int a[] = { 1 ,2 ,3 ,4 ,5 } ;
    // int *p = a++ ;       //GIVES ERROR : LVALUE REQUIRED AS INCREMENT OPERAND
    // cout << *p << endl ;

    // int a[] = {  4, 5 ,6 ,7 ,8} ; // a's address is 100
    // int *p = a + 1 ; // p gets address 100 + 4 = 104 stored in it
    // cout << *a + 9 << endl ; // add 9 to value at a[0] , we get 9 + 4 = 13 

    // char ch[] = "xyz" ;
    // char *p = &ch[0] ;
    // cout << p << endl ;

    char s[]="hello" ;
    char *p = s ;
    cout << s[0] << endl ;
    cout << p[0] << endl;

    return 0;
}