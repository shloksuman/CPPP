#include<bits/stdc++.h>
using namespace std;

void expPair(){

    pair<int , int> p = { 1 , 3} ; // stores pair of integers

    cout << "p.first : " << p.first << " p.second : " << p.second << endl ;

    //NESTED PAIR
    pair<int , pair<int, int > > t = { 1 , { 9 , 11} } ;

    cout << "t.first : " << t.first << " t.second.first : " << t.second.first << "    t.second.second : " << t.second.second <<   endl ;

}

void expVector(){

    vector<int> v; //size can be modified , unlike array

    v.push_back(1); //inserts
    v.emplace_back(2); //dynamically increases size of vector and stores 2 {1 , 2} // also faster than pushback

    vector< pair<int , int > > vec ; //vector of pair data type

    vec.push_back({1 , 5}) ;  //braces NEEDED 
    vec.emplace_back(7,9) ;    //NO BRACES 7,9 are considered pair

    vector<int> ve( 5 , 100) ; //vector of size 5 , all having 100 value
    vector<int> vecc( 5) ; //vector of size 5 , all having 0 value or garbage value , compiler dependent

    vector<int> v3(5,20) ; //REMEMBER SIZE CAN BE INCREASED ANYTIME
    vector<int> v2(v3) ; //copied v1 to v2

    vector<int> v1 = { 3 , 5 ,7 ,9 ,11 ,13} ;

    //ITERATION //AUTO // ITERATION //AUTO

    cout << "v1[0] = " << v1[0] << "   v1.at(0) = " << v1.at(0) << endl ;

    vector<int>:: iterator it = v1.begin() ; //points to the address of the first element of vector v1

    it++ ; 
    cout << "after it++ =  " << *(it) << endl; //prints the value at address it

    it  = it + 2 ;  // jumps two places to the right i.e from 1st to 3rd
    cout << "after it+2  =  " << *(it) << endl ; 

   // vector<int>::iterator it = v1.end() ;  // points to element last+1 ; to get last element , do it--

    cout << "printing v1 using iterator it : " ;
    for(vector<int>::iterator it = v1.begin() ; it!= v1.end() ; it++){
        cout << *(it) << " " ;
    }

    cout << "\nprinting v1 using auto it : "  ;
    for(auto it = v1.begin() ; it!= v1.end() ; it++){
        cout << *(it) << " " ;
    }

    //for each loop
     cout << "\nprinting v1 using for each auto loop auto it:v1  =  " ;
    for(auto it : v1){ //here it is NOT an iterator like previous .. auto assigned it int data type
        cout << it << " " ;
    }

     

}

int main(){

expPair();
expVector();

    return 0;
}