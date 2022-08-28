#include<iostream>
using namespace std;

void selectionsort(int arr[] , int n){
    for(int i= 0 ; i<n ; i++){
        int minIndex = i ;
        for(int j= i+1 ; j<n ; j++){
            if(arr[minIndex]>arr[j]){
                minIndex=j;
            }
        }
        swap(arr[minIndex] , arr[i]) ;
    }
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