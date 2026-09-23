#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, count = 0, i;
        cin >> n >> k;
        for (i = 1;; i++)
        {
            if (i % k != 0)
            {
                count++;
            }
            if (count == n)
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
