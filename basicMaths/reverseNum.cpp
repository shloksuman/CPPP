#include<bits/stdc++.h>
using namespace std;

int solve(int n){
    int revNum = 0 ;
    int lastdigit;
    while(n>0){
        lastdigit = n%10;
        n = n/10;
        revNum = revNum*10 + lastdigit ;
    }
    return revNum;
}

int main(){

    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        cout << "reverse of " << n << " is : " << solve(n) << endl;
    }

    return 0;
}