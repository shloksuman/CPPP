#include<bits/stdc++.h>
using namespace std;

int main() {
    // Define the 2D vector
    vector<vector<int>> points2 = {{10, 16}, {2, 8}, {1, 6}, {7, 12}};

    for(int i = 0 ; i< points2.size() ; i++){
        //for(int j = 0 ; j<2 ; j++){
        for(int j = 0 ; j<points2[0].size() ; j++){
            cout << "points2["<<i<<"]["<<j<<"]= ";
            cout << points2[i][j] << endl;
        }
    }

    // Sorting based on the first element of each sub-vector
    sort(points2.begin(), points2.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[0] < b[0];
    });

    // Print the sorted vector
    cout << "Sorted vector:" << endl;
    for (const auto& point : points2) {
        cout << "[" << point[0] << ", " << point[1] << "]" << endl;
    }

    return 0;
}
