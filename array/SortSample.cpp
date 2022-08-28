#include<iostream>
#include<algorithm>
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

int main(){
    int arr[100] ;
    cout << "Enter the size of the array : " ;
    int n;
    cin >> n;
    createArr(arr, n) ;
    sort(arr, arr+n);
    printarray(arr,n) ;
   
    return 0;

}