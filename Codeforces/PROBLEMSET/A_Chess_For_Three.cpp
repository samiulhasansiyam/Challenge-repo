#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int winner;
    int a = 1, b = 2, c = 3;
    for (int i = 0; i < n; i++)
    {
        cin >> winner;
        if (winner == c)
        {
            cout << "NO" << endl;
            return 0;
        }
        if (winner == a)
        {
            b = c;
        }
        else
        {
            a = c;
        }
        c = 6 - a - b;
    }
    cout << "YES" << endl;
    return 0;
}
