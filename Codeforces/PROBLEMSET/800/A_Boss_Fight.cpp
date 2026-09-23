#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k = 0, sum = 0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int t = 0;
        sort(a.begin(), a.end());
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
            {
                t = a[i];
                k = i;
                break;
            }
        }
        int c = count(a.begin(), a.end(), t);

        if (c <= (n - c))
        {
            cout << accumulate(a.begin(), a.end(), 0) << endl;
        }
        else
        {
            for (int j = 0; j < k; j++)
            {
                sum += a[j];
            }
            cout << sum + (((n - c) + 2) * t) << endl;
        }
    }
    return 0;
}
// not solved yeat