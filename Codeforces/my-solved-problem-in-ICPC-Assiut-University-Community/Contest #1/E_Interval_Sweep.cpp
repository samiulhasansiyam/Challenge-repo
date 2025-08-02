#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int n = a + b;

    if (n == 0)
    {
        cout << "NO" << endl;
    }
    else if (a == n / 2 || a == (n + 1) / 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
