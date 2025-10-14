#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0, temp = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    a.insert(a.end(), a.begin(), a.end());

    for (int i = 0; i < a.size(); i++)
    {

        if (a[i] == 0)
        {
            if (temp < count)
            {
                temp = count;
            }
            count = 0;
        }
        else
        {
            count++;
        }
    }
    if (count >= temp)
    {
        cout << count << endl;
    }
    else
    {
        cout << temp << endl;
    }

    return 0;
}
