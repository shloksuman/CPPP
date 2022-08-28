#include <iostream>
using namespace std;

int main()
{   
    int arr[100] ;
    int arr2[100] ;
    int n , q , k ;
    cin>> n ; // kitne remove krne hain initial array se
    for (int i = 0; i <= 100; i++)
    {
        arr[i]=i+1 ;
    } // defining values inside array
   
    

    cin>> q ; // number of queries

    for(int l=0 ; l<n; l++){
        cin >> arr2[l] ;
    }

    for(int z=0 ; z<n ; z++){
        arr[arr2[z]-1] = arr[arr2[z]-1] + 1 ;
        for(int p=arr2[z] ; p<100 ; p++){
            arr[p] = arr[p] + 1 ;
        }
    }
    for(int j=0 ; j<=20 ; j++){
        cout << arr[j] << endl;
    }
    
    return 0;
}
/*
Kth Smallest

Problem Statement

Given a series of N integers - { A1 , A2, …., An }.

You are given Q queries, where for each query
you will be given an integer K. For each query you need to provide the K
th smallest integer
among all integers that do not belong in the given series.

Constraints:



● 1 <= N,Q <= 10^5


● 1 <= Ai <= 10^18


● 1 <= Ki <= 10^18



Input Format:



● First line contains N and Q.

● The next line N integers

● Next Q subsequent lines contain each query K.



Output Format:



Print the K
th smallest for each query



Sample Input:



4 3

2 5 6 8

2

5

3


Sample Output:


3

9

4


Explanation of Sample:

The integers that do not belong to the given series are -

1 3 4 7 9 10 11 …

So,

2nd smallest integer is 3

5th smallest integer is 9

3rd smallest integer is 4

*/