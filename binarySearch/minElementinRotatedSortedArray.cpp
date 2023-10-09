#include<bits/stdc++.h>
using namespace std;



 int minV(int a,int b){
        if(a==b) return a;
        if(a<b){
            return a;
        }
        else return b;
    }
    int findMin(vector<int>& nums) {
        int min = INT_MAX;
        int low = 0 , high = nums.size()-1;
        int mid;

        while(low<=high){
            mid = (low+high)/2;
            cout << "----->  entered the while loop \n" ;
            cout << "low = " << low << " and high = " << high << " and mid = " << mid << endl ;

            cout << "\nPrinting the array inside the low and high range : " ;
            for(int i = low ; i<=high ; i++){
                cout << nums[i] << " " ;
            }

            cout << "\n" ;



            if(nums[low]<=nums[mid] && nums[mid]<=nums[high]){
                cout << "\nentered base condition of fully sorted array " << endl;
                min = minV(nums[low] , min) ;
                return min;
            }

            // left half is sorted so value at low i.e nums[low] is least
            if(nums[low]<=nums[mid]){
                cout << "entered if condition where left half is sorted " << endl; 
                min = minV(nums[low], min);
                low = mid+1; //eliminating left half
              //  high = high - 1; // trimming right end search space
              cout << "\n after evaluation , in left half, min : " << min << " and after , low = mid + 1 , we have low : " << low << " and high : " << high <<  endl;
            }

            // right half is sorted , so value at mid is least
            else {
                cout << "entered if condition where right half is sorted " << endl; 

                min = minV(nums[mid], min);
                high = mid-1; //eliminating right half
             //   low = low + 1 ; //trimming the left end search space
                cout << "\n after evaluation , in right half, min : " << min << " and low : " << low << " and after high = mid - 1 , we have high : " << high << endl;

            }
        }

        return min;
    }



int main(){

    vector<int> nums = { 4,5,6,7,0,1,2  } ;

    cout << "the minimum element in rotated sorted array is : " << findMin(nums) << endl;
    
    


return 0;
}