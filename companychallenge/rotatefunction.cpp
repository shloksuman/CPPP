#include<bits/stdc++.h>
using namespace std;

  int maxRotateFunction(vector<int>& a)
    {
        long long sum = 0, orig = 0;
        for(int i=0;i<a.size();i++)
        {
            sum += a[i];
            orig += i*a[i];
        }
        
        long long maxi = orig;
        int n = a.size();
        
        for(int i=a.size()-1;i>=0;i--)
        {
            orig += (sum - (long long)a[i]*(n));
            maxi = max(maxi, orig);
        }
        
        return maxi;
    }

int main(){

  //  int arr[100];
  //  cout << "Enter the size of element : " ;
   // int size;
   // cin>>size;
   // createArr(arr,size);
   vector<int> nums = {-2,6,-3,-10 };
    cout  << maxRotateFunction(nums) << endl ;
    

return 0;
}