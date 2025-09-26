#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int count = 0;
    for (int i = 1;; i++)
    {
        sum += i;
        n -= sum;
        if (n >= sum + (i + 1))
        {
            count++;
        }
        else
        {
            break;
        }
    }
    cout << count + 1 << endl;
    return 0;
}
