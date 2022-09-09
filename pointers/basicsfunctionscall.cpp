#include<bits/stdc++.h>
using namespace std;

void func(int *p){
    p = p+1 ;
}

void funcstar(int *p){
    *p = *p+1 ;
}

int main(){

    int a = 5 ;
    int *p = &a ; 

    cout << "before function call p is : " << p << endl;
    cout << "before function call *p is : " << *p << endl;
    func(p) ;
    cout << "after function call  p is : " << p << endl;
    cout << "after function call  *p is : " << *p << endl;

    cout << "------NOW IMPLEMENTING FUNCSTAR( *p = *p+1 )------" << endl;

    cout << "before function call p is : " << p << endl;
    cout << "before function call *p is : " << *p << endl;
    funcstar(p) ;
    cout << "after function call  p is : " << p << endl;
    cout << "after function call  *p is : " << *p << endl;


    return 0;
}