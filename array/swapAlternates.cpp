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

void swapAlternate( int arr[] , int size) {
    for(int i=0; i <= (size/2)+1 ; i = i+2 ) {
        swap(arr[i], arr[i+1]) ;
    }
}

int main(){
    int arr[100] ;
    cout << "Enter the size of the array : " ;
    int n;
    cin >> n;
    createArr(arr, n) ;
    swapAlternate(arr,n) ;
    cout << "After SWAPPING!!!" << endl;
    printarray(arr,n) ;
   
    return 0;

}