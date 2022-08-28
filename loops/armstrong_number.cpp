#include<iostream>
#include<cmath>
using namespace std;
int main(){
    // armstrong number 
    int n;
    cout << " enter the number  : ";
    cin >> n ;
    int originaln = n;
    int sum=0;
    
    while(n>0){
        int lastdigit = n%10;
        sum = sum + pow(lastdigit, 3) ;
        n = n/10 ;
    }
    
    if(sum==originaln){
        cout << " ARMSTRONG NUMBER" << endl;
    }
    else {
        cout << " NOT AN ARMSTRONG NUMBER " << endl ;
    }


    return 0;
}