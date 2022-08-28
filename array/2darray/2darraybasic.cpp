#include<iostream>
using namespace std;

void searchintwod(int arr[][2] , int n ,  int target){ //REMEMBER TO DEFINE THE COLUMN IN 2D ARRAY
int flag=0 ;
    for(int i=0 ; i<n ; i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==target){
                flag = 1;
                break;
            }
        }
    }

    if(flag==1){
        cout << "Yes found!!!" << endl;
    }
    else cout << "Not found!!!" << endl;
}

int main(){
    int arr[2][2] ;
    // int arr[2][2] = {0} ;  // initializes all values with 0
    // int arr[2][2] = {1} ; // only first value is initialized with 1
    // int arr[4][2] = { {1,2} , {3,4} , { 5,6} , { 6 ,7 } } ;
    int n = 2;
    //input values in the matrix
     for(int i=0; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cin>> arr[i][j] ;
        }
        

    }
    cout << "Enter the num to find in matrix : " ;
    int x; cin >> x;
    // print 2d matrix 
    // for(int i=0; i<n ; i++){
    //     for(int j=0 ; j<n ; j++){
    //         cout << arr[i][j] << " " ;
    //     }
    //     cout << endl;
    // }
    searchintwod(arr,n, x) ;


return 0;
}