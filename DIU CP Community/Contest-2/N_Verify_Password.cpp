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
        string s;
        cin >> s;
        bool isIt = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] > s[i + 1])
            {
                isIt = false;
                break;
            }
        }
        if (isIt)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
