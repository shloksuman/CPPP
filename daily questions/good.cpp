#include<iostream>
#include<string>
#include<algorithm>
#include<unordered_map>

using namespace std;

int main(){
    // string z ; 
    // getline(cin , z) ;
    // cout << z << endl;

    string chars = "mnabcdk";

    cout << "Initial string : " << chars << endl;

    unordered_map<string, int> mpp;

        // for(int i=0; i<chars.length(); i++){
        //  //   mpp[chars[i]] = 1;
        //  mpp["hello"] = 1;
        // }
        for(int i=0; i<chars.length(); i++){
         //   mpp[chars[i]] = 1;
         mpp["hello"] = 1;
        }

        for (auto x : mpp) 
        cout << x.first << " " << x.second << endl; 

    return 0;
}