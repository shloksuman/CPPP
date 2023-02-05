#include <bits/stdc++.h>
using namespace std;

// void swap(int &a , int &b){ //REFERENCING IS IMPORTANT
//     int temp = a;
//     a = b ;
//      b = temp ;
// }

void createArr(int arr[], int size)
{
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

// PRINTING ARRAY
void printarray(int arr[], int size)
{
    cout << "The array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

void selectionsort(int arr[], int n)
{
    int minIndex;
    for (int i = 0; i <= n - 2; i++)
    {
        minIndex = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

void insertionsort(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
}

void bubblesort(int arr[], int n)
{
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{

    int n;
    cout << "enter array size : ";
    cin >> n;
    int arr[n];
    createArr(arr, n);

    cout << "the sorted array is : ";
    // selectionsort(arr , n) ;
     bubblesort(arr, n );
   // insertionsort(arr, n);

    printarray(arr, n);

    return 0;
}

