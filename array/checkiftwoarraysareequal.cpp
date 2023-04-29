#include<bits/stdc++.h>
using namespace std;

#define ll long long

//Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
       sort(A.begin() , A.end());
       sort(B.begin() , B.end());
       int i=0;
       while(N--){
           if(A[i]!=B[i]){
               return false;
           }
           i++;
       }
       return true;
    }
    bool check2(vector<ll> A, vector<ll> B, int N) {
       unordered_map<ll,ll> mp;

       for(int i =0 ; i<N ; i++){
        mp[A[i]]++;
       }
       for(int i =0 ; i<N ; i++){
        mp[B[i]]--;
       }

       for(auto i=mp.begin();i!=mp.end();i++) {
            
            //if frequency of any element in map now is not zero it means that its 
            //count in two arrays was not equal so the arrays are not equal.
            if(i->second!=0){
            return false;
        }
       }
       return true;
    }

int main(){

    vector<ll> a = { 2 , 4 , 1 , 3};
    vector<ll> b = { 1 , 2 , 3 , 4};

    cout << "equal or not " << check(a,b , 4) << endl;
    cout << "equal or not unordered map " << check2(a,b , 4) << endl;

return 0;
}