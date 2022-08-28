#include<iostream>
using namespace std;

int squareroot(int x){
    if(x==0){
        return 0 ;
    }
    //brute force // THIS CODE GIVES RUNTIME ERROR IN LEETCODE
    // Error message : Line 10: Char 40: runtime error: signed integer overflow: 46341 * 46341 cannot be represented in type 'int' (solution.cpp)
    //SUMMARY: UndefinedBehaviorSanitizer: undefined-behavior prog_joined.cpp:19:40

    // add long long int to overcome the error but the time complexity is high
    for(int i = 1 ; i<=x ; i++){
        int quotient = x/i;
        // if(i==3){
        //     cout << "d = " << d << " when i : " << i << " " ;
        // }
        if(quotient==i){
            return i ;
        }
        else if( i*i < x &&  x < ((i+1)*(i+1)) ){ // error for this line
            return i ;
        }
    }
    return -1 ;
}

   int mySqrt(unsigned long long int x) {
        if(x==0){ return 0 ;}
        unsigned long long int   start =0 ;
        unsigned long long int  end = x+1 ;
        while(start<=end){
            unsigned long long int mid = start + (end-start)/2 ;
            if(mid*mid==x){
                return mid ;
            }
            else if( mid*mid < x &&  x < ((mid+1)*(mid+1)) ){ // error for this line
            return mid ;
            }
            else if( x == ((mid+1)*(mid+1)) ){
                return (mid+1) ;
            }
            else if( x< mid*mid ){
                end = mid-1 ;
            }
            else if( (mid+1)*(mid+1) < x ){
                start = mid +1 ;
            }
        }
        return -1 ;
    }



int main(){
    int x ;
    cout << "Enter x (x>=0) to get its square root : " ;
    cin >> x;
    cout << "The result using binary search is : " << mySqrt(x) << endl ; 
    cout << "The result is : " << squareroot(x) << endl ; 

return 0;
}