#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
 
bool isPossibleSolution(long long int mid,long long  int arr[],long long  int n,long long int target) {
 
    long long int sum = 0;
    for(long long int i=0; i<n; i++) {
        long long int diff = 0;
 
        if(arr[i] > mid)   // chainsaw ki height se greater se hai tree ki height 
            diff = arr[i] - mid;
 
        sum = sum + diff;
    }
 
    if(sum >= target)
        return true;
    else
        return false;    
 
}
 
int getMaxHeightOfSaw(long long int arr[],long long int n,long long int target) {
    sort(arr, arr + n); // trees ki height sort krli , to get max tree available height nd then calc mid value
    long long int s = 0;
    long long int e = arr[n-1];
 
    long long int ans = -1;
 
    while(s <= e) {
        long long int mid = s + (e-s)/2;
 
        if(isPossibleSolution(mid, arr, n, target)) { //this function tells ki mid height se trees ko cut karne pe
            //store ans                                 // target jitni wood collect ho jaati hai,, yaa nahi!!
            ans = mid;
            //move to right
            s = mid + 1;
        }
        else{
            //left
            e = mid - 1;
        }
 
    }
    return ans;
}
 
 
int main() {
 
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL); // also ye line se cout work nahi karta!!
    long long int t;
    cin>>t;
    while(t--){
        long long int n ;
        cin >> n ;
        long long  int arr[n] ;
        long long int m ; 
        cin >> m ; //target
        for(long long int i=0 ; i<n ; i++){
            cin >> arr[i] ;
        }
        cout << getMaxHeightOfSaw(arr, n , m) << endl;
    }
 
    // int arr[] = {15, 8, 18, 6};
    // int target = 30;
 
    // int ans = getMaxHeightOfSaw(arr, 4, target);
    // cout << "Answer is " << ans << endl;
 
    return 0;
} 