#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int arr[] = {6, 9, 1, 2, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    vector<int> ans(n);

    // for (int x = 1; x <= n; x++) {
    //     int maxGCD = 0;
    //     for (int i = 0; i <= n - x; i++) {
    //         int curGCD = arr[i];
    //         for (int j = i + 1; j < i + x; j++) {
    //             curGCD = gcd(curGCD, arr[j]);
    //         }
    //         maxGCD = max(maxGCD, curGCD);
    //     }
    //     ans[x - 1] = maxGCD;
    // }

    //   vector<vector<int>> dp(n, vector<int>(n));
    // for (int i = 0; i < n; i++) {
    //     dp[i][i] = arr[i];
    //     for (int j = i + 1; j < n; j++) {
    //         dp[i][j] = gcd(dp[i][j - 1], arr[j]);
    //     }
    // }

    // for (int x = 1; x <= n; x++) {
    //     int maxGCD = 0;
    //     for (int i = 0; i <= n - x; i++) {
    //         int j = i + x - 1;
    //         maxGCD = max(maxGCD, dp[i][j]);
    //     }
    //     ans[x - 1] = maxGCD;
    // }
     for (int x = 1; x <= n; x++) {
        int maxGCD = 0;
        for (int i = 0; i <= n - x; i++) {
            int curGCD = arr[i];
            for (int j = i + 1; j < i + x; j++) {
                curGCD = gcd(curGCD, arr[j]);
            }
            maxGCD = max(maxGCD, curGCD);
        }
        ans[x - 1] = maxGCD;
    }

    cout << "Max GCDs for different subarray lengths:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "x = " << i + 1 << ": " << ans[i] << endl;
    }

    return 0;
}
