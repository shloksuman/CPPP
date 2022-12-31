#include<bits/stdc++.h>
using namespace std;

void PrintStack(stack<int> s)
{
    // If stack is empty
    if (s.empty())
        return;
  
// Extract top of the stack
    int x = s.top();
  
    // Pop the top element
    s.pop();
  
    // Print the current top
    // of the stack i.e., x
    cout << x << ' ';
  
    // Proceed to print
// remaining stack
    PrintStack(s);
  
    // Push the element back
    s.push(x);
}

 vector<int> asteroidCollision(int n, vector<int> &asteroid) {
    int size = n ;
        stack<int> s;   //original vector in the stack
        stack<int> ans; //answer final stack
        while(n>0){
            s.push(asteroid[n-1]) ; //storing all the vector elements in the stack
            n=n-1;
        }

        // cout << "print s stack from orig asteroid :" << endl;
        // PrintStack(s) ;
        
        int firsttop , secondtop ;
        cout << "before \n" ;
       for(int i = 0 ; i<size ; i++){
           
        cout << i << " iteration \n" ;
           firsttop = s.top() ; 
           s.pop() ;
           secondtop = s.top() ;
           //not popping secondtop
           
           int flag=0 ; // 0 = first>second ,  1 = second>first
           
           if(abs(firsttop)<abs(secondtop)){
               flag=1 ; // setting 1 since second>first
           }
           //else it remains 0
           
           if(firsttop>0 && secondtop>0 ){ //both same direction
                ans.push(firsttop) ;
              //ans.push(secondtop) ;
                continue;
           }
           else if(firsttop<0 && secondtop<0 ){ //both same direction
                ans.push(firsttop) ;
              //ans.push(secondtop) ;
                continue;
           }
           else if(flag==0){ //different direction //first>second
                ans.push(firsttop) ;
                continue;
           }
           else if(flag==1){ //different direction //second>first
                ans.push(secondtop) ;
                continue;
           }
       }
        cout << "after " ;

        cout << "printing stack before storing it in anss vector : " << endl ;
        PrintStack(ans) ;
       
       //now storing the ans stack elements in the ans vector
       vector<int> anss;
       while(!ans.empty()){
           anss.push_back(ans.top());
           ans.pop();
       }
       reverse(anss.begin() , anss.end()) ;
       for(int i = 0 ; i< anss.size(); i++){
        cout << anss[i] << " " ;
    }
       return anss; 
    }

int main(){

    // stack<int> s;
    // s.push(1);
    // s.push(3);
    // s.push(4);
    // cout << "print main stack : " << endl ;
    // PrintStack(s) ;
   vector<int> asteroid = { 3 , 5 , -3 } ;
//    for(int i = 0 ; i< asteroid.size(); i++){
//         cout << asteroid[i] << " " ;
//     }
   vector<int> ans ;
   ans = asteroidCollision(3 , asteroid) ;
    // for(int i = 0 ; i< ans.size(); i++){
    //     cout << ans[i] << " " ;
    // }
    return 0;
}