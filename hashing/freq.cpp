#include<bits/stdc++.h>
using namespace std;




int main(){

   int n;
   cin >> n;
   int arr[n] ;
   unordered_map<int , int> m;
   for(int i= 0 ; i<n ; i++){
    cin >> arr[i] ;
    m[arr[i]]++ ;
   }

   int q;
   cin >> q;
   while(q--){
    int num;
    cin >> num;
   // cout << num << "--" << m[num] << endl;
   cout << m[num] << " " ;
   }

    return 0;
}