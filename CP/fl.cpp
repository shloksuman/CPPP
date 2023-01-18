#include <bits/stdc++.h>
using namespace std;

int solve(string s){
    for(int i = 0 ; i< s.length() ; i=i+2){
      if(s[i]=='A'){
        if(s[i+1]!='B'){
          return 0;
        }
      }
      else if(s[i]=='B'){
        if(s[i+1]!='A'){
          return 0;
        }
      }
    }
 
 return 1;
 
  
}

int main()
{
  int t;
  cin >> t;
  
  while(t--){
    string s;
    cin >> s;
    int ans = solve(s);
    if(ans==1){
      cout << "yes" << endl;
    }
    else cout << "no" << endl;
    
  }
  
  return 0;
}