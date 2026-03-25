#include <bits/stdc++.h>
using namespace std;

void wM(int k)
{
    if (k > 2 && k % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int k;
    cin >> k;
    wM(k);
    return 0;
}
