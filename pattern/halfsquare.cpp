#include<bits/stdc++.h>
using namespace std;

int main(){

    for(int i = 0 ; i<5 ; i++){
        for(int j=0 ; j<=i ; j++){ //number of column = index of row , 2nd row has 2 cols , 3rd row has 3 cols
            cout << "*" ;
        }
        cout << endl ;
    }

    return 0;
}