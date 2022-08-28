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

//REVERSE  USING RECURSION 
void reverseArr(int arr[], int start , int end) {
    if(start>=end)
    return ;

    int temp=arr[start];
    arr[start]=arr[end] ;
    arr[end]=temp ;

    reverseArr(arr, start+1 , end-1) ;

}

int main(){

    int arr[50] ;
    int size ;
    cout << "Enter the size of the array : " ;
    cin >> size ;
    createArr(arr, size) ;
    reverseArr(arr , 0 , size-1) ;
    printarray(arr, size) ;

return 0;
}