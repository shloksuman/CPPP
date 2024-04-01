#include<stdio.h>
#include<iostream>
using namespace std;

int main(){

    char ch1 = 'a'; //0    
    char ch2 = 'j'; //9
    int diff = ch2-ch1;

    cout << "ch1 : " << ch1 << endl;
    cout << "ASCII value of ch1 : " << int(ch1) << endl;
    cout << "ch2 : " << ch2 << endl;
    cout << "ASCII value of ch2 : " << int(ch2) << endl;
    cout << "Diff  between ASCII values of two characters : " << diff << endl;   

    return 0;
}