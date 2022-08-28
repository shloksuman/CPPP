#include<iostream>
using namespace std;

//CREATION ON ARRAY
void createArr(int arr[], int size){
    cout << "Enter the elements of the array : " ;
    for(int i=0 ; i<size ; i++){
        cin >> arr[i] ;                
    }
}

bool palindrome(int arr[], int size) {
    int i=0;
    int j=size-1;
    while(i<j)
    {
        if(arr[i]==arr[j]){
            i++;
            j--;
        }
        else {
        return false;
        }
    }
    return true;
}

 bool isPalindrome(int x) {
        int orig=x;
        
        int arr[100];
        
        //digit find
        int digit=0;
        while(x>0){
            digit++;
            x=x/10;
        } //calculates digit of the number
        
        //palindrome checking
        x= orig;
        int i=0;
        int j=digit;
        while(j--){
            arr[i]=x%10;
            x=x/10;
            ++i;
        }
        i=i-1;
        int l=0;
        while(l<=i){
            if(arr[l]==arr[i]){
                l++;
                i--;
            }
            else { 
                return false;
            }
        }
        return true;
    }

int main(){
    // int arr[100];
    // cout << "Enter the size of array : " ;       //FOR PALINDROME ARRAY
    // int n;
    // cin>>n;
    // createArr(arr,n);
    // if(palindrome(arr,n)){
    //     cout << "It's a PALINDROME!!!" << endl;
    // }
    // else { cout << "NOT A PALINDROME!!!" << endl; }
    cout << "enter the number : " ;                 //FOR PALINDROME INTEGER
    int num;
    cin>>num;
    if(isPalindrome(num)){
        cout <<"palindrome" << endl;
    } 
    else { cout << "not a palindrome" << endl;}

    return 0;
}