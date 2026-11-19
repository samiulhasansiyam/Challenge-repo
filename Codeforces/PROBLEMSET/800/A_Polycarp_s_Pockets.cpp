#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> f(100, 0);
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        f[a[i] - 1]++;
    }

    auto l = max_element(f.begin(), f.end());

    cout << *l << endl;
    return 0;
}
