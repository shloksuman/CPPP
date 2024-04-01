#include<bits/stdc++.h>
#define debug(x)  cout<<#x<<" : "<<x<<endl;
using namespace std;

long long countSubarrays(vector<int>& nums, int k) {
        //APPROACH 1: BRUTE FORCE // TC: O(n^2)
        long long count = 0;
        long long n = nums.size();
        //step 1: firstly find max element in nums
        int maxi= INT_MIN;
        for(long long int i=0 ; i <n ; i++){
            if(nums[i]>maxi){
                maxi = nums[i];
            }
        }

        //step 2: obtain no of valid subarrays and increment count
        for(long long int i=0 ; i < n ; i++){
           // cout << "loop no: " << i << endl;
            long long int freq=0;
            for(long long int j=i; j<n ; j++){
             //   cout << nums[j] << " ";
                if(freq >= k){
                    count++;
                    continue;
                }
                if(nums[j] == maxi){
                    freq++;
                    if(freq >= k){
                        count++;
                   //     cout << "It was a good subarray so increment count to " << count << endl;
                    }
                }
            }
           // cout << "\n";
        }
        return count;
}

// long long countSubarrays(vector<int>& nums, int k) {
//     int n = nums.size();
//     int left = 0, right = 0;
//     int maxFreq = 0;
//     long long count = 0;
    
//     unordered_map<int, int> freqMap;
    
//     while (right < n) {
//         freqMap[nums[right]]++;
//         maxFreq = max(maxFreq, freqMap[nums[right]]);
        
//         while (maxFreq >= k && left <= right) {
//             count += n - right;
//             freqMap[nums[left]]--;
//             if (freqMap[nums[left]] < k) {
//                 maxFreq = 0;
//                 for (auto it = freqMap.begin(); it != freqMap.end(); ++it) {
//                     maxFreq = max(maxFreq, it->second);
//                 }
//             }
//             left++;
//         }
        
//         right++;
//     }
    
//     return count;
// }

int main(){

// int a = 4;
// debug(a);
    vector<int> nums = { 1 , 3 , 2 , 3 , 3  };
    vector<int> nums3 = { 1 , 4 , 2 , 3  };
    vector<int> nums2 = { 61,23,38,23,56,40,82,56,82,82,82,70,8,69,8,7,19,14,58,42,82,10,82,78,15,82 };
    int k = 2;
    //cout << countSubarrays(nums3 ,k) << endl;
    cout << "\nFINAL ANSWER IS COUNT : " << countSubarrays(nums2 ,k) << endl;


    return 0;
}