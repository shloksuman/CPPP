#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

  //  vector<int> arr2 = { 4 , 7 , 1 , 9  , 8 ,8 , 8 ,8 } ;
    vector<int> arr2 = { 1,2,3,4,5,6,7,8,9,10 } ;
    int n = arr2.size() ;
    cout << " n = " << n << endl ;
    sort(arr2.begin() , arr2.end()) ;
    // for(int i = 0 ; i< n ; i++){
    //     cout << arr2[i] << endl ;
    // }
   // cout  << "vector arr2 is : " << ++arr2[0] << endl ; 
      
      
    vector<int> countarr = { 1 } ; //this array contains the count of each number
        int i = 0  , j = 1 , count = 0 ;
        while(j<n){
            cout << "i = " << i << " j = " << j << " count = " << count << endl;
            if(arr2[i]==arr2[j]){
               // countarr[count] ;
                countarr[count]++ ;
                ++j ;
            }
            else {
                countarr[count+1] = 0 ;
                ++count ;
                i=j ;
               // ++j ;
            }
        }

    sort(countarr.begin() , countarr.end() ) ;
    int c = countarr.size() ;
    int x = n/2 ;
    int flag=1;
    int ii = 1 ;
    int sum = 0 ;
    while(flag){
        sum = sum + countarr[c-ii] ;
        if(sum>=x){
            flag = 0 ;
           // return i ;
        }
        else {
            ii++ ;
        }
    }


   cout << "Minimum set size required : " << ii << endl ;
    //  cout << "The count of each unique element is : " ;
    //  for(int i = 0 ; i<= count ; i++){
    //     cout << countarr[i] << endl ;
    // }

  

  


return 0;
}