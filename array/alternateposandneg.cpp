#include<bits/stdc++.h>
using namespace std;

void printarray(int arr[] , int n){
    for(int i= 0 ; i<n ; i++){
        cout << arr[i] << " " ;
    }
}

void rearrange(int arr[], int n) {
	    int posarr[n] ;
	    int negarr[n] ;
	    int p=0,ne=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]>=0){
	            posarr[p++]=arr[i];
	        }
	        else negarr[ne++]=arr[i];
	    }

        cout << "pos elements are : \n" ; printarray(posarr , p); cout << endl; 
        cout << "neg elements are : \n" ; printarray(negarr , ne);

	   // cout << "\np " << p << " ne " << ne << endl;

        for(int i=0, j=0;j<p;i=i+2 , j++){
            arr[i]=posarr[j];
        }

        for(int i=1, j=0;j<ne;i=i+2 , j++){
            arr[i]=negarr[j];
        }
        



	}

int main(){

   // int arr[] = {9, 4, -2, -1, 5, 0, -5, -3, 2} ;
    int arr[] = {-5 ,-2, 5, 2, 4, 7, 1, 8, 0, -8} ;
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "initial array : \n" ;
    printarray(arr ,n); cout << endl;
    rearrange(arr , n); cout << endl;
    cout << "after change :\n" ;
    printarray(arr , n);


return 0;
}