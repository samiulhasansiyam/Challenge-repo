#include <bits/stdc++.h>
using namespace std;

void sum(auto *a, auto *b)
{
    int x = *a, y = *b;
    cout << x + y << endl;
}

void sub(auto *a, auto *b)
{
    int x = *a, y = *b;
    if (y < x)
    {
        cout << x - y << endl;
    }
    else
    {
        cout << y - x << endl;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;

    sum(&a, &b);
    sub(&a, &b);

    return 0;
}
