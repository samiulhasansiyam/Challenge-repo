#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, b = 0, c = 0;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++)
    {
        b += a[i][i];
    }
    for(int i = 0; i < n; i++)
    {
        c += a[i][n - i - 1];
    }
    cout << abs(b - c) << "\n";

    return 0;
}
