#include<iostream>
using namespace std;

void factorial(int fact){
    int num=1 ;
    for(int i=2 ; i<=fact ; i++){
        num = num * i ; 
    }
    cout << "\nThe factorial of " << fact << " is : " << num ;
    return ;
}

int main(){
    int n ;
    cout << "Enter n to get its factorial : " ;
    cin >> n;
    factorial(n);

    return 0;
}