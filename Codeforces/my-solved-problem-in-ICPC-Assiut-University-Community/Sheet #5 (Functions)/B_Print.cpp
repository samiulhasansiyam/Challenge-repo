#include <bits/stdc++.h>
using namespace std;

void print_to_n(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i;
        if (i < n)
        {
            cout << " ";
        }
    }
    cout << "\n";
}

int main()
{
    int n;
    cin >> n;

    print_to_n(n);
    return 0;
}
