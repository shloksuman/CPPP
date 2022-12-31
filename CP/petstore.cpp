#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long


int solve(int arr[], int n){
    sort(arr, arr+n) ;
   
   // cout << endl ;
    //frequency of different types are stored
  unordered_map<int, int> m;
 
    for (int i = 0; i < n; i++)
        m[arr[i]]++;
    
    for (auto i = m.begin(); i != m.end(); i++){
        if(i->second % 2 == 1 ){
            return 0 ; // 0 means odd , not possible
        }
    }
    return 1;
}

int main(){
    //MAKES INPUT OUTPUT FAST
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
 //   cout << "enter no of testcases : " ;
    cin>>t;
    while(t--){
       int n ;
     //  cout << "enter total pet n = " ; 
       cin >> n ;
       int arr[n] ;
     //  cout << "enter serially n pets with their serial type : " ;
       for(int i = 0 ; i< n ; i++){
           cin >> arr[i] ;
       }
       int ans = solve(arr , n) ;
       if(ans){
           cout << "YES" << endl ;
       }
       else cout << "NO" << endl ;
       
    }
return 0;
}



/*
#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long


int solve(int arr[], int n){
    sort(arr, arr+n) ;
    cout << "printing sorted array : " ;
    for(int m=0 ; m<n ; m++){
        cout << arr[m] << " " ;
    }
    cout << endl ;
    //frequency of different types are stored
  unordered_map<int, int> m;
 
    for (int i = 0; i < n; i++)
        m[arr[i]]++;
    
    for (auto i = m.begin(); i != m.end(); i++){
        if(i->second % 2 == 1 ){
            return 0 ; // 0 means odd , not possible
        }
    }
    return 1;
}

int main(){
    //MAKES INPUT OUTPUT FAST
   // ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cout << "enter no of testcases : " ;
    cin>>t;
    while(t--){
       int n ;
       cout << "enter total pet n = " ; 
       cin >> n ;
       int arr[n] ;
       cout << "enter serially n pets with their serial type : " ;
       for(int i = 0 ; i< n ; i++){
           cin >> arr[i] ;
       }
       int ans = solve(arr , n) ;
       if(ans){
           cout << "YES" << endl ;
       }
       else cout << "NO" << endl ;
       
    }
return 0;
}
*/