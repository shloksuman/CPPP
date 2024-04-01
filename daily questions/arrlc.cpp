#include<bits/stdc++.h>
using namespace std;

int findMinArrowShots(vector<vector<int>>& points) {
        //sorted the vector points wise
        sort(points.begin(), points.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[0] < b[0];
    });
    cout << "POINTS.SIZE() =  " << points.size() << endl ;

    int i=0, k=1 , arrow = 0, n = points.size();

    while(k < points.size() ){
        cout << "-------------- WHILE  LOOP BEGINS --------------" << endl;
        cout << "i = " << i << " and k = " << k << endl;
        cout << "arrow : " << arrow << endl;
        cout << "points[" << i << "][1] = " << points[i][1] << "\n" ;
        if(points[i][1] >= points[k][0] && points[i][1] <= points[k][1] ){
            cout << "Inside (1) " << endl;
            k++;
            continue;
        }
        else {
            ++arrow;
            k++;
            i++;
            if(k == points.size() &&  points[n-2][1] < points[n-1][0] ){
                arrow = arrow + 1; 
            }
            cout<< "Inside (2) , after execution of (2) , arrow = " << arrow << " and k = " << k << " and i = " << i << endl;
        }
        
    }
   
    return arrow;


}

int main(){

    vector<vector<int>> points = {{10, 16}, {2, 8}, {1, 6}, {7, 12}}; //ans = 2
    vector<vector<int>> points2 = { { 1 , 2 } , { 3 , 4 } , { 5 , 6 } , { 7 , 8 } }; //ans = 4
    vector<vector<int>> points3 = { { 1 , 2 } , { 2 , 3 } , { 3 , 4 } , { 4 , 5 } }; //ans = 2
    //[[1,2],[2,3],[3,4],[4,5]]
    // [[1,2],[3,4],[5,6],[7,8]]
    cout << "FINAL ANSWER " << findMinArrowShots(points) << endl;
   // cout << "FINAL ANSWER " << findMinArrowShots(points2) << endl;
   // cout << "FINAL ANSWER " << findMinArrowShots(points3) << endl;





    return 0;
}