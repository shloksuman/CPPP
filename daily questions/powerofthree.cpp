#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 bool isPowerOfThree(int n) {
      
    
        if(n<=0){
            return false ;
        }
        if(n==1){
            return true;
        }
        int x = 1 ;
        unsigned long long int i=1;
        while(i<=n){
            i=i*3;
            x++;
            if(n==i){
                cout << "x = " << x-1 << endl ;
                return true;
            }
        }
        
        
        return false ;

    }

int main(){
  //  cout << "enter n : " ;
    int n ;
    cin >> n ;
    cout << isPowerOfThree(n) << endl;
return 0;
}