#include<bits/stdc++.h>
using namespace std;

void print7(int n ){
    for(int i = 0 ; i< n ; i++){
        //space
        for(int j=0 ; j < n-i-1 ; j++){
            cout << " " ;
        }
        //star
        for(int j = 0 ; j < 2*i+1; j++){
            cout << "*" ;
        }
        //space
        for(int j=0 ; j < n-i-1 ; j++){
            cout << " " ;
        }
        cout << endl ;
    }
}

void print8(int n ){
      for(int i = 0 ; i< n ; i++){
        //space
        for(int j=0 ; j < i ; j++){
            cout << " " ;
        }
        //star
        for(int j = 0 ; j < 2*(n-i-1)+1 ; j++){
            cout << "*" ;
        }
        //space
        for(int j=0 ; j < i ; j++){
            cout << " " ;
        }
        cout << endl ;
    }
}

void print9(int n ){
    print7(n);
    print8(n);
    /*

    *    
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
    
    */
}

void print10(int n) {  //important
    for(int i = 1 ; i<= 2*n-1;i++){
        int stars=i;
        if(i>n) stars = 2*n-i ;
        for(int j = 1 ; j<=stars ; j++){
            cout << "*" ;
        }
        cout << endl ;
    }
}

void print111(int n){
    for(int i=0; i<n;i++){
        for(int j= 0 ; j<=i ; j++){
            if(j%2==0){
                cout << "0" ;
            }
            else cout << "1" ;
        }
        cout << endl;
    }
}

void print11(int n){
    int start = 1;
    for(int i = 0 ; i<n ;i++){
        if(i%2==0) start = 1;
        else start = 0;
        for(int j=0 ; j<=i ; j++){
            cout << start ;
            start = 1- start ; //flipping the value to be printed
        }
        cout << endl;
    }
}

void print12(int n){
    for(int i = 1 ; i<=n ; i++){
        //number
        for(int j= 1 ; j<=i ; j++){
            cout << j ;
        }
        //space
        for(int j = 1 ; j<= 2*n-2*i ; j++){
            cout << " " ;
        }
        //number
        for(int j= 1 ; j<=i ; j++){
            cout << j ;
        }
        cout << endl;
    }
}

void print13(int n){
    int count=1 ;
    for(int i=0; i<n; i++){
        for(int j = 0 ; j <=i ; j++){
            cout << count++ << " " ;
        }
        cout << endl ;
    }
}

// CHARACTER PATTERNS

void print14(int n){
    for(int i = 0 ; i< n ; i++){
        for(char ch = 'A' ; ch<= 'A' + i ; ch++){
            cout << ch << " " ;
        }
        cout << endl ;
    }
}
void print15(int n){
    for(int i = 0 ; i< n ; i++){
        for(char ch = 'A' ; ch<= 'A' + n - i - 1 ; ch++){
            cout << ch << " " ;
        }
        cout << endl ;
    }
}
void print16(int n){
    for(int i = 0 ; i< n ; i++){
        char ch = 'A' + i ;
        for(int j = 0 ; j<=i ; j++){
            cout << ch << " " ;
        }
        cout << endl ;
    }
}

void print17(int n){
    for(int i = 0 ; i<n ; i++){
        //space 
        for(int j= 0 ; j<n-i-1 ; j++){
            cout << " " ;
        }
        
        //char
        char ch= 'A' ;
        int breakpoint = (2*i+1)/2  ;
        //for(int j=0 ; j< 2*i+1 ; j++){ //dont use this distorts breaking point
        for(int j=1 ; j<= 2*i+1 ; j++){
            cout << ch ;
            if(j<=breakpoint) ch++ ;
            else ch--;
        }

        //space 
        for(int j= 0 ; j<n-i-1 ; j++){
            cout << " " ;
        }
        cout << endl;
    }
}
void print18(int n){
    for(int i = 0 ; i<n ; i++){
        for(char ch= 'E' - i ; ch<= 'E' ; ch++){
            cout << ch << " " ;
        }
        cout << endl ;
    }
}
//imp print19
void print19(int n){
    for(int i = 0 ; i<n ; i++){
        //star
        for(int j = 0 ; j<=n-i-1 ; j++){
            cout << "*" ;
        }
        //space 
        for(int j = 0 ; j< 2*i ; j++){
            cout << " " ;
        }
        //star
        for(int j = 0 ; j<=n-i-1 ; j++){
            cout << "*" ;
        }
        cout << endl;
    }

    for(int i = 0 ; i<n ; i++){
        //star
        for(int j = 0 ; j<=i ; j++){
            cout << "*" ;
        }
        //space 
        for(int j = 0 ; j< 2*(n-i-1) ; j++){
            cout << " " ;
        }
        //star
        for(int j = 0 ; j<=i ; j++){
            cout << "*" ;
        }
        cout << endl;
    }
}

//important
void print20(int n){
    int spaces = 2*n - 2;
    for(int i = 1 ; i<=2*n-1 ; i++){
        int stars = i ;
        if(i>n) stars = 2*n-i ;
        //stars
        for(int j=1 ; j<=stars ; j++ ){
            cout << "*" ;
        }
        //space
        for(int j = 1 ; j<=spaces ; j++){
            cout << " " ;
        }
        //stars
        for(int j=1 ; j<=stars ; j++ ){
            cout << "*" ;
        }
        cout << endl;
        if(i<n) spaces -= 2 ;
        else spaces += 2 ;
    }
}
void print21(int n){
    for(int i = 0 ; i< n ; i++){
        for(int j= 0 ; j<n ; j++){
            if(i==0 || j==0 || i==n-1 || j==n-1){
                cout << "*" ;
            }
            else cout << " " ;
        }
        cout << endl ;
    }
}
//super important
void print22(int n){
    for(int i = 0 ; i<2*n-1 ; i++){
        for(int j = 0 ; j < 2*n-1 ; j++){
            int top = i ;
            int down = j ;
            int right = 2*n-2-j ;
            int left = 2*n-2-i ;

            cout << (n - min(min(left , right) , min(top , down))) ;
        }
        cout << endl ;
    }
}
int main(){

        int n;
       // cin >> n ;
        n=4;
       // print7(n) ;
       // print8(n) ;
       // print9(n) ;
       // print10(n) ;
       // print111(n) ;
       print22(n) ;
    return 0;
}