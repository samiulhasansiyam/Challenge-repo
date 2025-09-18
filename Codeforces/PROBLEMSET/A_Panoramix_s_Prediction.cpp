#include <bits/stdc++.h>
using namespace std;
bool isPrime(int x)
{
    if (x < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int nextPrime = -1;
    for (int i = n + 1;; i++)
    {
        if (isPrime(i))
        {
            nextPrime = i;
            break;
        }
    }
    if (nextPrime == m)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
