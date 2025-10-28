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
        int counta = 0;
        int countb = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                counta++;
            }
            else if (a[i] % 2 != 0)
            {
                countb++;
            }
        }
        if (counta == n || countb == n)
        {
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
        }
        else
        {
            sort(a.begin(), a.end());
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
