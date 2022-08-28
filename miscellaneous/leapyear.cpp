#include<iostream>
using namespace std;

void leap(int n){
    if(n%100==0 ){
        if(n%400==0){
        cout << "It is a leap year!" << endl ; 
    
        }
        else { cout << "NOT A LEAP YEAR!!!" << endl ;
        }
    }
    else if(n%4==0) {
        cout << "It is a leap year!" << endl ; 
    }
}

int main(){
    cout << "Enter the year : ";
    int year;
    cin >> year ;
    leap(year);

    return 0 ;
}