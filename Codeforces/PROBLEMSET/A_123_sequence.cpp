#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int cnt[4] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }
    int mx = max({cnt[1], cnt[2], cnt[3]});
    cout << n - mx << endl;
}
