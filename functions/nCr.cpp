#include<iostream>
using namespace std;

//USE FLOAT AS GREATER VALUES ARE SUPPORTED MAX INPUT VALUE IS N=34

float factorial(float fact){
    float num=1 ;
    for(float i=2 ; i<=fact ; i++){
        num = num * i ; 
    }
    return num ;
}

int main(){
    float n , r ; //MAX INPUT VALUE IS N=34
    cout << "Enter n and r to get its nCr : " ;
    cin >> n >> r ;
    float nCr = factorial(n)/(factorial(r)*factorial(n-r)) ;
    cout << "\nThe nCr of " << n << " and " << r << " is : " << nCr ;

    return 0;
}