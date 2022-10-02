#include<bits/stdc++.h>
using namespace std;

void count(int n) {
    if(n<1){
        return ;
    }
   
    count(n-1) ;
    cout << n << endl;
}


int main(){

  int n ;
  cout << "enter n : " ;
  cin >> n;
  //  cout << "counting till " << n << " is : " << count(n) << endl ;
  count(n) ;

    return 0;
}
