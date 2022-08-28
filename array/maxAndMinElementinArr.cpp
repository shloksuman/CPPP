#include<iostream>
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

int getMax(int arr[] , int size){                   //   𝓽𝓲𝓶𝓮 𝓬𝓸𝓶𝓹𝓵𝓮𝔁𝓲𝓽𝔂 - 𝓞(𝓷)
    int ans= INT_MIN;
    for(int i=0; i<size;i++){
    ans= max(ans, arr[i]) ;
    }
    return ans;
}
int getMin(int arr[] , int size){                   //   𝓽𝓲𝓶𝓮 𝓬𝓸𝓶𝓹𝓵𝓮𝔁𝓲𝓽𝔂 - 𝓞(𝓷)
    int ans= INT_MAX;
    for(int i=0; i<size;i++){
    ans= min(ans, arr[i]) ;
    }
    return ans;
}

int main(){
    int arr[100] ;
    cout << "Enter the size of the array : " ;
    int n;
    cin >> n;
    createArr(arr, n) ;
    cout << "Max element is : " << getMax(arr, n) << endl;
    //MAX FUNCTION APPROACH                     𝓽𝓲𝓶𝓮 𝓬𝓸𝓶𝓹𝓵𝓮𝔁𝓲𝓽𝔂 - 𝓞(𝓷)
    /*

    int x= INT_MIN;
    for(int i=0; i<n;i++){
        x= max(x, arr[i]) ;
    }
    cout << "Max element is : " << x << endl;

    */
    cout << "Min element is : " << getMin(arr, n) << endl;


    return 0;

}