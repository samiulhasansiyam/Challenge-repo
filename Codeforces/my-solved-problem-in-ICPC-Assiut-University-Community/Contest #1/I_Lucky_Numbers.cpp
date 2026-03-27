#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    int a = x / 10;
    int b = x % 10;

    if ((b != 0 && a % b == 0) || (a != 0 && b % a == 0))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
