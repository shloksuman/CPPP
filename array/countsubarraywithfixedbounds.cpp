#include <bits/stdc++.h>
using namespace std;

long long countSubarrays(vector<int> &nums, int minK, int maxK)
{
    long long ans = 0;      // initialize answer variable to 0
    int j = -1;             // initialize starting index of current subarray to -1
    int prevMinKIndex = -1; // initialize most recent index of minK to -1
    int prevMaxKIndex = -1; // initialize most recent index of maxK to -1

    for (int i = 0; i < nums.size(); ++i)
    { // iterate over every element in nums
    
        if (nums[i] < minK || nums[i] > maxK)
            j = i; // if nums[i] is out of range, move starting index of current subarray to i
        if (nums[i] == minK)
            prevMinKIndex = i; // if nums[i] is minK, update most recent index of minK to i
        if (nums[i] == maxK)
            prevMaxKIndex = i; // if nums[i] is maxK, update most recent index of maxK to i

        // calculate number of valid subarrays that end at index i and add to answer
        ans += max(0, min(prevMinKIndex, prevMaxKIndex) - j);
        cout << "i : " << i << " MinI : " << prevMinKIndex << " MaxI : " << prevMaxKIndex << " j : " << j << " ans : " << ans <<  endl;
    }

    return ans; // return the total count of valid subarrays
}

int main()
{
    vector<int> nums = {4,2,3,5,2,3,4,5};
    int ans = countSubarrays(nums, 2, 5);
    cout << "no of possible subarrays is/are : " << ans << endl;
    vector<int> nums2 = {1, 1,1,1};
    int ans2 = countSubarrays(nums2, 1, 1);
    cout << "no of possible subarrays is/are : " << ans2 << endl;

    return 0;
}