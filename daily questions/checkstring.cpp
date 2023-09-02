#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

   bool checkStrings(string s1, string s2) {
        int n = s2.length();
        
        if(s1.length()!=s2.length()){
            return false;
        }
        
        if(s1==s2){
            return true;
        }
        
        for(int i= 0 ; i< n -2; i++){
            cout << "i : " << i << endl;
            if(s1[i]==s2[i]){
                continue;
            }
            for(int j= i+2 ; j<n ; j = j+2){
                cout << "i : " << i << " j : " << j << endl;
                cout << "before swap s1 : " << s1 << " and s2 : " << s2 << endl;
                swap(s1[i] , s1[j]);
                cout << "after swap s1 : " << s1 << " and s2 : " << s2 << endl;

                if(s1[i]==s2[j]){
                    break;
                }
                if(s1==s2){
                    return true;
                }
                
                
                
            }
        }
         if(s1==s2){
                    return true;
                }
        
        return false;
        
    }

int main(){

    string s1 = "abcdba" ;
    string s2 = "cabdab" ;
    cout <<checkStrings(s1,s2) << endl;
    
return 0;
}