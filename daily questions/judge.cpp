#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

  int findJudge(int n, vector<vector<int>>& trust) {
        
        map<int , int  > mp1, mp2;


        //base case
        if(trust.size() == 0 && n==1){
            return 1;
        }

        for(int i = 0 ; i < trust.size() ; i++){
            mp1[trust[i][0]]++;
            mp2[trust[i][1]]++;
        }

        for(auto it : mp2){
            if(it.second == n-1 && mp1[it.first]==0){
                return it.first;
            }
        }

        

        return -1;
    }

int main(){

//vector<vector<int>> truss = {  {  1 ,  2 } , { 2 , 3 }  };
vector<vector<int>> truss = {  {  1 ,  2 }  };

int n = 2;

cout << "Judge exists or not : " <<  findJudge(n, truss) << endl;
    
    





return 0;
}