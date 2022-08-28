#include<iostream>
using namespace std;
bool isPalindrome(int x) {
        if(x<0){
            return false ;
        }
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
            i++;
        }
        int l=0;
        i=digit-1;
        while(l<i){
            if(arr[l]==arr[i]){
                l++;
                i--;
            }
            else { return false;
            }
        }
        return true;
    }

int main(){
   // int arr[100];
    cout << "enter the number : ";
    int x;
    cin>>x;
    if(isPalindrome(x)){
        cout <<"palindrome" << endl;
    } 
    else {
        cout << "not a palindrome" << endl;
    }


    // int orig=x;
        
    //   //  int arr[100];
        
    //     //digit find
    //     int digit=0;
    //     while(x>0){
    //         digit++;
    //         x=x/10;
    //     }
    //     cout << "the digits in " << orig << " are " << digit << endl;
    //     cout << "value of x is : " << x << endl;
    //     cout << "value of orig is : " << orig << endl;
    //     x=orig;        
    //     cout << "value of x after reassigning with orig x=orig : " << x << endl;    
    //     int i=0;
    //     int j=digit;
    //     while(j--){
    //         arr[i]=x%10;
    //         x=x/10;
    //         i++;
    //     }

    //     cout << "The array is : " ;
    // for (int i = 0; i < digit; i++)
    // {
    //     cout << arr[i] << endl ;        
    // } 



return 0;
}