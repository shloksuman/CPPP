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
        cout << "value of j at the end of second for loop before arr[j+1]= temp command : " << j << endl ;
        cout << "also the value of temp : " << temp << endl ;                     
        arr[j+1] = temp  ;  
                                    
    }
}

void printarray(int arr[] , int size){
    for(int i=0 ; i<size;i++){
        cout << arr[i] << " " ;
    }
}

int main(){

    int arr[2] = { 6,  4 } ;
    insertionsort(arr , 2) ;
    cout << "The sorted array is : " ;
    printarray(arr , 2) ;

}