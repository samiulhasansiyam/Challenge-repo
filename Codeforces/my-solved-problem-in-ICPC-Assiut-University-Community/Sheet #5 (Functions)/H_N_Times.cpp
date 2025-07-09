#include <bits/stdc++.h>
using namespace std;
void nTime(int n, char a)
{
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char a;
        cin >> n >> a;

        nTime(n, a);
        cout << endl;
    }
    return 0;
}