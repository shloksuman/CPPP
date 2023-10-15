#include<bits/stdc++.h>
using namespace std;

int minV(int a, int b ){
    if(a==b) return a;
    if(a<b) return a;
    else return b;
}

// int bs(vector<int> nums, int target){
//     cout << "\nInside bs loop" << endl;
//     int low = 0 , high = nums.size()-1;
//     int mid ;
//     while(low<=high){
//         mid = (low+high)/2;
//         if(nums[mid]==target){
//             cout << "low : " << low << " and high : " << high << " and mid : " << mid << endl;
//             return mid;
//         }
//         else if(target>nums[mid]){
//             low = mid+1;
//         }
//         else high = mid-1;
//     }
//     return 0;
//}

int findKRotation(vector<int> &nums){
    // Write your code here.    
    int low = 0 , high = nums.size()-1;
    int mid ;
    int ans = INT_MAX;
    int minIndex = -1;
    cout << "inside findK" << endl ;

    while(low<=high){
        mid = (low + high )/2;
        cout << "\nInside while of findK and ans : " << ans  << endl;
        if(nums[low]<=nums[mid] && nums[mid]<=nums[high]){
            ans = minV(ans , nums[low]);
            minIndex = low;
          //  return low;
        }

        if(nums[low] <= nums[mid]){
            if(ans!=nums[low]){
            ans = minV(ans , nums[low]);
            minIndex = low;
            }
            low = mid+1;
           
        }
        else {
            if(ans!=nums[mid]){
            ans = minV(ans , nums[mid]);
            minIndex = mid;
            }
             high = mid - 1;
        }
    }
    cout << "\nans : " << ans << endl;
 //   cout << "\nInside findK, now going to find minIndex using ans " << endl;

    // minIndex = bs(nums, ans);

    return minIndex ;

}

int main(){

    vector<int> nums = { 8,3,4 } ;
    
    cout << "the number of times array is rotated is : " << findKRotation(nums) << endl;

    return 0;
}