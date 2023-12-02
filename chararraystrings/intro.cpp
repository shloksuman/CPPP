#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    // string z ; 
    // getline(cin , z) ;
    // cout << z << endl;

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
    cout << "\nString s still is : " << s << endl;


    if(s.empty()){
        cout<<"\ns is empty\n";
    }
    else{
        cout<<"\ns is not empty\n";
    }

    string y;
    int k;
    cout << "\nEnter the position where you want to insert the string : " ;
    cin >> k;

    cout << "\nEnter string 'inserr' to insert at position " << k << " : " ;
    getline(cin , y) ;

    s.insert(k , y) ;
    cout << "\nInserted string in s : " << s << endl;

    cout << "\nThe file is working!!!" << endl;


    return 0;
}#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    // string z ; 
    // getline(cin , z) ;
    // cout << z << endl;

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
    cout << "\nString s still is : " << s << endl;


    if(s.empty()){
        cout<<"\ns is empty\n";
    }
    else{
        cout<<"\ns is not empty\n";
    }

    string y;
    int k;
    cout << "\nEnter the position where you want to insert the string : " ;
    cin >> k;

    cout << "\nEnter string 'inserr' to insert at position " << k << " : " ;
    getline(cin , y) ;

    s.insert(k , y) ;
    cout << "\nInserted string in s : " << s << endl;

    cout << "\nThe file is working!!!" << endl;


    return 0;
}