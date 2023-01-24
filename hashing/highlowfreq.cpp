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

   int max_count1 = 0, res1 = -1 , max_count2 = 0, res2 = -1;
    for (auto i : m) {
        if (max_count1 < i.second) {
            res1 = i.first;
            max_count1 = i.second;
        }
       
    }
  
    cout << "max frequent element is : " << res1 << endl;


    return 0;
}