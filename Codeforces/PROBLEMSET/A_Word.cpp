#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int uper = 0, lower = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            lower += 1;
        }
        else if (a[i] >= 'A' && a[i] <= 'Z')
        {
            uper += 1;
        }
    }
    if (lower >= uper)
    {
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] >= 'A' && a[i] <= 'Z')
            {
                char l = tolower(a[i]);
                cout << l;
            }
            else
            {
                cout << a[i];
            }
        }
    }
    else
    {
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] >= 'a' && a[i] <= 'z')
            {
                char l = toupper(a[i]);
                cout << l;
            }
            else
            {
                cout << a[i];
            }
        }
    }

    return 0;
}
