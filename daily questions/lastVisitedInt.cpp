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

    string a = "3" ;
    int a_int = stoi(a);
    cout << "string a " << a << " and int a_int using stoi(a) : " << a_int << endl;
    int b = 5;
    cout << "a : " << a << " and b : " << b << " and their sum a+b : " << a_int +b << endl;

return 0;
}