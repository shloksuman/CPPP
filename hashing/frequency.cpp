#include<bits/stdc++.h>
using namespace std;

/*
create a 2D array called hashtable
insert those elements in the hashtable
*/

#define MAX 1000


int hashtable[MAX+1][2] ; //declared a 2d array of having rows= 0 to max and two columns 
// 0th column for positive and 1st column for negative elements

//declaring HASHTABLE[MAX+1][2] IN THE GLOBAL REGION SETS ALL ITS VALUES TO 0

void insert(int a[] , int n){
    for(int i=0; i<n;i++){
    //for positive
        if(a[i]>=0){
            hashtable[a[i]][0]++ ;// column 0 for positive and incrementing its frequency
        }
        else if(a[i]<0){
            a[i] = abs(a[i]) ;
            hashtable[a[i]][1]++ ;// storing negative element in column 1
        }
    }
}

bool search(int x){
    //for positive
    if(x>=0){
        if(hashtable[x][0]>=1){
            return true ;
        }
        else return false;
    }
    else if(x<0){
        x = abs(x) ;
        if(hashtable[x][1]>=1){
            return true ;
        }
        else return false;
    }
}

void printarray(int arr[] , int n){
    for(int i = 0 ; i< n ; i++){
        for(int j = 0 ; j<2 ; j++){
           // if(hashtable[i][j]>=1){
                cout << "arr[" << i << "] = " << arr[i] << " " << "hashtable[" << i <<"][" << j << "] = "  << hashtable[i][j] << endl ;
          //  }
        }
    }
}


int main(){

    int arr[] = {1 , 5 , 3 , 7 ,2 , 18 , 1 , 1 , 7 , 18 , 18 , 18 } ;
    int n = sizeof(arr)/sizeof(arr[0]) ;

    insert(arr , n ) ;

    cout << "The frequency table is : " << endl ;
    printarray(arr , n ) ;

    // int x ;
    // cout << "Enter x to check if it is present or not : " ;
    // cin >> x ;

    // if(search(x)){
    //     cout << "Present!" << endl;
    // }
    // else cout << "Absent!" << endl;

    return 0;
}