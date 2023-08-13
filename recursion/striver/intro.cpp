#include<bits/stdc++.h>
using namespace std;


void print(){
    cout << 1 << endl;
    print();
} //this function doesn't have BASE CONDTION
// so it runs till it runs out of memory and gives segmentation fault

int cnt=0;

void print2(){
    if(cnt==6){
        return;
    }

    cout << cnt << endl;
    cnt++;

    print2();

}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    //print();
    print2();

return 0;
}