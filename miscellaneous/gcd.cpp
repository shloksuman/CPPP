#include<iostream>
using namespace std;

int gcdd(int a, int b){
    //handling base cases
    if(a==0)
    return b;
    if(b==0)
    return b;
    
    while (a!=b)
    {
        if(a>b){
            a= a-b;
        }
        else b= b-a ;
    }
    return a;
    
}

int main(){
    cout << "Enter two numbers to get their GCD : " ;
    int a, b;
    cin >> a>> b;
    int gcd = gcdd(a, b) ;
    cout << "The gcd is : " << gcd ;

    return 0;
}