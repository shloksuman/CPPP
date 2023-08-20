#include<bits/stdc++.h>
using namespace std;

//functional //FACTORIAL OF N
int solve2(int n){
    if(n==0) return 1;

    return n * solve2(n-1) ;
}


//parameterised //SUM OF FIRST N NUMBERS
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
        cout << "factorial of " << n << " is using functional calls: " << solve2(n)  << endl;
    }

    return 0;
}