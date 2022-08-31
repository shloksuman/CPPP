#include<bits/stdc++.h>
using namespace std;

int getlength(char arr[]){
    int length = 0 ;
    int index = 0 ;
    while(arr[index]!='\0'){
        length++;
        index++;
    }
    return length;
}

int main(){

   char name[8] ;
   char naam[8] ;
   cin >> name ;
   cin >> naam ; 
   cout << "size of the name character array is : " << getlength(name) << endl ; 
   cout << "size of the naam character array using strlen is : " << strlen(naam) << endl ;
   cout << "Return 0 when the above strings are equal , -1 when first>second , 1 when second > first : "  <<  strcmp(naam , name) << endl ;
   //cout << strlen(name) << endl ; 
   char dest[8] ;
   char source[8] ;
   cin >> source ;
   strcpy(dest , source) ;
   cout << "dest after source is copied to dest using strcpy : " << dest << endl ;

   //STRING // STRING STRING

   string s ;
   cout << "enter the string : " ;
   cin >> s ;       // NEWLINE , TAB , SPACE ARE DELIMITERS ,,, ONLY FIRST WORD WILL BE ACCEPTED
   cout << "the entered string is : " << s << endl ;

    return 0;
}