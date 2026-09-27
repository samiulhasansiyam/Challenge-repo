#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, x, z;
    cin >> a >> b >> x >> z;
    int m = (a * 2) + b;
    int r = (x * 2) + z;

    if (m > r)
    {
        cout << "Messi" << endl;
    }
    else if (m == r)
    {
        cout << "Equal" << endl;
    }
    else
    {
        cout << "Ronaldo" << endl;
    }
    return 0;
}
