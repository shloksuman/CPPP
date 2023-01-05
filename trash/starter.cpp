#include<bits/stdc++.h>
using namespace std;

int solve(int a, int b , int c){
    if(a%c!= 0 && b%c!=0){
        return c+1;
    }
}

int main(){

    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t ;
    cin >> t ;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c ;
        int ans = solve(a,b,c);
        cout << ans;
    }

    return 0;
}