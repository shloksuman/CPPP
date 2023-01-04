#include<bits/stdc++.h>
using namespace std;

int main(){

    int n ;
    cout << "enter n : " ;
    cin >> n ;

     for(int i=1; i<=n; i++){
	        for(int j=2; j<=i; j++){
	            cout<<" ";
	        }
	        for(int j=n-i; j>=0; j--){
	            cout<<"*";
	        }
	        for(int j=n-i; j>=1; j--){
	            cout<<"*";
	        }
	        cout<<endl;
    }

    return 0;
}