// C++ implementation to Find Quotient
// and Remainder of two integer without
// using / and % operator using Binary search

#include <bits/stdc++.h>
using namespace std;

// Function to the quotient and remainder
pair<int, int> find(int dividend, int divisor,
					int start, int end)
{

	// Check if start is greater than the end
	if (start > end)
		return { 0, dividend };

	// Calculate mid
	int mid = start + (end - start) / 2;

	int n = dividend - divisor * mid;

	// Check if n is greater than divisor
	// then increment the mid by 1
	if (n > divisor)
		start = mid + 1;

	// Check if n is less than 0
	// then decrement the mid by 1
	else if (n < 0)
		end = mid - 1;

	else {
		// Check if n equals to divisor
		if (n == divisor) {
			++mid;
			n = 0;
		}

		// Return the final answer
		return { mid, n };
	}

	// Recursive calls
	return find(dividend, divisor, start, end);
}

pair<int, int> divide(int dividend, int divisor)
{
	return find(dividend, divisor, 1, dividend);
}

// Driver code
int main(int argc, char* argv[])
{
	int dividend = 10, divisor = 3;

	pair<int, int> ans;

	ans = divide(dividend, divisor);

	cout << ans.first << ", ";
	cout << ans.second << endl;

	return 0;
}
