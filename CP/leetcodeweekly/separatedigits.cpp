#include<bits/stdc++.h>
using namespace std;

void createArr(int arr[], int size){
    cout << "Enter the elements of the array : " ;
    for(int i=0 ; i<size ; i++){
        cin >> arr[i] ;                
    }
}

//PRINTING ARRAY
void printarray(int arr[], int size) {
    cout << "The array is : " ;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl ;        
    }  
}

void solve(){

}

 vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        int last ;
        for(int i =0 ; i<= nums.size()-1 ; i++){
             vector<int> temp ;
            while(nums[i]>0){
            //cout << "ans" << endl;
                last = nums[i]%10;
                temp.push_back(last) ;
                //cout << "ans[" << i << "] = " << ans[i] << endl;
                nums[i] = nums[i]/10 ;
               // cout << "ansbelowlast" << endl;
            }
            reverse(temp.begin() , temp.end() ) ;
            // for(auto it : temp){
            //     cout << "temp " << it << endl;
            // }
            for(int i= 0 ; i<= temp.size()-1 ; i++){
                ans.push_back(temp[i]) ;
            }

          //  temp.insert(temp.begin(), ans.begin(), ans.end());
        }
        return ans;
    }

int main(){

    vector<int> nums = {13 , 25 ,48 };
    vector<int> ans = separateDigits(nums) ;

    // for(auto it: ans){
    //     cout << ans[it] ;
    // }
    for(int i = 0 ; i < ans.size() ; i++){
        cout << "print : " << ans[i] << endl;
    }

    return 0;
}