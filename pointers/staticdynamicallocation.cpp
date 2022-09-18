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

   int i = 5 ; 
   int &j = i ; //reference variable -- same variable , different name

   cout << "i : " << i << endl ;
   i++;
   cout << "i : " << i << endl ;
   j++;
   cout << "i : " << i << endl ;
   
   //dynamic array 

   int n ;
   cout << "enter the size of array : " ;
   cin >> n ;

   int *arr= new int[n] ;  // dynamically allocated array

   createArr(arr , n ) ;

   cout << "printing the array : " << endl ; 
   printarray(arr , n) ;

   delete []arr ; // deleted dynamically allocated array to free the memory in heap. that is making it available for further use

    return 0;
}