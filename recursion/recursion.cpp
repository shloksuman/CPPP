#include<bits/stdc++.h>
using namespace std;

int factorial(int n) {
    //base case
    if(n==1){
        return 1;
    }

    //processing
    int smallerproblem = factorial(n-1) ;
    int biggerproblem = n * smallerproblem ;

    return biggerproblem ;
}

int main(){

    int n ; 
    cout << "enter n to get its factorial : " ;
    cin >> n;
    cout << "the factorial of " << n << " is : " << factorial(n) << endl;
   

    return 0;
}