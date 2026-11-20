#include <bits/stdc++.h>
using namespace std;

int main()
{
    int g, c, l;
    cin >> g >> c >> l;

    int mx = max({g, c, l});
    int mn = min({g, c, l});

    if ((mx - mn) > 9)
    {
        cout << "check again" << endl;
    }
    else
    {
        cout << "final " << ((g + c + l) - (mx + mn)) << endl;
    }

    return 0;
}
