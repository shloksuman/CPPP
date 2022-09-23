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
    cout << "The array is : " ;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl ;        
    }  
}

int search(int arr[] , int size , int target , int i = 0){
    if(arr[i]==target){
        return i ;
    }
    if(i>=size){
        cout << "NOt found " ;
        return 0 ;
    }
    i++;
    search(arr , 6 , target , i) ;



}

int main(){

    
    int arr[6] = { 4 ,2 ,11 ,44 ,32 ,23} ;
    printarray(arr , 6) ;
    int target ;
    cout << "enter target to search : " ;
    cin >> target;
    cout << search(arr , 6 , target) ;
    

    return 0;
}