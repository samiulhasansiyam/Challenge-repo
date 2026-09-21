#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a1, a2, a3;
        cin >> a1 >> a2 >> a3;

        int m = min({a1, a2, a3});

        cout << n - m << endl;
    }
    return 0;
}
