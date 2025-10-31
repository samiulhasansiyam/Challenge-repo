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
    bool sorted = true;
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] >= a[i])
        {
            swap(a[i - 1], a[i]);
            count++;
            if (count > 2)
            {
                sorted = false;
                break;
            }
        }
    }

    if (sorted == true)
    {
        cout << "Sorted" << endl;
    }
    else
    {
        cout << "Failed" << endl;
    }

    return 0;
}
