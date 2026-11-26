
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
        set<int> s;

        int zero = 0;
        int same = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (a[i] == 0)
            {
                zero++;
            }

            if (s.count(a[i]))
            {
                same = 1;
            }

            s.insert(a[i]);
        }

        if (zero > 0)
        {
            cout << n - zero << endl;
        }
        else if (same)
        {
            cout << n << endl;
        }
        else
        {
            cout << n + 1 << endl;
        }
    }

    return 0;
}
