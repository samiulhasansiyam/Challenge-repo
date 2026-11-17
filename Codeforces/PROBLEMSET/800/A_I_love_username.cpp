#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, pmax = 0, pmin = 0, count = 0;
    cin >> n;

    cin >> pmax;
    pmin = pmax;

    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;

        if (i != 0)
        {
            if (pmax == x || pmin == x)
            {
                continue;
            }
            else if (pmax < x)
            {
                count++;
                pmax = x;
            }
            else if (pmin > x)
            {
                count++;
                pmin = x;
            }
        }
    }

    cout << count << endl;
    return 0;
}
