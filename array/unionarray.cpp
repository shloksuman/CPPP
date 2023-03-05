#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &a , vector<int> &b ){
    set<int> st;
    for(int i = 0 ; i < a.size() ; i++){
        st.insert(a[i]);
    }
    for(int i = 0 ; i < b.size() ; i++){
        st.insert(b[i]);
    }
    vector<int> ans;
    for(auto it : st){
        ans.push_back(it);
    }
    return ans;
}

vector<int> unionarray(vector<int> &a , vector<int> &b){
    int n1 = a.size();
    int n2 = b.size();
    int i = 0 , j = 0 ;
    vector<int> ans;

    while(i< n1 && j<n2){
        if(a[i]<=b[j]){
            if(ans.size()==0 || ans.back()!=a[i]){
                ans.push_back(a[i]);
            }
            i++; //increasing pointer whether value is new or duplicate
        }
        else {
            if(ans.size()==0 || ans.back()!=b[j]){
                ans.push_back(b[j]);
            }
            j++;
        }
    }

    while(i<n1){
        if(ans.size()==0 || ans.back()!=a[i]){
            ans.push_back(a[i]);
        }
        i++;
    }
    while(j<n2){
        if(ans.size()==0 || ans.back()!=b[j]){
            ans.push_back(b[j]);
        }
        j++;
    }

    return ans;
}

int main(){

    vector<int> a = { 1 , 2 , 3 ,3 ,7 ,8};
    vector<int> b = { 4 , 5 , 5 ,6 ,7 ,8};

    cout << "vector a : " << endl;
    for(auto it : a){
        cout << it << " " ;
    }
    cout << "\nvector b : " << endl;
    for(auto it : b){
        cout << it << " " ;
    }
    cout << "\nthe union of a and b is : " ;
    for(auto it: solve(a,b)){
        cout << it << " ";
    }

    cout << "\nThe answer using optimal approach : " ;
    for(auto it: unionarray(a,b)){
        cout << it << " ";
    }



return 0;
}