#include<iostream>
using namespace std;

void insertionsort(int arr[] , int n){
    for(int i= 1 ; i<n ; i++){
        int temp = arr[i] ; 
        int j= i-1 ;            //the initial index where we will place the smallest value , if found in the remaining array
        for( ; j>=0 ; j--){
            if(arr[j]>temp){   //finding value smaller than the one at minIndex - minIndex denotes the index having minimum value till now
                arr[j+1]= arr[j];
            }
            else break;
        }                               //at the end of the loop , we have the Index of Minimum value in the unsorted
        arr[j+1] = temp  ;  // now we swap the initial value , i , with the newly found(if not found ,
                                        //  then the element is swapped with itself) minIndex's element value
    }
    //swap(&arr[minIndex],&arr[i]);     //important line to code while submitting online on gfg ... the '&' is important
    }                                   //otherwise it LEADS TO SEGMENTATION FAULT

void printarray(int arr[] , int size){
    for(int i=0 ; i<size;i++){
        cout << arr[i] << " " ;
    }
}

int main(){

    int arr[4] = { 6, 3 , 4 ,8 } ;
    insertionsort(arr , 4) ;
    cout << "The sorted array is : " ;
    printarray(arr , 4) ;

}