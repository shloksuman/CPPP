#include<iostream>
using namespace std;

void func(int *ptr) {
    *ptr = *ptr + 1 ;
}

void dummy(int *arr, int n){
    cout << sizeof(arr) << endl;
}

int main(){

int arr[]= { 1 , 2, 3 , 4 ,5 } ;

int *p =arr ;
cout << *p << endl;

char ch[5]= "abcd" ;
char *ptr = ch ;
cout << ptr <<endl ;

char cha = 'B' ;
char *ctr = &cha ;
cout << ctr << endl ;

//dummy(arr , 5) ;
// cout <<"Base address of arr : " << arr << endl;
// cout << "Value stored at *arr base address : " << *arr << endl;
// cout << "Base address of &arr[0] : " << &arr[0] << endl;
// cout <<"Value of first cell of array arr[0] : " << arr[0] << endl;
// cout <<"Base address &arr : " << &arr << endl;
// cout <<"Value stored at *arr base address : " << *arr << endl;
// cout <<"Value stored at *arr base address : " << *(arr+1) << endl;
// cout <<"Value stored at *arr base address : " << *(arr+2) << endl;
// cout <<"Value stored at *arr base address : " << *(arr+3) << endl;
// cout <<"Value stored at *arr base address : " << *(arr+4) << endl;


    return 0;
}