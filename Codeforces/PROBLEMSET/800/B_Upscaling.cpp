#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            for (int k = 0; k < 2; k++)
            {
                for (int j = 0; j < n; j++)
                {
                    if ((i + j) % 2 == 0)
                    {
                        cout << "##";
                    }
                    else
                    {
                        cout << "..";
                    }
                }
                cout << endl;
            }
        }
    }

    return 0;
}
