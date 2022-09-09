#include<bits/stdc++.h>
using namespace std;

/*

url why arr and &arr are same
https://stackoverflow.com/questions/8916656/why-is-arr-and-arr-the-same#:~:text=%26arr%20is%20an%20rvalue%20of,same%20result%20when%20printing%20them

*/

// void func(int arr[] , int n){
void func(int *arr , int n){  //arr is passed as a POINTER since it behaves like one
    cout << sizeof(arr) << endl ;
}

int main(){

    int arr[]= {1 , 2 , 3 , 4 , 5 } ;
    cout << "arr = " << arr << endl;
    cout << "&arr = " << &arr << endl;
    cout << "*arr = " << *arr << endl;
    cout << "arr[0] = " << arr[0] << endl;
    cout << "&arr[0] = " << &arr[0] << endl;

    cout << "---- *(arr+ x) begins ----" << endl ;

    cout << "*arr = " << *arr << endl;
    cout << "*(arr+0) = " << *(arr+0) << endl;
    cout << "*(arr+1) = " << *(arr+1) << endl;
    cout << "*(arr+2) = " << *(arr+2) << endl;
    cout << "*(arr+3) = " << *(arr+3) << endl;
    cout << "*(arr+4) = " << *(arr+4) << endl;

    cout << "---- *(i+arr) = i[arr] begins ----" << endl ;

    int i = 0 ;

    cout << "i[arr] = " << i[arr] << endl;

    cout << "---- checking sizeof(arr) through function call ----" << endl ;

    func(arr , 5) ; //this gives the size of arr[0] that is 4 bytes (as per my laptop architecture)

    cout << "---- applying pointer on char ch[]=  abcd  and printing *p ----" << endl ;

    char ch[] = "abcd" ;
    char *p = ch ;
    cout << "*p = " << *p << endl ;

    return 0;
}