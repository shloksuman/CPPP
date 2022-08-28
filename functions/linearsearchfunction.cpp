#include<iostream>
using namespace std;

bool search(int array[],int size,int item){
    for (int i = 0; i < size; i++)
    {
        if(array[i]==item){
            return true;
        }
    }
    return false;
}

int main(){
    cout << "Enter the size of the array : " ;
    int size;
    cin >> size ;
    int arr[size] ;
    cout << "Enter the elements of the array : " ;
    for(int i=0; i<size ; i++){
        cin >> arr[i] ;
    }
    // function to search an element inside the created array
    int x;
    cout << "Enter the element you want to search for : " ;
    cin >> x ;
    if (search(arr,size, x))
    {
        cout << "Yes the element is present!" ;
    }
    else  cout << "The element is not present!" ;

    return 0;
}