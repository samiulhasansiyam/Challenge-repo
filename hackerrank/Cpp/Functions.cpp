#include <bits/stdc++.h>
using namespace std;

int greatest(int a, int b, int c, int d)
{
    int x = 0, y = 0, z = 0;

    if (a > b)
    {
        x = a;
    }
    else
    {
        x = b;
    }

    if (c > d)
    {
        y = c;
    }
    else
    {
        y = d;
    }

    if (x > y)
    {
        z = x;
    }
    else
    {
        z = y;
    }
    return z;
}

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << greatest(a, b, c, d) << endl;
    return 0;
}
