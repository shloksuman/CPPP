#include<iostream>
using namespace std;

void call(int num){
    for(int i=0; i<num; i++){
        cout << "Shlok" << endl ;
    }
}

int main(){
    int n;
    cout << "Enter the no of times to print your name : " ;
    cin >> n ;
    call(n);
    return 0;
}