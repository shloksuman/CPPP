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

bool isprime(int n){
    for(int i=2; i<n ; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){

int n ; 
cin >> n ;
if(isprime(n)){
    cout << "yes it is prime!!" << endl ;
}
else {
    cout<< "NO!!!" << endl ;
}

    return 0;
}