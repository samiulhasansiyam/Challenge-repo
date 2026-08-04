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

        int mx = max({a, b, c});
        int mi = min({a, b, c});
        int sm = (a + b + c) - (mx + mi);

        int f = mx - sm;
        int s = sm - mi;
        cout << min({f, s}) << endl;
    }
    return 0;
}
