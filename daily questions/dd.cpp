#include <bits/stdc++.h>
using namespace std;

int minSetSize(vector<int> &arr)
{
    int n = arr.size();
    //  cout << " n = " << n << endl ;
    sort(arr.begin(), arr.end());
    // for(int i = 0 ; i< n ; i++){
    //     cout << arr2[i] << endl ;
    // }
    // cout  << "vector arr2 is : " << ++arr2[0] << endl ;

    vector<int> countarr = {1}; // this array contains the count of each number
    int i = 0, j = 1, count = 0;
    while (j < n)
    {
        // cout << "i = " << i << " j = " << j << " count = " << count << endl;
        if (arr[i] == arr[j])
        {
            // countarr[count] ;
            countarr[count]++;
            ++j;
        }
        else
        {
            countarr[count + 1] = 0;
            ++count;
            i = j;
            // ++j ;
        }
    }

    sort(countarr.begin(), countarr.end());
    int c = countarr.size();
    int x = n / 2;
    int flag = 1;
    int ii = 1;
    int sum = 0;
    while (flag)
    {
        sum = sum + countarr[c - ii];
        if (sum >= x)
        {
            flag = 0;
            return ii;
        }
        else
        {
            ii++;
        }
    }
    return 1;
}

int main()
{
    vector<int> v = {3, 3, 3, 3, 5, 5, 5, 2, 2, 7};
    // int size ;
    // cin >> size ;
    // for(int i= 0 ; i<size ; i++){
    //     cin >> v[i] ;
    // }
    cout << minSetSize(v) << endl;
    return 0;
}

int minSetSize(vector<int> &arr)
{
    vector<int> v;
    sort(arr.begin(), arr.end());
    int c = 1;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] == arr[i - 1])
        {
            c++;
        }
        else
        {
            v.push_back(c);
            c = 1;
        }
    }
    v.push_back(c);
    sort(v.begin(), v.end());
    int n = arr.size() / 2, ans = 0;
    for (int i = v.size() - 1; n > 0 && i >= 0; i--)
    {
        ans++;
        n -= v[i];
    }
    return ans;
}