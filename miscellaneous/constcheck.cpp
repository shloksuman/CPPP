#include<bits/stdc++.h>
using namespace std;



int main(){

    const int a = 5 ;
    cout << "a is " << a << endl;
    a++;  //error: increment of read-only variable 'a' ,, ie const value cannot be changed
    cout << "a++ is " << a << endl;

    return 0;
}