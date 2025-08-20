#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        bool c = true;
        for (int j = 1; j <= n; j++)
        {
            if (i == a[i])
            {
                c = false;
                break;
            }
        }
        if (c == true)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
