#include<bits/stdc++.h>
using namespace std;

int main(){

    cout << "Its working!!!" << endl;
    // Define the 2D vector
    vector<vector<int>> points = {{1, 2}, {2, 3}, {3, 4}, {4, 6}};

    for(int i = 0 ; i< points.size() ; i++){
        //for(int j = 0 ; j<2 ; j++){
        for(int j = 0 ; j<points[0].size() ; j++){
            cout << "points["<<i<<"]["<<j<<"]= ";
            cout << points[i][j] << endl;
        }
    }

    // Check if the vector has at least two elements
    if (points.size() >= 2) {
        // Erase the first two elements
        points.erase(points.begin(), points.begin() + 2);

        // Print the modified vector
        cout << "Modified vector:" << endl;
        for (const auto& point : points) {
            cout << "[" << point[0] << ", " << point[1] << "]" << endl;
        }
    } else {
        cout << "Vector does not have enough elements to erase." << endl;
    }

    return 0;
}