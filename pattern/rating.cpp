#include<iostream>
using namespace std;

int main(){
    int x ; // rating
    cin>> x ;
    if(x >= 1900 ) {
        cout << "Division 1" ;
    }
    else if (x >= 1600 )
    {
        cout << "Division 2" ;
    }
    else if (x >= 1400 )
    {
        cout << "Division 3" ;
    }
    else if (x <= 1399)
    {
        cout << "Division 4" ;
    }
     

    return 0;
}