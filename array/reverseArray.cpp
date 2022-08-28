#include<iostream>
using namespace std;

//CREATION ON ARRAY
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

void reverseArray(int arr[], int size){
    for(int i=0 ; i < size/2 ; i++){
        swap(arr[i] , arr[size - 1 - i]) ;
    }
}



int main(){
    int arr[100] ;
    int size ;
    cout << "Enter the size of the array : " ;
    cin >> size ;
    createArr(arr, size) ;
    reverseArray(arr, size) ;
    printarray(arr, size) ;


return 0;
}