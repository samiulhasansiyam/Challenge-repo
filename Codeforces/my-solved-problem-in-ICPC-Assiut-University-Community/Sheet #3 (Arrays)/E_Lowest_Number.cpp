#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n;
    cin >> n;
    vector<long long int> a(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    long long int keep = a[0];
    int p = 0; 
    for (int i = 1; i < n; i++) 
    {
        if (a[i] < keep) 
        {
            keep = a[i];
            p = i;
        }
    }
    cout << keep << " " << p + 1 << "\n";
    return 0;
}