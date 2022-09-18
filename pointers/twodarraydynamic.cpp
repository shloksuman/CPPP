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

    int m , n ;
    cin >> m >> n ;

    int** arr = new int*[m] ;

    for(int i =0 ; i<m ; i++){
        arr[i] = new int[n] ;
    }

    //for input
    for(int i = 0 ; i< m ; i++){
        for(int j=0 ; j<n ; j++){
            cin >> arr[i][j] ;
        }
    }

    cout << endl ;

    //print 

    for(int i= 0 ; i<m; i++){
        for(int j = 0 ; j<n ; j++){
            cout << arr[i][j] << " " ;
        }
        cout << endl;
    }
 

    return 0;
}