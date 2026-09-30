#include <bits/stdc++.h>
using namespace std;

void bu(int b, int h, int c)
{
    int B = b, H = h, C = c;
    if ((B / 2) < (H + C))
    {
        cout << B / 2 << endl;
    }
    else
    {
        cout << H + C << endl;
    }
}

int main()
{
    int b, h, c;
    cin >> b >> h >> c;

    bu(b, h, c);
    return 0;
}
