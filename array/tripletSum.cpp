#include<iostream>
#include<algorithm>
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

void pairsum(int arr[], int size,int target){   //SORT A VECTOR  BELOW
    sort(arr, arr+size);                        //sort(arr.begin(), arr.end());
    int i=0, j=size-1;
    cout << "The pair ,if possible are : " ;
    while(i<=j){
        if(arr[i]+arr[j]==target){
            cout << arr[i] << " " << arr[j] << endl;
            i++ ;
            j--;
        }
        else if((arr[i]+arr[j])>target){
            j--;
        }
        else if((arr[i]+arr[j])<target){
            i++;
        }
    }
}

void tripletsum(int arr[], int size, int target){
    sort(arr, arr+size);
    int newTarget;
    for(int i=0; i<size;i++){
        newTarget = target - arr[i] ;
        pairsum(arr,size , newTarget) ;
    }
    
}

int main(){

    int arr[100];
    cout << "Enter the size of element : " ;
    int size;
    cin>>size;
    createArr(arr,size);
    int target;
    cout << "Enter the target value that the pair sums up to : " ;
    cin>> target;
    tripletsum(arr,size, target);

return 0;
}