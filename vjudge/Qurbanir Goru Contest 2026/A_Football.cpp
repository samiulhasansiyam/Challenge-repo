#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int zerocount = 0, onecount = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            zerocount++;
            onecount = 0;
        }
        else
        {
            onecount++;
            zerocount = 0;
        }

        if (zerocount >= 7 || onecount >= 7)
        {
            break;
        }
    }

    if (zerocount >= 7 || onecount >= 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
