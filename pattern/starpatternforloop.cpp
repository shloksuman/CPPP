#include<iostream>
using namespace std;
int main()
{
    //star pattern using for loop
    for(int i=1;i<6 ;i++)
    {
        for(int j=0;j<i;j++)
        {
        cout<<"*" ;
        }
        cout<<"\n";
    }
    return 0;
}