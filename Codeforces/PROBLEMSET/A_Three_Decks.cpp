#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;

        long long sum = a + b + c;
        if (sum % 3 != 0)
        {
            cout << "NO" << endl;
            continue;
        }
        long long x = sum / 3;
        if (a <= x && b <= x && x <= c)
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
