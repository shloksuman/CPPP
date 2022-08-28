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

int pivotindex(int arr[] , int size ){
        int n = size ; 
        //using brute force
        int ls = 0 ; int rs = 0 ;       //TIME COMPLEXITY IS O(N^2)
        
        for(int i =0 ; i< n ; i++){
            rs = 0 ;
            for(int j= n-1; j>i ; j--){
                rs = arr[j] + rs ;
            }
        //    cout << "ls = " << ls << " rs = " << rs << " i = " << i << endl;
            if(ls==rs){
                return i ;
            }
            ls = ls + arr[i] ;
        }
        
        return -1 ;
}

int main(){

    int arr[100];
    cout << "Enter the size of element : " ;
    int size;
    cin>>size;
    createArr(arr,size);
    cout << "The pivot Index is : " << pivotindex(arr , size) << endl ;

return 0;
}