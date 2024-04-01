#include<bits/stdc++.h>
using namespace std;

int subarraysWithKDistinct(vector<int>& nums, int k) {
        int n = nums.size();
        int result=0;

        int i = 0 , j = 0 , countmax = 0 ;
        set<int> s;

        while(j<n){
            cout << "==============starts loop here =================" << endl;
            cout<< "i : " << i << " and j : " << j  << endl;
            for(int l = i ; l <= j ; l++) cout << "nums[" << l << "] = " << nums[l] << " ";
            cout << "\n";
            cout << "countmax at start of loop :" << countmax << endl;

            //not present, then insert in set s, increment countmax
            if(s.find(nums[j]) == s.end()){
                cout << "entered if 1 " << endl;
                s.insert(nums[j]);
                countmax++;
                cout << "countmax after entering 1, inserted nums[" << j << "] = " << nums[j] << " in set s : "  << countmax << endl;
                j++;
            }
            
            if(countmax==k){
                result++;
                j++;
                cout << "entered if 2 , evaluated and now result " << result << endl;
            }
            else if(countmax == k+1){
                i++;
                j--;
                --countmax;
                s.erase(nums[j]);
            }
            

            

            if(i ==8) break;
            
          //  j++;
        }

        // for(int i =0; i < n ;i++){
        //     set<int> s;
        //     for(int j = i ; j<n; j++){
        //         s.insert(nums[j]);
        //         if(s.size() ==k ){
        //             result++;
        //         }
        //     }
        // }
        return result;
}

int main(){

    vector<int> nums = { 1,2,1,2,4};
    int k = 2;

    cout << "Final answer is : " << subarraysWithKDistinct(nums, k) << endl;

    return 0;
}
    // cout << "hello" << endl;

    // set<int> s;
    // vector<int> nums = {1,2,1,2,3 , -1, 9};

    // for(auto i :nums){
    //     s.insert(i);
    // }

    // for(auto i:s){
    //     cout << i << " " ;
    // }