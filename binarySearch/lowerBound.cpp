#include<bits/stdc++.h>
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

int lowerBound(int arr[], int n,   int x) {
	// Write your code here
	int low = 0 , high = n-1;
	int mid = (low+high)/2;
	int ans = n;

	while(low<=high){
        cout << "low : " << low << " and high : " << high << " and ans : " << ans << " and arr[" << mid << "] : " << arr[mid] << endl;
		if(arr[mid]>=x){
			ans = mid;
			high = mid-1;
		}
		else low = mid+1;

		mid = (low+high)/2;
	}

   
	return ans;
}


int main(){
    int arr[]= {1 ,2 ,2 ,3 ,3 ,5} ;
    int size = sizeof(arr)/sizeof(arr[0]) ;
    int target; 
    cout << "enter the target : " ;
    cin >> target ;

    // cout << "the lower bound is : " << lowerBound(arr , size , target) << endl ;

  auto low = lower_bound(arr, arr + size, target);

  cout << "the lower bound is : " << low- arr << endl;



return 0;
}