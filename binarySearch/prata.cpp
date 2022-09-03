#include <bits/stdc++.h>
#define int long long int
using namespace std;

#define endl "\n"
#define ll long long

int mintime(int p, int l, int arr[])
{
    int i = 1, count = 0, time = 0;
    int rank = 1; // checking the program for one rank only
    while (count < p)
    {
        cout << "count : " << count << " p : " << p << endl;
        time = time + i * rank;
        i++;
        count++;
    }

    return time;
}

bool solve(int *arr, int n, int p, int mid)
{
    int time = 0;
    int paratha = 0; // initially there are 0 paratha prepared
    for (int i = 0; i < n; i++)
    {
        time = arr[i];
        int j = 2;
        while (time <= mid)
        {
            paratha++;
            time = time + (arr[i] * j);
            j++;
        }
        if (paratha >= p)
        {
            return true;
        }
    }
    return false;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int p; // no of prata required
        cin >> p;
        int l; // no of cooks
        cin >> l;
        int arr[l];
        for (int i = 0; i < l; i++)
        {
            cin >> arr[l]; // entering the rank of each cook
        }
        int lb = 0;
        int ub = 1e8;
        int ans = 0;
        while (lb <= ub)
        {
            int mid = (lb + ub) / 2;
            if (solve(arr, l, p, mid))
            {
                ans = mid;
                ub = mid - 1;
            }
            else
            {
                lb = mid + 1;
            }
        }
        // cout << mintime( p , l , arr ) << endl ;
        cout << ans << endl;
    }
    return 0;
}

// SAME QUESTION AT GFG
// MINIMUM TIME TO FULFILL ALL THE ORDERS

// HERE'S THE GFG SOLUTION
/*
 bool solve(vector<int>&arr , int n , int p , int mid){
    int time = 0 ;
    int paratha = 0 ; //initially there are 0 paratha prepared
    for(int i = 0 ; i < n ; i++){
        time = arr[i] ;
        int j = 2 ;
        while(time<=mid){
            paratha++;
            time = time + (arr[i]*j) ;
            j++ ;
        }
        if(paratha>=p){
            return true ;
        }
    }
    return false;
}
    int findMinTime(int N, vector<int>&A, int L){
        //write your code here
        //  int N ; //no of prata required

       // int L ; // no of cooks

        int lb= 0 ;
        int ub = 1e8 ;
        int ans = 0 ;
        while(lb<=ub){
            int mid= (lb+ub)/2 ;
            if(solve( A , L , N , mid )){
                ans = mid ;
                ub= mid-1 ;
            }
            else {
                lb = mid+1;
            }
        }
        //cout << mintime( p , l , arr ) << endl ;
        return ans ;

    }

    EXPLANATION:

    Editorial
Brute Force
Intuition
The idea is to linearly search , the answer will be minimum day chefs can make N donuts

Implementation
We will iterate from 1 to 10000000 then check for every ith day if chefs can make all of the N donuts
  For every ith day ,we have to count the number of donuts a chef can make for every chef
Sum up all the donuts made by all the chef and check whether it is greater or equal to N
We can easily calculate that the answer will lie between 10000000 for the given constraints
Complexity
Time complexity : The worst case complexity will be O(L*N2 )

Space complexity :  No extra space is needed , space complexity will be O(1)

class Solution{
    public:
    bool canMake(int x , int N , vector<int>&a , int L){
      // calculates the number of donuts all chefs can make in x days
        int donuts = 0;
        for(int i = 0 ; i < L ; i++){
            int temp = x;
            int need = a[i];
            while(temp > 0){
                temp -= need;
                if(temp >= 0){
                    donuts++;
                }
                need += a[i];
            }
        }
        return donuts>=N;
    }

    int findMinTime(int N, vector<int>&A, int L){
        int ans ;
        for(int i = 0 ; i <= 1e7 ; i++){
          // check whether all chefs can make N donuts in i days
            if(canMake(i,N,A,L)){
              // if it is true we found our answer
                ans = i;
                break;
            }
        }
        return ans;
    }
};


Expected approach
Intuition
We can do binary search on number of days the chefs can make all the donuts

Implementation
As the answers lies between 1 and 10000000 so we will take 2 boundary , left boundary is 1 and right boundary is 10000000
Now we will check the midpoint of the current search space . mid = (left+right)/2
Now let say X is the number of donuts all chefs can make in mid days .
If X >= N then we know mid may be the answer and we will shrink the search space by assigning right boundary to mid-1 else X<N then we can state that the answer will be greater than mid , so we can shrink the search space by assigning the left boundary to mid+1
Complexity
Time complexity :  Let suppose we have only one chef and N donuts to make then answer will grow in square times . So the time complexity will be O(L*logN2) ≅ O(L*logN).

Space complexity : No extra space is needed , space complexity will be O(1)
*/