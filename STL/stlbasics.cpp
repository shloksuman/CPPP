
#include<bits/stdc++.h>

using namespace std;

void expPair(){

    pair<int , int> p = { 1 , 3} ; // stores pair of integers

    cout << "p.first : " << p.first << " p.second : " << p.second << endl ;

    //NESTED PAIR
    pair<int , pair<int, int > > t = { 1 , { 9 , 11} } ;

    cout << "t.first : " << t.first << " t.second.first : " << t.second.first << "    t.second.second : " << t.second.second <<   endl ;

    t.first = 16 ;

    cout << "\nChanged t.first = " << t.first << endl ;

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
    vector<int> v4(v1) ;

    //ITERATION //AUTO // ITERATION //AUTO

    cout << "v1[0] = " << v1[0] << "   v1.at(0) = " << v1.at(0) << endl ;

    vector<int>:: iterator it = v1.begin() ; //points to the address of the first element of vector v1

    it++ ; 
    cout << "after it++ =  " << *(it) << endl; //prints the value at address it

    it  = it + 2 ;  // jumps two places to the right i.e here from 2nd to 4th
    cout << "after it+2  =  " << *(it) << endl ; 

    //v1.back() = prints last element of the vector
    cout << "Print v1.back() = " << v1.back() << endl ;

   // vector<int>::iterator it = v1.end() ;  // points to element last+1 ; to get last element , do it--

    cout << "printing v1 using iterator it : " ;
    for(vector<int>::iterator it = v1.begin() ; it!= v1.end() ; it++){
        cout << *(it) << " " ;
    }

    cout << "\nprinting v1 using auto it : "  ;
    for(auto it = v1.begin() ; it!= v1.end() ; it++){ //here ---it--- is auto assigned as an ITERATOR
        cout << *(it) << " " ;
    }

    //for each loop
     cout << "\nprinting v1 using for each auto loop auto it:v1  =  " ;
    for(auto it : v1){ //here ---it--- is NOT an iterator like previous .. auto assigned it int data type
        cout << it << " " ;
    }

     //DELETION //ERASE // DELETION
     v1.erase(v1.begin()+2) ; //deletes (begin = 1) + 2 = 3rd element in { 3,5,7,9,11,13} 
     cout << "\nprinting vector after v1.erase(v1.begin()+2) = " ;
     for(auto it: v1){ cout << it << " " ;}
    //FOR RANGE DELETION 
            //START         //ENDS JUST BEFORE THIS
    v1.erase(v1.begin()+1 , v1.begin()+4 ) ; 
    cout << "\nprinting vector after v1.erase(v1.begin()+1 , v1.begin()+4) = " ;
     for(auto it: v1){ cout << it << " " ;}

    //v1 = { 3 ,13 } ;
    //v4 = { 3 ,5 ,7 ,9 ,11 ,13 } ;
     v1 = v4 ; 
     //after this v1 becomes v1 = { 3 , 5 ,7 ,9 ,11, 13 } 
    cout << "\nprinting v1 after v1=v4   =>  " ;
     for(auto it: v1) {
        cout << it << " " ;
     }

    vector<int> v5(2 , 100) ;  //{ 2 , 100 }
            //position   //value
    v5.insert(v5.begin() , 50) ; //{50 , 2 , 100 }
            //position   //times //value
    v5.insert(v5.begin() , 2 , 17) ; // {17 ,17 , 50 , 2 ,100 }

    cout << "\nprinting newly created v5 with insert() : " ;
    for(auto it: v5){
        cout << it << " " ;
    }

    cout << "\nvector v : " ;
    for(auto it : v){
        cout << it << " " ;
    }

    cout << "\nsize of vector v : " << v.size() << endl ;
    v.pop_back() ;
    cout << "after pop_back , we have v : " ;
    for(auto it = v.begin() ; it!=v.end() ; it++){
        cout << *(it) << " " ;
    }

    //v1.swap(v5) ;    ALL VALUES OF V1 GO TO V5 , AND VICE VERSA

    //v.clear() ; //CLEARS ALL ELEMENTS

    cout << "\ncheck if v5 is empty by v5.empty() = " << v5.empty() << endl ;

}

void explainList(){
    list<int> ls;

    ls.push_back(4);
    ls.emplace_back(2);

    ls.push_front(6) ;
    ls.emplace_front(9);


}


void expStack(){
    //INSERTION DELETION POP - O(1) TIME COMPLEXITY
    stack<int> s;
    s.push(1); //{1}
    s.push(2); //{2,1}
    s.push(3); //{3,2,1}
    s.emplace(5); //{5,3,2,1}

    cout << "s.top() = " << s.top() << endl;
    s.pop() ; //deletes top element 5 //{3,2,1} 

    cout << "s.top() = " << s.top() << endl;
    cout << "s.size() = " << s.size() << endl;
    cout << "s.empty() = " << s.empty() << endl;

    // s1.swap(s2) ;

}

void expQueue(){
    //INSERTION DELETION POP - O(1) TIME COMPLEXITY
    queue<int> q ; //FIFO 
    q.push(1) ;  // {1}
    q.push(2) ;  // {1,2}
    q.push(3) ;  // {1,2,3}

    q.back() += 5 ; //adds 5 to the last element

    cout << "q.back()+= 5 =>  " << q.back() << endl ;

    q.pop() ; //pops first element here 1

    cout << "after pop() , print q.front() = " << q.front() << endl ;
}

void expPriorityQueue(){
    //INSERTION - O(logn) TIME COMPLEXITY
    //POP DELETION - O(logn) TIME COMPLEXITY
    //TOP DELETION - O(1) TIME COMPLEXITY

    //MAX HEAP - STORES MAX AT TOP
    priority_queue<int> q ; 
    q.push(6) ;  // {6}
    q.push(2) ;  // {6,2}
    q.push(12) ;  // {12,6,2}

    cout << "priority queue top = " << q.top() << endl;

    q.pop() ; //pops first element here 1

    cout << "after pop() , print q.front() = " << q.top() << endl ;


    //MIN HEAP - STORES MIN AT TOP
    priority_queue<int , vector<int> , greater<int>> minq ; 
    minq.push(7) ;  // {7}
    minq.push(2) ;  // {2,7}
    minq.push(8) ;  // {2,7,8}
    minq.push(1) ;  // {1,2,7,8}

    cout << "min heap priority queue top = " << minq.top() << endl;

    minq.pop() ; //pops first element here 1

    cout << "after pop() , print q.front() = " << minq.top() << endl ;
}

void expSet(){
    set<int> s;
    s.insert(12);
    s.emplace(2);
    s.insert(23);
    s.insert(2);

    auto it = s.find(12) ; //returns the address of the element 12
    cout << "auto it = s.find(12) = " << *(it) << endl; 

    auto it2 = s.find(25) ; //25 NOT PRESENT so it returns the address s.end() last element
    cout << "auto it = s.find(25) = " << *(it2) << endl; 
    auto it3 = s.find(23) ; //25 NOT PRESENT so it returns the address s.end() last element
    cout << "auto it = s.find(23) = " << *(it3) << endl; 

    s.erase(23) ;

    //IF S.FINF(X) X IS NOT PRESENT , IT RETURNS THE SIZE OF SET S , SIMPLY

    auto it4 = s.find(23) ; //25 NOT PRESENT so it returns the address s.end() last element
    cout << "after s.erase(23) , auto it = s.find(23) = " << *(it4) << endl; 

    int x = s.count(12) ; //12 exist , true , return 1
    cout << "x count(12) = " << x << endl;
    int y = s.count(47) ; //47 doesn't exist , false , return 0
    cout << "y count(47) = " << y ;

    auto it5 = s.find(12) ;
    s.erase(it5) ; //also accept iterator to erase

    s.insert(33);
    s.insert(43);
    s.insert(58);
    s.insert(123);

    auto it6 =s.find(33) ;
    auto it7 =s.find(58) ;
    s.erase(it6 , it7) ; //deletes between [33 , 58)

    cout << "\nthis is working bice good fine! " ;
    cout << "\ngit command is running well! awesome " ;
 
}

void expMultiSet(){
    //STORES EVERYTHING BUT IN SORTED ORDER

    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1); // {1,1,1,1 }

    cout << "\nprinting multiset ms = { " ;
    for(auto it: ms){
        cout << it << " " ;
    }
    cout << "} " << endl;

    cout << "\nUsing ms.erase(1) to erase every 1s from multiset " ;

    ms.erase(1) ;

    cout << "\nprinting multiset ms = { " ;
    for(auto it: ms){
        cout << it << " " ;
    }
    cout << "} " << endl;

    ms.insert(2);
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);
    ms.insert(1);
    ms.insert(7);
    ms.insert(11);

    cout << "\nInserted ms.insert(2) four times again : " ;

    cout << "\nprinting multiset ms = { " ;
    for(auto it: ms){
        cout << it << " " ;
    }
    cout << "} " << endl;

    int cnt1 = ms.count(1) ;
    int cnt2 = ms.count(2) ;

    cout << "\ncnt1 = ms.count(1) = " << cnt1 << endl;
    cout << "\ncnt2 = ms.count(2) = " << cnt2 << endl;

   // ms.erase(ms.find(2) , ms.find(2) + 2 ) ; //not working


}





int main(){

//expPair();
//expVector();
// expStack();
// expQueue();
// expPriorityQueue();
// expSet();
expMultiSet();


    return 0;
}