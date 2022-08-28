#include<iostream>
using namespace std;
//reverse array definition
void reversearray(int arr[],int size){
    int k;
    int l=size-1;
    for(int i=0; i<=l; i++){
        // k = arr[i]; first method
        // arr[i] = arr[l];
        // arr[l] = k;
        // --l;
        swap(arr[i], arr[l]); // second method
        --l ;
    }
    //printing reversed array
    cout <<"The reversed array is : " <<endl;
    for(int j=0; j< size ; j++ ){
        cout << arr[j] << endl ;
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
    reversearray(arr, size) ;

    return 0;
}