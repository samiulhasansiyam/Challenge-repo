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

        int a[101] = {0};

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[abs(x)]++;
        }

        int ans = 0;

        for (int i = 0; i <= 100; i++)
        {
            if (i == 0 && a[i] > 0)
            {
                ans++;
            }
            else if (a[i] > 0)
            {
                ans += min(a[i], 2);
            }
        }

        cout << ans << endl;
    }

    return 0;
}
