#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int max_rooms = 0;
    for (int j = 0; j < 7; j++)
    {
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i][j] == '1')
            {
                count++;
            }
        }
        max_rooms = max(max_rooms, count);
    }
    cout << max_rooms << endl;
    return 0;
}
