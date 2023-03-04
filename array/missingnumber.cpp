#include<iostream>
using namespace std;

int main(){
    int arr[] = { 2 , 3 , 1 };
    int n = sizeof(arr)/sizeof(arr[0])+1;
    int nsum = (n*(n+1))/2 ;
    int arrsum=0;
    for(int i=0;i<n-1;i++){
        arrsum += arr[i];
    } 
    int ans =nsum-arrsum;
    cout << "ans " << ans << endl;
return 0;
}