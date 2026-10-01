#include <bits/stdc++.h>
using namespace std;
int ma(int a, int b, int c)
{
    int aa = a, bb = b, cc = c;
    int m = max({a, b, c});
    return m;
}

void s(int a, int b, int c)
{
    int aa = a, bb = b, cc = c;
    int mm = ma(a, b, c);

    if (mm == aa)
    {
        cout << "Alice" << endl;
    }
    else if (mm == bb)
    {
        cout << "Bob" << endl;
    }
    else
    {
        cout << "Charlie" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        s(a, b, c);
    }
    return 0;
}
