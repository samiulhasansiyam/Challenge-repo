#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m + 1, 0);
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) 
    {
        if (a[i] <= m) 
        {
            b[a[i]]++;
        }
    }
    for (int i = 1; i <= m; i++) 
    {
        cout << b[i] << "\n";
    }
    return 0;
}
