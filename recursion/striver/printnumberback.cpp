#include<bits/stdc++.h>
using namespace std;


void solve(int i, int n){
    if(i>n) return;
    
    solve(i+1 , n) ;
    cout << i << endl ;
}

int main(){

    int t ;
    cin >> t ;
    while(t--){
        int n;
        cin >> n;
        cout << "printing " << n << " to 1 using backtracking : \n" ;
        solve(1 , n);
    }

    return 0;
}