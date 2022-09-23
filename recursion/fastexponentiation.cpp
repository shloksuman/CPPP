#include<bits/stdc++.h>
using namespace std;

int expo(int n){
    if(n==0){
        return 1;
    }

    int smallerproblem = expo(n/2) ;

    if(n&1){
        return smallerproblem * smallerproblem * 2 ;
    }
    else return smallerproblem * smallerproblem ;
}

int main(){

    cout << "ans is " << expo(10) << endl;

    return 0;
}