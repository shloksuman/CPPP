#include<bits/stdc++.h>
using namespace std;


bool solve(int i , string s){
    if(i>= s.length()-1) return true; //this means all characters are checked by i counter
    if(s[i]!=s[s.length()-1-i]) return false;

    solve(i+1 , s) ;
}

int main(){

    int t ;
    cin >> t ;
    while(t--){
        string s;
        cout << "enter the string : " ;
        cin >> s;
        if(solve(0 , s)){
            cout << "Yes! Palindrome!" << endl;
        }
        else cout << "NOT a palindrome!" << endl;

    }

    return 0;
}