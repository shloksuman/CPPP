#include<bits/stdc++.h>
using namespace std;

int minOperations(vector<int>& nums, int k) {
    int size = nums.size();
    int j=k;
    vector<int> collect(k+1,0);
     for(int i= 0 ; i<k+1 ; i++){
        cout << "collect[" << i << "] : " << collect[i] << endl;
    }
    
    for(int i = 0 ; i<size ; i++){
        cout << "i : " << i << " j : " << j << " nums[size-i-1 ] : " << nums[size-i-1] << " collect[nums[size-i-1]] : " << collect[nums[size-i-1]] << endl;
        // if(nums[size-i-1] > k){
        //     continue;
        // }
        //  if(collect[nums[size-i-1]]==1){
        //     continue;
        // }
        if(nums[size-i-1]<=k){
         if(collect[nums[size-i-1]]==1){ continue;}
            collect[nums[size-i-1]]=1;
            j--;
            if(j==0) return i+1;
        }
        cout << "before loop ends : " << endl;
        cout << "i : " << i << " j : " << j << " nums[size-i-1 ] : " << nums[size-i-1] << " collect[nums[size-i-1]] : " << collect[nums[size-i-1]] << endl;

    }
    for(int i= 0 ; i<k+1 ; i++){
        cout << "collect[" << i << "] : " << collect[i] << endl;
    }
    return size;
}

int main(){

    vector<int> v = { 3,1,5,4,2} ;
    int k=2;

    cout << "min op is : " << minOperations(v , k) << endl;
    
    return 0;
}