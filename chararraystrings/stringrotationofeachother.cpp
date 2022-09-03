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

 bool areRotations(string s1,string s2)
    {
        // Your code here
        if(s1.length()!=s2.length()){
            return false;
        }
        
        string temp = s1 + s1 ; // concatenated
        
        if(temp.find(s2)==string::npos){ 
            return false;
        }
        else return true;
    }

int main(){

    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t ;
    cin >> t ;
    while(t--){
        string a , b ;
        cin >> a >> b ;
        cout << areRotations(a, b) << endl ;
    }

    return 0;
}