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
    //STACK IMPLEMENTATION USING STRING
    //ALSO USED STRING STL FUNCTION SUBSTR()
    string removeOccurrences(string s, string part) {
        string ans;
        for(auto a:s){  //reading all characters of the string s 
            ans.push_back(a) ; //storing all characters one by one in string ans
            //if we get size of ans >= part size , we start checking whether the top entered substring matches with part or not
            //if yes we , pop those characters
            if(ans.size()>=part.size() && ans.substr( ans.size()-part.size() ) == part ){
                int m = part.size() ;
                while(m--){
                    ans.pop_back() ;
                }
            }
        }
        return ans;
    }

int main(){

  //  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t ;
    cin >> t ;
    while(t--){
        string s , part ;
        cout << "enter s : " ;
        cin >> s ;
        cout << "enter part : " ;
        cin >> part ;
        cout << "after removing all occurences of " << part << " from " << s << " we get the resultant string : " << removeOccurrences(s , part) << endl ;
    }

    return 0;
}