#include<iostream>
using namespace std;

int main(){

    int arr[100][100]; 
    cout << "Enter the dimensions of 2D Array " << endl;
    int row, cols ;
    cout << "Enter the row : " ;
    cin >> row ;
    cout << "Enter the columns : " ;
    cin >> cols ;
    cout << "Now enter the elements : " ;
    //2d array creation
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<cols; j++){
            cin >> arr[i][j] ;
        }
    }
    
    cout << "The columnwise sum is : " << endl;

    int colsum=0;
    int maxcolsum = INT_MIN ;
    for(int i=0 ; i<cols; i++){
        for(int j=0 ; j<row ; j++){
            colsum+= arr[j][i] ;
        }
        cout << colsum << " " ;
        maxcolsum = max(maxcolsum , colsum) ;
        colsum = 0 ;
    }

    cout << "\nThe Max Columnwise sum is : " << maxcolsum << endl;


return 0;
}