#include <iostream>
using namespace std;

int exponent(int x, int n)
{
    int result = 1;
    while (n > 0)
    {
        // if(n%2==1)   NOT PREFERRED BECAUSE MODULO IS A TIME CONSUMING FUNCTION
        if (n & 1 == 1)
        {
            result = result * x;
        }

        x = x * x;
        n = n >> 1;
    }
    return result;
}

int main()
{
    int x, n, res;
    cout << "Enter x and n to get x^n : ";
    cin >> x >> n;
    res = exponent(x, n);
    cout << "The result is : " << res << endl;

    return 0;
}