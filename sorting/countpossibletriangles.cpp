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

int triangle(int arr[] , int n ){
    int count= 0;
    for(int i=0 ; i<n-2 ; i++){
        for(int j=i+1 ; j<n-1 ; j++){
            for(int k=j+1 ; k<n ; k++){
                if(arr[i]+arr[j]>arr[k] && arr[i]+arr[k]>arr[j] && arr[j]+arr[k]>arr[i]){
                    count++;
                }
            }
        }
    }
    return count ;
}

int count_triangle(int arr[] , int n){
    sort(arr , arr+n) ;
    int count = 0 ;
    for(int i=0 ; i<n-2 ; i++){
        int k = i+2 ;       //storing the third index starting from ith index in k
        for(int j=i+1 ; j<n ; j++){ //traversing all the elements after ith index
            while(k<n && arr[i]+arr[j]>arr[k]){
                ++k ;
            }
            count+= k-j-1 ;
        }
    }
    return count ;
}

int main(){

    int arr[]= {6, 4, 9, 7, 8} ;
    int size = sizeof(arr)/sizeof(arr[0]) ;
    //cout << "answer is : " << triangle(arr, size) << endl ;
    cout << "answer is : " << count_triangle(arr, size) << endl ;
   
    return 0;
}