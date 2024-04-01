#include<bits/stdc++.h>
using namespace std;



int lengthOfLastWord(string s) {
       int n = s.length();
       int i = n-1;

       while( i >= 0  && s[i] == ' '){
        i--;
       }

       int length = 0;

       while(i>=0 && s[i] != ' '){
        i--;
        length++;
       }

       return length;
}

int lengthoflastword(string s ){
    //finding the position  of last space in string
    int idx = s.find_last_not_of(' ') + 1; 
    s.erase(idx); //deleted all the characters from idx
    
    int last_space_idx = s.find_last_of(' ');

    return last_space_idx == string::npos ? s.length() : s.length() - last_space_idx - 1;
    }

int main(){

    string s = "Today is a nice day";
    cout << "Len of last word in string : " << s << "  , is : " << lengthoflastword(s) << endl;
    //cout << "Len of last word is : " << lengthOfLastWord(s) << endl;
   // s.erase(3); //removes characters starting from ( including ) 3rd index to end
   // cout << s << endl;


    return 0;
}