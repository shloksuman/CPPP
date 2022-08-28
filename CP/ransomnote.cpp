#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

 bool canConstructt(string ransomNote, string magazine) {
        int ranlen = ransomNote.length() ;
        int maglen = magazine.length() ;
        for(int i=0 ; i<ranlen ; i++){
            int flag=0;
            for(int j=0 ; j<maglen ; j++){
                cout << "i = " << i << " j = " << j << " flag = " << flag << " ransomnote[" << i <<"]"<< " = " << ransomNote[i]  << " magazine[" << j <<"]"<< " = " << magazine[j] << endl;
                if(ransomNote[i]==magazine[j]){
                    flag=1;
                }

            }
            if(flag==0){
                return false;
            }
        }
        
        return true;
    }

      bool canConstruct(string ransomNote, string magazine) {
          // you can also use unordered_map<int, int> m; here
		// since we're just dealing with lowercase English letters, 
        // we can just use an array of length 26 to store the frequency of them
        int m[26] = {0};
        // count each character
        for(char c : magazine) m[c - 'a']++;
        // check if it can be found in m and substract by 1 
        for(char c : ransomNote) {
			// if it is less than 0, it means it cannot be constructed from magazine
            if(--m[c - 'a'] < 0) return false;
        }
        return true;
    }

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cout << canConstruct("aa" , "ab") << endl;
    }
return 0;
}