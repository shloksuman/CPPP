#include<bits/stdc++.h>
using namespace std;

void square(int *p){
    int a = 10 ;
    p = &a ;  //here p is initialized with another address
    *p = (*p) * (*p) ;  // therefore the changes are also reflected at other address // not the one we selected in main
}

void increment(int **p){
    (**p)++;
}

int main(){

    // int a = 10 ;
    // square(&a) ;
    // cout << "a  = " << a << endl ; //answer is 10 

    int num = 10 ;
    int *ptr  = &num ;
    increment(&ptr) ;
    cout << "num is : " << num << endl ;

    return 0;
}