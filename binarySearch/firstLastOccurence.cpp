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

int firstOccurence(int arr[], int n, int target){
    int start=0;
    int end=n-1;
    
    // int mid=(start+end)/2; this code can overflow
    //int mid= start/2 + end/2 ;
    int mid = start + (end-start)/2 ;
    int ans = -1 ;
    while (start<=end)
    {
        int midElement= arr[mid];

        if(midElement==target){
            ans = mid ;
            end = mid -1 ;
        }

        else if(target< midElement){ // ELSE IF CONDITION  ADD KARNA BOHOT IMPORTANT HAI 
            end= mid-1;              // ELSE IF CONDITION  ADD KARNA BOHOT IMPORTANT HAI
        }
        else {
            start=mid+1;
        }

        mid = start + (end-start)/2 ;
    }

    return ans ;
    
}
int LastOccurence(int arr[], int n, int target){
    int start=0;
    int end=n-1;
    
    // int mid=(start+end)/2; this code can overflow
    //int mid= start/2 + end/2 ;
    int mid = start + (end-start)/2 ;
    int ans = -1 ;
    while (start<=end)
    {
        int midElement= arr[mid];

        if(midElement==target){
            ans = mid ;
            start = mid+1 ;
        }

        else if(target< midElement){
            end= mid-1;
        }
        else {
            start=mid+1;
        }

        mid = start + (end-start)/2 ;
    }

    return ans ;
    
}

int totalOccurences(int arr[], int n , int target){
    int ans = -1 ;
    int ans1 = firstOccurence(arr , n ,target) ;
    int ans2 = LastOccurence(arr, n , target) ;
    if(ans1 == -1 ){ //case1 element is not present
        return ans ;
    }
    // if(ans1==0 && ans2==0){ //case2 when the element only occurs at initial place 0, well not needed though
    //     ans = 1;
    //     return ans ;
    // }
    ans = ans2 - ans1 + 1 ;
    return ans ;


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
    cout << "The first occurence is at : " << firstOccurence(arr, n , target) << endl;
    cout << "The last occurence is at : " << LastOccurence(arr, n , target) << endl;
    cout << "The total occurences are : " << totalOccurences(arr, n , target) << endl;
return 0;
}