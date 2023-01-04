#include<bits/stdc++.h>
using namespace std;


 int countDigits(int a) {
        int orig = a;
         int count = 0 ;
        int lastdigit = a%10 ;
    while(a){
        if(orig%lastdigit==0){
            count++;
        }
         a /=10 ;
        lastdigit = a%10 ;
       
    }
        return count ; }

int main(){

    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t ;
    cin >> t ;
    while(t--){
        int a;
        cin >> a;
        cout << countDigits(a);
        
    }

    return 0;
}