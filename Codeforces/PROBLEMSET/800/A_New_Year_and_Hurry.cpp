#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, timeToSolve = 0, sT = 0, i, s = 0;
    cin >> n >> k;

    timeToSolve = 240 - k;

    for (i = 1; i <= n; i++)
    {
        s += (5 * i);
        if (s > timeToSolve)
        {
            break;
        }
    }

    cout << i - 1 << endl;
    return 0;
}
