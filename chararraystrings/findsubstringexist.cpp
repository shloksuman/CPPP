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

void substring(string s1 , string s2){
 int found = s1.find(s2);
 
    // Check if position is -1 or not
    if (found != string::npos) {
 
        cout << "first " << s2
             << " found at: "
             << (found) << endl;
    }
    cout << "first " << s2
             << " found at: "
             << (found) << endl;
}

int main(){

    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t ;
    cin >> t ;
    while(t--){
        string a, b;
        cin >> a >> b ;
        substring(a, b) ;
    }

    return 0;
}