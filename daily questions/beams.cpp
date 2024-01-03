#include<bits/stdc++.h>
using namespace std;

 int numberOfBeams(vector<string>& bank) {
        int row = bank.size() ;
        int cols = bank[0].size() ;

        int ans = 0;
        // vector<int> box;

        // for(int i = 0 ; i< row ; i++){
        //     if( stoi(bank[i]) == 0 ){
        //         continue;
        //     }
        //     string a = bank[i];
        //     cout << "i : " << i << " and string a : " << a ;
        //     int j = 0 , len = 0 ;
        //     int siz = cols;

        //     while(siz--){
        //         if(a[j]=='1'){
        //             len++;
        //             cout << " inside while j : " << j << " and len : " << len ;
        //         }
        //         j++;
        //     }
        //     cout << " and len = " << len << endl;
        //     box.push_back(len);
        // }

        // for(int k = 0 ; k < box.size() - 1 ; k++){
        //     ans += box[k] * box[k+1];
        // }
         vector<int>v;
        for(auto a: bank){
            string s = a;
            int cnt=0;
            for(int i =0;i<s.size();i++){
                if(s[i]=='1')cnt++;
            }
            if(cnt!=0){
                v.push_back(cnt);
            }
            
        }

        for(int i=1;i<v.size();i++){
            int t = v[i]*v[i-1];
            ans += t; 
        }


        return ans;
    }

int main(){

    vector<string> inp = { "011001","000000","010100","001000" } ;
    vector<string> inpi = { "0","0" } ;
    cout << numberOfBeams(inp) << endl;
    cout << numberOfBeams(inpi) << endl;


    return 0;

}