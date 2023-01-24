#include<bits/stdc++.h>
using namespace std;


int gcd(int a, int b){  //TC : O(log phi(min(a,b)))
    while(a>0 && b>0){
        if(a>b) a= a%b ;
        else b = b%a;
    }
    if(a==0) return b;
    return a;
}

int main(){

    int t ;
    cin >> t ;
    while(t--){
        int a,b;
        cin >> a >> b ;
        cout << "GCD of " << a << " and " << b << " is : " << gcd(a, b) << endl;
    }

    return 0;
}