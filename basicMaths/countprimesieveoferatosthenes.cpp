#include<iostream>
#include<vector>
using namespace std;

int soe2(int) ;

int soe(int n){
    int count=0;
    vector<bool> prime(n+1, true) ; // vector with ASSUMING ALL ELEMENTS TO BE PRIME
    prime[0]=prime[1]=false ;       // 0 and 1 ko non prime set kro

    for(int i=2; i<=n;i++){
        if(prime[i]){
            count++;                // prime no milne pe COUNTER value increment kro
            cout << "i = " << i << " count = " << count << endl;
        }
        for(int j=2*i; j<=n; j=j+i){
            prime[j]=false;         //phir USKE TABLE MEIN JITNE NO HAIN UNKO FALSE YAA NON PRIME SET KRO
        }
    }
   // cout << "prime[n]= " << prime[n] << endl; to know that the last number is prime
   if(prime[n]){
    return count-1;
   }
    return count ;
}

int main(){
    cout<< "PROGRAM TO KNOW THAT HOW MANY PRIMES EXIST BETWEEN 1 TO n \nEnter the value of n : " ;
    int n;
    cin >>n ;
    int count= soe(n);
    cout << "The number of primes till (including) " << n << " is : " << count << endl;

    return 0;
}

int soe2(int n){    //accepted on leetcode
    int count = 0 ;
    vector<bool> prime(n+1 , true) ;
    prime[0]=prime[1]=false ;

    for(int i = 2 ; i<n;i++){
        if(prime[i]==true){
            for(int j= 2*i ; j<n ; j= j+i){
                 prime[j]=false ;
            }
        }
        if(prime[i]){
            count++;
        }
    }
    return count ;
}