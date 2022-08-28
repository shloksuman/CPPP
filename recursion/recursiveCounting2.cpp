#include<iostream>
using namespace std;

void counting(int n){
    //base case
    if(n<1){
        return;
    }
    counting(n-1) ;
    cout << n << " " ;
}

int main(){
    int n;
    cout << "Enter the value of n : " ;
    cin>> n ;
    cout << "The counting till " << n << " using Head recursion is : " ;
    counting(n) ;
    cout << endl;
return 0;
}