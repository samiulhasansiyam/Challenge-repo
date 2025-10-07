#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        int temp = i;
        int primeCount = 0;
        for (int j = 2; j <= i; j++)
        {
            if (temp % j == 0)
            {
                primeCount++;
                while (temp % j == 0)
                {
                    temp /= j;
                }
            }
        }
        if (primeCount == 2)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
