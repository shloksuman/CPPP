#include<bits/stdc++.h>
using namespace std;



void solve(int i, int n){   //TC - O(n)     SC - O(n) stack space
    if(i>n) return; //base condition

    cout << "Jon" << endl;

    solve(i+1 , n) ;
}

int main(){

    int t ;
    cin >> t ;
    while(t--){
        int n;
        cin >> n;
        solve(1,n);
    }

    return 0;
}