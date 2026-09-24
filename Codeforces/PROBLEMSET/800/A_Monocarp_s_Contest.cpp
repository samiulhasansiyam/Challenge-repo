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

        int count0 = count(a.begin(), a.end(), 0);
        if (n <= 2)
        {
            if (a[0] == 1 || a[1] == 1 || a[0] == 1 && a[1] == 1)
            {
                cout << "-1" << endl;
            }
            else
            {
                cout << "0" << endl;
            }
        }
        else
        {
            if (count0 < 2)
            {
                cout << "-1" << endl;
            }
            else if (a[0] == 1 && a[n - 1] == 0 || a[0] == 0 && a[n - 1] == 1)
            {
                cout << "1" << endl;
            }
            else if (a[0] == 1 && a[n - 1] == 1)
            {
                cout << "2" << endl;
            }
            else
            {
                cout << "0" << endl;
            }
        }
    }
    return 0;
}
