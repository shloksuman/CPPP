#include<bits/stdc++.h>
using namespace std;

int main(){

    string a = "abc";
    string b = "pqrs" ;
    string c = "aabc" ;
    string s1 = "abc" ;
    string s2 = "aaaabc" ;

    cout << "Printing a substring(1,1) : " << a.substr(1,1) << endl ;
    cout << "Printing b substring(1,1) : " << b.substr(1,2) << endl ;
    cout << "Printing c substring(1,3) : " << c.substr(0,3) << endl ;
     // using the find() function, checking if the given substring is present in the main string or not
    bool isFound = s2.find(s1) != string::npos;

    // verifying the result
    if (isFound)
    {
        // printing success message if found
        cout << "Substring Found at position : " << s2.find(s1)  << endl;

    }
    else
    {
        // else printing the error message
        cout << "Substring not Found" << endl;
    }


    return 0;
}