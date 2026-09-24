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
        cout << (a + b + c) - (mx + mi) << endl;
    }
    return 0;
}
