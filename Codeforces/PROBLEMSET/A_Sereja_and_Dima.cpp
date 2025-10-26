#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int s = 0, d = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            if (v[0] > v[v.size() - 1])
            {
                d += v[0];
                reverse(v.begin(), v.end());
                v.pop_back();
            }
            else
            {
                d += v[v.size() - 1];
                v.pop_back();
            }
        }
        else
        {
            if (v[0] > v[v.size() - 1])
            {
                s += v[0];
                reverse(v.begin(), v.end());
                v.pop_back();
            }
            else
            {
                s += v[v.size() - 1];
                v.pop_back();
            }
        }
    }
    cout << s << " " << d << endl;
    return 0;
}
