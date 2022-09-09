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

    cout << "check if n is odd or even : " ;
    int n ;
    cin >> n ;
    int ans = n&1 ;
    if(ans==1){
        cout << "n&1 = " << n << "&1 = " << ans << endl ;
        cout << n << " is odd!!" << endl;

    }
    else {
    cout << "n&1 = " << n << "&1 = " << ans << endl ;
    cout << n << " is even!!" << endl;
    }
    return 0;
}