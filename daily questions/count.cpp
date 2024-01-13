#include<bits/stdc++.h>
using namespace std;

unordered_set<char> vowels =  {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};




int main(){

    cout << "\nIs you character present , enter to check : " ;
    char ch ;
    cin >> ch ;
    if(vowels.find(ch) != vowels.end())
    cout << "\nYes, the character is a vowel."<< endl;
    else
    cout << "\nNo, the character is not a vowel."<< endl;

    cout << "\nalso by vowels.count(" << ch << ") , we have : " << vowels.count(ch) << endl;

    // auto it = vowels.find(ch) ;
    // cout << *it << endl;

    cout << "\nMic check!!!" << endl;




    return 0;
}