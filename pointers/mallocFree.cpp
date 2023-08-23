#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

int main(){
    
    int *ptr = (int *)malloc(sizeof(int)); // dynamically allocated memory in heap

    cout << "enter value to get stored in address pointed by ptr which is allocated to it via dynamic memory allocation using malloc function : " ;
    cin >> *ptr ;

    cout << "*ptr = " << *ptr << endl;

    cout << "address of ptr is : " << ptr << endl;

    free(ptr); // de allocates the allocated memory

    //adding to comment to make a sample commit


return 0;
}