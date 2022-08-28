#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main(){

    vector<int>f(26) ;
    for(int i = 0 ; i<26 ; i++){ f['a'] ; }
    for(int i  = 0 ; i< 26 ; i++){
        cout << "f[" << i << "] : " << f[i] << endl ;
    }

return 0;
}