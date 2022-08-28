#include<iostream>
#include<string>
using namespace std;

 string removeDigit(string number, char digit) {
        int count=0;
        for(int j=0; ; j++){
            if(number[j]=='\0'){
                break;
            }
            count++ ;
        }
        int numlength = count ;
        for(int i=0; i< count ; i++){
            if(digit == number[i]){
                number[i]='\0' ;
            }
        }
        return number ;
    } ;

int main(){

        string number;
        char digit;
        getline(cin , number);
        cin >> digit ;
        string result=removeDigit(number , digit) ;
        cout << result ;

return 0;
}