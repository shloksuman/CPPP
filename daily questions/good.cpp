#include<iostream>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<map>

using namespace std;

int main(){
    // string z ; 
    // getline(cin , z) ;
    // cout << z << endl;

    string chars = "mnabcdkkkkccc";

    cout << "Initial string : " << chars << endl;

    // map<char, int> mpp;
    unordered_map<char, int> mpp;

        // for(int i=0; i<chars.length(); i++){
        //  //   mpp[chars[i]] = 1;
        //  mpp["hello"] = 1;
        // }
        for(int i=0; i<chars.length(); i++){
            mpp[chars[i]]++;
        // mpp["hello"] = 1;
        }
        unordered_map<char, int> dup;
        dup = mpp;
        
     //   mpp["hello"] = 3;
      //  cout << "\nThe first character of the string is : " << chars[0] << endl;

        for (auto x : mpp) 
        cout << x.first << " " << x.second << endl; 
        for (auto x : dup) 
        cout << x.first << " " << x.second << endl; 

        // string hel;
        // cout << "\nEnter char hel : " ;
        // cin>> hel;

        // cout << "\nYou entered : " << hel  << endl;

    return 0;
}