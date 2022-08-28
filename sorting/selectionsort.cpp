#include<iostream>
using namespace std;

void selectionsort(int arr[] , int n){
    for(int i= 0 ; i<n ; i++){
        int minIndex = i ;              //the initial index where we will place the smallest value , if found in the remaining array
        for(int j= i+1 ; j<n ; j++){
            if(arr[minIndex]>arr[j]){   //finding value smaller than the one at minIndex - minIndex denotes the index having minimum value till now
                minIndex=j;
            }
        }                               //at the end of the loop , we have the Index of Minimum value in the unsorted
        swap(arr[minIndex] , arr[i]) ;  // now we swap the initial value , i , with the newly found(if not found ,
    }                                   //  then the element is swapped with itself) minIndex's element value
}

void printarray(int arr[] , int size){
    for(int i=0 ; i<size;i++){
        cout << arr[i] << " " ;
    }
}

int main(){

    int arr[4] = { 6, 3 , 4 ,8 } ;
    selectionsort(arr , 4) ;
    cout << "The sorted array is : " ;
    printarray(arr , 4) ;

}