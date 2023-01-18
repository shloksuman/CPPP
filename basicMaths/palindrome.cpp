#include<bits/stdc++.h>
using namespace std;

bool solve(int n){
    int dup = n ;
    int revNum = 0 ;
    int lastdigit;
    while(n>0){
        lastdigit = n%10;
        n = n/10;
        revNum = revNum*10 + lastdigit ;
    }
    if(revNum==dup){
        return true;
    }
    else return false;
}

int main(){

    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        if(solve(n)){
        cout << n << " is a palindrome! " << endl;
        }
        else  cout << n << " is NOT  a palindrome! " << endl;
    }

    return 0;
}