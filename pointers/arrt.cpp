#include<iostream>
using namespace std;


int main(){

    // int *p1 ;           //DONT DO THIS
    // cout << p1 << endl ;
    // cout << *p1 << endl ;
    // cout << &p1 << endl ;

    // int *p2=0 ;
    // cout << p2 << endl ;
    // cout << *p2 << endl ;
    // cout << &p2 << endl ;

    char sentence[] = "My name is shlok" ;
    char *p = sentence ;
    cout << p <<endl; //print poora jab tak null char nahi milta
    cout << *p << endl ; // p[0] so first index value that is M
    cout << &p << endl;  //address

    return 0;
}
