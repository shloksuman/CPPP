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

int kadane(int arr[] , int size){       //🆃🅸🅼🅴 🅲🅾🅼🅿🅻🅴🆇🅸🆃🆈 🅾(🅽)
    int ans = INT_MIN;
    int maxAbTak = 0;

    for(int i=0;i<size;i++){
    
    maxAbTak= maxAbTak + arr[i] ;

    ans = max(maxAbTak, ans) ;

    if(maxAbTak<0){
        maxAbTak=0;
    }

    }

    return ans;
}

int main(){

    int arr[100];
    cout << "Enter the size of element : " ;
    int size;
    cin>>size;
    createArr(arr,size);
    cout<< "The max subarray sum is : " << kadane(arr,size) << endl;
    

return 0;
}