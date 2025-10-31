#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> an(n), am(m);
        for (int i = 0; i < n; i++)
        {
            cin >> an[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> am[i];
        }
        sort(an.begin(), an.end());
        sort(am.begin(), am.end());
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (an[i] > am[i])
            {
                count++;
            }
        }
        if (count == n)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
