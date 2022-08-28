#include<iostream>
using namespace std;

int solve(int coins[], int n , int amount , int currentCoin){
    // base case
    if(amount==0)
        return 1 ; //O banane ka sirf 1 ek tareeka hai ,, ki koi bhi coins select mat kro
    
    if(amount<0)
        return 0 ; // -ve number Nahi bansakta coin select kro, ya naa kro,,, impossible so 0 tareeka hai

    int ways =0 ;

    for(int i =0 ; i< n ; i++){
        ways+= solve(coins, n , amount - coins[i], ) ;
    }

    return ways ;
}

int main(){
    int coins[]={1,2} ;
    int amount = 4 ;
    int size =2 ;

    int ans= solve(coins , size , amount , 0) ;
    cout << ans << endl ;
    
    return 0;
}