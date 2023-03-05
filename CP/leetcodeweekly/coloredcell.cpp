#include<iostream>
using namespace std;

int main(){
    cout << "enter n : " ;
    int n;
    cin >> n;
    int last = 1 + (n-1)*2;
    int sum = (((n-1))*(2*1+((n-1)-1)*2))/2;
    cout << "ans is : " << last + 2*sum << endl;
//accepted code below
    //  unsigned long long  last = 1 + (n-1)*2;
    //     unsigned long long p1 = (2*1+((n-1)-1)*2)/2;
    //     unsigned long long p2 = n-1;
    //    // unsigned long long  sum = (((n-1))*(2*1+((n-1)-1)*2))/2;
    //     unsigned long long sum = p1*p2;
    //     return 2*sum+last;
return 0;
}