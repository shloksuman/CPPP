#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

int pkString(int k, string s){
    // Write your code here
    int countp = 0 ;
    int size = s.length() ;
    int i = 0;
    while(size--){
        if(s[i]=='p'){
            countp++ ;
        }
        i++ ;
    }
    if(countp==k){
        return 1 ;
    }
    else return 0 ;
}

int main(){
    //MAKES INPUT OUTPUT FAST
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        
    }
return 0;
}