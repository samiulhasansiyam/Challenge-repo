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
        string a;
        cin >> a;
        for (int i = 0; i < n; i += 2)
        {
            if (a[i] == '0' && a[i + 1] == '0')
            {
                cout << "A";
            }
            else if (a[i] == '0' && a[i + 1] == '1')
            {
                cout << "T";
            }
            else if (a[i] == '1' && a[i + 1] == '0')
            {
                cout << "C";
            }
            else if (a[i] == '1' && a[i + 1] == '1')
            {
                cout << "G";
            }
        }
        cout << endl;
    }
    return 0;
}
