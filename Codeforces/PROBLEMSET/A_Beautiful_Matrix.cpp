#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5][5];
    int c = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
        }
    }
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[i][j] == 1)
            {
                if (i > 2)
                {
                    c = i - 2;
                }
                else
                {
                    c = 2 - i;
                }
                if (j > 2)
                {
                    c += j - 2;
                }
                else
                {
                    c += 2 - j;
                }
            }
        }
    }
    cout << c << endl;

    return 0;
}
