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

    double sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    double output = sum / n;

    cout << fixed << setprecision(12) << output << endl;
    return 0;
}
