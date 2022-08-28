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

void rotateArray(int arr[], int n){
    int n1 = n ;
    int rotate ;
    cout << "Enter how many places elements to be rotated : " ;
    cin >> rotate;
    while(rotate--){
    while(n-2>=0){                      //BEWARE WHILE MAKING THE CONDITION... MAY LEAD TO SEGMENTATION FAULT IF SPECIFIED WRONG
        swap(arr[n-2], arr[n-1]);       //END SE SWAP KARNA HAI BAS AUR 
        n-- ;                           //N-- DECREMENT KARTE REHNAA HAI
    }
    n=n1;
    }
}

int main(){

    int arr[100];
    cout << "Enter the size of element : " ;
    int size;
    cin>>size;
    createArr(arr,size);
    rotateArray(arr,size);
    cout << "After rotating the array!!!!" << endl;
    printarray(arr,size);

return 0;
}