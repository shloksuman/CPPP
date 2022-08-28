#include<iostream>
using namespace std;
// searching max and min element in the array by linear search method
void max(int arr[],int size){
    int m=arr[0];
    // for(int i=1;i<size;i++){
    //     if(m<arr[i]){
    //         m=arr[i];   //sets the max element
    //     }               //FIRST METHOD
    for(int i=1;i<size;i++){
        m= max(m, arr[i]) ; //SECOND METHOD
    }
    cout << "The maximum element in the array is : " << m << endl;
}

void min(int arr[],int size){
    int m=arr[0];
    // for(int i=1;i<size;i++){
    //     if(m>arr[i]){
    //         m=arr[i];   //sets the min element
    //     }
    for(int i=1;i<size;i++){
        m= min(m, arr[i]) ; //SECOND METHOD
    }
    cout << "The minimum element in the array is : " << m << endl;
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
    max(arr,size);
    min(arr,size);

    return 0;
}