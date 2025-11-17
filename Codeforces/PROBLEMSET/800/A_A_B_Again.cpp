#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int f, l;
        f = n / 10;
        l = n % 10;
        cout << f + l << endl;
    }
    return 0;
}
