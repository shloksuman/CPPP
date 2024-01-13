#include<bits/stdc++.h>
using namespace std;


int minSteps(string s, string t) {
        unordered_map<char , int> m;
        unordered_map<char , int> n;

        int count = 0;

        for(char c : s){
            m[c]++;
        }
        for(char d : t){
            n[d]++;
        }

        for (const auto& pair : m){
        std::cout << pair.first << ": " << pair.second << std::endl;
        }
        cout << "\n Frequency of N map " << endl;
        for (const auto& pair : n){
        std::cout << pair.first << ": " << pair.second << std::endl;
        }


        for (const auto& pair : m){
        

        char keyToCheck = pair.first;
        auto it = n.find(keyToCheck);

        cout << "\nPair.first : " << pair.first << " and Pair.second : " << pair.second << " also n[keyToCheck] : " << n[keyToCheck] << endl;
        

        // if(it != n.end()){
                if(pair.second> n[keyToCheck]){
                    cout << "salam saab " << endl;
                        cout << "\nPair.first : " << pair.first << " and Pair.second : " << pair.second << " also n[keyToCheck] : " << n[keyToCheck] << endl;

                count += abs(pair.second - n[keyToCheck]);
            }
       // }

    }


    return count;

}

int main(){

    string s = "leetcode" ;
    string t = "practice" ;

    cout<<minSteps(s,t)<<"\n";





    return 0;
}