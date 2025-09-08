#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count = 1;
    int s = a[0];
    for (int i = 1; i < n; i++)
    {
        if (s != a[i])
        {
            count++;
            s = a[i];
        }
    }
    cout << count << endl;
    return 0;
}
