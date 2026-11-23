#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        bool flag = true;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                if ((a[i] - a[i + 1]) == 5 || (a[i] - a[i + 1] == 7))
                {
                    flag = true;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            else
            {
                if ((a[i + 1] - a[i]) == 5 || (a[i + 1] - a[i]) == 7)
                {
                    flag = true;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
        }

        if (flag == true)
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
