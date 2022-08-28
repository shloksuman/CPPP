#include<iostream>
using namespace std;

int getLength(char arr[]){
    int length=0 , index=0;
    while(arr[index]!='\0'){
        length++;
        index++;
    }
    return length ;
}

int main(){
    char name[6] ;
    cout << "Enter Name : " ;
    cin >> name ;
    cout << "The name entered is : " << name ;

    int strsize = getLength(name) ;
    cout << "\nThe size of the array is : " <<strsize ;

    string str1 ;
    cout << "Enter str1 : " ;
    cin >> str1;

    string str2 ;
    cout << "Enter str2 : " ;
    getline(cin, str2) ;
     cout << "The name entered is : " ;
    cout << str2 ;
    return 0;

}