#include<bits/stdc++.h>
using namespace std;


    // int numSubarrayProductLessThanK(vector<int>& nums, long long int k) {
    //     int count = 0;
    //     int n = nums.size();
    //     int i = 0;

    //     while(i<n){
    //         if(nums[i] >= k){
    //             i++;
    //             continue;
    //         }
    //         count++;
    //         long long int product = nums[i];
    //         int j = i+1;

    //         while(j<n){
    //             if(nums[j] >= k) break;
    //             product = product * (long long int)nums[j];
    //             if(product >= k) break;
    //             if(product < k ) count++;
    //             j++;
    //         }
    //         i++;
    //     }

    //     return count;
    // }

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#define ll long long
#define endl "\n"
#define show(arr) for (auto i: arr) {cout << i << ' ';} cout << "\n"
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()
#define debug(x) cout << #x << " = " << (x) << endl;

auto initialize = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        long n = nums.size(), r = 0, l = 0;
        long long prod = 1;
        int ans = 0;
        debug(ans);
        for (; r < n; ++r) {
            prod *= nums[r];
            for(; prod >= k && l <= r; ++l) {
                prod /= nums[l];
            }
            ans += (r - l + 1);
        }
        return ans;
    }


int main(){

    vector<int> nums = { 10 , 5 , 2 , 3,4,5,6,7 } ;
    vector<int> nums1 = { 1 , 2 , 3 } ;
    // int k ;
    // cin >> k;

    cout << "answer is : " << numSubarrayProductLessThanK(nums, 100) << endl;
    //cout << numSubarrayProductLessThanK(nums, k) << endl;
    //cout << numSubarrayProductLessThanK(nums1, k) << endl;


    return 0;
}