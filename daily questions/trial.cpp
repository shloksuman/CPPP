#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

 int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end());
        int count = 0;
        for(int i=0 ; i<pairs.size()-1; i++){
            cout << "\ni= " << i << endl;

            //base condition
            if(pairs[i][0]>=pairs[i][1]){
              //  cout << "\ni= " << i << endl;
                return count;
            }
            if(pairs[i][1]<pairs[i+1][0]){
                count++;
                
            }
            else {
                continue;
            }
        }
        return count;
    }

int main(){
    vector<vector<int>> pairs = {{1,2} , {2,3} , {3,4}} ;
    for(int i=0 ; i<pairs.size(); i++){
       for(int j=0 ; j<2;j++){
        cout << pairs[i][j]  << " ";
       }
    }

    cout << "length of chain pair : " << findLongestChain(pairs) << endl;

    //  sort(pairs.begin(), pairs.end());
        // int count = 0;
        // for(int i=0 ; i<pairs.size()-1; i++){
        //     //base condition
        //     if(pairs[i][0]>=pairs[i][1]){
        //         return count;
        //     }
        //     if(pairs[i][1]<pairs[i+1][0]){
        //         count++;
        //     }
        //     else {
        //         continue;
        //     }
        // }
        // return count;

    // cout << endl;

    // // vector<vector<int>> pairs2 = {{1,2} , {7,8} , {4,5}} ;
    // // for(int i=0 ; i<pairs2.size(); i++){
    // //    for(int j=0 ; j<2;j++){
    // //     cout << pairs2[i][j]  << " ";
    // //    }
    // // }

    // // cout << "after sorting pair2 \n " ;
    // // sort(pairs2.begin() , pairs2.end());
    // // for(int i=0 ; i<pairs2.size(); i++){
    // //    for(int j=0 ; j<2;j++){
    // //     cout << pairs2[i][j]  << " ";
    // //    }
    // // }

    // // sort(pairs.begin(), pairs.end());

    // cout << "after sorting pairs \n " ;
    // // sort(pairs.begin() , pairs.end());
    // for(int i=0 ; i<pairs.size(); i++){
    //    for(int j=0 ; j<2;j++){
    //     cout << pairs[i][j]  << " ";
    //    }
    // }

     
    //     // int count = 0;
    //     // for(int i=0 ; i<pairs.size()-1; i++){
    //     //     //base condition
    //     //     if(pairs[i][0]>=pairs[i][1]){
    //     //         return count;
    //     //     }
    //     //     if(pairs[i][1]<pairs[i+1][0]){
    //     //         count++;
    //     //     }
    //     //     else {
    //     //         continue;
    //     //     }
    //     // }
    //     // return count;
    // cout << "ee" << endl;


return 0;
}