#include<bits/stdc++.h>
using namespace std;

void solve(int n) {
    for(int i=1; i<=n ; i++){
        if(n%i==0){
            cout << i << " " ;
        }
    }
}

int main(){

    int t ;
    cin >> t ;
    while(t--){
        int n;
        cin >> n;
        solve(n);
    }

    return 0;
}