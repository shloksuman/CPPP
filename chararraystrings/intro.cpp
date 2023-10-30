#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    string str = "mnabcdk";

    cout << "Initial string : " << str << endl;

    sort(str.begin() , str.end());

    cout << "\nSorted string str is : " << str << endl;

    str.erase(2,4);
    cout << "\nAfter erase(), str : " << str << endl;

    str.clear() ;
    cout << "\nAfter clear() , str : " << str << endl;

    string s = "abcdemn" ;
    cout << "\nSubtring of  s is : " << s.substr(2,4) << endl;

    cout << "\nThe file is working!!!" << endl;



    return 0;
}