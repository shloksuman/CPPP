#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

void solve(int a,int b , int c){
    if(a+b<=0){
        cout << "NO" << endl;
    }
    else if(a+c<=0){
        cout << "NO" << endl;
    }
    else if(b+c<=0){
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
    }
}

int main() {
	{
        int a,b,c;
        cin >> a >> b >> c ;
        solve(a,b,c) ;
    }
    return 0;
}
