#include<bits/stdc++.h>
using namespace std;

void rever(char arr[]){
    int n = strlen(arr) ;
    for(int i=0 ; i<n/2 ; i++){
        swap(arr[i] , arr[n-i-1]) ;
    }
}

int main(){
    char name[8] ;
    cin >> name ;
    rever(name) ;
    cout << "reversed array is : " << name << endl ;
}