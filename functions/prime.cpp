#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int n){
    for( int i=2 ; i<=sqrt(n) ; i++ ){
        if(n%i==0){
            return false;
        }
    } return true;
}

int main(){

    int a,b;
    cout << "Enter the numbers a and b to check the prime numbers lying between them : " ;
    cin >> a >> b;
    
    for(int i=a; i<=b ; i++){
        if(isPrime(i+1)){
            cout << i+1 << endl ;
        }
    }

    return 0;
}