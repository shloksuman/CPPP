#include<bits/stdc++.h>
using namespace std;

 int distinctPrimeFactors(vector<int>& nums) {
        int size = nums.size() ;
         unsigned long long int p = 1;
        for(int i = 0 ; i < size ; i++){
            p = p* nums[i] ; //got product p of all elements
        }
        
        unsigned long long int i=2 , count = 0 , distfactor = 1 , factor ;
        
        while(i<=p){
            if(p%i==0){
                p = p/i ;
                factor = i ;
            if(distfactor!=factor){
                count++;
                distfactor =factor ;
            }
            }
            

            else if(p%i != 0) i++ ;
        }
        
        return count;
        
    }

int main(){

    vector<int> nums = { 3 } ;

       cout << distinctPrimeFactors(nums) ;
    

    return 0;
}