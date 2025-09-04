#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x;
        cin >> x;
        long long count = 0;
        while (x > 3)
        {
            x /= 4;
            count++;
        }
        cout << (long long)pow(2, count) << endl;
    }
    return 0;
}
