#include<iostream>
using namespace std;
int main()
{
    //nth term sum
    int sum=0;
    int n;
    cout<<"Enter the nth term : ";
    cin>>n;
    cout<<"\nThe sum of " ;
    for(int i=1;i<=n;i++)
    {
        if(i==n)
            { cout << n ;
            sum= sum + n ; break ;} 
        cout<< i << "+" ;
        sum=sum+i;
    }
    cout<<" = " << sum ;
    cout<<"\nThe sum of the numbers till " << n <<" is : " << sum ;
    return 0;
} 