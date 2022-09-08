#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n) {
      
    
        if(n<=0){
            return false ;
        }
        if(n==1){
            return true;
        }
        int x = 1 ;
        unsigned long long int i=1;
        while(i<=n){
            i=i*2;
            x++;
            if(n==i){
                cout << "x = " << x-1 << endl ;
                return true;
            }
        }
        
        
    return false ;

}

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
    int n , m ;
    cout << "enter n (to see if it's power of 3) : ";
    cin >> n ;
    cout << isPowerOfThree(n) << endl;
    cout << "enter m (to see if it's power of 2) : ";
    cin >> m ;
    cout << isPowerOfTwo(m) << endl;
return 0;
}