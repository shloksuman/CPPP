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

// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
  
        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;
  
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
  
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }
  
    // We reach here when element is not
    // present in array
    return -1;
}


int binarysearch(int arr[], int n, int target){
    int start=0;
    int end=n-1;
    
    // int mid=(start+end)/2; this code can overflow
    //int mid= start/2 + end/2 ;
    int mid = start + (end-start)/2 ;

    while (start<=end)
    {
        int midElement= arr[mid];

        if(midElement==target){
            return mid;
        }

        if(target< midElement){
            end= mid-1;
        }
        else {
            start=mid+1;
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
    createArr(arr , n) ;
    int target; 
    cout << "enter the target : " ;
    cin >> target ;

  //  cout<<"The index of the target is : " << binarysearch(arr , n , target) << endl; //RETURNS INDEX OF THE TARGET
    //     cout << "Element found" << endl;
    // }
    // else {
    //     cout << "Element not found" << endl;
    // }


    // CALLING A predefined function binary_search 
    cout << "Return 1 if present else 0 : " << binary_search(arr , arr + n , target) << endl ;
    cout << "The index is : " << binarySearch(arr , 0 , n , target) << endl ;
return 0;
}