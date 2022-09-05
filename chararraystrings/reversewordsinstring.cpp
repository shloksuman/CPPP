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

 string reverseWords(string s) {
     int i = 0  ;
     int N = s.length() ;
     string result;
    while(i<N){
        while(i<N && s[i]==' '){
            i++;
        }
        if(i>=N) break;
        int j=i+1;
        while(j<N && s[j]!=' '){
            j++;
        }
        string sub = s.substr(i , j-i) ;
        if(result.length()==0){
            result = sub ;
        }
        else {
            result = sub + " " + result ;
        }
        
        i = j+1 ;
    }
        return result;
    }

int main(){
    string s;
    cout << "enter string to reverse the words : ";
    getline(cin , s) ;      //USE GETLINE TO INPUT STRING WITH SPACES
    cout << "the reversed string is : " << reverseWords(s) << endl ;

    return 0;
}