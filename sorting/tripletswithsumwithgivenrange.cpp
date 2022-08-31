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

//https://practice.geeksforgeeks.org/problems/triplets-with-sum-with-given-range/1

    int sumlessthanx(int arr[] , int n , int x){
        sort(arr ,arr + n ) ;
        int count = 0 ;
        for(int i = 0 ; i<n-2 ; i++){
            int j = i+1 ;
            int k = n-1 ;
            while(j<k){
                if(arr[i]+arr[j]+arr[k]>x){
                    --k;
                }
                else {
                    count += k-j;
                    ++j;
                }
            }
        }
        return count ;
    }
  
    int countTriplets(int Arr[], int N, int L, int R) {
        sort(Arr ,Arr+ N ) ;
        int countL = sumlessthanx(Arr , N , L-1 ) ;
        int countR = sumlessthanx(Arr , N , R ) ;
        
        int count = countR - countL ;
        
        return count ;
    }

int main(){

    int arr[]= {6, 4, 9, 7, 8} ;
    int size = sizeof(arr)/sizeof(arr[0]) ;
    int L = 14 ;
    int R =25 ;
    cout << "Number of Triplets with sum between range [L,R] : " << countTriplets(arr , size , L , R ) << endl ;

    return 0;
}