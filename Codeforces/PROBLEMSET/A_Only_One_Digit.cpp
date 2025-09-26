#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin >> x;
        char ans = '9';
        for (char c : x)
        {
            if (c < ans)
            {
                ans = c;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
