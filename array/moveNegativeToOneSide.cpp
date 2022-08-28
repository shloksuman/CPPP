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

void negativeoneside(int arr[], int size){
    int j=0;
    for(int i=0; i<size; i++){
        if(arr[i]<0){
            swap(arr[i], arr[j]);
            j++;
        }
        
    }
}

int main(){

    int arr[100];
    cout << "Enter the size of element : " ;
    int size;
    cin>>size;
    createArr(arr,size);
    negativeoneside(arr,size);
    cout << "The NEGATIVE number are SHIFTED TO ONE SIDE!!!" << endl;
    printarray(arr,size);




return 0;
}