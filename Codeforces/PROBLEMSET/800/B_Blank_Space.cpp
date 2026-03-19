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

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int count = 0, maxcount = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                count++;
            }
            else
            {
                maxcount = max(maxcount, count);
                count = 0;
            }
        }

        maxcount = max(maxcount, count);

        cout << maxcount << endl;
    }
    return 0;
}