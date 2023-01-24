#include<bits/stdc++.h>
using namespace std;



void solve(int n){
    int count = 0;
    for(int i = 1 ; i*i<=n ; i++){
        if(n%i==0){
            count++;
            if(n/i!=i){
                count++;
            }
        }
    }
    if(count==2){
        cout << "Prime!" << endl;
    }
    else cout << "NOT Prime!" << endl;
}

int main(){

    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        solve(n);
    }

    return 0;
}