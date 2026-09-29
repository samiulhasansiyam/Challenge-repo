#include <bits/stdc++.h>
using namespace std;

void rain(int n)
{
    int a = n;
    if (a < 3)
    {
        cout << "LIGHT" << endl;
    }
    else if (a >= 3 && a < 7)
    {
        cout << "MODERATE" << endl;
    }
    else
    {
        cout << "HEAVY" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        rain(n);
    }
    return 0;
}
