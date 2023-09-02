// #include <bits/stdc++.h> // header file includes every Standard library
// using namespace std;

// int countIntegralCoordinates(int x1, int y1, int r1, int x2, int y2, int r2) {
//     int count = 0;

//     // Calculate the squared distance between the circle centers
//     int dx = x2 - x1;
//     int dy = y2 - y1;
//     int distanceSquared = dx * dx + dy * dy;

//     // Calculate the sum and difference of the radii
//     int sumRadii = r1 + r2;
//     int diffRadii = abs(r1 - r2);

//     // Check for circle containment and overlap
//     if (distanceSquared < sumRadii * sumRadii) {
//         int minRadius = min(r1, r2);
//         int maxRadius = max(r1, r2);
        
//         if (distanceSquared < diffRadii * diffRadii) {
//             count = 0;  // Circles are completely separate
//         } else if (distanceSquared == diffRadii * diffRadii) {
//             count = 1;  // Circles touch at exactly one point
//         } else {
//             int minX = max(x1 - maxRadius, x2 - maxRadius);
//             int maxX = min(x1 + maxRadius, x2 + maxRadius);
//             int minY = max(y1 - maxRadius, y2 - maxRadius);
//             int maxY = min(y1 + maxRadius, y2 + maxRadius);
            
//             for (int x = minX; x <= maxX; ++x) {
//                 for (int y = minY; y <= maxY; ++y) {
//                     int dist1 = (x - x1) * (x - x1) + (y - y1) * (y - y1);
//                     int dist2 = (x - x2) * (x - x2) + (y - y2) * (y - y2);
                    
//                     if (dist1 >= r1 * r1 && dist2 >= r2 * r2) {
//                         ++count;
//                     }
//                 }
//             }
//         }
//     }}


// int main() {
// 	// Your code here

//     int x1, y1, r1, x2, y2, r2;
    
//    // cout << "Enter the coordinates (x, y) and radius (r) of the first circle: "
//     cin >> x1 >> y1 >> r1;
    
//    // cout << "Enter the coordinates (x, y) and radius (r) of the second circle: "
//     cin >> x2 >> y2 >> r2;
    
//     int integralCoordinates = countIntegralCoordinates(x1, y1, r1, x2, y2, r2);
//     cout <<  integralCoordinates ;

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <map>

// using namespace std;

// int gcdd(int a, int b) {
//     while (b != 0) {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }

// int countBalancedSubstrings(int n, int x, int y, const string &s) {
//     map<pair<int, int>, int> ratioCount; // Map to store ratio counts
//     int count0 = 0, count1 = 0;
//     long long balancedSubstrCount = 0;

//     ratioCount[{0, 0}] = 1; // Base case

//     for (int i = 0; i < n; ++i) {
//         if (s[i] == '0') {
//             count0++;
//         } else {
//             count1++;
//         }

//         int gcd = gcdd(count0, count1); // Calculate the greatest common divisor

//         // Calculate the reduced ratio based on gcd
//         int reducedCount0 = count0 / gcd;
//         int reducedCount1 = count1 / gcd;

//         // Calculate the target ratio
//         int targetCount0 = reducedCount0 * y;
//         int targetCount1 = reducedCount1 * x;

//         // Update the count of balanced substrings
//         balancedSubstrCount += ratioCount[{targetCount0, targetCount1}];

//         // Update the ratio count map
//         ratioCount[{reducedCount0, reducedCount1}]++;
//     }

//     return balancedSubstrCount;
// }

// int main() {
//     int n, x, y;
//     string s;

//     cin >> n;
//     cin >> x >> y;
//     cin >> s;

//     int balancedSubstrCount = countBalancedSubstrings(n, x, y, s);
//     cout << balancedSubstrCount << endl;

//     return 0;
// }


#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int gcdd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}





int main() {
    int N, x, y;
    cin >> N >> x >> y;

    string s;
    cin >> s;

    map<pair<int, int>, int> prefix_ratios;
    prefix_ratios[{0, 0}] = 1;

    int zeros = 0, ones = 0;
    long long count = 0;

    for (char c : s) {
        if (c == '0') zeros++;
        else ones++;

        int gcd = gcdd(x, y);
        int ratio_x = x / gcd;
        int ratio_y = y / gcd;

        int required_zeros = ratio_x * ones - ratio_y * zeros;
        count += prefix_ratios[{required_zeros, ones - zeros}];

        prefix_ratios[{zeros - ones, zeros}]++;
    }

    cout << count << endl;

    return 0;
}