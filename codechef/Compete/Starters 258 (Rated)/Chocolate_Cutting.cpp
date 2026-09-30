#include <bits/stdc++.h>
using namespace std;
void cho(int a, int b)
{
    int n = a, m = b;
    if (b % 2 == 0 || a % 2 == 0 || b % 2 == 0 && a % 2 == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        cho(n, m);
    }
    return 0;
}
