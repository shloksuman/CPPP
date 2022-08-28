#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    string s = "abc" ;
    int len = s.length() ;
    cout << "The ascii value for the string s = " << s << " is given below : " << endl ;
    for(int i= 0 ; i<len ;  i++){
        cout << "s[" << i << "] = " << s[i] << " is : " << int(s[i]) << endl; 
        // cout << "s[" << i << "] = " << s[i] << " is : " << int(s[i])-int('a') << endl; 
    }

return 0;
}