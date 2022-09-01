#include<bits/stdc++.h>
using namespace std;

bool checkanagram(string a , string b ){
    int freq[26] = {0} ; 

    //incrementing the frequency array
    for(int i = 0 ; i<a.length() ; i++){
        char ch = a[i] ;                //storing the character in char ch
        int index = ch - 'a' ;          //subtracting 'a' to get the ascii value mapped to it
        freq[index]++ ;
    }

    //decrementing the frequency array
    for(int i = 0 ; i<b.length() ; i++){
        char ch = b[i] ;
        int index = ch - 'a' ;
        freq[index]-- ;
    }

    for(int i=0 ; i<26 ; i++){
        if(freq[i]!=0){
            return false;
        }
    }
    return true ;
}

int main(){
    //case 1 answer is 1
    string a = "babbar" ;
    string b = "raabbb" ;
    cout << "The strings " << a << " " << b << " are anagram, return 1 else 0 : " << checkanagram(a , b ) << endl ;
    //case 2 answer is 0
    string aa = "babbar" ;
    string bb = "rrrbbb" ;
    cout << "The strings " << aa << " " << bb << " are anagram, return 1 else 0 : " << checkanagram(aa , bb ) << endl ;

    return 0;
}