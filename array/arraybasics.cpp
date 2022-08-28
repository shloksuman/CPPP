#include<iostream>
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

void util(int arr[],int size) {
    arr[0] = 23;
    cout << "Printing in util function : " << endl;
    printarray(arr, 3) ;
}


int main(){

    int arr[] = {3, 6, 9} ;
    util(arr , 3) ;
    cout << "Printing in main function : " << endl;
    printarray(arr,3);

   /* int arr[100] ;
    cout << "Enter the size of the array : " ;
    int n;
    cin >> n;
    //CREATE ARRAY
    createArr(arr, n ) ;
    //PRINTING THE ARRAY
    printarray(arr , n ); */
    return 0;   
}