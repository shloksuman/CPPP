#include<bits/stdc++.h>
#include<unordered_set>

using namespace std;

int main(){
    unordered_set<int> s;

    s.insert(10) ;
    s.insert(5) ;
    s.insert(15) ;
    s.insert(20) ;

    cout << "Printing stored elements : " << endl ;
    for(auto it = s.begin() ; it!= s.end() ; it++){
        cout << (*it) << endl ;
    }

    cout << "Number of elements in the set : " << s.size() << endl ;

    int x;
    cout << "Enter element to find in set : " ;
    cin >> x ;

    if(s.find(x)==s.end()){
        cout << "NOT FOUND!!!" << endl ;
    }
    else cout << "FOUND!!!" << endl ;

    int y;
    cout << "Enter element to delete in set : " ;
    cin >> y ;
    s.erase(y) ;

    cout << "Again printing set after deletion : " << endl;
    for(auto it = s.begin() ; it!=s.end() ; it++){
        cout << (*it) << endl ;
    }

    int z;
    cout << "Enter element to find in set and if present delete it : " ;
    cin >> z ;

    if(s.count(z)){
        auto temp = s.find(z) ;
        s.erase(temp) ;
       // s.erase(z) ; this statement alone works
    }

    cout << "Now size after deletion : " << s.size() << endl ;

    cout << "Again printing set after deletion : " << endl;
    for(auto it = s.begin() ; it!=s.end() ; it++){
        cout << (*it) << endl ;
    }

    return 0;
}