#include<bits/stdc++.h>
using namespace std;

int solve(int n ){
    int digits=0;
    while(n>0){
        digits++;
        n = n/10;
    }
    return digits;
}

int solve2(int n){
    int count = (int)(log10(n)+1) ; //taking log10 of n, say 4432 gives 3.64 adding 1 = 4.64 then integer part is taken
    return count ;
}

int main(){

    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n;
        cout << "digits in " << n  << " is : " << solve(n) << endl; 
        cout << "digits in " << n  << " is (using log) : " << solve2(n) << endl; 
    }

    return 0;
}