#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n / 2; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << "#";
        }
        cout << endl;
        if (i % 2 == 0)
        {
            cout << "#";
            for (int k = 1; k < m; k++)
            {
                cout << ".";
            }
        }
        else
        {
            for (int k = 1; k < m; k++)
            {
                cout << ".";
            }
            cout << "#";
        }

        cout << endl;
    }
    for (int j = 1; j <= m; j++)
    {
        cout << "#";
    }
    return 0;
}
