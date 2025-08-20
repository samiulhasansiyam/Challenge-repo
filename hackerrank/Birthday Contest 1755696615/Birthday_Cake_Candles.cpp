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

    int max_val = *std::max_element(a, a + n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (max_val == a[i])
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
