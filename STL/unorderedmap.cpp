#include<bits/stdc++.h>
using namespace std;

int main(){

    unordered_map<int , int > mp;
    vector<int> nums = {  2,3,3,2,2,4,2,3,4  } ;
    for(auto i : nums){
        mp[i]++;
    }
    cout << "Number of elements in the array: "<<nums.size()
    << "\nFrequency distribution of elements:\n";
    for (auto x : mp) {
        cout << x.first << "-" <<x.second <<"\n";
        }

    int ans = 0;
    
    for(auto y : mp) {
        //base case
        if(y.second ==1 ) cout << "-1 NOT POSSIBLE!!!" << endl;
        // return -1;

        if(y.second % 2 == 0){
            ans += y.second/2 ; 
        }
        else if(y.second % 3 == 0){
            ans += y.second / 3 ;
        }

    }

    cout << "minimum operation(s) are : " << ans << endl;




    return 0;
}