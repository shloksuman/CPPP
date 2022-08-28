#include<iostream>
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

int timesarrayrotated(int arr[] , int n){
    int start =0 ;
    int end= n-1 ;
    int mid = start + (end-start)/2 ;

    while(start<=end){
        int next = (mid+1)%n ;
        int prev = (mid-1+n)%n ;
        if(arr[mid]<arr[prev] && arr[mid]<arr[next]){
            return mid;
        }

        if(arr[start]<arr[mid]){
            start = mid + 1 ;
        }
        else if(arr[mid]<arr[end]){
            end = mid -1 ;
        }

        mid = start + (end-start)/2 ;

    }
    return 0 ;
}

int main(){

    int arr[100];
    cout << "Enter the size of element : " ;
    int size;
    cin>>size;
    createArr(arr,size);
    cout << "The array has been rotated n times , n = " << timesarrayrotated(arr, size) << endl ;

return 0;
}