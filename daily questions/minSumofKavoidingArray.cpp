#include<bits/stdc++.h>
using namespace std;

   int minimumSum(int n, int k) {
        vector<int> s;
        s.push_back(1);
        int sum=0;
        for(int i = 1; i<= n ;i++){
            if( (i+1 + 1)!=k){
                if(s.size()==n){
                    break;
                }
                s.push_back(i+1);
               // sum += s[i] ;
            }
        }
        for(int i = 0 ; i< s.size() ; i++){
            cout << s[i] << " " ;
            sum += s[i] ;
        }
        return sum;
    }

#define endl "\n"
#define ll long long

int main(){
    int n = 3 , k = 5;
    cout<<"min sum : " << minimumSum(n,k) <<endl;
return 0;
}

class Solution {
public:
     int minimumSum(int n, int k) {
         if(n==1) return 1;
        vector<int> s;
        s.push_back(1);
        int sum=0;
        for(int i = 1; i<= n ;i++){
            if( (i+1 + 1)!=k){
                s.push_back(i+1);
                if(s.size()==n){
                    break;
                }
               // sum += s[i] ;
            }
        }
         
           for(int i = n-1; i>=2 ;i--){
            if( (s[i]+s[i-1])!=k){
                s.pop_back();
                if(s.size()==n){
                    break;
                }
               // sum += s[i] ;
            }
        }
         
         
        for(int i = 0 ; i< s.size() ; i++){
           // cout << s[i] << " " ;
            sum += s[i] ;
        }
        return sum;
    }
};