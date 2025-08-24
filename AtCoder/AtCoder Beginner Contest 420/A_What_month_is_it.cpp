#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    int sum = x + y;
    if (sum > 12)
    {
        cout << (sum - 12) << endl;
    }
    else
    {
        cout << sum << endl;
    }
    return 0;
}
