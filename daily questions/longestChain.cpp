#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

int main(){
    vector<vector<int>> pairs = {{1,2} , {2,3} , {3,4}} ;
    for(int i=0 ; i<pairs.size(); i++){
       for(int j=0 ; j<2;j++){
        cout << pairs[i][j]  << " ";
       }
    }

return 0;
}