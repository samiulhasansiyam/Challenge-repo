#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, count = 0;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x + k <= 5)
        {
            count++;
        }
    }
    cout << count / 3 << endl;

    return 0;
}
