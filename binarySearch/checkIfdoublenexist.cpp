#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool checkIfExist(vector<int>& arr) {
        sort(arr.begin() , arr.end() ) ;
       // cout << arr[0] << arr[1] << arr[2] << arr[3] << endl;
        int n = arr.size() ;
        int start = 0 ;
        int end = n-1;
        int i = 0;
        int mid = start + (end- start)/2 ;
        while(i<=n){
            while(start<=end){
                if(2*arr[i]==arr[mid]){
                    return true;
                }
                else if(2*arr[i]<arr[mid]){
                    end = mid-1 ;
                }
                else if(2*arr[i]>arr[mid]){
                    start = mid + 1 ;
                }
                mid = start + (end-start)/2 ;
            }
            i++ ;
            start = i ;
            end = n-1 ;
        }
        return false ;
}

int main(){
    vector<int> v = {3 , 1 , 7, 11 , 6} ;
    cout << "return true if double exist else false : " << checkIfExist(v) << endl;
return 0;
}