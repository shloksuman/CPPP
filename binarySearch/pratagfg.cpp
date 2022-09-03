#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool solve(vector<int>&arr , int n , int p , int mid){
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
    int findMinTime(int N, vector<int>&A, int L){
        //write your code here
        //  int N ; //no of prata required
        
       // int L ; // no of cooks
       
        int lb= 0 ;
        int ub = 1e8 ;
        int ans = 0 ;
        while(lb<=ub){
            int mid= (lb+ub)/2 ;
            if(solve( A , L , N , mid )){
                ans = mid ;
                ub= mid-1 ;
            }
            else {
                lb = mid+1;
            }
        }
        //cout << mintime( p , l , arr ) << endl ;
        return ans ;
    
    }
};

int main() {
	int t ;
	cin >> t;
	while(t--){
		int n ; 
		cin >> n ;
		int l ; 
		cin >> l ;
		vector<int>arr(l);
		for(int i =0 ; i<l ; i++){
			cin >> arr[i];
		}
		Solution ob;
		int ans = ob.findMinTime( n , arr , l) ;
		cout << ans << endl ;
	}
	return 0;
}