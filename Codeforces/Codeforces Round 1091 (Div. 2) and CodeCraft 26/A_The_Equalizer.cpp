#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }

        if ((sum % 2) != 0 || (n * k) % 2 == 0) //I was missed (sum % 2) != 0 condition Now It solved after seen solve class
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
