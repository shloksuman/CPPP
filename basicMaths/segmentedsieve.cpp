#include<bits/stdc++.h>
using namespace std;

int soer(int n){
      int count=0;
      
      vector<bool> prime(n+1 , true) ;
      prime[0]=prime[1]=false ;
      
      for(int i = 2 ; i <= n ; i++ ){
          if(prime[i]){
              count++;
          }
          
          for(int j= 2*i ; j<=n ; j=j+i){
              prime[j]= false ;
          }
      }
      
      return count ;
  }

  int soel(int n){
      int count=0;
      
      vector<bool> prime(n+1 , true) ;
      prime[0]=prime[1]=false ;
      
      for(int i = 2 ; i <= n ; i++ ){
          if(prime[i]){
              count++;
          }
          
          for(int j= 2*i ; j<=n ; j=j+i){
              prime[j]= false ;
          }
      }
      if(prime[n]){
          return count-1;
      }
      return count ;
  }

int main(){
    cout<< "PROGRAM TO KNOW THAT HOW MANY PRIMES EXIST BETWEEN L TO R \nEnter the value of L ,R ( L<R ) : " ;
    int l, r;
    cin >> l >> r ;
    int count= soer(r)-soel(l);
    cout << "The number of primes between l and r is : " << count << endl;

    return 0;
}


// GFG SOLUTION
/*
    vector<bool>prime(R+1,true);
       int count=0;
       prime[1]=prime[0]=false;
       for(int i=2;i*i<=R;i++)
       {
           if(prime[i])
           {
               for(int j=2*i; j<=R; j=j+i)
               {
                   prime[j]=0;
               }
           }
       }
       
       for(int i=L;i<=R;i++)
       {
               if(prime[i])
                   count++;
       }
       return count;
   }

*/
