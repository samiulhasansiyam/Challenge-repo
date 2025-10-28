#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> a[i];
        }
        bool s = true;
        for (int i = 1; i < 4; i++)
        {
            if (a[i] != a[i - 1])
            {
                s = false;
                break;
            }
        }
        if (s == false)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
