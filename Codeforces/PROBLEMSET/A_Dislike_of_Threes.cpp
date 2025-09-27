#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        int count = 0;
        for (int i = 1;; i++)
        {
            if (i % 3 == 0 || i % 10 == 3)
            {
                continue;
            }
            else
            {
                count++;
                if (count == k)
                {
                    cout << i << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
