#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max = a[0], maxp = 0, min = a[0], minp = 0;
    for (int i = 1; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
            maxp = i;
        }
        if (min >= a[i])
        {
            min = a[i];
            minp = i;
        }
    }
    if (maxp > minp)
    {
        cout << maxp + ((n - 1) - (minp + 1)) << endl;
    }
    else
    {
        cout << maxp + ((n - 1) - (minp)) << endl;
    }
    return 0;
}
