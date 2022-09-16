#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin() , nums.end() ) ;
        
        vector<vector<int>> res ;
        
        //fixing a, and start iteration
        
        for(int i = 0 ; i<nums.size()-2 ; i++){
            if(i==0 || (i>0 && nums[i]!=nums[i-1])){
                int lo = i+1 , hi = nums.size()-1 , sum = 0- nums[i] ;
                while(lo<hi){
                    if(nums[lo]+nums[hi]==sum){
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[lo]);
                        temp.push_back(nums[hi]);
                        res.push_back(temp) ;
                        
                    while(lo<hi && nums[lo]==nums[lo+1]) lo++;
                    while(lo<hi && nums[hi]==nums[hi-1]) hi--;
                        
                    lo++ , hi -- ;
                    }
                    else if(nums[lo]+nums[hi]<sum) lo++;
                    else hi--;
                }
            }
        }
        return res;
    }

int main(){

   // vector<int> check = { -1, 0 , 1 , 2 , -1 , -4 } ;
    vector<int> check = { 0,0,0 } ;
    
    vector<vector<int>> ans  = threeSum(check) ;

    // for(int i = 0 ; i<ans.size() ; i++){
    //     ans[i].pop_back() ;
    // }

     for (int i = 0; i < ans.size() ; i++) {
        for (
            auto it = ans[i].begin();
            it != ans[i].end(); it++)
            cout << *it << " ";
        cout << endl;
    }

    cout << "anssize is : " << ans.size() << endl ;

    return 0;
}

// discuss link 
// https://leetcode.com/problems/3sum/discuss/2570018/C%2B%2B-Simple-Solution-Brute-%2B-Better-%2B-Optimal