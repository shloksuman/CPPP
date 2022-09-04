#include<bits/stdc++.h>
using namespace std;

void printarray(int s[], int size) {
    cout << "The array is : " ;
    for (int i = 0; i < size; i++)
    {
        cout << s[i] << endl ;        
    }  
}

char getmaxoccuringchar(string s){
    int size = s.length() ;

    int freq[26] = {0} ;
    for(int i=0 ; i<s.length() ; i++){
        char ch = s[i] ;                //storing the character in char ch
        int index = ch - 'a' ;          //subtracting 'a' to get the ascii value mapped to it
        freq[index]++ ;                 //updating the frequency of that particular character
    }

  //  printarray(freq , 26) ;
        int maxvalue = *max_element(freq , freq + 26) ; //obtaining the frequency of max occuring character(s) in the freq array
        cout << "max value : " << maxvalue << endl ; 
        int index=0;
        for(int i = 0 ; i < 26 ; i++){  //the first value that matches with the maxfreqvalue , store its index , nd break
            if(freq[i]==maxvalue){
                index = i ;
                break;
            }
        }
        
        int ans = 'a' + (index) ; //adding the 'a' to the index to get the ascii value of the max occuring char
        cout << "ans = " << ans << endl;
        char final = char(ans) ; //converting the ascii value to its char and finally returning ans
        cout << "final = char(ans) = " << final << endl;
        return ans;
}



int main(){

    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t ;
    cin >> t ;
    while(t--){
        string s;
        cin >> s ;
        cout << getmaxoccuringchar(s) << endl ;
    }

    return 0;
}