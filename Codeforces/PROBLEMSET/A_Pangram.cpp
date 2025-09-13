#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char arr[n];
    int a[26] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (n < 26)
    {
        cout << "NO" << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= 'A' && arr[i] <= 'Z')
            {
                a[arr[i] - 'A'] = 1;
            }
            else if (arr[i] >= 'a' && arr[i] <= 'z')
            {
                a[arr[i] - 'a'] = 1;
            }
        }

        bool s = true;

        for (int i = 0; i < 26; i++)
        {
            if (a[i] == 0)
            {
                s = false;
                break;
            }
        }
        if (s == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
