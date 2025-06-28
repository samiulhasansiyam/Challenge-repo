#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long a = 0, b = 1, fib;

    if (n == 1) 
    {
        cout << a;
    } else if (n == 2) 
    {
        cout << b;
    } else 
    {
        for (int i = 3; i <= n; i++) 
        {
            fib = a + b;
            a = b;
            b = fib;
        }
        cout << fib;
    }

    return 0;
}
