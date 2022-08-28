#include<iostream>
using namespace std;

int main(){
    int arr[3][3] ={1,2,3,4,5,6,7,8,9} ;
    int n=3;
    int maxi =INT_MIN ;

//printing the array
    for(int i=0; i<n ; i++){
        for(int j=0;j<n ; j++ ){
        cout << arr[i][j] << " " ; }
        cout <<endl;
    }

//printing columnwise sum 

    for(int i=0; i<n ; i++){ int sum = 0 ;
        for(int j=0; j<n ; j++){
            sum = sum + arr[j][i] ;
        }
        cout << "column " << i <<  " sum is : " << sum << endl ; 
        maxi = max(maxi , sum) ;
    }
    cout << "The maximum value is " << maxi << endl;
    return 0;
}