#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(long long int n)
{
    if (n <= 0)
    {
        return false;
    }
    return (n & (n - 1)) == 0;
}

int main()
{
    long long int n;
    cin >> n;

    if (isPowerOfTwo(n))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
