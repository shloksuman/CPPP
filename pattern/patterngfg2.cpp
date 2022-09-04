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

class solution {
    public:
    vector<string> pattern(int n){
        // code here
         vector<string> ans(n);
        int i,j,k;
        
        k=1;
        for(i=0;i<n;i++)
        {
            for(j=0;j<i;j++)
            ans[i]+="--";
            
            for(j=n;j>i;j--)
            {
                ans[i]+=to_string(k++);
                ans[i]+='*';
            }
        }
        
        for(i=n-1;i>=0;i--)
        {
            for(j=n;j>i;j--)
            {
                ans[i]+=to_string(k++);
                ans[i]+='*';
            }
        }
        
        // for(i=0;i<n;i++)
        // ans[i].pop_back();
        
        return ans;
    }
} ;


int main(){

   // ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t ;
    cout << "enter the no of testcases : " ;
    cin >> t ;
    while(t--){
        int n ;
        cout << "enter the value of n : " ;
        cin >> n ; 
        solution ob ;
        vector<string>ans = ob.pattern(n) ;
        for(int i=0; i<n ;i++){
            cout << ans[i] << "\n" ;
        }

    }

    return 0;
}