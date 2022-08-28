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


int solve(int a, int b,int n){
    if(a==b){
        return -1;
    }
    int divisor = b ;
    int rem;
    for(int i= n/a ; ;i++){
        int dividend= a*i;
        pair<int, int> ans;
	    ans = divide(dividend, divisor);
        rem = ans.second ;
        if(rem!=0){
            return dividend;
        }
    }
}

int main(){
    //MAKES INPUT OUTPUT FAST
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin >>a >> b >> n ;
        cout << solve(a,b,n) << endl;
    }
return 0;
}