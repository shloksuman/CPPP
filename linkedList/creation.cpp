// #include<bits/stdc++.h>
// using namespace std;

// struct Node {
//     int data;
//     Node* link ;

// };

// Node* head = NULL ; //globally declared head pointer

// int main(){

//     Node* ptr= new Node(); //dynamically allocates a space
//     ptr->data = 2;
//     ptr->link = NULL;

//     head = ptr ; //now head contains the address of ptr 
//     //ptr contains data value 2 and ptr points to NULL

//     cout << "ptr : " << ptr << endl;
//     cout << "&ptr : " << &ptr << endl;
//     cout << "ptr->data : " << ptr->data << endl;
//     cout << "ptr->link : " << ptr->link << endl;
//     cout << "head : " << head << endl;
//     cout << "&head : " << &head << endl;
//     cout << "head->data : " << head->data << endl;
//     cout << "head->link : " << head->link << endl;


//     return 0;
// }

/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* link ;

};

Node* head = NULL ; //globally declared head pointer

int main(){

     Node* ptr= new Node(); //dynamically allocates a space
     Node* ptr2 ; 
    // ptr->data = 2;
    // ptr->link = NULL;

    // head = ptr ; //now head contains the address of ptr 
    //ptr contains data value 2 and ptr points to NULL

     cout << "ptr : " << ptr << endl;
     cout << "&ptr : " << &ptr << endl;
    // cout << "ptr->data : " << ptr->data << endl;
     cout << "ptr->link : " << ptr->link << endl;

    cout << "ptr2 : " << ptr2 << endl;
    cout << "&ptr2 : " << &ptr2 << endl;

    cout << "head : " << head << endl;
    cout << "&head : " << &head << endl;
    cout << "head->data : " << head->data << endl;
    cout << "head->link : " << head->link << endl;
  //  cout << "*head : " << *(head) << endl;


    return 0;
}
