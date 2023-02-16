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

void merge(int arr[] , int l , int mid , int r){

    //create two temp arrays to store the two subarrays
    int a = mid - l +1;
    int b = r- mid;

    int tempa[a];
    int tempb[b];

    for(int i = 0 ; i< a; i++){
        tempa[i] = arr[i+l] ;
    }

    for(int j = 0 ; j< b ; j++ ){
        tempb[j] = arr[j+mid+1] ;
    }

    //sorting shuru

    int i= 0 , j = 0 , k= l;
    
    while(i<a && j<b){
        if(tempa[i]<tempb[j]){
            arr[k++] = tempa[i++];
        }
        else {
            arr[k++] = tempb[j++];
        }
    }

    while(i<a){
        arr[k++] = tempa[i++] ;
    }
    while(j<b){
        arr[k++] = tempb[j++] ;
    }

}

void mergesort( int arr[] , int l , int r){

    if(l>=r) return ;


    int mid = (l+r)/2;

    mergesort(arr , l , mid );
    mergesort(arr , mid+1  , r);

    merge(arr , l , mid , r) ;
}

int main(){

    int n;
    cout << "enter size of array : " ;
    cin >> n;
    int arr[n] ;
    createArr(arr , n);

    mergesort(arr , 0 , n-1) ;

    cout << "the sorted array using merge sort is : " ;
    printarray(arr, n) ;
    

    return 0;
}