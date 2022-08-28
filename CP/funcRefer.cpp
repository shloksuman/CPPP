//  https://www.codespeedy.com/set-bits-in-all-numbers-from-1-to-n-in-cpp/
#include<iostream>
using namespace std;

void func(int a){
    cout << "the initial a passed value in func is : " << a << endl;
    a = a+ 5 ;
    cout << "after doing a = a+5 in the func , we have a's value : " << a << endl;
}
void funcreference(int &a){
    cout << "the initial a passed value in func REFERENCE is : " << a << endl;
    a = a+5 ;
    cout << "after doing a = a+5 in the func REFERENCE , we have a's value : " << a << endl;
}

int main(){
    cout << "enter a value : " ;
    int a;
    cin >> a ;
    cout << "!!!CALLING THE FUNC(A)!!!" << endl;
    func(a);
    cout << "!!!THE FUNC(A) HAS ENDED!!! NOW CHECKING A'S VALUE BY PRINTING IN MAIN FUNC() : " <<a << endl;
    a = a+ 5 ;
    cout << "after doing a = a+5 in the MAIN func , we have a's value : " << a << endl;

    a = a-5 ;

    cout << "!!!CALLING THE FUNCREFERENCE(A)!!!" << endl;
    funcreference(a);
    cout << "!!!THE FUNCREFERENCE(A) HAS ENDED!!! NOW CHECKING A'S VALUE BY PRINTING IN MAIN FUNC() : " <<a << endl;
    a = a+ 5 ;
    cout << "after doing a = a+5 in the MAIN func , we have a's value : " << a << endl;



return 0;
}