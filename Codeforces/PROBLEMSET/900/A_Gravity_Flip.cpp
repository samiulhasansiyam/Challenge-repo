#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        a.push_back(v);
    }

    sort(a.begin(), a.end());

    for (auto u : a)
        cout << u << " ";

    return 0;
}
