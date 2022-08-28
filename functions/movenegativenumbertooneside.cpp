 #include<iostream>
 using namespace std;

//  void move(int arr[], int size){
//         for(int i=0; i<size ;)
    
//  }

 int main(){

    cout << "Enter the size of the array : " ;
    int n;
    cin >> n ;
    int A[n] ;
    cout << "Enter the elements of the array : " ;
    for(int i=0; i<n ; i++){
        cin >> A[i] ;
    }
    int countnegative=0 , countpositive=0 ; //countpositive will include zero also
    for(int i=0; i<size;i++){
         if(A[i]<0){
             countnegative++ ;
         }
         else countpositive++ ;
    }
    int arr1[countnegative] , arr[countpositive] ;
    // move(A , countnegative) ;
    insert(arr1, countnegative) ;

    
     return 0;
 }