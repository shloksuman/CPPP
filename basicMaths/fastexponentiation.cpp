#include<bits/stdc++.h>
using namespace std;

int fastexponentiation(int x , int n){      //TIME COMPLEXITY IS O(LOG N) OR O(LOG EXPONENT)
    int res = 1;
    while(n>0){
        //checking if n is odd
        if(n&1){
            res = res * x ;
        }

        x = x*x;
        n = n >> 1 ;
    }
    return res ;
}

int main(){

    cout << "enter a , b respectively to get a^b : " ;
    int a,b;
    cin >> a >> b ;
    cout << "the result is : " << fastexponentiation(a, b ) << endl;

    return 0;
}