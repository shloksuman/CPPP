#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

#define endl "\n"
#define ll long long

int main(){
    //MAKES INPUT OUTPUT FAST
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int arr[100] ;
        int size ;
        cin >> size ;
        for(int i=0; i<size; i++){
            cin>>arr[i] ;
        }
        sort(arr , arr+ size) ;
        int ans = INT_MAX;
        for(int i=0 ; i< size ; i++){
            for(int j=i+1 ; j< size  ; j++){
                int count =1 ;
                if(arr[i]==arr[j]){
                    count++;
                }
            }
            ans = min(ans, count) ;
        }
        cout << ans << endl;
    }
return 0;
}