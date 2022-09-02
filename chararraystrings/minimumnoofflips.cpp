#include<bits/stdc++.h>
using namespace std;

void createArr(int arr[], int size){
    cout << "Enter the elements of the array : " ;
    for(int i=0 ; i<size ; i++){
        cin >> arr[i] ;                
    }
}

//PRINTING ARRAY
void printarray(int arr[], int size) {
    cout << "The array is : " ;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl ;        
    }  
}

int minflips(string s){
    int len = s.length() ;
    if(len==2){
        if(s[0]==s[1]){
            return 0 ;
        }
        else return 1;
    }
    int flips=0;
    for(int i=0 ; i<len-2 ; i=i+2){
        if(s[i]==s[i+1] && s[i+1]!=s[i+2]){
            ++flips;
        }
    }
    return flips ;
}

int main(){

    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t ;
    cin >> t ;
    while(t--){
        string s;
        cin >> s ;
        cout << minflips(s) << endl ;
    }

    return 0;
}