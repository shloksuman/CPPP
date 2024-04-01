#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string rev(string s){
        int len = s.length();
        for(int i = 0 ; i < len/2 ; i++){
            swap(s[i] , s[len-i-1]);
        }
        return s;
    }
    bool isSubstringPresent(string s) {
        string revv = rev(s);
        int check = -1;
        
        for(int i = 0 ; i < s.length()-1 ; i++){
            string r = s.substr(i, 2);
            check = revv.find(r);
            cout << "\n original s = " << s << endl;
            cout << " reversed s = " << revv << endl;
            cout << "  substring checked = " << r << endl;
            cout << "\n Check = " << check << endl;
            if(check>=0){
                return true;
            }
        }
        
        return false;
    }
};

int main(){

    string s = "abcd" ;
    Solution obj;

    cout << "the reverse has substring in  it : " << obj.isSubstringPresent(s)<<endl;

    return 0;
}