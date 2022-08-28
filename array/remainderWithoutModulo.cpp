// C++ program to find remainder without using
// modulo operator
#include <iostream>
using namespace std;

// This function returns remainder of num/divisor
// without using % (modulo) operator
int getRemainder(int num, int divisor)
{
	return (num - divisor * (num / divisor));
}

// Driver program to test above functions
int main()
{
	// cout << 100 %0;
    int a , b ;
    cout << "Enter two integers a and b , to get their remainder when a%b : " ;
    cin >> a >> b;
	cout << "The remainder is : " << getRemainder(a,b) << endl;
	return 0;
}
