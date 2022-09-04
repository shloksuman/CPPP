#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

 bool findSubarrays(vector<int>& nums) {
        int sum = 0 ;
        for(int i = 0 ; i<nums.size()-2 ; i++){
            int sum1 = nums[i]+ nums[i+1] ;
            for(int j = i+1 ; j< nums.size()-1 ; j++){
                int sum2 = nums[j] + nums[j+1] ;
                if(sum1==sum2){
                    return true;
                }
            }
        }
        return false;
    }

int main(){
    //MAKES INPUT OUTPUT FAST
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL); // also ye line se cout work nahi karta!!
    int t;
    cin>>t;
    while(t--){
        vector<int> nums  ;
        int n;
        cin >> n;
        for(int i= 0 ; i< n ; i++){
        nums.push_back(i) ;
        }
        cout << findSubarrays(nums) << endl ;
        
    }
return 0;
}