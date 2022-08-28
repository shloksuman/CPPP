#include<iostream>
using namespace std;

void countingTail(int n){
    //base case
    if(n<1){
        return ;
    }
    cout << n << " " ;
    return countingTail(n-1) ;
}
void countingHead(int n){
    //base case
    if(n<1){
        return ;
    }
    countingHead(n-1) ;
    cout << n << " " ;
}

int main(){
    int n;
    cout << "Enter the value of n : " ;
    cin>> n ;
    cout << "The counting till " << n << " using Tail recursion is : " ;
    countingTail(n) ;
    cout << endl;
    cout << "The counting till " << n << " using Head recursion is : " ;
    countingHead(n) ; 
    cout << endl;
return 0;
}