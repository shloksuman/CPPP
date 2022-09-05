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



int main(){

   // ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cout << "enter n to see its table : " ;
    int n ;
    cin >> n;
    int arr[5]={1,2,3,4,5} ;

    for(auto i:arr){
        cout << n << " * " << i << " = " << n*i << endl ;
    }

    return 0;
}