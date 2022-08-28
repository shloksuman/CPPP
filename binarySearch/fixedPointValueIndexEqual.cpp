//REMEMBER WE HAVE ALL DISTINCT N INTEGERS , SO ONLY 1 VALUE EXISTS!!!!

#include<iostream>
#include<algorithm>
using namespace std;

//CREATION ON ARRAY
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

int fixedPoint(int arr[], int n){
    int start=0;
    int end=n-1;
    
    // int mid=(start+end)/2; this code can overflow
    //int mid= start/2 + end/2 ;
    int mid = start + (end-start)/2 ;

    while (start<=end)
    {
       

        if(arr[mid]==mid){ //REMEMBER WE HAVE ALL DISTINCT N INTEGERS , SO ONLY 1 VALUE EXISTS!!!!
            return mid; //RETURNS INDEX OR VALUE OR POSITION
        }

        if(arr[mid]>mid){ //DISCARDING THE RIGHT PORTION AS VALUE AT ARR[MID] IS GREATER THAN INDEX MID SO
            end= mid-1;   //SUBSEQUENT ELEMENTS WILL SURELY BE GREATER THAN THEIR RESPECTIVE INDICES SO 
        }                 //SHIFTING THE END=MID-1  TO LOOK IN THE LEFT PART
        else {
            start=mid+1;  //REMEMBER WE HAVE ALL DISTINCT N INTEGERS , SO ONLY 1 VALUE EXISTS!!!!
        }

        mid = start + (end-start)/2 ;
    }

    return -1 ;
    
}

int main(){
    int arr[100] ;
    int n;
    cout << "enter the size of elements : " ;
    cin >> n ;
    createArr(arr , n) ; //REMEMBER WE HAVE ALL DISTINCT N INTEGERS , SO ONLY 1 VALUE EXISTS!!!!

//REMEMBER WE HAVE ALL DISTINCT N INTEGERS , SO ONLY 1 VALUE EXISTS!!!!
    cout << "The fixed point i.e value=index is : " << fixedPoint(arr, n) << endl ;
return 0;
}