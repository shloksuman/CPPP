#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 int firstUniqCharr(string s) {
       int n = s.length();
        vector<int>f(26) ;  //creating a vector of size 26 since 26 alphabets , in order to map each alphabet with its frequency 
        for(auto i : s) f[i-'a']++ ;  //also utilizing the ASCII value 
        for(int i= 0 ; i< n ; i++){
            if(f[s[i]-'a']==1) return i ;
        }
        return -1;
    }

int firstUniqChar(string s) {
        int n = s.length() ;
       // cout << "size : " << n << endl; 
        if(n==1){
            return 0;
        }
        int flag =0;
        for(int i = 0 ; i<n ; i++){
            flag =0 ;
            for(int j=0 ; j<n ; j++){
                if(s[i]==s[j] && i!=j){
                    flag =1 ; //waisa same element found!!
                }
             //   cout << "i : " << i << " j : " << j << " flag : " << flag << endl ;
            }
            if(flag==0){ //waise same not found i.e it is unique
                    return i;
                }
        }
        return -1;
    }

int main(){
    string s ;
    getline(cin , s) ;
    cout << firstUniqCharr(s) << endl;
   // cout << "The unique char's posn : " << firstUniqChar(s) << endl ;
return 0;
}