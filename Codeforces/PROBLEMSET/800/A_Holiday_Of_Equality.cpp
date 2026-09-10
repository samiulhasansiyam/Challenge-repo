#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }

    auto m = max_element(a.begin(), a.end());
    int sum = accumulate(a.begin(), a.end(), 0);

    cout << (*m * n) - sum << endl;

    return 0;
}
