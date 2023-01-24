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
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;        
    }  
}

void solve(int i , int arr[] , int n){
    if(i>=n/2) return;

    swap(arr[i] , arr[n-i-1]);

    solve(i+1 , arr , n) ;
}

int main(){

    int t ;
    cin >> t ;
    while(t--){
        int n;
        cout << "enter the size of array : " ;
        cin >> n;
        int arr[n] ;
        createArr(arr , n) ;

        solve(0 , arr , n);
        
        cout << "The reversed array is : " ;

        printarray(arr, n);
    }

    return 0;
}