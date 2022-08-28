#include<iostream>
using namespace std;

int trailingZeroes(int N)
    {
        // // Write Your Code here
        // int fact=1;
        // while(N>0){
        //     fact = fact * N;
        //     --N;
        // }
        // int ans=0;
        // while(fact>0){
        //     if(fact%10==0){
        //         ++ans;
        //         fact=fact/10;
        //     }
        //     else break;
        // }
        // return ans;


        //SECOND CODE.. O(logn)

         // Write Your Code here
         if (N < 0) // Negative Number Edge Case
           return -1;

    // Initialize result
    int count = 0;

    // Keep dividing n by powers of
    // 5 and update count
    // for (int i = 5; N / i >= 1; i *= 5)
    //     count += N / i;
    while(N>0){
        count = count + N/5 ;
        N = N/5 ;
    }

    return count;


    }

int main(){
    cout << "enter int : " ;
    int n;
    cin>>n;
    cout << "the trailing zeroes are : " << trailingZeroes(n) << endl;

return 0;
}