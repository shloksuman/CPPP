#include<bits/stdc++.h>
#define int long long int
using namespace std;

#define endl "\n"
#define ll long long

int mintime(int p , int l , int arr[] ){
    int i=1 , count = 0 , time = 0 ; 
    int rank = 1 ; //checking the program for one rank only
    while(count<p){
        cout << "count : " << count << " p : " << p << endl ;
        time = time + i*rank ;
        i++ ;
        count++ ;

    }

    return time ;
}

bool solve(int *arr , int n , int p , int mid){
    int time = 0 ;
    int paratha = 0 ; //initially there are 0 paratha prepared
    for(int i = 0 ; i < n ; i++){
        time = arr[i] ;
        int j = 2 ;
        while(time<=mid){
            paratha++;
            time = time + (arr[i]*j) ;
            j++ ;
        }
        if(paratha>=p){
            return true ;
        }
    }
    return false;
}

int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int p ; //no of prata required
        cin >> p ;
        int l ; // no of cooks
        cin >> l ;
        int arr[l] ;
        for(int i=0; i<l ; i++){
            cin >> arr[l] ; //entering the rank of each cook
        }
        int lb= 0 ;
        int ub = 1e8 ;
        int ans = 0 ;
        while(lb<=ub){
            int mid= (lb+ub)/2 ;
            if(solve(arr , l , p , mid )){
                ans = mid ;
                ub= mid-1 ;
            }
            else {
                lb = mid+1;
            }
        }
        //cout << mintime( p , l , arr ) << endl ;
        cout << ans << endl ;
    }
return 0;
}