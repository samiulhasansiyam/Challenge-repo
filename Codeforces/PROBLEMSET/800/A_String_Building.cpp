#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        bool possible = true;

        int cnt = 1;

        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == s[i - 1])
            {
                cnt++;
            }
            else
            {
                if (cnt == 1)
                {
                    possible = false;
                    break;
                }

                cnt = 1;
            }
        }

        if (cnt == 1)
        {
            possible = false;
        }

        if (possible==true)
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
