#include<iostream>
#include<algorithm>
#include<vector>
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

bool uniqueOccurrences(vector<int>& arr) {
        vector<int> ans;
        int size = arr.size();
        int i = 0;
        sort(arr.begin(),arr.end());
        while(i<size){
            int count = 1;
            for(int j =i+1;j<size;j++){
                if(arr[i]==arr[j]){
                    count++;
                }
                else{
                    break;
                }
            }
            ans.push_back(count);
            i = i+count;
        }
        size = ans.size();
        sort(ans.begin(),ans.end());
        for(int i = 0;i<size-1;i++){
            if(ans[i]==ans[i+1]){
                return false;
            }
        }
        return true;   
    }

int main(){

    vector<int> arr;
    cout << "Enter the size of array : " ;
    int size ;
    cin >> size ;
    cout << "Enter the element : " ;
    int ele ;
    for(int i = 0 ; i< size ; i++ ){
        cin >> ele ;
        arr.push_back(ele) ;
    }
   
    cout << "The array " ;
    if(uniqueOccurrences(arr)){
        cout << "HAS unique occurences!!!" << endl;
    }
    else cout << "DOES NOT HAVE unique occurences!!!" << endl;

return 0;
}