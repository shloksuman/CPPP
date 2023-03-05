#include<iostream>
using namespace std;

void printarray(int arr[] , int n){
    for(int i= 0 ; i<n ; i++){
        cout << arr[i] << " " ;
    }
}

void solve(int arr[], int n){
    int j = -1 ;
    for(int i=0 ; i<n ; i++ ){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    for(int i = j+1 ; i<n ; i++){
        if(arr[i]!=0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main(){

    int arr[] = { 1,0,2,3,2,0,0,4,5,1};
    int n = sizeof(arr)/sizeof(arr[0]) ;
    cout << "initial array is : " ;
    printarray(arr , n) ;
    solve(arr , n);
    cout << "\nafter moving zeroes to end : " ;
    printarray(arr, n) ;
    
return 0;
}