#include<iostream>
using namespace std;

void printnumber(int num){
    num = 10 ;
  cout << "hello print ... function call hogya " ;
  cout << "value changed to " << num << endl ;
} 
int main() {
  int num=5;

  // now calling function 
  printnumber(num) ;

  cout <<  "value of num in main function is still " << num << endl ;

  return 0;
}