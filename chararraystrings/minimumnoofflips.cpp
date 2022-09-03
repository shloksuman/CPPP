#include<bits/stdc++.h>
using namespace std;

char charflip(char expected){
    if(expected=='0'){
        return '1';
    }
    else return '0';
}

int flips(string s , char expected){
    int countflips = 0 ;
    for(int i = 0 ; i< s.length() ; i++){
        if(s[i]!=expected){
            ++countflips ;
        }
        expected = charflip(expected) ;
    }
    return countflips;
}

int minflips(string s){
    int ans1= flips(s, '0') ;
    int ans2= flips(s , '1') ;
    int ans = min(ans1 , ans2) ;
    return ans;
}

int main(){

    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t ;
    cin >> t ;
    while(t--){
        string s;
        cin >> s ;
        cout << minflips(s) << endl ;
    }

    return 0;
}