#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (b > a)
        {
            cout << (b - a) << endl;
        }
        else
        {
            if (a % b == 0)
            {
                cout << (a % b) << endl;
            }
            else
            {
                int s = a % b;
                cout << (b - s) << endl;
            }
        }
    }
    return 0;
}
