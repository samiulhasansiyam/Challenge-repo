#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        if (a1 > a2)
        {
            swap(a1, a2);
        }
        if (b1 > b2)
        {
            swap(b1, b2);
        }

        bool intersect = false;

        if ((a1 < b1 && b1 < a2) != (a1 < b2 && b2 < a2))
        {
            intersect = true;
        }
        if (intersect == true)
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
