#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k = 0, count = 0;

        cin >> n >> m;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;

            k += s.size();

            if (k <= m)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
