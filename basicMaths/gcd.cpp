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

int gcd(int a , int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }

    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else {
            b = b - a;
        }
    }
    return a;
}

int main(){

  //  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t ;
    cin >> t ;
    while(t--){
        int a, b ;
        cout << "enter A : " ;
        cin >> a ;
        cout << "enter B : " ;
        cin >> b ;
        cout << "the gcd of " << a << " and " << b << " is : " << gcd(a,b) << endl ;
    }

    return 0;
}