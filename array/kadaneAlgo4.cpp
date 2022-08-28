// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to print the elements
// of Subarray with maximum sum
void createArr(int arr[], int size){
    cout << "Enter the elements of the array : " ;
    for(int i=0 ; i<size ; i++){
        cin >> arr[i] ;                
    }
}
void SubarrayWithMaxSum(int nums[], int size)
{
	// Initialize currMax and globalMax
	// with first value of nums
	int endIndex, currMax = nums[0];
	int globalMax = nums[0];

	// Iterate for all the elements
	// of the array
	for (int i = 1; i < size; ++i) {

		// Update currMax
		currMax = max(nums[i],
					nums[i] + currMax);

		// Check if currMax is greater
		// than globalMax
		if (currMax > globalMax) {
			globalMax = currMax;
			endIndex = i;
		}
	}

	int startIndex = endIndex;

	// Traverse in left direction to
	// find start Index of subarray
	while (startIndex >= 0) {

		globalMax -= nums[startIndex];

		if (globalMax == 0)
			break;

		// Decrement the start index
		startIndex--;
	}

    cout << "The largest subarray using KADANE'S ALGO IS : " ;
	// Printing the elements of
	// subarray with max sum
	for (int i = startIndex;
		i <= endIndex; ++i) {

		cout << nums[i] << " ";
	}
}

// Driver Code
int main()
{
	// Given array arr[]
	 int arr[100];
    cout << "Enter the size of element : " ;
    int size;
    cin>>size;
    createArr(arr,size);

	// Function call
	SubarrayWithMaxSum(arr,size);
	return 0;
}
