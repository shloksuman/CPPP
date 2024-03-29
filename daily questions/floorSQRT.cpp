#include<bits/stdc++.h>
using namespace std;

int floorSqrt(int n){
    
    int low = 1, high = n;
    //Binary search on the answers:
    while (low <= high) {
        long long mid = (low + high) / 2;
        long long val = mid * mid;
        if (val <= (long long)(n)) {
            //eliminate the left half:
            low = mid + 1;
        }
        else {
            //eliminate the right half:
            high = mid - 1;
        }
    }
    return high;
}

int main(){

    int n ; 
    cout << "enter n : " ;
    cin >> n;

    int ans = floorSqrt(n);
    cout << "the square root is : " << ans << endl; 

    return 0;
}