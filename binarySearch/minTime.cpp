#include<bits/stdc++.h>
using namespace std;

// Back-end complete function Template for C++

class Solution{
public:
    int minTime(int S1, int S2, int N){
        int a = S1, b = S2;
        if(a > b)
            swap(a, b);
        int low = 0, high = N, mid, mini = b*N;
        while(low <= high){
            mid = (low + high)/2;
            mini = min(mini , max(mid*a , (N - mid)*b));
            if(mid*a <= (N - mid)*b)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return mini;
    }
};
class SolutionBrute{
public:
    int minTime(int S1, int S2, int N){
       int max_count = min(S1,S2)*N ;
       for(int i=0 ; i< N ; i++){
        int count = max(S1*i , S2*(N-i)) ;
        if(max_count>count){
                max_count = count ;
        }
       } 
       return max_count ;
    }
};



#define endl "\n"
#define ll long long

int main(){
    //MAKES INPUT OUTPUT FAST
 //   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        cout << "program starts enter s1 s2 n respectively : " ;
        int s1 ,s2 , n ;
        cin >> s1 >> s2 >> n ;
        //Solution ob ;
        SolutionBrute ob ;
        cout << "The min time is : " <<   ob.minTime(s1 , s2 , n) << endl; 
    
return 0;
}