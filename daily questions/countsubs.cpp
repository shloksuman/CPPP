#include<bits/stdc++.h>
using namespace std;

long long countSubstrings(string s, char c) {
        int count = 0;
        int  n = s.length();
//         for(int i= 0 ; i < s.length() ; i++){
//             if(s[i] == c){
//                 count++;
//             }
//         }
//         if(count==1){
//             return 1;
//         }
        
//         return 2*count;
        for(int i = 0 ; i< n ;i++){
            int j ;
            if(s[i]==c){
                for( j = i ; j < n ; j++){
                    if(s[j]==c){
                        count++;
                    }
                }                
            }
        }
        
        return count;
    }

int main(){
    string s = "eeeee" ;
    char c = 'e' ;
     int count = 0;
        int  n = s.length();
        for(int i= 0 ; i < s.length() ; i++){
            if(s[i] == c){
                count++;
            }
        }
    int ans =  (count * (count +1) ) /2 ;

    // string s;
    // char c;
    // cin >> s;
    // cin >> c;
    //cout << "the no of subss is : " << countSubstrings(s , c) << endl;
    cout << ans << endl;

    return 0;
}