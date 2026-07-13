#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> a;
        int s = 10;
        int n;
        cin >> n;
        while (n > 0)
        {
            int k = n % s;
            if (k > 0)
            {
                a.push_back(k);
            }
            n -= k;
            s *= 10;
        }
        cout << a.size() << endl;
        reverse(a.begin(),a.end());
        for (auto u : a)
        {
            cout << u << " ";
        }
        cout << endl;
    }
    return 0;
}
