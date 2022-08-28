#include<iostream>
using namespace std;

void createtwoarray(int arr[][4] , int row , int cols){
    cout << "Now enter the elements : " ;
    //2d array creation
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<cols; j++){
            cin >> arr[i][j] ;
        }
    }
}

void printarray(int arr[][4] , int row , int cols){
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<cols; j++){
            cout << arr[i][j] << " " ;
        }
        cout << endl;
    } 
}

void spiralmatrix(int arr[][4] , int row , int cols){
    int startingrow = 0 ;
    int startingcol = 0 ;
    int endingrow = row-1 ;
    int endingcol = cols-1 ;

    // int totalelements = row*cols ;
    // int count = 0 ;

    //
    /* k - starting row index
        m - ending row index
        l - starting column index
        n - ending column index
        i - iterator
    */
  
    

    cout << "The spiral Matrix is : " << endl;

    while (startingrow < row && startingcol < cols) {

        //starting row
        for(int i=startingcol ; i<=endingcol ; i++){
            cout << arr[startingrow][i] << " " ;
           // count++ ;
        }
        //cout << endl ;
        startingrow++ ;  
        
        //starting row printed

        //ending column

        for(int i=startingrow; i<=endingrow ; i++ ){
            cout << arr[i][endingcol] << " " ;
          //  count++ ;
        }
       // cout << endl;
        endingcol-- ;

        //ending column printed

        //ending row

        for(int i=endingcol ; i>=startingcol ; i--) {
            cout << arr[endingrow][i] << " " ;
          //  count++ ;
        }
        //cout << endl;
        endingrow-- ;

        //ending row printed

        //starting column

        for(int i=endingrow ; i>=startingrow ; i--){
            cout << arr[i][startingcol] << " " ;
          //  count++ ;
        }
        startingcol++ ;
        cout<< endl;

    }
}

int main(){

    int arr[4][4]; //ARRAY DEFINITION DIMENSION MUST BE SAME AS DEFINED IN THE ABOVE FUNCTION PARAMETER ARRAY DEFINITION
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
    printarray(arr , row , cols) ;
    
    spiralmatrix(arr , row , cols) ;



        
return 0;
}