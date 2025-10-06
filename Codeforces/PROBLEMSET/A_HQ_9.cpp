#include <bits/stdc++.h>
using namespace std;
int main()
{
    string p;
    cin >> p;
    bool s = false;
    for (int i = 0; i < p.size(); i++)
    {
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9')
        {
            s = true;
            break;
        }
    }
    if (s == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
