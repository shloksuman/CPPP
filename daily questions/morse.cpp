#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string morseconverter(string s)
{
    int len = s.length();
    // int i = 0 ;
    // vector<int>f(26) ;
    // for(int i= 0 ; i<26 ;  i++){
    //     f[i] = int(s[i])-int('a') ;  //stores every alphabet's ascii value in the vector in ascending order
    // }

    vector<string> morse = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
    string convertedmorse;
    for (int i = 0; i < len; i++)
    {
        int asciimorseindex = int(s[i]) - int('a'); // int asciimorseindex = int(s[i]) - 97  ;
        convertedmorse += morse[asciimorseindex];
    }

    return convertedmorse;
}

int uniqueMorseRepresentations(vector<string> words)
{
    int wordsarraylength = words.size();
    vector<string> wordsconverted(wordsarraylength);
    int count = 1;
    for (int i = 0; i < wordsarraylength; i++)
    {
        wordsconverted[i] = morseconverter(words[i]); // storing word to morse converted strings in newly created vector array
        // comparing stored morse codes with previously stored morse codes , and count++ if new value found
        // cout << "wordsconverted[i=" << i << "] : " << wordsconverted[i] << endl ;
        if (i > 0)
        {
            int flag = 0;
            for (int j = 0; j < i; j++)
            {
                if (wordsconverted[j] == wordsconverted[i])
                {
                    flag = 1; // same element mil gaya ,so true 1
                    break;
                }
            }
            if (flag == 0)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{

    // string s = "gig" ;
    vector<string> words = {"gin", "zen", "gig", "msg"};
    // cout << "The morse code for " << s << " is : " << morseconverter(s) << endl ;
    cout << "The number of transformations are : " << uniqueMorseRepresentations(words) << endl;

    return 0;
}