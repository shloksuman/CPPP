#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> nums = { 10,9,2,5,3,7,101,18 } ;
    int n = nums.size();

    int minPos =0 , maxPos = 0;

        int a = INT_MAX , b = INT_MIN;
    for(int i = 0 ; i< n ; i++){
        if(nums[i]<a) {
           // cout << "i : " << i << " and a : " << a << " minPos : " << minPos << endl;
            a = nums[i] ; 
            minPos = i;}

        if(nums[i]>b) { 
            b = nums[i] ;
            maxPos = i; }
    }

    cout << "Max element is : " << nums[maxPos] << " and is at position : " << maxPos << endl;
    cout << "Min element is : " << nums[minPos] << " and is at position : " << minPos << endl;


    return 0;
}