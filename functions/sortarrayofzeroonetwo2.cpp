#include<iostream>
#include <bits/stdc++.h> // include this for SORT FUNCTION

using namespace std;

int main(){
    cout << "Enter the size of the array : " ;
    int size;
    cin >> size ;
    int arr[size] ;
    cout << "Enter the elements of the array : " ;
    for(int i=0; i<size ; i++){
        cin >> arr[i] ;
    }
    sort(arr , arr + size) ;
    cout << "The sorted array is : " ; 
    for(int j=0; j<size ; j++){
        cout << arr[j] << " " ;
    }
    return 0;
}