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

    int evenCount = 0, oddCount = 0, evenIndex = 0, oddIndex = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            evenCount++;
            evenIndex = i;
        }
        else
        {
            oddCount++;
            oddIndex = i;
        }
    }
    if (oddCount > evenCount)
    {
        cout << evenIndex + 1 << endl;
    }
    else
    {
        cout << oddIndex + 1 << endl;
    }
}