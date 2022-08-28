#include<iostream>
using namespace std;

void createtwoarray(int arr[][10] , int row , int cols){
    cout << "Now enter the elements : " ;
    //2d array creation
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<cols; j++){
            cin >> arr[i][j] ;
        }
    }
}

void printarray(int arr[][10] , int row , int cols){
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<cols; j++){
            cout << arr[i][j] << " " ;
        }
        cout << endl;
    } 
}

void transpose(int arr[][10] , int row , int cols){
     for(int i=0; i< row ; i++){
        for(int j=0 ; j< i ; j++){
            swap(arr[i][j] , arr[j][i]) ;
        }
    }
}

void rotateby90(int arr[][10] , int row , int cols){
    transpose(arr , row , cols) ;
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<cols/2; j++){
            swap(arr[i][j], arr[i][cols-j-1]) ;
        }
    } 
}

int main(){

    int arr[10][10]; //ARRAY DEFINITION DIMENSION MUST BE SAME AS DEFINED IN THE ABOVE FUNCTION PARAMETER ARRAY DEFINITION
    cout << "Enter the dimensions of 2D Array " << endl;
    cout << "Enter same row column number for array!!!" << endl;
    int row, cols ;
    cout << "Enter the row : " ;
    cin >> row ; if(row<1){cout << "!!INVALID INPUT!! ENTER VALUE ROW,COL >=1 " << endl ; return 0 ;}
    cout << "Enter the columns : " ;
    cin >> cols ; if(cols<1){cout << "!!INVALID INPUT!! ENTER VALUE ROW,COL >=1 " << endl ; return 0 ;}
    //2d array creation
    createtwoarray(arr, row , cols) ;
    cout << "The initial array is : " << endl ;
    printarray(arr , row ,cols) ;
    // transposing the array
    // transpose(arr , row , cols) ;
    // cout << "The transposed array is : " << endl ;
    // printarray(arr , row , cols) ;
    cout << "How many times array to be rotated eg. 1 for 90 deg , 2 for 180 deg , etc : " ;
    int t ;
    cin>> t;
    //rotating the array
    while(t--){
    rotateby90(arr , row , cols) ;
    }
    cout << "The rotated array is : " << endl ;
    printarray(arr , row , cols) ;
 



    //printing the INITIAL matrix 
    // cout << "The Initial matrix is : " << endl ;
    // for(int i=0 ; i<row ; i++){
    //     for(int j=0 ; j<cols; j++){
    //         cout << arr[i][j] << " " ;
    //     }
    //     cout << endl;
    // } 
    
    //transposing the matrix

    // for(int i=0; i< row ; i++){
    //     for(int j=0 ; j< i ; j++){
    //         swap(arr[i][j] , arr[j][i]) ;
    //     }
    // }

    //printing the matrix 

    // cout << "The transposed matrix is : " << endl ;
    // for(int i=0 ; i<row ; i++){
    //     for(int j=0 ; j<cols; j++){
    //         cout << arr[i][j] << " " ;
    //     }
    //     cout << endl;
    // }  
    //rotating the matrix by 90 degree

    // for(int i=0 ; i<row ; i++){
    //     for(int j=0 ; j<cols/2; j++){
    //         swap(arr[i][j], arr[i][cols-j-1]) ;
    //     }
    // } 

    //printing the matrix 

    // cout << "The 90 degree rotated matrix is : " << endl ;
    // for(int i=0 ; i<row ; i++){
    //     for(int j=0 ; j<cols; j++){
    //         cout << arr[i][j] << " " ;
    //     }
    //     cout << endl;
    // }  


return 0;
}