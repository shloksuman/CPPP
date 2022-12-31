#include<bits/stdc++.h>
using namespace std;

int main(){

    for(int i = 5 , k = 0 ; i>0 ; i-- , k++){
        //space print
        for(int j = i-1 ; j>0 ; j--){
            cout << " " ;
        }
        //star print
        for(int s=0 ; s<2*k+1 ; s++){
            cout << "*" ;
        }
        cout << endl ;
    }

    return 0;
}