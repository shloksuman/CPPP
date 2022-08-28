#include<iostream>
using namespace std;
int main()
{
    //inverted star pattern using for loop part 3
    //taking input for number of rows
    int row;
    cout<<"Enter the number of rows of stars to be printed : " ;
    cin>>row;
    for(int i=1;i<=row ;i++)
    {
        for(int j=row;j>=i;j--)
        {
        cout<<"*" ;
        }
        cout<<"\n";
    }
    return 0;
}