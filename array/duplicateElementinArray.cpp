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

void duplicateElement(int arr[], int size){
    int sum=0;
    int n = size-1 ;
    for(int i=0;i<size;i++){
        sum = sum + arr[i];
    }
    int ans = sum - ((n*(n+1))/2) ;
    cout << "The duplicate element is : " << ans << endl ;
}

int main(){

    int arr[100];
    cout << "Enter the size of element(N+1) : " ;
    int size;
    cin>>size;
    createArr(arr,size);
    duplicateElement(arr,size);

return 0;
}