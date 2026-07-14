#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    vector<int> a;
    a.push_back((k * l) / nl);
    a.push_back(c * d);
    a.push_back(p / np);
    auto m = min_element(a.begin(), a.end());
    cout << (*m / n) << endl;
    return 0;
}
