#include<bits/stdc++.h>
using namespace std;

int totalMoney(int n) {
        int k = 1 ;
        int sum = 0 ;
        for(int i = 1 ; i<=n ; i++){
            if( i!=1 && i%7 == 1 ){
                k = i/7 + 1 ;
            }
            cout << "\n i : " << i << " and k : " << k << " and sum : " << sum << endl;
            sum += k++;
        }
        return sum;
    }

int main(){



    cout << "Total money is : " << totalMoney(10) ;
    cout << "Total money is : " << totalMoney(20) ;
    
    return 0;




}