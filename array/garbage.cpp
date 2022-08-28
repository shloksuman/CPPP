#include<iostream>
using namespace std;

int main(){

    int arr[4];
    cout << "a = " << arr[0] << endl; //prints RANDOM GARBAGE values

    int arr2[15] ={1} ; //PRINTS ARR[0] AS 1 , REST VALUES ARE INITIALIZED WITH 0
    cout << "a2[0] = " << arr2[0] << endl; 
    cout << "a2[1] = " << arr2[1] << endl; 
    cout << "a2[2] = " << arr2[2] << endl; 

return 0;
}