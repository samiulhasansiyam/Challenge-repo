#include <bits/stdc++.h>
using namespace std;

int main()
{
    int gfreq[26] = {0}, mixfreq[26] = {0};
    string guest, host, mix;

    cin >> guest >> host >> mix;

    for (int i = 0; i < guest.size(); i++)
    {
        gfreq[guest[i] - 'A']++;
    }

    for (int i = 0; i < host.size(); i++)
    {
        gfreq[host[i] - 'A']++;
    }

    for (int i = 0; i < mix.size(); i++)
    {
        mixfreq[mix[i] - 'A']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (gfreq[i] != mixfreq[i])
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}
