// C++ implementation to find N
// modulo 4 using Bitwise AND operator

#include <bits/stdc++.h>
using namespace std;

// Function to find the remainder
int findRemainder(int n , int m)
{
	// Bitwise AND with 3
	int x = n & m;

	// Return x
	return x;
}

// Driver code
int main()
{

	int N ;
    int M ;
    cout << "enter the number to get N%M = " ;
    cin >> N >>M ;

	int ans = findRemainder(N,M);

	cout << "The answer is " <<  ans << endl;

	return 0;
}
