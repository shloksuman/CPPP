#include <iostream>
#include <vector>
using namespace std;

int soe(int n)
{
    int count = 0;
    vector<bool> prime(n + 1, true); // vector with ASSUMING ALL ELEMENTS TO BE PRIME
    prime[0] = prime[1] = false;     // 0 and 1 ko non prime set kro

    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            count++; // prime no milne pe COUNTER value increment kro
        }
        for (int j = 2 * i; j < n; j = j + i)
        {
            prime[j] = false; // phir USKE TABLE MEIN JITNE NO HAIN UNKO FALSE YAA NON PRIME SET KRO
        }
    }
    return count;
}

int main()
{
    cout << "PROGRAM TO KNOW THAT HOW MANY PRIMES EXIST BETWEEN m TO n \nEnter the value of m and n respectively(m<n) : ";
    int m, n;
    cin >> m;
    cin >> n;
    int count = soe(n) - soe(m);
    cout << "The number of primes between " << m << " and " << n << " is : " << count << endl;

    return 0;
}