#include<bits/stdc++.h>
using namespace std;

 int maxScore(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        reverse(nums.begin(), nums.end());
        int count=0;
        long long  int sum=0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i] ;
            nums[i] = sum ;
        }
        for(int i=0; i<nums.size();i++){
            if(nums[i]>0) count++;
            else break;
        }
        return count;
    }

int main(){

   // vector<int> nums = {2,-1,0,1,-3,3,-3 } ;
    vector<int> nums = {-2,-3,0 } ;
    cout << "the max score is : " << maxScore(nums) << endl ;

return 0;
}