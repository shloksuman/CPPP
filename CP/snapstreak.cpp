#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

int solve(int a[] ,int b[] , int n ){
    int count=0, maxcount=0;
    for(int i = 0 ; i<n;i++){
        if(a[i]>0 && b[i]>0){
            count++;
            maxcount= max(maxcount , count) ;
        }
        else count=0;
    }
    return maxcount;
}


int main(){
    //MAKES INPUT OUTPUT FAST
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>> n;
        int a[n] , b[n] ;
        for(int i = 0 ; i< n ;i++){
            cin >> a[i] ;
        }
        for(int i = 0 ; i< n ;i++){
            cin >> b[i] ;
        }
        
        cout << solve(a , b , n) << endl ;
        
    }
return 0;
}
