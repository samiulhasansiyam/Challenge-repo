#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a1, a2, b1, b2;
        cin >> a1 >> b1;
        cin >> a2 >> b2;
        if (a1 == b2 && a1 == (a2 + b1))
        {
            cout << "Yes" << endl;
        }
        else if (a2 == b1 && a2 == (a1 + b2))
        {
            cout << "Yes" << endl;
        }

        else if (a2 == a1 && (b1<a2 || b2<a2))
        {
            if (a2 == (b1 + b2))
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else if (b2 == b1 && (a1<b2 || a2<b2))
        {
            if (b2 == (a1 + a2))
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
