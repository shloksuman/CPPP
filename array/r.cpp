#include<iostream>
using namespace std;

int main(){ int X = 15;
int val ;
    while (X > 0){
    val = X & (X - 1) ;
    cout << val << endl ;
    X = X & (X - 1) ;
    }
return 0;
}