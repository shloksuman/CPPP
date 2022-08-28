#include<iostream>
using namespace std;

void sortedarray(int arr[], int size){
    int k=size-1;
    int countzero=0 , countone=0, counttwo=0 ;
    for(int i=0 ; i<size;i++){
        if (arr[i]==0){
            countzero++;
        }
        else if (arr[i]==1)
        {
            countone++;
        }
        else if(arr[i]==2) {
             counttwo++ ;
        }  
    }
    //printing sorted array 

    int i=0;
    
    while(countzero--){
        arr[i]=0;
        i++;
    }
    while(countone--){
        arr[i]=1;
        i++;

    }
    while(counttwo--){
        arr[i]=2;
        i++;

    }

    // cout << "The sorted array is : " ;
    // for(int j=0; j<countzero;j++){
    //     cout << 0 << " " ;
    // }
    // for(int m=0; m<countone;m++){
    //     cout << 1 << " " ;
    // }
    // for(int n=0; n<counttwo;n++){
    //     cout << 2 << " " ;
    // }

}

void printArray(int arr[], int size){
    cout << "The array is : " ;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;
    }
    
}

int main(){
    int arr[100];
    cout << "Enter the size of the array : " ;
    int size;
    cin >> size ;
    cout << "Enter the elements of the array(only 0s , 1s and 2s) : " ;
    for(int i=0; i<size ; i++){
        cin >> arr[i] ;
    }

    sortedarray(arr,size);
    cout << "Array is SORTED!!!" << endl;
    printArray(arr,size);

    return 0;
}