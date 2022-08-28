#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

void tuppoo(int a , int b , int c ){
    int x,y,z;
    x = min(a,b);
    y = min(b,c);
    z = min(c,a);
    if(x==y && y==z){
        cout << "YES" ;
    }
    else {
        cout << "NO" ;
    }
} 

int main(){
    //MAKES INPUT OUTPUT FAST
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    // cout << "enter testcase number : " ;
    cin>>t;
    while(t--){
        int a,b,c ;
        cin >> a >>b >>c ;
        tuppoo(a,b,c) ;
        cout << "\n" ;
    }
return 0;
}