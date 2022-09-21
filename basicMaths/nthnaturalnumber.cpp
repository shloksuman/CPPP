#include<bits/stdc++.h>
using namespace std;

/*
Question : Given a positive integer N. 
You have to find Nth natural number after removing all the numbers containing digit 9.
 */


//Approach : Convert the number to base 9
long long findNth(long long N)
    {
        // code here.
        long long ans = 0 ;
        long long temp = 1;
        while(N>0){
            ans = ans + temp*(N%9) ;
            temp*=10;
            N /=9 ;
        }
        return ans;
    }

int main(){

    long long n;
    cout << "enter n to get the nth natural number not containing 9 : " ;
    cin >> n ;
    cout << "the ans is : " << findNth(n) << endl;
    return 0;
}