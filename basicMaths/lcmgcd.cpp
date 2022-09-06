#include<bits/stdc++.h>
using namespace std;

void createArr(int arr[], int size){
    cout << "Enter the elements of the array : " ;
    for(int i=0 ; i<size ; i++){
        cin >> arr[i] ;                
    }
}

//PRINTING ARRAY
void printarray(int arr[], int size) {
    cout << "The array is : " ;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl ;        
    }  
}

long long gcd(long long a , long long b){
      if(a==0){
          return b;
      }
      if(b==0){
          return a;
      }
      while(a!=b){
          if(a>b){
              a = a -b ;
          }
          else {
              b = b-a;
          }
      }
      return a ;
  }
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        long long hcf= gcd(A,B);
        long long lcm= (A*B)/hcf ;
        vector<long long> v;
        v.push_back(lcm) ;
        v.push_back(hcf) ;
        return v;
        
    }

int main(){

    vector<long long> v;
    int a , b ;
    cout << "enter the value to get their lcm and hcf " << endl;
    cout << "enter a " ;
    cin >> a ;
    cout << "enter b " ;
    cin >> b ;
    v = lcmAndGcd(a ,b ) ;
    cout << "the hcf and lcm is : " ;
    cout << v[0] << " " << v[1] << endl;

    return 0;
}