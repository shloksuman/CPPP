#include <iostream>

using namespace std;

int main() {
    int k;
    cin >> k;

    int a[k];
    for (int i = 0; i < k; i++) {
        cin >> a[i];
    }

    int min_n = 2;
    int max_n = 2;
    for (int i = 0; i < k; i++) {
        if (a[i] < 2) { // if a[i] is less than 2, the game is impossible
            cout << -1 << endl;
            return 0;
        }
        min_n = (min_n + a[i] - 1) / a[i] * a[i]; // find the smallest possible value of N
        max_n = max_n / a[i] * a[i] + a[i] - 1; // find the largest possible value of N
    }

    cout << min_n << " " << max_n << endl;
    return 0;
}


write a c++ program for the following problem statement : "There 
N jars, initially all in white color. Sam can color each jar with Yellow, Blue or Green color. A jar once colored cannot be colored again. Tam the parrot will judge Sam's coloring of jars and give him a score. For every:

Yellow jar he receives Y points.
Blue jar he receives B points.
Green jar he receives B+Y points.
White jar(on which Sam applied no color) he receives 0 points.
What is the number of ways to color the jars such that Sam receives exactly P
 points? Two ways are considered to be different if there exists at least one jar whose color is not the same in the two ways" . The first line contains four space-separated integers, N,Y,B and P . Print a single integer, the number of ways to color the jars such that Sam receives exactly P points.


write a c++ program for : "Given a Tree containing N nodes and N−1 edges. Find the minimum number of nodes that we have to remove to make the diameter of the tree at most K
.The diameter of a tree is the maximum among the distances between any two vertices. The first line of the input file contains two integers N and K. Next N−1 lines contain two integers in each line,where the ith line connects vertex ai to vertex bi."