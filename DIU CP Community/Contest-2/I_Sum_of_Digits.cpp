#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string d;
        cin >> d;
        int sum = 0;
        for (int i = 0; i < d.length(); i++)
        {
            sum += d[i] - '0';
        }
        cout << sum << endl;
    }
    return 0;
}
