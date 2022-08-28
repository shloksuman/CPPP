#include<iostream>
using namespace std;

void swapalternate(int arr[], int size){
    int k;
    int l=size-1;
    for(int i=0; i<l;i=i+2){
        k=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=k;
    }
    cout << "The alternately swapped array is : " ;
    //printing values
    for(int j=0 ; j<size; j++){
       cout << arr[j] << " " ;
    }
}

int main(){
    cout << "Enter the size of the array : " ;
    int size;
    cin >> size ;
    int arr[size] ;
    cout << "Enter the elements of the array : " ;
    for(int i=0; i<size ; i++){
        cin >> arr[i] ;
    }
    swapalternate(arr, size) ;

    return 0;
}