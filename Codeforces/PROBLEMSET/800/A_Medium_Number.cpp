#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a < b && b > c)
        {
            if (a < c)
            {
                cout << c << endl;
            }
            else
            {
                cout << a << endl;
            }
        }
        else if (a < c && c > b)
        {
            if (a < b)
            {
                cout << b << endl;
            }
            else
            {
                cout << a << endl;
            }
        }
        else if (b < a && a > c)
        {
            if (c < b)
            {
                cout << b << endl;
            }
            else
            {
                cout << c << endl;
            }
        }
    }
    return 0;
}
