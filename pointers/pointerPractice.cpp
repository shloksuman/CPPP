#include<iostream>
using namespace std;

int main(){

    int a=3;
    int* b=&a ;
    // &a MEANS ADDRESS OF a
    cout << "The address of a is given by &a : " << &a << endl;
    cout << "The address of a is given by POINTER b : " << b << endl;
     // IT PRINTS AN ADDRESS THAT IS ASSIGNED TO a WHILE THIS PROGRAM IS RUNNING
    //                     THAT IS WHY ADDRESS IS ALWAYS DIFFERENT WHENEVER WE RUN THIS 
    cout << "The VALUE at address pointed by b is printed by *b : " << *b << endl;  // THIS PRINTS THE VALUE AT ADDRESS POINTED BY b

    int** c= &b ; //POINTER TO POINTER
    cout << "<--AFTER POINTER TO POINTER REFERENCING-->" << endl;

    cout << "The address of b is given by &b : " << &b << endl;
    cout << "The address of b is given by c pointer : " << c << endl;

    cout << "*c prints : " << *c << endl; // PRINTS VALUE STORED AT b , i.e a's ADDRESS
    cout << "**c prints : " << **c << endl; // PRINTS VALUE STORED AT a's ADDRESS i.e a=3
    cout << "The address of c is given by &c : " << &c << endl; //PRINTS THE ADDRESS OF c



return 0;
}