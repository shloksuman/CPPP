#include<bits/stdc++.h>
using namespace std;



int main(){

   string s = "abcde" ;
   int i=0;
   cout << s[i]-'a' <<endl;
   cout << s[i+1]-'a' <<endl;
   if( s[i]-'a'+1 == s[i+1]-'a' ){
    cout << "consecutive" << endl;
   }

    return 0;
}