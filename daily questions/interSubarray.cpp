#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

 long long countInterestingSubarrays(vector<int>& nums, int modulo, int k) {
        int count =0 ;
        
        for(int l = 0 ; l<nums.size() ; l++){
            int cnt=0;
            // int flag = 0;
          //  cout << " l : " << l << " and cnt : " << cnt << endl;
            for(int r = l ; r< nums.size() ; r++){
                cout << "l : " << l << " and r : " << r << endl;
                if(nums[r]%modulo==k){
                    cnt++;
                  //  cout << "r : " << r << " and cnt after nums[r] check : " << cnt << endl;
                }
            }
            cout << "cnt : " << cnt << " and count : " << count << endl;
            if(cnt%modulo==k){
                count++;
            }
            cout << "count after cnt%mod==k check, just before ending main outer loop : " << count << endl;
        }
        
        return count;
        
    }

int main(){
//[3,2,4]
// 2
// 1

    vector<int> v = { 3,2,4} ;
    int modulo = 2;
    int k=1;

    cout << "answer is : " << countInterestingSubarrays(v,modulo , k) << endl;





return 0;
}