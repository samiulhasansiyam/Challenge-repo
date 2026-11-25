#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        int c, d;

        cin >> a >> b;
        cin >> c >> d;

        if (a < c && a < b && d > c && d > b)
        {
            cout << "YES" << endl;
        }
        else if (b < a && b < d && c > a && c > d)
        {
            cout << "YES" << endl;
        }
        else if (c < a && c < d && b > a && b > d)
        {
            cout << "YES" << endl;
        }
        else if (d < c && d < b && a > c && a > b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
