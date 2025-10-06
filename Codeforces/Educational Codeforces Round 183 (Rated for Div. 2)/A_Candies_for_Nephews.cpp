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
        int s = n % 3;
        if (s == 0)
        {
            cout << s << endl;
        }
        else
        {
            cout << 3 - s << endl;
        }
    }
    return 0;
}
