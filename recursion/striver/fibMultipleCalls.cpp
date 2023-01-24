#include<bits/stdc++.h>
using namespace std;

int solve(int n){ //TC - 2^n nearly exponential
    if(n<=1) return n;

    int last = solve(n-1);
    int slast = solve(n-2);

    return last + slast ;
}

int main(){

    int t ;
    cin >> t ;
    while(t--){
        int n;
        cin >> n;

        cout << solve(n) << endl;
    }

    return 0;
}