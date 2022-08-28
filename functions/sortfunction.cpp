// C++ program to demonstrate default behaviour of
// sort() in STL.
#include <bits/stdc++.h>
using namespace std;

int main()
{
	cout << "Enter the size of the array : " ;
    int size;
    cin >> size ;
    int arr[size] ;
    cout << "Enter the elements of the array : " ;
    for(int i=0; i<size ; i++){
        cin >> arr[i] ;
    }

	/*Here we take two parameters, the beginning of the
	array and the length n upto which we want the array to
	be sorted*/
	sort(arr, arr + size);

	cout << "\nArray after sorting using "
			"default sort is : \n";
	for (int i = 0; i < size; ++i)
		cout << arr[i] << " ";

	return 0;
}
