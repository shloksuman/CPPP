#include<bits/stdc++.h>
using namespace std;

int optimal(int arr[] , int i , int j){
    //base case
    if(i>j){
        return 0;
    }

    int choice1 = arr[i] + min( optimal(arr, i+2 , j) , optimal(arr , i+1 , j-1)) ;

    int choice2 = arr[j] + min( optimal(arr, i+1 , j-1) , optimal(arr , i , j-2)) ;

    int ans = max(choice1 , choice2) ;
    return ans;
}

int main(){

    int arr[] = { 20 , 30 , 2 , 2, 2 ,10 } ;
    int i = 0 ;
    int j = 5 ;

    cout << "answer is : " << optimal(arr , i , j) << endl ;
    int arr2[] = { 5 ,3 ,7 ,10 } ;
    i = 0 ;
    j = 3 ;

    cout << "answer is : " << optimal(arr2 , i , j) << endl ;

    return 0;
}