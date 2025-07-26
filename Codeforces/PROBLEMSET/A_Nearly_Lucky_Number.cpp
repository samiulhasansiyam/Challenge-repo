#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;

    int luckyCount = 0;

    for (char digit : n)
    {
        if (digit == '4' || digit == '7')
        {
            luckyCount++;
        }
    }

    if (luckyCount == 4 || luckyCount == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
