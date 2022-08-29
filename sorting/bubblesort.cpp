#include<iostream>
using namespace std;

void bubblesort(int arr[] , int n){
    for(int i= 0 ; i<n-1 ; i++){ //no of rounds required , eg array size = 5 , then size-1 = 4 rounds are required
                                    // j<=n-i //pattern that we observe // in round 2 , we dont again check compare with the last element
                                    // as it is already sorted , so everytime in subsequent rounds , we reduce the search size by i,, 
                                    // that is , we subtract i from n .. j <= n - i 
        for(int j= 0 ; j<n-i-1 ; j++){ //j=0 , since we start our search for the ith largest element from the initial element
            if(arr[j]>arr[j+1]){                 
                swap(arr[j] , arr[j+1]) ; // swapping if greater value found // add '&' while submitting in gfg
            }
        }                              
    }                                   
}

void printarray(int arr[] , int size){
    for(int i=0 ; i<size;i++){
        cout << arr[i] << " " ;
    }
}

int main(){

    int arr[5] = { -2 , 45 , 0 , 11 , -9 } ;
    bubblesort(arr , 5) ;
    cout << "The sorted array is : " ;
    printarray(arr , 5) ;

}