#include<iostream>
using namespace std;

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

int doUnion(int a[], int n, int b[], int m)  {
        //code here
    
    int i = 0, j = 0;
    int k=0;
	while (i < n && j < m) {
		if (a[i] < b[j]){
            cout << a[i] << endl;
			i++;
			k++;
		}

		else if (b[j] < a[i]){
            cout << b[j] << endl;
			j++;
			k++;
		}

		else {
            cout << a[i] << endl;
			j++;
			k++;
			i++;
		}
	}

	/* Print remaining elements of the larger array */
	while (i < n){
            cout << a[i] << endl;
		    i++;
			k++;
	}

	while (j < m){
            cout << b[j] << endl;
		    j++;
			k++;
	}
	
	return k;
}


    //int n= sizeof(arr3)/sizeof(arr3[0]) ;
    //printing array
    // cout << "The union of the above two arrays is : " ;
    // for(int l=0;l<k;l++){
    //     cout << arr3[l] << " " ; 
    // }


int main(){
    int arr1[100];
    int arr2[100];
    int unionn[100];

    cout << "Enter the size of first array arr1 : " ;
    int size1;
    cin>> size1;
    createArr(arr1,size1) ;

    cout << "Enter the size of second array arr2 : " ;
    int size2;
    cin>> size2;
    createArr(arr2,size2) ;

    cout << "The union array is : " << endl;

    doUnion(arr1,size1,arr2,size2);

    

return 0;
}