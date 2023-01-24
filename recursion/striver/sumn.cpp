#include<bits/stdc++.h>
using namespace std;

//functional
int solve2(int n){
    if(n==0) return 0;

    return n + solve2(n-1) ;
}


//parameterised
int solve(int i , int sum){
    if(i<1) return sum ;
   // sum = sum + i ;
    solve(i-1 , sum+i) ;
}

int main(){

    int t ;
    cin >> t ;
    while(t--){
        int n;
        cin >> n;
        cout << "sum of " << n << " is : " << solve(n , 0 ) << endl;
        cout << "sum of " << n << " is using functional calls: " << solve2(n)  << endl;
    }

    return 0;
}