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

int partition(int arr[] , int first , int last){
    int pivot = arr[last] ;
    int i = first-1;
    int j = first ;

    for( ; j<=last-1 ; j++){
        if(arr[j]<pivot){ //moves all the element less than pivot to its left side
            i++;
            swap(arr[i] , arr[j]);
        }
    }
    swap(arr[i+1] , arr[last]);

    return i+1 ;
}

void quicksort(int arr[] , int first , int last){
    if(first>=last) return;

    int piv = partition(arr , first , last) ; //this gives the correct index of pivot element in the sorted array

    quicksort(arr , first , piv-1);
    quicksort(arr , piv+1 , last);
}


int main(){

    int n;
    cout << "enter the size of array : " ;
    cin >> n;
    int arr[n];
    createArr(arr , n) ;
    quicksort(arr , 0 , n-1) ;

    cout << "the sorted array using quick sort is : " ;
    printarray(arr , n) ;

    return 0;
}