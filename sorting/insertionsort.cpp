#include<iostream>
using namespace std;

void insertionsort(int arr[] , int n){
    for(int i= 1 ; i<n ; i++){
        int temp = arr[i] ; 
        int j= i-1 ;            
        for( ; j>=0 ; j--){
            if(arr[j]>temp){   
                arr[j+1]= arr[j];
            }
            else break;
        }                      
        arr[j+1] = temp  ;  
                                    
    }
}                                   

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