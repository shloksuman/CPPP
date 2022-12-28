#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int getSum(int n)
    {
        int sum = 0;
        while (n != 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        return sum;
    }

int solve(int n){
    int count=0;
    int b;
    for(int i=1;i<n/2; i++){
        if(n%i==0){
            b=n/i;
            if(getSum(b)*b==n){
                cout << "b = " << b << " , i = " << i << endl;
                ++count;
            }
        }
        else {
            continue;
        }
    }
    return count;
}    

int main() {

	int t;
    cin>> t;

    while(t--){
        int n ;
        cin >> n ;
        cout << solve(n) << endl;
    }

    return 0;
}