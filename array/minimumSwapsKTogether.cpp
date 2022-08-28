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

int minSwap(int arr[], int n, int k) {
        // Complet the function
        //couting the elements less than equal to k
        int count =0;
        for(int i=0; i<n; i++){
            if(arr[i]<=k){
                count++;
            }
        }
        
        
        //counting the bad elements i.e the elements that need to be swapped
        int bad=0;
        for(int i =0; i < count ; i++){
            if(arr[i]>k){
                bad++;
            }
        }
        
        //creating sliding window
        int ans = bad;
        for(int i=0 , j=count ; j<n; i++ , j++){
            if(arr[i]>k){
                bad-- ;
            }
            if(arr[j]>k){
                bad++ ;
            }
            ans = min(ans , bad);
        }
        return ans;
    }

int main(){

    int arr[100];
    cout << "Enter the size of element : " ;
    int size;
    cin>>size;
    createArr(arr,size);
    int k =0;
    cout << "Enter the value of k = " ;
    cin>> k;
    cout << "The minimum swaps needed are : " << minSwap(arr, size, k) << endl;

return 0;
}