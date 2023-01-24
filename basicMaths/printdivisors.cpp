#include<bits/stdc++.h>
using namespace std;

void solve(int n) {
    for(int i=1; i<=n ; i++){
        if(n%i==0){
            cout << i << " " ;
        }
    }
}

void solve2(int n){ //TC is O(nlogn) where n is the numbers of factors
    vector<int> v;
    for(int i = 1 ; i*i<=36; i++){
        if(n%i==0){
            v.push_back(i);
            if((n/i)!=i){
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin() , v.end());

    for(auto it : v){
        cout << it << " " ;
    }
}

int main(){

    int t ;
    cin >> t ;
    while(t--){
        int n;
        cin >> n;
        // solve(n);
        solve2(n);
    }

    return 0;
}