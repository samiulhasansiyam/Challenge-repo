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
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int cnt1 = 0, cnt2 = 0;

        int x = a[0], y = -1;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == x)
            {
                cnt1++;
            }
            else
            {
                if (y == -1)
                {
                    y = a[i];
                }

                if (a[i] == y)
                {
                    cnt2++;
                }
                else
                {
                    cnt2 = -100000;
                }
            }
        }

        if (cnt2 == -100000 || abs(cnt1 - cnt2) > 1 && cnt2 != 0)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}
